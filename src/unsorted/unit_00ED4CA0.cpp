// src/unsorted/unit_00ED4CA0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00ED4CA0..00ED5150, 5 functions

#include "mgrr.h"

// 00ED4CA0  FUN_00ed4ca0  size=60  [run]
void __thiscall
FUN_00ed4ca0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6)

{
  *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 0x40000;
  *(undefined4 *)(param_1 + 0x388) = param_3;
  *(undefined4 *)(param_1 + 900) = param_2;
  *(undefined4 *)(param_1 + 0x38c) = param_4;
  *(undefined4 *)(param_1 + 0x390) = param_5;
  *(undefined4 *)(param_1 + 0x394) = param_6;
  return;
}

// 00ED4DB0  FUN_00ed4db0  size=490  [run]
undefined4 FUN_00ed4db0(int *param_1,undefined4 *param_2)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  undefined2 local_4;
  
  if ((*(uint *)(*param_1 + 4) & 0x80000000) != 0) {
    return 1;
  }
  iVar2 = *(int *)(param_2[1] + 8);
  if (iVar2 == 0) {
    return 0;
  }
  if ((*(char *)(iVar2 + 0x1e) == *(char *)(param_2 + 6)) ||
     ((float)param_2[2] <= (float)*(byte *)(iVar2 + 0x27))) goto LAB_00ed4f36;
  fVar4 = *(float *)param_2[5] * (float)param_2[3] + *(float *)param_1[1];
  *(float *)param_1[1] = fVar4;
  local_4 = (undefined2)(int)ROUND(fVar4);
  *(undefined2 *)param_1[2] = local_4;
  bVar1 = *(byte *)(param_2 + 6);
  if ((*(ushort *)param_1[2] <= (ushort)bVar1) && ((uint)*(ushort *)param_1[2] < (uint)param_2[4]))
  goto LAB_00ed4f36;
  iVar2 = *(int *)(param_2[1] + 8);
  if ((*(uint *)(iVar2 + 0x20) & 0x40000000) == 0) {
    iVar6 = FUN_00412ef0(iVar2 + 0x20,0);
    if (iVar6 == 0) {
      *(uint *)*param_1 = *(uint *)*param_1 | 0x80000000;
      return 0;
    }
    fVar4 = (float)*(byte *)(iVar2 + 0x1e);
    *(float *)param_1[1] = fVar4;
    iVar2 = param_2[4];
    fVar5 = (float)iVar2;
    if (iVar2 < 0) {
      fVar5 = fVar5 + 4.2949673e+09;
    }
    if (fVar5 < fVar4 != (fVar5 == fVar4)) goto LAB_00ed4efb;
  }
  else if (bVar1 == 0) {
    iVar2 = param_2[4];
LAB_00ed4efb:
    fVar4 = (float)(iVar2 + -1);
    if (iVar2 + -1 < 0) {
      fVar4 = fVar4 + 4.2949673e+09;
    }
    *(float *)param_1[1] = fVar4;
  }
  else {
    *(float *)param_1[1] = (float)bVar1;
  }
  local_4 = (undefined2)(int)ROUND(*(float *)param_1[1]);
  *(undefined2 *)param_1[2] = local_4;
LAB_00ed4f36:
  if ((*(byte *)*param_2 & 0x80) != 0) {
    *(short *)param_1[3] = *(short *)param_1[2] + 1;
    if (((ushort)*(byte *)(param_2 + 6) < *(ushort *)param_1[3]) ||
       ((uint)param_2[4] <= (uint)*(ushort *)param_1[3])) {
      uVar3 = *(uint *)(*(int *)(param_2[1] + 8) + 0x20);
      if (((uVar3 & 0x40000000) != 0) || (-1 < (int)uVar3)) {
        *(ushort *)param_1[3] = *(ushort *)param_1[2];
        return 1;
      }
      *(ushort *)param_1[3] = (ushort)*(byte *)(*(int *)(param_2[1] + 8) + 0x1e);
    }
  }
  return 1;
}

