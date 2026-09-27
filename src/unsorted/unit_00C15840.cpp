// src/unsorted/unit_00C15840.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C15840..00C17AE0, 28 functions

#include "types.h"

// 00C15840  FUN_00c15840  size=15  [run]
undefined4 __fastcall FUN_00c15840(undefined4 param_1)

{
  FUN_00a7c930();
  return param_1;
}

// 00C15850  FUN_00c15850  size=54  [run]
undefined4 __fastcall FUN_00c15850(int param_1)

{
  if (((((DAT_01bea060 & 0x400) == 0) && ((DAT_01bea060 & 0x40000000) == 0)) &&
      ((DAT_01bea060 & 0x8000000) == 0)) &&
     (((DAT_01bea060 & 0x20000000) == 0 && (*(float *)(param_1 + 0x44) <= 0.0)))) {
    return 1;
  }
  return 0;
}

// 00C158C0  FUN_00c158c0  size=54  [run]
undefined4 __fastcall FUN_00c158c0(int param_1)

{
  if (((((DAT_01bea060 & 0x400) == 0) && ((DAT_01bea060 & 0x40000000) == 0)) &&
      ((DAT_01bea060 & 0x8000000) == 0)) &&
     (((DAT_01bea060 & 0x20000000) == 0 && (*(float *)(param_1 + 0x48) <= 0.0)))) {
    return 1;
  }
  return 0;
}

// 00C15900  FUN_00c15900  size=4  [run]
int __fastcall FUN_00c15900(int param_1)

{
  return param_1 + 0x28;
}

// 00C15910  FUN_00c15910  size=22  [run]
undefined4 __thiscall FUN_00c15910(int param_1,int param_2)

{
  if (4 < param_2) {
    return 0xffffffff;
  }
  return *(undefined4 *)(param_1 + 0x50 + param_2 * 8);
}

// 00C15970  FUN_00c15970  size=32  [run]
void FUN_00c15970(void)

