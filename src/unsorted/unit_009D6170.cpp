// src/unsorted/unit_009D6170.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 009D6170..009D6580, 6 functions

#include "types.h"

// 009D6170  FUN_009d6170  size=267  [run]
void FUN_009d6170(int *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  float fVar4;
  uint *puVar5;
  undefined4 uVar6;
  
  iVar1 = param_1[1];
  fVar4 = *(float *)(iVar1 + 0x450) * 0.5;
  if (fVar4 == 0.0) {
    fVar4 = 3.4028235e+38;
  }
  else {
    fVar4 = 1.0 / fVar4;
  }
  iVar2 = *param_1;
  *(float *)(iVar2 + 0x90) = fVar4;
  *(undefined4 *)(iVar2 + 0x94) = *(undefined4 *)(iVar1 + 0x454);
  *(undefined4 *)(*param_1 + 0x98) = *(undefined4 *)(iVar1 + 0x458);
  *(undefined4 *)(*param_1 + 0x9c) = *(undefined4 *)(iVar1 + 0x45c);
  if ((*(int *)(param_1[1] + 0x58) != 0) &&
     (puVar5 = (uint *)(*(int *)(param_1[1] + 0x58) + 0x70), puVar5 != (uint *)0x0)) {
    uVar3 = *puVar5;
    if ((uVar3 + 0xf & 0xfffffff0) != uVar3) {
      uVar6 = FUN_00f59ed0(7);
      FUN_00dd5650(&DAT_016597b4,uVar6);
    }
    if (uVar3 != 0) {
      iVar2 = *param_1;
      *(undefined4 *)(iVar2 + 0xa0) = 0;
      *(undefined4 *)(iVar2 + 0xa4) = 0;
      *(undefined4 *)(*param_1 + 0xa8) = 0;
      *(undefined4 *)(*param_1 + 0xac) = *(undefined4 *)(uVar3 + 0xc);
      goto LAB_009d6254;
    }
  }
  iVar2 = *param_1;
  *(undefined4 *)(iVar2 + 0xa0) = 0;
  *(undefined4 *)(iVar2 + 0xa4) = 0;
  *(undefined4 *)(*param_1 + 0xa8) = 0;
  *(undefined4 *)(*param_1 + 0xac) = 0x3f800000;
LAB_009d6254:
  *(ushort *)(*param_1 + 0xc) = *(ushort *)(*param_1 + 0xc) | 0x8000;
  *(uint *)(*param_1 + 8) = *(uint *)(*param_1 + 8) | 0x800;
  if (*(int *)(iVar1 + 0x464) != 0) {
    *(undefined1 *)(*param_1 + 0x13) = 0;
  }
  return;
}