// 00ED4FA0  FUN_00ed4fa0  size=71  [run]
void FUN_00ed4fa0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 local_14 [2];
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  FUN_00f45d50();
  local_c = param_2;
  local_14[0] = param_1;
  local_8 = param_3;
  local_4 = param_4;
  FUN_00f49500(local_14);
  return;
}

// 00ED4FF0  FUN_00ed4ff0  size=347  [run]
void __thiscall FUN_00ed4ff0(int param_1,int param_2,float param_3)

{
  int iVar1;
  byte bVar2;
  byte bVar3;
  float10 fVar4;
  
  iVar1 = param_2;
  *(float *)(param_1 + 0x434) = param_3;
  *(ushort *)(param_1 + 0x432) = (ushort)*(byte *)(param_2 + 0x1e);
  if (*(char *)(param_2 + 0x24) != '\0') {
    fVar4 = (float10)FUN_00dde300(0,0x3f800000);
    param_2._0_2_ = (short)(int)ROUND((float)(*(byte *)(param_2 + 0x24) + 1) * (float)fVar4 * 0.999)
    ;
    *(short *)(param_1 + 0x432) = *(short *)(param_1 + 0x432) + (short)param_2;
  }
  if (*(uint *)(param_1 + 0x434) <= (uint)*(ushort *)(param_1 + 0x432)) {
    *(short *)(param_1 + 0x432) = *(short *)(param_1 + 0x434) + -1;
  }
  if (*(char *)(iVar1 + 0x1f) == '\0') {
    *(char *)(param_1 + 0x431) = *(char *)(param_1 + 0x434) + -1;
  }
  else {
    bVar2 = (*(char *)(iVar1 + 0x1e) + *(char *)(iVar1 + 0x1f)) - 1;
    bVar3 = *(char *)(param_1 + 0x434) - 1;
    *(byte *)(param_1 + 0x431) = bVar2;
    if (bVar3 < bVar2) {
      *(byte *)(param_1 + 0x431) = bVar3;
    }
  }
  *(float *)(param_1 + 0x438) = (float)*(ushort *)(param_1 + 0x432);
  param_3 = (float)(int)*(short *)(iVar1 + 0x1c) * 0.01;
  if (*(char *)(iVar1 + 0x51) != '\0') {
    fVar4 = (float10)FUN_00dde300(0,0x3f800000);
    param_3 = (float)*(byte *)(iVar1 + 0x51) * 0.01 * (float)fVar4 + param_3;
  }
  *(float *)(param_1 + 0x43c) = param_3;
  return;
}

// 00ED5150  FUN_00ed5150  size=244  [run]
undefined4 __fastcall FUN_00ed5150(int param_1)

{
  switch(*(undefined2 *)(param_1 + 0x428)) {
  case 0:
    *(undefined2 *)(param_1 + 0x428) = 9;
    return 1;
  default:
    return 0;
  case 3:
    *(undefined2 *)(param_1 + 0x428) = 10;
    return 1;
  case 5:
    *(undefined2 *)(param_1 + 0x428) = 0xb;
    return 1;
  case 0x14:
    *(undefined2 *)(param_1 + 0x428) = 0xd;
    return 1;
  case 0x15:
    *(undefined2 *)(param_1 + 0x428) = 0x16;
    return 1;
  case 0x1b:
    *(undefined4 *)(param_1 + 0x428) = 0xa001c;
    *(uint *)(param_1 + 0x34) = *(uint *)(param_1 + 0x34) | 0x2000000;
    return 1;
  case 0x1d:
    *(undefined4 *)(param_1 + 0x428) = 0xd001e;
    *(uint *)(param_1 + 0x34) = *(uint *)(param_1 + 0x34) | 0x2000000;
    return 1;
  case 0x36:
    *(undefined2 *)(param_1 + 0x428) = 0x37;
    return 1;
  case 0x62:
    *(undefined4 *)(param_1 + 0x428) = 0xb0063;
    *(uint *)(param_1 + 0x34) = *(uint *)(param_1 + 0x34) | 0x2000000;
    return 1;
  case 0x71:
    *(undefined2 *)(param_1 + 0x428) = 0x72;
    return 1;
  case 0x73:
    *(undefined2 *)(param_1 + 0x428) = 0x74;
    return 1;
  }
}