{
  int iVar1;
  
  iVar1 = 5;
  do {
    FUN_00a7c950();
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}

// 00C15990  FUN_00c15990  size=229  [run]
void __fastcall FUN_00c15990(int param_1)

{
  float fVar1;
  float10 fVar2;
  float *pfVar3;
  int iVar4;
  float10 fVar5;
  
  fVar5 = (float10)FUN_00e049b0();
  fVar2 = (float10)0;
  pfVar3 = (float *)(param_1 + 0x7c);
  iVar4 = 4;
  do {
    if (((pfVar3[-1] != 0.0) && (fVar2 < (float10)*pfVar3 != (fVar2 == (float10)*pfVar3))) &&
       (fVar1 = *pfVar3, *pfVar3 = (float)((float10)fVar1 - fVar5), (float10)fVar1 - fVar5 < fVar2))
    {
      *pfVar3 = -1.0;
      pfVar3[-1] = 0.0;
    }
    if (((pfVar3[1] != 0.0) && (fVar2 < (float10)pfVar3[2] != (fVar2 == (float10)pfVar3[2]))) &&
       (fVar1 = pfVar3[2], pfVar3[2] = (float)((float10)fVar1 - fVar5),
       (float10)fVar1 - fVar5 < fVar2)) {
      pfVar3[2] = -1.0;
      pfVar3[1] = 0.0;
    }
    if (((pfVar3[3] != 0.0) && (fVar2 < (float10)pfVar3[4] != (fVar2 == (float10)pfVar3[4]))) &&
       (fVar1 = pfVar3[4], pfVar3[4] = (float)((float10)fVar1 - fVar5),
       (float10)fVar1 - fVar5 < fVar2)) {
      pfVar3[4] = -1.0;
      pfVar3[3] = 0.0;
    }
    if (((pfVar3[5] != 0.0) && (fVar2 < (float10)pfVar3[6] != (fVar2 == (float10)pfVar3[6]))) &&
       (fVar1 = pfVar3[6], pfVar3[6] = (float)((float10)fVar1 - fVar5),
       (float10)fVar1 - fVar5 < fVar2)) {
      pfVar3[6] = -1.0;
      pfVar3[5] = 0.0;
    }
    pfVar3 = pfVar3 + 8;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  return;
}

// 00C15AA0  FUN_00c15aa0  size=3  [run]
void __fastcall FUN_00c15aa0(int *param_1)

{
  *param_1 = *param_1 + 1;
  return;
}

// 00C15AB0  FUN_00c15ab0  size=85  [run]
undefined4 __fastcall FUN_00c15ab0(uint *param_1)

{
  undefined4 local_40 [16];
  
  local_40[0] = 0;
  local_40[2] = 0;
  local_40[3] = 0;
  local_40[4] = 0;
  local_40[6] = 0;
  local_40[8] = 0;
  local_40[9] = 0;
  local_40[10] = 0;
  local_40[0xc] = 0;
  local_40[0xe] = 0;
  local_40[1] = 1;
  local_40[5] = 1;
  local_40[7] = 1;
  local_40[0xb] = 1;
  local_40[0xd] = 1;
  local_40[0xf] = 1;
  return local_40[*param_1 & 0xf];
}

// 00C15B80  FUN_00c15b80  size=37  [run]
void __thiscall FUN_00c15b80(undefined4 *param_1,undefined4 *param_2,undefined4 param_3)

{
  *param_1 = 2;
  param_1[1] = *param_2;
  param_1[2] = param_2[1];
  param_1[3] = param_2[2];
  param_1[4] = param_3;
  return;
}

// 00C15BB0  FUN_00c15bb0  size=44  [run]
void __thiscall
FUN_00c15bb0(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  *param_1 = 3;
  param_1[1] = *param_2;
  param_1[2] = param_2[1];
  param_1[3] = param_2[2];
  param_1[4] = param_3;
  param_1[5] = param_4;
  return;
}

// 00C15BE0  FUN_00c15be0  size=111  [run]
undefined4 __thiscall FUN_00c15be0(int param_1,float *param_2)

{
  float fVar1;
  
  fVar1 = *(float *)(param_1 + 4) - *(float *)(param_1 + 0x10);
  if ((((fVar1 < *param_2 != (fVar1 == *param_2)) &&
       (*param_2 <= *(float *)(param_1 + 0x10) + *(float *)(param_1 + 4))) &&
      (fVar1 = *(float *)(param_1 + 8) - *(float *)(param_1 + 0x14),
      fVar1 < param_2[1] != (fVar1 == param_2[1]))) &&
     (((param_2[1] <= *(float *)(param_1 + 0x14) + *(float *)(param_1 + 8) &&
       (fVar1 = *(float *)(param_1 + 0xc) - *(float *)(param_1 + 0x18),
       fVar1 < param_2[2] != (fVar1 == param_2[2]))) &&
      (param_2[2] <= *(float *)(param_1 + 0x18) + *(float *)(param_1 + 0xc))))) {
    return 1;
  }
  return 0;
}

// 00C15C50  FUN_00c15c50  size=47  [run]
undefined4 FUN_00c15c50(undefined4 param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_00e03ea0(param_1);
  uVar2 = 0;
  do {
    if ((&DAT_01d64334)[uVar2 * 2] == iVar1) {
      return *(undefined4 *)(uVar2 * 8 + 0x1d64330);
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 < 0x24);
  return 0xffffffff;
}

// 00C15EA0  FUN_00c15ea0  size=112  [run]
void __thiscall FUN_00c15ea0(int param_1,float param_2,int param_3)

{
  float *pfVar1;
  uint uVar2;
  float *pfVar3;
  
  uVar2 = 0;
  if (*(int *)(param_1 + 0x348) != 0) {
    pfVar3 = (float *)(param_1 + 0x5c);
    do {
      if ((pfVar3[-5] == 0.0) && (pfVar3[-3] == param_2)) {
        pfVar1 = pfVar3 + -2;
        pfVar3[-5] = 1.4013e-45;
        D3DXVec3TransformNormal(pfVar1,pfVar3 + 1,param_3 + 0x10);
        *pfVar1 = *pfVar1 + *(float *)(param_3 + 0x40);
        pfVar3[-1] = *(float *)(param_3 + 0x44) + pfVar3[-1];
        *pfVar3 = *(float *)(param_3 + 0x48) + *pfVar3;
      }
      uVar2 = uVar2 + 1;
      pfVar3 = pfVar3 + 0xc;
    } while (uVar2 < *(uint *)(param_1 + 0x348));
  }
  return;
}

// 00C16050  FUN_00c16050  size=408  [run]
void FUN_00c16050(int *param_1,undefined1 *param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 unaff_EBP;
  int *piVar3;
  
  *param_2 = 1;
  *(undefined4 *)(param_2 + 0xc) = 0;
  *(undefined4 *)(param_2 + 0x10) = 0;
  *(undefined4 *)(param_2 + 0x14) = 0;
  *(undefined4 *)(param_2 + 0x18) = 0;
  *(undefined4 *)(param_2 + 0x1c) = 0;
  *(undefined4 *)(param_2 + 0x20) = 0;
  *(undefined4 *)(param_2 + 0x24) = 0;
  *(undefined4 *)(param_2 + 0x28) = 0;
  *(undefined4 *)(param_2 + 0x2c) = 0;
  *(undefined4 *)(param_2 + 0x30) = 0;
  FUN_00a7c950();
  iVar1 = (**(code **)(*param_1 + 0x18))(param_3,&DAT_0164fcc8);
  if (iVar1 != -1) {
    (**(code **)(*param_1 + 0x58))(iVar1,param_2 + 8);
  }
  iVar1 = (**(code **)(*param_1 + 0x18))(param_1,&DAT_016a35a4);
  if (iVar1 != -1) {
    (**(code **)(*param_1 + 0x58))(iVar1,param_2 + 0x3c);
  }
  iVar1 = (**(code **)(*param_1 + 0x18))(param_2 + 0x40,"Trans");
  if (iVar1 != -1) {
    (**(code **)(*param_1 + 0x48))(iVar1,param_2 + 0xc);
  }
  iVar1 = (**(code **)(*param_1 + 0x18))(unaff_EBP,&DAT_016a35a0);
  if (iVar1 != -1) {
    (**(code **)(*param_1 + 0x48))(iVar1,param_2 + 0x18);
  }
  piVar3 = (int *)&DAT_016a3598;
  iVar1 = (**(code **)(*param_1 + 0x18))(unaff_EBP);
  if (iVar1 != -1) {
    (**(code **)(*param_1 + 0x48))(iVar1,param_2 + 0x24);
  }
  iVar1 = (**(code **)(*param_1 + 0x18))(unaff_EBP,"ParentId");
  if (iVar1 != -1) {
    (**(code **)(*param_1 + 0x68))(iVar1,param_2 + 0x34);
  }
  iVar1 = (**(code **)(*param_1 + 0x18))(unaff_EBP,"ParentPartsNo");
  if (iVar1 != -1) {
    (**(code **)(*param_1 + 0x58))(iVar1,param_2 + 0x38);
  }
  iVar1 = (**(code **)(*param_1 + 0x18))(unaff_EBP,"HashNo");
  if (iVar1 != -1) {
    (**(code **)(*param_1 + 0x68))(iVar1,piVar3);
  }
  if (*piVar3 != 0) {
    iVar1 = FUN_00a18cf0(*piVar3);
    if (iVar1 != 0) {
      uVar2 = FUN_00a7c7f0();
      FUN_00a7c960(uVar2);
    }
  }
  return;
}

// 00C16430  FUN_00c16430  size=34  [run]
int __fastcall FUN_00c16430(int param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = 0;
  piVar2 = (int *)(param_1 + 0x68);
  do {
    if (*piVar2 != 0) {
      *(undefined4 *)(param_1 + 0x68 + iVar1 * 4) = 0;
      return iVar1;
    }
    iVar1 = iVar1 + 1;
    piVar2 = piVar2 + 1;
  } while (iVar1 < 0x20);
  return 0x20;
}

// 00C16590  FUN_00c16590  size=126  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00c16590(void)

{
  DAT_01be9f9c = 0;
  _DAT_01bea164 = 0;
  DAT_01be9f98 = 0;
  DAT_01bea10c = 0;
  _DAT_01bea110 = 0;
  DAT_01bea114 = 0;
  DAT_01bea118 = 0;
  DAT_01bea11c = 0;
  DAT_01bea120 = 0;
  DAT_01bea124 = 0;
  DAT_01bea128 = 0;
  DAT_01bea12c = 0;
  DAT_01bea158 = 0;
  DAT_01bea15c = 0;
  DAT_01bea160 = 0;
  DAT_01bea168 = 0;
  DAT_01bea16c = 0;
  DAT_01bea170 = 0;
  DAT_01bea174 = 0;
  DAT_01bea178 = 0;
  DAT_01bea17c = 0;
  _DAT_018a9ab0 = 0xffffffff;
  return 1;
}

// 00C16610  FUN_00c16610  size=337  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00c16610(void)

{
  if (DAT_01bea134 != (undefined4 *)0x0) {
    (**(code **)*DAT_01bea134)(1);
    DAT_01bea134 = (undefined4 *)0x0;
  }
  if (DAT_01bea138 != (undefined4 *)0x0) {
    (**(code **)*DAT_01bea138)(1);
    DAT_01bea138 = (undefined4 *)0x0;
  }
  if (DAT_01bea13c != (undefined4 *)0x0) {
    (**(code **)*DAT_01bea13c)(1);
    DAT_01bea13c = (undefined4 *)0x0;
  }
  if (DAT_01bea140 != (undefined4 *)0x0) {
    (**(code **)*DAT_01bea140)(1);
    DAT_01bea140 = (undefined4 *)0x0;
  }
  if (DAT_01bea144 != (undefined4 *)0x0) {
    (**(code **)*DAT_01bea144)(1);
    DAT_01bea144 = (undefined4 *)0x0;
  }
  if (DAT_01bea148 != (undefined4 *)0x0) {
    (**(code **)*DAT_01bea148)(1);
    DAT_01bea148 = (undefined4 *)0x0;
  }
  if (DAT_01bea14c != (undefined4 *)0x0) {
    (**(code **)*DAT_01bea14c)(1);
    DAT_01bea14c = (undefined4 *)0x0;
  }
  if (DAT_01bea150 != (undefined4 *)0x0) {
    (**(code **)*DAT_01bea150)(1);
    DAT_01bea150 = (undefined4 *)0x0;
  }
  if (DAT_01bea154 != (undefined4 *)0x0) {
    (**(code **)*DAT_01bea154)(1);
    DAT_01bea154 = (undefined4 *)0x0;
  }
  if (DAT_01bea168 != 0) {
    FUN_00ebdd50(DAT_01bea168);
  }
  DAT_01bea060 = DAT_01bea060 & 0xffffef7f;
  DAT_01bea070 = DAT_01bea070 & 0x77dfffff;
  DAT_01bea084 = DAT_01bea084 & 0xffffafff;
  DAT_01dc2d7c = 0;
  FUN_00cad1b0(0);
  _DAT_01dc2d78 = 0;
  FUN_00936540();
  FUN_00ce1e40();
  FUN_0098a900();
  DAT_01bea174 = 0;
  DAT_01bea178 = 0;
  DAT_01bea17c = 0;
  return;
}

// 00C16770  FUN_00c16770  size=38  [run]
void FUN_00c16770(int param_1)

{
  if (param_1 == 0) {
    DAT_01be9f9c = 0;
  }
  else if (DAT_01be9f9c == 0) {
    DAT_01be9f9c = 1;
    return;
  }
  return;
}

// 00C17700  FUN_00c17700  size=21  [run]
bool FUN_00c17700(void)

{
  if (DAT_01be9f9c == 0) {
    return false;
  }
  return DAT_01be9f9c != 1;
}

// 00C17720  FUN_00c17720  size=88  [run]
undefined4 FUN_00c17720(void)

{
  undefined4 uVar1;
  
  if ((DAT_01be9f9c != 0) && (DAT_01be9f9c != 1)) {
    if ((((DAT_01bea060 & 0x1000) == 0) && (-1 < (char)DAT_01bea060)) ||
       ((DAT_01bea084 & 0x1000) == 0)) {
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
    if ((DAT_01be9f9c == 9) && (DAT_01bea124 - 3U < 5)) {
      uVar1 = 1;
    }
    if (DAT_01bea17c == 0) {
      return uVar1;
    }
  }
  return 0;
}

// 00C177E0  FUN_00c177e0  size=78  [run]
undefined4 FUN_00c177e0(void)

{
  if ((DAT_01bea060 & 0x1000) != 0) {
    return 1;
  }
  if (DAT_01be9f9c == 3) {
    if (DAT_01bea10c < 1) {
      return 1;
    }
  }
  else if (DAT_01be9f9c == 6) {
    if (DAT_01bea118 < 1) {
      return 1;
    }
  }
  else if ((DAT_01be9f9c == 9) && (DAT_01bea124 < 2)) {
    return 1;
  }
  return 0;
}

// 00C17830  FUN_00c17830  size=36  [run]
undefined4 FUN_00c17830(void)

{
  if ((((byte)DAT_01bea060 & 0x80) == 0) && ((DAT_01be9f9c != 4 || (0 < DAT_01bea114)))) {
    return 0;
  }
  return 1;
}

// 00C17860  FUN_00c17860  size=6  [run]
undefined4 FUN_00c17860(void)

{
  return DAT_01bea174;
}

// 00C17870  FUN_00c17870  size=78  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00c17870(void)

{
  int iVar1;
  int iVar2;
  
  DAT_01bea060 = DAT_01bea060 | 0x20000000;
  iVar1 = FUN_00932720();
  iVar2 = FUN_00a4a350(iVar1);
  if (((iVar2 == 1) && (iVar1 != 0xd20)) && (iVar1 != 0xd21)) {
    DAT_01bea158 = 1;
    _DAT_018a9ab0 = 0xffffffff;
    return;
  }
  DAT_01bea15c = 1;
  return;
}

// 00C178E0  FUN_00c178e0  size=336  [run]
void FUN_00c178e0(int param_1,undefined4 param_2)

{
  int iVar1;
  float fVar2;
  float *pfVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  float fStack_c0;
  float *pfStack_bc;
  float fStack_b8;
  float fStack_b4;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float local_90;
  float *pfStack_8c;
  float fStack_88;
  float fStack_84;
  int iStack_80;
  undefined1 auStack_64 [8];
  undefined1 auStack_5c [88];
  
  fStack_b4 = 1.7767648e-38;
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    fStack_b4 = 1.776767e-38;
    FUN_00a81330();
    fStack_b4 = 1.776768e-38;
    iVar1 = FUN_00a7c8a0();
    if (iVar1 != 0) {
      fVar2 = (float)(iVar1 + 0x10);
      if (*(short *)(param_1 + 2) != -1) {
        fStack_b4 = (float)(int)*(short *)(param_1 + 2);
        fStack_b8 = 1.7767725e-38;
        iVar1 = FUN_00a12210();
        if (iVar1 != 0) {
          fVar2 = (float)(iVar1 + 0x10);
        }
      }
      fStack_b8 = (float)(*(int *)(param_1 + 0xc) + 0x10);
      pfStack_bc = &local_90;
      fStack_c0 = 1.776776e-38;
      fStack_b4 = fVar2;
      D3DXVec3TransformNormal();
      fStack_9c = *(float *)((int)fVar2 + 0x30) + fStack_9c;
      iStack_80 = (uint)*(byte *)(param_1 + 4) * 2;
      puVar5 = auStack_5c;
      fStack_98 = *(float *)((int)fVar2 + 0x34) + fStack_98;
      fStack_94 = *(float *)((int)fVar2 + 0x38) + fStack_94;
      fStack_c0 = (float)iStack_80 * 3.1415927 * 0.003921569;
      D3DXMatrixRotationY(puVar5);
      fStack_b4 = 0.0;
      puVar4 = auStack_64;
      pfVar3 = &fStack_b4;
      D3DXVec3TransformNormal(pfVar3,pfVar3,puVar4);
      D3DXVec3TransformNormal(&fStack_c0,&fStack_c0,fVar2);
      pfStack_8c = pfStack_bc;
      fStack_84 = fStack_b4;
      iStack_80 = 0;
      fStack_88 = fStack_b8 + 0.1;
      fStack_9c = (float)pfVar3 + (float)pfStack_bc;
      fStack_98 = (float)puVar4 + fStack_88;
      fStack_94 = fStack_b4 + (float)puVar5;
      local_90 = fStack_c0 + 0.0;
      FUN_00f95f40(&pfStack_8c,&fStack_9c,param_2,0);
    }
  }
  return;
}

// 00C17A30  FUN_00c17a30  size=168  [run]
void FUN_00c17a30(int param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  if (param_3 != 0) {
    iVar1 = FUN_00a7c8a0();
    local_24 = 0;
    local_2c = 0;
    local_30 = 0;
    local_34 = 0;
    iVar1 = iVar1 + 0x10;
    local_38 = 0;
    local_40 = 0;
    local_44 = 0;
    local_48 = 0;
    local_4c = 0;
    local_14 = 0x3f800000;
    local_28 = 0x3f800000;
    local_3c = 0x3f800000;
    local_50 = 0x3f800000;
    local_20 = *(undefined4 *)(param_2 + 0x10);
    local_1c = *(undefined4 *)(param_2 + 0x14);
    local_18 = *(undefined4 *)(param_2 + 0x18);
    if (*(short *)(param_1 + 2) != -1) {
      iVar2 = FUN_00a12210((int)*(short *)(param_1 + 2));
      if (iVar2 != 0) {
        iVar1 = iVar2 + 0x10;
      }
    }
    FUN_00d90330(param_2,param_4,&local_50,iVar1);
  }
  return;
}

// 00C17AE0  FUN_00c17ae0  size=199  [run]
void FUN_00c17ae0(int param_1,float *param_2,undefined4 param_3)

{
  float fVar1;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float local_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  undefined1 auStack_58 [8];
  undefined1 local_50 [76];
  
  local_84 = (float)((uint)*(byte *)(param_1 + 4) * 2);
  fVar1 = (float)(int)local_84 * 3.1415927 * 0.003921569;
  D3DXMatrixRotationY(local_50,fVar1);
  fStack_88 = 0.0;
  local_84 = 0.0;
  fStack_80 = 1.0;
  D3DXVec3TransformNormal(&fStack_88,&fStack_88,auStack_58);
  fStack_74 = *param_2;
  fStack_6c = param_2[2];
  fStack_68 = param_2[3];
  fStack_70 = param_2[1] + 0.1;
  local_84 = fVar1 + fStack_74;
  fStack_80 = fStack_90 + fStack_70;
  fStack_7c = fStack_6c + fStack_8c;
  fStack_78 = fStack_68 + fStack_88;
  FUN_00f95f40(&fStack_74,&local_84,param_3,0);
  return;
}