// 009D6280  FUN_009d6280  size=407  [run]
void FUN_009d6280(int *param_1)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint *puVar8;
  undefined4 uVar9;
  
  iVar5 = param_1[1];
  fVar1 = *(float *)(iVar5 + 0x450) * 0.5;
  if (fVar1 == 0.0) {
    fVar1 = 3.4028235e+38;
  }
  else {
    fVar1 = 1.0 / fVar1;
  }
  iVar6 = *param_1;
  *(float *)(iVar6 + 0x90) = fVar1;
  *(undefined4 *)(iVar6 + 0x94) = *(undefined4 *)(iVar5 + 0x454);
  *(undefined4 *)(*param_1 + 0x98) = *(undefined4 *)(iVar5 + 0x458);
  *(undefined4 *)(*param_1 + 0x9c) = *(undefined4 *)(iVar5 + 0x45c);
  *(undefined4 *)(*param_1 + 0xb0) = 0x3f800000;
  fVar1 = *(float *)(iVar5 + 0x100);
  if ((*(int *)(iVar5 + 0x58) == 0) ||
     (puVar8 = (uint *)(*(int *)(iVar5 + 0x58) + 0x70), puVar8 == (uint *)0x0)) {
    uVar3 = 0;
    fVar2 = 1.0;
    uVar9 = 0x3f800000;
    fVar4 = 0.0;
  }
  else {
    uVar7 = *puVar8;
    if ((uVar7 + 0xf & 0xfffffff0) != uVar7) {
      uVar9 = FUN_00f59ed0(7);
      FUN_00dd5650(&DAT_016597b4,uVar9);
    }
    uVar3 = 0;
    fVar4 = 0.0;
    uVar9 = 0x3f800000;
    fVar2 = 1.0;
    if (uVar7 != 0) {
      if (*(float *)(uVar7 + 0xc) != 0.0) {
        uVar9 = *(undefined4 *)(uVar7 + 0xc);
      }
      if (*(float *)(uVar7 + 0x10) != 0.0) {
        fVar2 = *(float *)(uVar7 + 0x10);
      }
      uVar3 = *(undefined4 *)(uVar7 + 0x14);
      fVar4 = *(float *)(uVar7 + 0x18);
      *(undefined4 *)(*param_1 + 0xb0) = *(undefined4 *)(uVar7 + 0x1c);
    }
  }
  if (*(int *)(iVar5 + 0x464) != 0) {
    *(undefined1 *)(*param_1 + 0x13) = 0;
  }
  iVar5 = *param_1;
  *(undefined4 *)(iVar5 + 0xa0) = uVar9;
  *(float *)(iVar5 + 0xa4) = fVar2 * fVar1;
  *(undefined4 *)(*param_1 + 0xa8) = uVar3;
  *(float *)(*param_1 + 0xac) = fVar4 - *(float *)(*param_1 + 0xa4);
  *(ushort *)(*param_1 + 0xc) = *(ushort *)(*param_1 + 0xc) | 0x8000;
  *(uint *)(*param_1 + 8) = *(uint *)(*param_1 + 8) | 0x800;
  return;
}

// 009D6470  FUN_009d6470  size=40  [run]
int __fastcall FUN_009d6470(int param_1)

{
  FUN_00f59e40();
  FUN_00f59e50();
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x14) = 1;
  return param_1;
}

// 009D64A0  FUN_009d64a0  size=90  [run]
char __fastcall FUN_009d64a0(int param_1)

{
  uint uVar1;
  uint *puVar2;
  undefined4 uVar3;
  
  if ((*(int *)(param_1 + 4) != 0) &&
     (puVar2 = (uint *)(*(int *)(param_1 + 4) + 0x30), puVar2 != (uint *)0x0)) {
    uVar1 = *puVar2;
    if ((uVar1 + 0xf & 0xfffffff0) != uVar1) {
      uVar3 = FUN_00f59ed0(3);
      FUN_00dd5650(&DAT_016597b4,uVar3);
    }
    if (((uVar1 != 0) && (*(char *)(uVar1 + 0x2e) == '\t')) &&
       ((*(uint *)(param_1 + 0x18) & 0x8000000) != 0)) {
      return (*(char *)(uVar1 + 0x2f) != '\0') + 'v';
    }
  }
  return '\x01';
}

// 009D6500  FUN_009d6500  size=122  [run]
void __thiscall FUN_009d6500(ushort *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  ushort uVar2;
  
  if (param_2 != 0) {
    if (param_3 == -1) {
      *param_1 = 0;
      param_1[1] = *(short *)(param_2 + 0x324) - 1;
      return;
    }
    uVar2 = (param_3 < 1) - 1 & (ushort)param_3;
    *param_1 = uVar2;
    if (param_4 == -1) {
      param_1[1] = *(short *)(param_2 + 0x324) - 1;
      return;
    }
    iVar1 = *(short *)(param_2 + 0x324) + -1;
    if (param_4 < (short)uVar2) {
      param_1[1] = uVar2;
      return;
    }
    if (param_4 <= iVar1) {
      iVar1 = param_4;
    }
    param_1[1] = (ushort)iVar1;
  }
  return;
}

// 009D6580  FUN_009d6580  size=42  [run]
void __fastcall FUN_009d6580(undefined4 *param_1)

{
  param_1[8] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[0xb] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  return;
}

