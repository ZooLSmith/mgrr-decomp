// src/unsorted/unit_00C1C620.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C1C620..00C1CFF0, 14 functions

#include "mgrr.h"

// 00C1C620  FUN_00c1c620  size=12  [run]
undefined4 __fastcall FUN_00c1c620(undefined4 param_1)

{
  FUN_00a7c930();
  return param_1;
}

// 00C1C650  FUN_00c1c650  size=6  [run]
undefined4 FUN_00c1c650(void)

{
  return DAT_01bea18c;
}

// 00C1C660  FUN_00c1c660  size=43  [run]
void FUN_00c1c660(void)

{
  FUN_00dd7270();
  if (DAT_01bea18c != (undefined4 *)0x0) {
    (**(code **)*DAT_01bea18c)(1);
    DAT_01bea18c = (undefined4 *)0x0;
  }
  return;
}

// 00C1C690  FUN_00c1c690  size=28  [run]
void FUN_00c1c690(void)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00a7c7f0();
  FUN_00a7c960(uVar1);
  return;
}

// 00C1C780  FUN_00c1c780  size=237  [run]
int __thiscall FUN_00c1c780(int param_1,int param_2)

{
  FUN_00a7c940(param_2);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0x14);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_2 + 0x24);
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
  *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_2 + 0x2c);
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
  *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_2 + 0x34);
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_2 + 0x3c);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_2 + 0x44);
  *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x48);
  *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(param_2 + 0x4c);
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_2 + 0x50);
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_2 + 0x54);
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_2 + 0x60);
  *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_2 + 100);
  *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_2 + 0x68);
  *(undefined4 *)(param_1 + 0x6c) = *(undefined4 *)(param_2 + 0x6c);
  *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_2 + 0x70);
  *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(param_2 + 0x74);
  *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_2 + 0x78);
  *(undefined4 *)(param_1 + 0x7c) = *(undefined4 *)(param_2 + 0x7c);
  *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(param_2 + 0x80);
  *(undefined4 *)(param_1 + 0x84) = *(undefined4 *)(param_2 + 0x84);
  *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(param_2 + 0x88);
  *(undefined4 *)(param_1 + 0x8c) = *(undefined4 *)(param_2 + 0x8c);
  return param_1;
}

// 00C1C880  FUN_00c1c880  size=7  [run]
int __fastcall FUN_00c1c880(int param_1)

{
  return param_1 + 0x11c;
}

// 00C1C890  FUN_00c1c890  size=274  [run]
undefined4 FUN_00c1c890(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_00a81330();
  iVar2 = FUN_00a81330();
  if (((iVar1 == iVar2) && (iVar1 = *(int *)(param_1 + 4), iVar1 == *(int *)(param_2 + 4))) &&
     ((iVar1 == 2 || ((iVar1 == 4 || (*(int *)(param_1 + 8) == *(int *)(param_2 + 8))))))) {
    if ((*(float *)(param_1 + 0x10) == *(float *)(param_2 + 0x10)) &&
       (((*(float *)(param_1 + 0x14) == *(float *)(param_2 + 0x14) &&
         (*(float *)(param_1 + 0x18) == *(float *)(param_2 + 0x18))) &&
        (*(float *)(param_1 + 0x1c) == *(float *)(param_2 + 0x1c))))) {
      if (((*(float *)(param_1 + 0x20) == *(float *)(param_2 + 0x20)) &&
          (*(float *)(param_1 + 0x24) == *(float *)(param_2 + 0x24))) &&
         (((*(float *)(param_1 + 0x28) == *(float *)(param_2 + 0x28) &&
           ((*(float *)(param_1 + 0x2c) == *(float *)(param_2 + 0x2c) &&
            (*(float *)(param_2 + 0x30) == *(float *)(param_1 + 0x30))))) &&
          (*(float *)(param_2 + 0x34) == *(float *)(param_1 + 0x34))))) {
        return 1;
      }
    }
  }
  return 0;
}

// 00C1C9C0  FUN_00c1c9c0  size=26  [run]
void FUN_00c1c9c0(int param_1)

{
  if (param_1 != 0) {
    FUN_00a7c970();
    return;
  }
  return;
}

// 00C1CB90  FUN_00c1cb90  size=833  [run]
undefined4
FUN_00c1cb90(float *param_1,float *param_2,float *param_3,float *param_4,float param_5,
            float *param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  fVar1 = *param_4 - *param_3;
  fVar2 = param_4[1] - param_3[1];
  fVar3 = param_4[2] - param_3[2];
  fVar5 = *param_1 - *param_3;
  fVar10 = param_1[1] - param_3[1];
  fVar11 = param_1[2] - param_3[2];
  fVar4 = *param_2 - *param_1;
  fVar8 = param_2[1] - param_1[1];
  fVar12 = param_2[2] - param_1[2];
  fVar6 = fVar11 * fVar3 + fVar10 * fVar2 + fVar5 * fVar1;
  fVar7 = fVar12 * fVar3 + fVar8 * fVar2 + fVar4 * fVar1;
  fVar1 = fVar1 * fVar1 + fVar2 * fVar2 + fVar3 * fVar3;
  if ((fVar6 < 0.0) && (fVar7 + fVar6 < 0.0)) {
    return 0;
  }
  if ((fVar1 < fVar6) && (fVar1 < fVar7 + fVar6)) {
    return 0;
  }
  fVar9 = fVar12 * fVar12 + fVar4 * fVar4 + fVar8 * fVar8;
  fVar8 = fVar8 * fVar10 + fVar4 * fVar5 + fVar12 * fVar11;
  fVar4 = fVar9 * fVar1 - fVar7 * fVar7;
  fVar3 = (fVar11 * fVar11 + fVar5 * fVar5 + fVar10 * fVar10) - param_5 * param_5;
  fVar2 = fVar3 * fVar1 - fVar6 * fVar6;
  if (ABS(fVar4) < 1.1920929e-07) {
    if (0.0 < fVar2) {
      return 0;
    }
    if (0.0 <= fVar6) {
      if (fVar6 <= fVar1) {
        *param_6 = 0.0;
        return 1;
      }
      *param_6 = (fVar7 - fVar8) / fVar9;
      return 1;
    }
    *param_6 = -(fVar8 / fVar9);
    return 1;
  }
  fVar5 = fVar8 * fVar1 - fVar7 * fVar6;
  fVar2 = fVar5 * fVar5 - fVar2 * fVar4;
  if (fVar2 < 0.0) {
    return 0;
  }
  fVar4 = (-fVar5 - SQRT(fVar2)) / fVar4;
  *param_6 = fVar4;
  if ((0.0 <= fVar4) && (fVar4 <= 1.0)) {
    fVar2 = fVar4 * fVar7 + fVar6;
    if (0.0 <= fVar2) {
      if (fVar2 <= fVar1) {
        return 1;
      }
      if (0.0 <= fVar7) {
        return 0;
      }
      fVar2 = (fVar1 - fVar6) / fVar7;
      *param_6 = fVar2;
      if ((fVar2 * fVar9 + (fVar8 - fVar7) * 2.0) * fVar2 + ((fVar3 + fVar1) - fVar6 * 2.0) <= 0.0)
      {
        return 1;
      }
    }
    else {
      if (fVar7 <= 0.0) {
        return 0;
      }
      fVar1 = -(fVar6 / fVar7);
      *param_6 = fVar1;
      fVar3 = (fVar1 + fVar1) * (fVar9 * fVar1 + fVar8) + fVar3;
      if (fVar3 < 0.0 != (fVar3 == 0.0)) {
        return 1;
      }
    }
  }
  return 0;
}

// 00C1CEE0  FUN_00c1cee0  size=13  [run]
void __thiscall FUN_00c1cee0(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0xe8) = param_2;
  return;
}

// 00C1CF50  FUN_00c1cf50  size=6  [run]
undefined4 FUN_00c1cf50(void)

{
  return DAT_01bea190;
}

// 00C1CF60  FUN_00c1cf60  size=102  [run]
void __thiscall FUN_00c1cf60(int param_1,int param_2)

{
  if ((*(int *)(param_1 + 0x338) == param_2) || ((param_2 != 0x138 && (param_2 != 0x520)))) {
    if (*(int *)(param_1 + 0x33c) != 0) {
      FUN_00cbe730();
    }
    if (*(int *)(param_1 + 0x33c) != 0) {
      FUN_00dd4920(*(int *)(param_1 + 0x33c));
      *(undefined4 *)(param_1 + 0x33c) = 0;
    }
    if ((*(int *)(param_1 + 8) != 0) && (*(int *)(param_1 + 4) != 0)) {
      FUN_00a805f0();
      *(undefined4 *)(param_1 + 4) = 0;
    }
  }
  return;
}

// 00C1CFD0  FUN_00c1cfd0  size=27  [run]
undefined4 __fastcall FUN_00c1cfd0(int *param_1)

{
  undefined4 uVar1;
  
  if (*param_1 == -1) {
    return 1;
  }
  uVar1 = FUN_00a00ca0(*param_1,0);
  return uVar1;
}

// 00C1CFF0  FUN_00c1cff0  size=158  [run]
void FUN_00c1cff0(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  iVar1 = FUN_00f98a90();
  iVar2 = FUN_00f98aa0();
  *(undefined4 *)(param_1 + 0xa0) = 1;
  *(float *)(param_1 + 0x90) = (float)iVar1 / (float)iVar2;
  local_40 = 0;
  local_3c = 0;
  local_38 = 0x41200000;
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  local_20 = 0;
  local_1c = 0x3f800000;
  local_18 = 0;
  FUN_00de5f20(&local_40);
  FUN_00de5fc0(&local_30);
  FUN_00de6060(&local_20);
  return;
}

