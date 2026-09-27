// src/sound/SoundArea.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00E464B0..00E676F0, 486 functions

#include "mgrr.h"

// 00E464B0  FUN_00e464b0  size=159  [callgraph]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00e464b0(void)

{
  DAT_01dd94fc = 0;
  _DAT_01dd9550 = 0;
  _DAT_01dd9554 = 0;
  _DAT_01dd9558 = 0;
  _DAT_01dd955c = 0x3f800000;
  _DAT_01dd958c = 0x3f800000;
  _DAT_01dd956c = 0x3f800000;
  _DAT_01dd959c = 0x3f800000;
  _DAT_01dd957c = 0x3f800000;
  _DAT_01dd95ac = 0x3f800000;
  _DAT_01dd9580 = 0;
  _DAT_01dd9584 = 0;
  _DAT_01dd9588 = 0;
  _DAT_01dd9560 = 0;
  _DAT_01dd9564 = 0;
  _DAT_01dd9568 = 0;
  _DAT_01dd9590 = 0;
  _DAT_01dd9594 = 0;
  _DAT_01dd9598 = 0;
  _DAT_01dd9570 = 0;
  _DAT_01dd9574 = 0;
  _DAT_01dd9578 = 0;
  _DAT_01dd95a0 = 0;
  _DAT_01dd95a4 = 0;
  _DAT_01dd95a8 = 0;
  return;
}

// 00E46550  FUN_00e46550  size=159  [callgraph]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00e46550(void)

{
  DAT_01dd94fc = 0;
  _DAT_01dd9550 = 0;
  _DAT_01dd9554 = 0;
  _DAT_01dd9558 = 0;
  _DAT_01dd955c = 0x3f800000;
  _DAT_01dd958c = 0x3f800000;
  _DAT_01dd956c = 0x3f800000;
  _DAT_01dd959c = 0x3f800000;
  _DAT_01dd957c = 0x3f800000;
  _DAT_01dd95ac = 0x3f800000;
  _DAT_01dd9580 = 0;
  _DAT_01dd9584 = 0;
  _DAT_01dd9588 = 0;
  _DAT_01dd9560 = 0;
  _DAT_01dd9564 = 0;
  _DAT_01dd9568 = 0;
  _DAT_01dd9590 = 0;
  _DAT_01dd9594 = 0;
  _DAT_01dd9598 = 0;
  _DAT_01dd9570 = 0;
  _DAT_01dd9574 = 0;
  _DAT_01dd9578 = 0;
  _DAT_01dd95a0 = 0;
  _DAT_01dd95a4 = 0;
  _DAT_01dd95a8 = 0;
  return;
}

// 00E46660  FUN_00e46660  size=33  [callgraph]
bool __fastcall FUN_00e46660(int param_1)

{
  if ((*(int *)(param_1 + 0x34) == *(int *)(param_1 + 4)) &&
     (*(int *)(param_1 + 0x38) == *(int *)(param_1 + 8))) {
    return *(int *)(param_1 + 0x3c) == *(int *)(param_1 + 0xc);
  }
  return false;
}

// 00E46690  FUN_00e46690  size=39  [callgraph]
bool __fastcall FUN_00e46690(int param_1)

{
  if (((*(int *)(param_1 + 0x34) == *(int *)(param_1 + 4)) &&
      (*(int *)(param_1 + 0x38) == *(int *)(param_1 + 8))) &&
     (*(int *)(param_1 + 0x3c) == *(int *)(param_1 + 0xc))) {
    return *(int *)(param_1 + 0x40) == *(int *)(param_1 + 0x10);
  }
  return false;
}

// 00E467B0  FUN_00e467b0  size=24  [callgraph]
void FUN_00e467b0(undefined4 param_1,undefined4 param_2)

{
  FUN_00df3cd0(param_1,param_2,1);
  return;
}

// 00E467D0  thunk_FUN_00df2ab0  size=5  [callgraph]
ulong thunk_FUN_00df2ab0(char *param_1,int param_2)

{
  ulong uVar1;
  int iVar2;
  
  uVar1 = AK::SoundEngine::GetIDFromString(param_1);
  if (uVar1 == 0) {
    return 0;
  }
  if (param_2 == 0) {
    iVar2 = FUN_00dee320(uVar1);
    if (iVar2 == -1) {
      return 0;
    }
  }
  else if ((param_2 == 2) && (iVar2 = FUN_00defff0(param_1), iVar2 == 0)) {
    return 0;
  }
  return uVar1;
}

// 00E46830  FUN_00e46830  size=67  [callgraph]
void __fastcall FUN_00e46830(undefined4 *param_1)

{
  param_1[1] = 0x100;
  param_1[2] = 0x100;
  *param_1 = 0x40;
  param_1[3] = 8;
  param_1[4] = 0x10;
  param_1[5] = &DAT_01b7bda0;
  param_1[6] = 0;
  param_1[7] = 0x40000;
  param_1[8] = 0x1010101;
  param_1[9] = 0x1010101;
  *(undefined1 *)(param_1 + 8) = 0;
  return;
}

// 00E46880  thunk_FUN_009c9410  size=5  [callgraph]
void thunk_FUN_009c9410(void)

{
  return;
}

// 00E46890  thunk_FUN_00decb90  size=5  [callgraph]
void thunk_FUN_00decb90(void)

{
  return;
}

// 00E468A0  thunk_FUN_00def970  size=5  [callgraph]
void thunk_FUN_00def970(void)

{
  AK::SoundEngine::StopAll(0xffffffff);
  return;
}

// 00E468B0  FUN_00e468b0  size=6  [callgraph]
undefined4 FUN_00e468b0(void)

{
  return 1;
}

// 00E468C0  FUN_00e468c0  size=6  [callgraph]
undefined4 FUN_00e468c0(void)

{
  return 1;
}

// 00E468D0  thunk_FUN_009c9550  size=5  [callgraph]
void thunk_FUN_009c9550(void)

{
  return;
}

// 00E46930  FUN_00e46930  size=6  [callgraph]
undefined4 FUN_00e46930(void)

{
  return 1;
}

// 00E46950  FUN_00e46950  size=1  [callgraph]
void FUN_00e46950(void)

{
  return;
}

// 00E46B20  FUN_00e46b20  size=118  [callgraph]
void __thiscall FUN_00e46b20(int *param_1,int param_2,float param_3,int param_4)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  
  if (*param_1 <= param_4) {
    if (*param_1 < param_4) {
      param_1[10] = 0;
      param_1[1] = 0x3f800000;
      *param_1 = param_4;
    }
    uVar1 = param_1[10];
    uVar3 = 0;
    piVar2 = param_1;
    if (uVar1 != 0) {
      do {
        if (piVar2[2] == param_2) {
          if (param_3 <= (float)param_1[uVar3 * 2 + 3]) {
            return;
          }
          param_1[uVar3 * 2 + 3] = (int)param_3;
          return;
        }
        uVar3 = uVar3 + 1;
        piVar2 = piVar2 + 2;
      } while (uVar3 < uVar1);
    }
    if (uVar1 < 4) {
      param_1[uVar1 * 2 + 2] = param_2;
      param_1[uVar1 * 2 + 3] = (int)param_3;
      param_1[10] = param_1[10] + 1;
      return;
    }
  }
  return;
}

// 00E46BA0  FUN_00e46ba0  size=45  [callgraph]
void __thiscall FUN_00e46ba0(int param_1,undefined4 param_2)

{
  FUN_00df3ad0(param_2,param_1 + 8,*(undefined4 *)(param_1 + 0x28));
  FUN_00df3b20(param_2,*(undefined4 *)(param_1 + 4));
  return;
}

// 00E46FC0  FUN_00e46fc0  size=149  [callgraph]
void __thiscall FUN_00e46fc0(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined1 local_14 [4];
  uint uStack_10;
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)local_14;
  FUN_00a7c800();
  *(int *)(param_1 + 0x110) = param_2;
  iVar1 = FUN_00a12210(param_3);
  *(int *)(param_1 + 0x114) = iVar1;
  if (iVar1 == 0) {
    FUN_009f8ea0(local_14,0x10,*(undefined4 *)(param_2 + 0x24),0);
    FUN_00dd5650(&DAT_016ce4a0,local_14,param_3);
    __security_check_cookie(local_4 ^ (uint)local_14);
    return;
  }
  D3DXMatrixInverse(param_1 + 0x10,0,iVar1 + 0x10);
  __security_check_cookie(uStack_10 ^ (uint)&stack0xffffffe0);
  return;
}

// 00E47060  FUN_00e47060  size=92  [callgraph]
void __thiscall FUN_00e47060(int param_1,float *param_2,float *param_3)

{
  if (*(int *)(param_1 + 0x118) != 0) {
    D3DXVec3TransformNormal(param_2,param_3,param_1 + 0x90);
    *param_2 = *param_2 + *(float *)(param_1 + 0xc0);
    param_2[1] = *(float *)(param_1 + 0xc4) + param_2[1];
    param_2[2] = *(float *)(param_1 + 200) + param_2[2];
    return;
  }
  *param_2 = *param_3;
  param_2[1] = param_3[1];
  param_2[2] = param_3[2];
  param_2[3] = param_3[3];
  return;
}

// 00E470C0  FUN_00e470c0  size=92  [callgraph]
void __thiscall FUN_00e470c0(int param_1,float *param_2,float *param_3)

{
  if (*(int *)(param_1 + 0x118) != 0) {
    D3DXVec3TransformNormal(param_2,param_3,param_1 + 0xd0);
    *param_2 = *param_2 + *(float *)(param_1 + 0x100);
    param_2[1] = *(float *)(param_1 + 0x104) + param_2[1];
    param_2[2] = *(float *)(param_1 + 0x108) + param_2[2];
    return;
  }
  *param_2 = *param_3;
  param_2[1] = param_3[1];
  param_2[2] = param_3[2];
  param_2[3] = param_3[3];
  return;
}

// 00E47220  FUN_00e47220  size=277  [callgraph]
undefined4 FUN_00e47220(float *param_1,float *param_2)

{
  if (((*param_2 - *param_1) * (param_1[3] - param_1[1]) -
       (param_2[2] - param_1[1]) * (param_1[2] - *param_1) <= 0.0) &&
     (0.0 <= (param_1[7] - param_1[1]) * (*param_2 - *param_1) -
             (param_1[6] - *param_1) * (param_2[2] - param_1[1]))) {
    if (0.0 < (*param_2 - param_1[4]) * (param_1[7] - param_1[5]) -
              (param_2[2] - param_1[5]) * (param_1[6] - param_1[4])) {
      return 0;
    }
    if (0.0 <= (*param_2 - param_1[4]) * (param_1[3] - param_1[5]) -
               (param_1[2] - param_1[4]) * (param_2[2] - param_1[5])) {
      return 1;
    }
  }
  return 0;
}

// 00E47340  FUN_00e47340  size=443  [callgraph]
float10 __thiscall FUN_00e47340(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  float fVar1;
  float fVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  float10 fVar7;
  float local_4c;
  int local_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  float local_2c;
  undefined4 local_28;
  undefined4 local_20;
  float local_1c;
  undefined4 local_18;
  
  fVar1 = *(float *)(param_1 + 0x170) + *(float *)(param_1 + 0x154);
  fVar2 = (*(float *)(param_1 + 0x158) + *(float *)(param_1 + 0x154)) - *(float *)(param_1 + 0x16c);
  iVar3 = FUN_00e47220(param_1 + 0x174,param_3);
  if (iVar3 == 0) {
    if ((fVar1 <= (float)param_3[1]) && (fVar1 = fVar2, (float)param_3[1] <= fVar2)) {
      fVar1 = (float)param_3[1];
    }
    uVar5 = 1;
    puVar6 = (undefined4 *)(param_1 + 0x178);
    local_4c = 1e+08;
    local_48 = 4;
    do {
      uVar4 = uVar5 & 0x80000003;
      local_20 = puVar6[-1];
      local_18 = *puVar6;
      if ((int)uVar4 < 0) {
        uVar4 = (uVar4 - 1 | 0xfffffffc) + 1;
      }
      local_30 = *(undefined4 *)(param_1 + 0x174 + uVar4 * 8);
      local_28 = *(undefined4 *)(param_1 + 0x178 + uVar4 * 8);
      local_2c = fVar1;
      local_1c = fVar1;
      fVar7 = (float10)thunk_FUN_00de19d0(param_3,&local_20,&local_30,&local_40);
      if ((float)fVar7 < local_4c) {
        *param_2 = local_40;
        param_2[1] = local_3c;
        param_2[2] = local_38;
        param_2[3] = local_34;
        local_4c = (float)fVar7;
      }
      puVar6 = puVar6 + 2;
      uVar5 = uVar5 + 1;
      local_48 = local_48 + -1;
    } while (local_48 != 0);
    return (float10)local_4c;
  }
  *param_2 = *param_3;
  param_2[2] = param_3[2];
  if (fVar1 <= (float)param_3[1]) {
    if ((float)param_3[1] <= fVar2) {
      param_2[1] = param_3[1];
      return (float10)0;
    }
    param_2[1] = fVar2;
    return (float10)((float)param_3[1] - fVar2);
  }
  param_2[1] = fVar1;
  return (float10)(fVar1 - (float)param_3[1]);
}

// 00E47500  FUN_00e47500  size=374  [callgraph]
float10 __thiscall FUN_00e47500(int param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  float10 fVar8;
  float local_50;
  int local_48;
  undefined4 local_40;
  float local_3c;
  undefined4 local_38;
  undefined4 local_30;
  float local_2c;
  undefined4 local_28;
  undefined1 local_20 [28];
  
  fVar1 = *(float *)(param_1 + 0x154);
  fVar2 = *(float *)(param_1 + 0x158) + fVar1;
  local_50 = 1e+08;
  iVar4 = FUN_00e47220(param_1 + 0x134,param_2);
  if (iVar4 != 0) {
    fVar3 = ABS(*(float *)(param_2 + 4) - fVar1);
    local_50 = ABS(*(float *)(param_2 + 4) - fVar2);
    if (fVar3 < local_50) {
      local_50 = fVar3;
    }
  }
  if ((fVar1 <= *(float *)(param_2 + 4)) && (fVar1 = fVar2, *(float *)(param_2 + 4) <= fVar2)) {
    fVar1 = *(float *)(param_2 + 4);
  }
  uVar6 = 1;
  puVar7 = (undefined4 *)(param_1 + 0x138);
  local_48 = 4;
  do {
    uVar5 = uVar6 & 0x80000003;
    local_30 = puVar7[-1];
    local_28 = *puVar7;
    if ((int)uVar5 < 0) {
      uVar5 = (uVar5 - 1 | 0xfffffffc) + 1;
    }
    local_40 = *(undefined4 *)(param_1 + 0x134 + uVar5 * 8);
    local_38 = *(undefined4 *)(param_1 + 0x138 + uVar5 * 8);
    local_3c = fVar1;
    local_2c = fVar1;
    fVar8 = (float10)thunk_FUN_00de19d0(param_2,&local_30,&local_40,local_20);
    if ((float)fVar8 < local_50) {
      local_50 = (float)fVar8;
    }
    puVar7 = puVar7 + 2;
    uVar6 = uVar6 + 1;
    local_48 = local_48 + -1;
  } while (local_48 != 0);
  return (float10)local_50;
}

// 00E47680  SoundArea::ShapeBox::vf0C  size=23  [class]
void SoundArea::ShapeBox::vf0C(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = 0;
  *param_2 = 0;
  return;
}

// 00E476A0  SoundArea::ShapeBox::vf10  size=5  [class]
undefined4 SoundArea::ShapeBox::vf10(void)

{
  return 0;
}

// 00E476B0  SoundArea::ShapeBox::vf14  size=5  [class]
undefined4 SoundArea::ShapeBox::vf14(void)

{
  return 0;
}

// 00E476C0  SoundArea::ShapeBox::vf5C  size=7  [class]
int __fastcall SoundArea::ShapeBox::vf5C(int param_1)

{
  return param_1 + 0x120;
}

// 00E476D0  SoundArea::ShapeBox::vf20  size=6  [class]
undefined4 SoundArea::ShapeBox::vf20(void)

{
  return 8;
}

// 00E476E0  SoundArea::ShapeBox::vf24  size=88  [class]
undefined4 __thiscall SoundArea::ShapeBox::vf24(int param_1,undefined4 *param_2,uint param_3)

{
  if (param_3 < 8) {
    *param_2 = *(undefined4 *)(param_1 + 0x134 + ((int)param_3 / 2) * 8);
    param_2[1] = *(undefined4 *)(param_1 + 0x154);
    param_2[2] = *(undefined4 *)(param_1 + 0x138 + ((int)param_3 / 2) * 8);
    if ((param_3 & 1) != 0) {
      param_2[1] = *(float *)(param_1 + 0x158) + (float)param_2[1];
    }
    FUN_00e47060(param_2,param_2);
    return 1;
  }
  return 0;
}

// 00E47740  SoundArea::ShapeBox::vf2C  size=6  [class]
undefined4 SoundArea::ShapeBox::vf2C(void)

{
  return 2;
}

// 00E47750  SoundArea::ShapeBox::vf38  size=6  [class]
undefined4 SoundArea::ShapeBox::vf38(void)

{
  return 0xffffffff;
}

// 00E47760  SoundArea::ShapeBox::vf3C  size=7  [class]
undefined4 SoundArea::ShapeBox::vf3C(undefined4 param_1)

{
  return param_1;
}

// 00E47770  SoundArea::ShapeBox::vf44  size=7  [class]
float10 __fastcall SoundArea::ShapeBox::vf44(int param_1)

{
  return (float10)*(float *)(param_1 + 0x158);
}

// 00E47780  SoundArea::ShapeBox::vf48  size=3  [class]
void SoundArea::ShapeBox::vf48(void)

{
  return;
}

// 00E47790  SoundArea::ShapeBox::vf4C  size=7  [class]
float10 SoundArea::ShapeBox::vf4C(void)

{
  return (float10)-1.0;
}

// 00E477A0  SoundArea::ShapeBox::vf50  size=3  [class]
void SoundArea::ShapeBox::vf50(void)

{
  return;
}

// 00E477B0  SoundArea::ShapeBox::vf54  size=7  [class]
float10 SoundArea::ShapeBox::vf54(void)

{
  return (float10)-1.0;
}

// 00E477C0  SoundArea::ShapeBox::vf64  size=14  [class]
float10 __thiscall SoundArea::ShapeBox::vf64(int param_1,int param_2)

{
  return (float10)*(float *)(param_1 + 0x15c + param_2 * 4);
}

// 00E477D0  FUN_00e477d0  size=827  [between]
void __thiscall
FUN_00e477d0(int param_1,float *param_2,float param_3,float param_4,int param_5,undefined4 param_6)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  uint uVar6;
  int iVar7;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float local_88;
  int local_84;
  float local_80 [27];
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)&fStack_94;
  if (param_5 == 4) {
    local_80[0] = *param_2;
    param_3 = param_3 + param_4;
    local_88 = param_3;
  }
  else {
    if (param_5 != 5) {
      pfVar2 = param_2 + param_5 * 2 + 1;
      local_80[0] = param_2[param_5 * 2];
      uVar6 = param_5 + 1U & 0x80000003;
      local_88 = param_3 + param_4;
      local_80[1] = local_88;
      local_80[2] = *pfVar2;
      local_80[4] = param_2[param_5 * 2];
      local_80[5] = param_3;
      local_80[6] = *pfVar2;
      if ((int)uVar6 < 0) {
        uVar6 = (uVar6 - 1 | 0xfffffffc) + 1;
      }
      pfVar1 = param_2 + uVar6 * 2;
      local_80[8] = param_2[uVar6 * 2];
      local_80[9] = local_88;
      local_80[10] = pfVar1[1];
      local_80[0xc] = param_2[param_5 * 2];
      local_80[0xd] = param_3;
      local_80[0xe] = *pfVar2;
      local_80[0x10] = *pfVar1;
      local_80[0x11] = local_88;
      local_80[0x12] = pfVar1[1];
      local_80[0x14] = *pfVar1;
      local_80[0x15] = param_3;
      local_80[0x16] = pfVar1[1];
      goto LAB_00e47919;
    }
    local_80[0] = *param_2;
  }
  local_80[1] = param_3;
  local_80[2] = param_2[1];
  local_80[0xc] = param_2[4];
  local_80[0xd] = param_3;
  local_80[0xe] = param_2[5];
  local_80[4] = param_2[2];
  local_80[5] = param_3;
  local_80[6] = param_2[3];
  local_80[0x10] = param_2[6];
  local_80[0x11] = param_3;
  local_80[0x12] = param_2[7];
  local_80[8] = param_2[4];
  local_80[9] = param_3;
  local_80[10] = param_2[5];
  local_80[0x14] = *param_2;
  local_80[0x15] = param_3;
  local_80[0x16] = param_2[1];
LAB_00e47919:
  iVar7 = 0;
  local_84 = param_1;
  local_80[1] = local_80[0x11];
  local_80[5] = local_80[0x15];
  local_80[9] = local_80[0x11];
  local_80[0xd] = local_80[0x15];
  do {
    if (*(int *)(param_1 + 0x118) == 0) {
      *(undefined4 *)((int)local_80 + iVar7) = *(undefined4 *)((int)local_80 + iVar7);
      *(undefined4 *)((int)local_80 + iVar7 + 4) = *(undefined4 *)((int)local_80 + iVar7 + 4);
      *(undefined4 *)((int)local_80 + iVar7 + 8) = *(undefined4 *)((int)local_80 + iVar7 + 8);
      *(undefined4 *)((int)local_80 + iVar7 + 0xc) = *(undefined4 *)((int)local_80 + iVar7 + 0xc);
    }
    else {
      pfVar2 = (float *)((int)local_80 + iVar7);
      D3DXVec3TransformNormal(pfVar2,pfVar2,param_1 + 0x90);
      *pfVar2 = *pfVar2 + *(float *)(param_1 + 0xc0);
      *(float *)((int)local_80 + iVar7 + 4) =
           *(float *)(param_1 + 0xc4) + *(float *)((int)local_80 + iVar7 + 4);
      *(float *)((int)local_80 + iVar7 + 8) =
           *(float *)(param_1 + 200) + *(float *)((int)local_80 + iVar7 + 8);
      param_1 = local_84;
    }
    if (*(int *)(param_1 + 0x118) == 0) {
      *(undefined4 *)((int)local_80 + iVar7 + 0x30) = *(undefined4 *)((int)local_80 + iVar7 + 0x30);
      *(undefined4 *)((int)local_80 + iVar7 + 0x34) = *(undefined4 *)((int)local_80 + iVar7 + 0x34);
      *(undefined4 *)((int)local_80 + iVar7 + 0x38) = *(undefined4 *)((int)local_80 + iVar7 + 0x38);
      *(undefined4 *)((int)local_80 + iVar7 + 0x3c) = *(undefined4 *)((int)local_80 + iVar7 + 0x3c);
    }
    else {
      pfVar2 = (float *)((int)local_80 + iVar7 + 0x30);
      D3DXVec3TransformNormal(pfVar2,pfVar2,param_1 + 0x90);
      *pfVar2 = *(float *)(param_1 + 0xc0) + *pfVar2;
      *(float *)((int)local_80 + iVar7 + 0x34) =
           *(float *)(param_1 + 0xc4) + *(float *)((int)local_80 + iVar7 + 0x34);
      *(float *)((int)local_80 + iVar7 + 0x38) =
           *(float *)(param_1 + 200) + *(float *)((int)local_80 + iVar7 + 0x38);
      param_1 = local_84;
    }
    iVar7 = iVar7 + 0x10;
  } while (iVar7 < 0x30);
  FUN_00f96010(local_80,param_6,2);
  FUN_00f96010(local_80 + 0xc,param_6,2);
  fVar5 = local_80[2];
  fVar4 = local_80[1];
  fVar3 = local_80[0];
  fStack_94 = local_80[0];
  fStack_90 = local_80[1];
  fStack_8c = local_80[2];
  local_80[0] = local_80[8];
  local_80[1] = local_80[9];
  local_80[2] = local_80[10];
  local_80[3] = local_80[0xb];
  local_80[8] = fVar3;
  local_80[9] = fVar4;
  local_80[10] = fVar5;
  local_80[0xb] = 1.0;
  FUN_00f96010(local_80,param_6,2);
  fVar5 = local_80[0xe];
  fVar4 = local_80[0xd];
  fVar3 = local_80[0xc];
  fStack_94 = local_80[0xc];
  fStack_90 = local_80[0xd];
  fStack_8c = local_80[0xe];
  local_80[0xc] = local_80[0x14];
  local_80[0xd] = local_80[0x15];
  local_80[0xe] = local_80[0x16];
  local_80[0xf] = local_80[0x17];
  local_80[0x14] = fVar3;
  local_80[0x15] = fVar4;
  local_80[0x16] = fVar5;
  local_80[0x17] = 1.0;
  FUN_00f96010(local_80 + 0xc,param_6,2);
  __security_check_cookie(local_14 ^ (uint)&fStack_94);
  return;
}

// 00E47E10  FUN_00e47e10  size=120  [between]
char __fastcall FUN_00e47e10(int param_1)

{
  int iVar1;
  int local_c;
  int local_8;
  int local_4;
  
  if (*(int *)(param_1 + 4) != 0) {
    local_c = 0;
    iVar1 = thunk_FUN_00df28d0(&local_c,*(int *)(param_1 + 4));
    if (iVar1 != 0) {
      iVar1 = thunk_FUN_00dede80(&local_8,&DAT_016ce550);
      if (iVar1 != 0) {
        iVar1 = thunk_FUN_00dede80(&local_4,&DAT_016ce54c);
        if (iVar1 != 0) {
          if (local_c == local_8) {
            return '\0';
          }
          return (local_c != local_4) + '\x01';
        }
      }
    }
  }
  return '\x02';
}

// 00E47EE0  FUN_00e47ee0  size=41  [between]
void __thiscall FUN_00e47ee0(int param_1,int param_2)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_00df2950(*(int *)(param_1 + 4));
  }
  *(int *)(param_1 + 4) = param_2;
  if (param_2 != 0) {
    Hw::Wwise::StateWatcher(param_2);
  }
  return;
}

// 00E47F50  SoundArea::ShapeLine::vf08  size=27  [class]
void __thiscall SoundArea::ShapeLine::vf08(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  *param_2 = *(undefined4 *)(param_1 + 0x138);
  *param_3 = *(undefined4 *)(param_1 + 0x138);
  return;
}

// 00E47F70  SoundArea::ShapeLine::vf14  size=5  [class]
undefined4 SoundArea::ShapeLine::vf14(void)

{
  return 0;
}

// 00E47F80  SoundArea::ShapeLine::vf5C  size=7  [class]
int __fastcall SoundArea::ShapeLine::vf5C(int param_1)

{
  return param_1 + 0x120;
}

// 00E47F90  SoundArea::ShapeLine::vf1C  size=5  [class]
undefined4 SoundArea::ShapeLine::vf1C(void)

{
  return 0;
}

// 00E47FA0  SoundArea::ShapeLine::vf2C  size=6  [class]
undefined4 SoundArea::ShapeLine::vf2C(void)

{
  return 1;
}

// 00E47FB0  SoundArea::ShapeLine::vf44  size=7  [class]
float10 __fastcall SoundArea::ShapeLine::vf44(int param_1)

{
  return (float10)*(float *)(param_1 + 0x134);
}

// 00E47FC0  SoundArea::ShapeLine::vf48  size=13  [class]
void __thiscall SoundArea::ShapeLine::vf48(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x138) = param_2;
  return;
}

// 00E47FD0  SoundArea::ShapeLine::vf4C  size=7  [class]
float10 __fastcall SoundArea::ShapeLine::vf4C(int param_1)

{
  return (float10)*(float *)(param_1 + 0x138);
}

// 00E47FE0  SoundArea::ShapeLine::vf50  size=13  [class]
void __thiscall SoundArea::ShapeLine::vf50(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x13c) = param_2;
  return;
}

// 00E47FF0  SoundArea::ShapeLine::vf54  size=7  [class]
float10 __fastcall SoundArea::ShapeLine::vf54(int param_1)

{
  return (float10)*(float *)(param_1 + 0x13c);
}

// 00E48000  SoundArea::ShapePrism::vf08  size=27  [class]
void __thiscall SoundArea::ShapePrism::vf08(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  *param_2 = *(undefined4 *)(param_1 + 0x13c);
  *param_3 = *(undefined4 *)(param_1 + 0x13c);
  return;
}

// 00E48020  SoundArea::ShapePrism::vf0C  size=23  [class]
void SoundArea::ShapePrism::vf0C(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = 0;
  *param_2 = 0;
  return;
}

// 00E48040  SoundArea::ShapePrism::vf10  size=5  [class]
undefined4 SoundArea::ShapePrism::vf10(void)

{
  return 0;
}

// 00E48050  SoundArea::ShapePrism::vf14  size=5  [class]
undefined4 SoundArea::ShapePrism::vf14(void)

{
  return 0;
}

// 00E48060  SoundArea::ShapePrism::vf5C  size=7  [class]
int __fastcall SoundArea::ShapePrism::vf5C(int param_1)

{
  return param_1 + 0x120;
}

// 00E48070  SoundArea::ShapePrism::vf1C  size=5  [class]
undefined4 SoundArea::ShapePrism::vf1C(void)

{
  return 0;
}

// 00E48080  SoundArea::ShapePrism::vf2C  size=6  [class]
undefined4 SoundArea::ShapePrism::vf2C(void)

{
  return 3;
}

// 00E48090  SoundArea::ShapePrism::vf44  size=7  [class]
float10 __fastcall SoundArea::ShapePrism::vf44(int param_1)

{
  return (float10)*(float *)(param_1 + 0x138);
}

// 00E480A0  SoundArea::ShapePrism::vf48  size=13  [class]
void __thiscall SoundArea::ShapePrism::vf48(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x13c) = param_2;
  return;
}

// 00E480B0  SoundArea::ShapePrism::vf4C  size=7  [class]
float10 __fastcall SoundArea::ShapePrism::vf4C(int param_1)

{
  return (float10)*(float *)(param_1 + 0x13c);
}

// 00E480C0  SoundArea::ShapePrism::vf50  size=13  [class]
void __thiscall SoundArea::ShapePrism::vf50(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x140) = param_2;
  return;
}

// 00E480D0  SoundArea::ShapePrism::vf54  size=7  [class]
float10 __fastcall SoundArea::ShapePrism::vf54(int param_1)

{
  return (float10)*(float *)(param_1 + 0x140);
}

// 00E480E0  SoundArea::ShapeRail::vf08  size=17  [class]
void SoundArea::ShapeRail::vf08(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = 0;
  *param_2 = 0;
  return;
}

// 00E48100  SoundArea::ShapeRail::vf0C  size=23  [class]
void SoundArea::ShapeRail::vf0C(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = 0;
  *param_2 = 0;
  return;
}

// 00E48120  SoundArea::ShapeRail::vf10  size=5  [class]
undefined4 SoundArea::ShapeRail::vf10(void)

{
  return 0;
}

// 00E48130  FUN_00e48130  size=1155  [between]
undefined4 FUN_00e48130(float *param_1,float *param_2)

{
  float fVar1;
  
  fVar1 = *param_2 - *param_1;
  if (0.0 < fVar1 * (param_1[8] - param_1[2]) - (param_2[2] - param_1[2]) * (param_1[6] - *param_1))
  {
    return 0;
  }
  if (0.0 <= (param_1[0xe] - param_1[2]) * fVar1 -
             (param_1[0xc] - *param_1) * (param_2[2] - param_1[2])) {
    if ((*param_2 - param_1[0x12]) * (param_1[0xe] - param_1[0x14]) -
        (param_2[2] - param_1[0x14]) * (param_1[0xc] - param_1[0x12]) <= 0.0) {
      if ((*param_2 - param_1[0x12]) * (param_1[8] - param_1[0x14]) -
          (param_1[6] - param_1[0x12]) * (param_2[2] - param_1[0x14]) < 0.0) {
        return 0;
      }
      if ((0.0 < (param_2[2] - param_1[2]) *
                 ((param_1[7] - param_1[1]) * (param_1[0xc] - *param_1) -
                 (param_1[0xd] - param_1[1]) * (param_1[6] - *param_1)) +
                 ((param_1[0xd] - param_1[1]) * (param_1[8] - param_1[2]) -
                 (param_1[0xe] - param_1[2]) * (param_1[7] - param_1[1])) * fVar1 +
                 (param_2[1] - param_1[1]) *
                 ((param_1[6] - *param_1) * (param_1[0xe] - param_1[2]) -
                 (param_1[0xc] - *param_1) * (param_1[8] - param_1[2]))) &&
         (0.0 <= (param_2[2] - param_1[5]) *
                 ((param_1[0x10] - param_1[4]) * (param_1[9] - param_1[3]) -
                 (param_1[10] - param_1[4]) * (param_1[0xf] - param_1[3])) +
                 (param_2[1] - param_1[4]) *
                 ((param_1[0xf] - param_1[3]) * (param_1[0xb] - param_1[5]) -
                 (param_1[9] - param_1[3]) * (param_1[0x11] - param_1[5])) +
                 ((param_1[10] - param_1[4]) * (param_1[0x11] - param_1[5]) -
                 (param_1[0xb] - param_1[5]) * (param_1[0x10] - param_1[4])) *
                 (*param_2 - param_1[3]))) {
        return 1;
      }
      if ((param_2[2] - param_1[0xe]) *
          ((param_1[7] - param_1[0xd]) * (param_1[0x12] - param_1[0xc]) -
          (param_1[0x13] - param_1[0xd]) * (param_1[6] - param_1[0xc])) +
          ((param_1[6] - param_1[0xc]) * (param_1[0x14] - param_1[0xe]) -
          (param_1[0x12] - param_1[0xc]) * (param_1[8] - param_1[0xe])) *
          (param_2[1] - param_1[0xd]) +
          ((param_1[0x13] - param_1[0xd]) * (param_1[8] - param_1[0xe]) -
          (param_1[0x14] - param_1[0xe]) * (param_1[7] - param_1[0xd])) * (*param_2 - param_1[0xc])
          < 0.0) {
        return 0;
      }
      fVar1 = ((param_1[0x16] - param_1[0x10]) * (param_1[9] - param_1[0xf]) -
              (param_1[10] - param_1[0x10]) * (param_1[0x15] - param_1[0xf])) *
              (param_2[2] - param_1[0x11]) +
              ((param_1[0x15] - param_1[0xf]) * (param_1[0xb] - param_1[0x11]) -
              (param_1[9] - param_1[0xf]) * (param_1[0x17] - param_1[0x11])) *
              (param_2[1] - param_1[0x10]) +
              ((param_1[10] - param_1[0x10]) * (param_1[0x17] - param_1[0x11]) -
              (param_1[0xb] - param_1[0x11]) * (param_1[0x16] - param_1[0x10])) *
              (*param_2 - param_1[0xf]);
      if (NAN(fVar1) || 0.0 < fVar1 == (fVar1 == 0.0)) {
        return 0;
      }
      return 1;
    }
  }
  return 0;
}

// 00E485C0  FUN_00e485c0  size=466  [between]
void FUN_00e485c0(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float10 fVar9;
  float local_64;
  
  fVar1 = param_2[6] - *param_2;
  fVar2 = param_2[8] - param_2[2];
  fVar3 = param_2[0xc] - *param_2;
  fVar4 = param_2[0xe] - param_2[2];
  fVar5 = *param_3 - *param_2;
  fVar7 = (param_2[0x12] - *param_2) - (fVar1 + fVar3);
  fVar6 = (param_2[0x14] - param_2[2]) - (fVar2 + fVar4);
  fVar8 = fVar4 * fVar7 - fVar6 * fVar3;
  fVar4 = ((fVar6 * fVar5 - (param_3[2] - param_2[2]) * fVar7) + fVar1 * fVar4) - fVar2 * fVar3;
  if (0.0001 <= ABS(fVar8)) {
    fVar9 = (float10)FUN_00fdef70();
    local_64 = ((float)fVar9 - fVar4) / (fVar8 + fVar8);
    if ((local_64 < 0.0) || (1.0 < local_64)) {
      local_64 = (-fVar4 - (float)fVar9) / (fVar8 + fVar8);
    }
  }
  else {
    local_64 = -((fVar5 * fVar2 - (param_3[2] - param_2[2]) * fVar1) / fVar4);
  }
  *param_1 = (fVar5 - local_64 * fVar3) / (local_64 * fVar7 + fVar1);
  param_1[1] = local_64;
  return;
}

// 00E487A0  SoundArea::ShapeRail::vf5C  size=7  [class]
int __fastcall SoundArea::ShapeRail::vf5C(int param_1)

{
  return param_1 + 0x120;
}

// 00E487B0  SoundArea::ShapeRail::vf1C  size=5  [class]
undefined4 SoundArea::ShapeRail::vf1C(void)

{
  return 0;
}

// 00E487C0  SoundArea::ShapeRail::vf2C  size=6  [class]
undefined4 SoundArea::ShapeRail::vf2C(void)

{
  return 4;
}

// 00E487D0  SoundArea::ShapeRail::vf40  size=3  [class]
void SoundArea::ShapeRail::vf40(void)

{
  return;
}

// 00E487E0  SoundArea::ShapeRail::vf44  size=7  [class]
float10 SoundArea::ShapeRail::vf44(void)

{
  return (float10)-1.0;
}

// 00E487F0  SoundArea::ShapeRail::vf48  size=3  [class]
void SoundArea::ShapeRail::vf48(void)

{
  return;
}

// 00E48800  SoundArea::ShapeRail::vf4C  size=7  [class]
float10 SoundArea::ShapeRail::vf4C(void)

{
  return (float10)-1.0;
}

// 00E48810  SoundArea::ShapeRail::vf50  size=3  [class]
void SoundArea::ShapeRail::vf50(void)

{
  return;
}

// 00E48820  SoundArea::ShapeRail::vf54  size=7  [class]
float10 SoundArea::ShapeRail::vf54(void)

{
  return (float10)-1.0;
}

// 00E48830  FUN_00e48830  size=223  [between]
void FUN_00e48830(undefined4 *param_1)

{
  undefined1 auStack_68 [8];
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
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
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)auStack_68;
  FUN_00f96010(param_1,0x60c0c0ff,2);
  FUN_00f96010(param_1 + 4,0x60c0c0ff,2);
  local_60 = param_1[0xc];
  local_5c = param_1[0xd];
  local_58 = param_1[0xe];
  local_54 = param_1[0xf];
  local_50 = param_1[8];
  local_4c = param_1[9];
  local_48 = param_1[10];
  local_44 = param_1[0xb];
  local_40 = param_1[4];
  local_3c = param_1[5];
  local_38 = param_1[6];
  local_34 = param_1[7];
  local_30 = *param_1;
  local_2c = param_1[1];
  local_28 = param_1[2];
  local_24 = param_1[3];
  FUN_00f96010(&local_60,0x60c0c0ff,2);
  FUN_00f96010(&local_50,0x60c0c0ff,2);
  __security_check_cookie(local_14 ^ (uint)auStack_68);
  return;
}

// 00E48910  SoundArea::ShapeSphere::vf08  size=27  [class]
void __thiscall SoundArea::ShapeSphere::vf08(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  *param_2 = *(undefined4 *)(param_1 + 0x144);
  *param_3 = *(undefined4 *)(param_1 + 0x144);
  return;
}

// 00E48930  SoundArea::ShapeSphere::vf0C  size=23  [class]
void SoundArea::ShapeSphere::vf0C(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = 0;
  *param_2 = 0;
  return;
}

// 00E48950  SoundArea::ShapeSphere::vf10  size=5  [class]
undefined4 SoundArea::ShapeSphere::vf10(void)

{
  return 0;
}

// 00E48960  SoundArea::ShapeSphere::vf14  size=5  [class]
undefined4 SoundArea::ShapeSphere::vf14(void)

{
  return 0;
}

// 00E48970  SoundArea::ShapeSphere::vf5C  size=7  [class]
int __fastcall SoundArea::ShapeSphere::vf5C(int param_1)

{
  return param_1 + 0x120;
}

// 00E48980  SoundArea::ShapeSphere::vf1C  size=5  [class]
undefined4 SoundArea::ShapeSphere::vf1C(void)

{
  return 0;
}

// 00E48990  SoundArea::ShapeSphere::vf20  size=6  [class]
undefined4 SoundArea::ShapeSphere::vf20(void)

{
  return 2;
}

// 00E489A0  SoundArea::ShapeSphere::vf24  size=81  [class]
undefined4 __thiscall SoundArea::ShapeSphere::vf24(int param_1,undefined4 *param_2,uint param_3)

{
  if (param_3 < 2) {
    *param_2 = *(undefined4 *)(param_1 + 0x134);
    param_2[1] = *(undefined4 *)(param_1 + 0x138);
    param_2[2] = *(undefined4 *)(param_1 + 0x13c);
    param_2[3] = 0x3f800000;
    if ((param_3 & 1) != 0) {
      param_2[1] = *(float *)(param_1 + 0x140) + (float)param_2[1];
    }
    FUN_00e47060(param_2,param_2);
    return 1;
  }
  return 0;
}

// 00E48A00  SoundArea::ShapeSphere::vf28  size=138  [class]
undefined4 __thiscall
SoundArea::ShapeSphere::vf28(int param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  *(undefined4 *)(param_1 + 0x120) = 0xffffffff;
  *(undefined4 *)(param_1 + 300) = 0;
  *(undefined4 *)(param_1 + 0x130) = 0;
  *(undefined4 *)(param_1 + 0x124) = 0;
  *(undefined4 *)(param_1 + 0x128) = 0;
  *(undefined4 *)(param_1 + 0x134) = 0;
  *(undefined4 *)(param_1 + 0x138) = 0;
  *(undefined4 *)(param_1 + 0x13c) = 0;
  *(undefined4 *)(param_1 + 0x140) = 0;
  *(undefined4 *)(param_1 + 0x144) = 0;
  *(undefined4 *)(param_1 + 0x148) = 0;
  *(undefined4 *)(param_1 + 0x134) = *param_2;
  *(undefined4 *)(param_1 + 0x138) = param_2[1];
  *(undefined4 *)(param_1 + 0x13c) = param_2[2];
  *(undefined4 *)(param_1 + 0x140) = 0;
  *(undefined4 *)(param_1 + 0x144) = param_3;
  *(undefined4 *)(param_1 + 0x148) = param_4;
  return 1;
}

// 00E48A90  SoundArea::ShapeSphere::vf2C  size=3  [class]
undefined4 SoundArea::ShapeSphere::vf2C(void)

{
  return 0;
}

// 00E48AA0  SoundArea::ShapeSphere::vf30  size=51  [class]
void __thiscall SoundArea::ShapeSphere::vf30(int param_1,float *param_2)

{
  *(float *)(param_1 + 0x134) = *param_2 + *(float *)(param_1 + 0x134);
  *(float *)(param_1 + 0x138) = param_2[1] + *(float *)(param_1 + 0x138);
  *(float *)(param_1 + 0x13c) = param_2[2] + *(float *)(param_1 + 0x13c);
  return;
}

// 00E48AE0  SoundArea::ShapeSphere::vf38  size=6  [class]
undefined4 SoundArea::ShapeSphere::vf38(void)

{
  return 0xffffffff;
}

// 00E48AF0  SoundArea::ShapeSphere::vf3C  size=7  [class]
undefined4 SoundArea::ShapeSphere::vf3C(undefined4 param_1)

{
  return param_1;
}

// 00E48B00  SoundArea::ShapeSphere::vf44  size=7  [class]
float10 __fastcall SoundArea::ShapeSphere::vf44(int param_1)

{
  return (float10)*(float *)(param_1 + 0x140);
}

// 00E48B10  SoundArea::ShapeSphere::vf48  size=13  [class]
void __thiscall SoundArea::ShapeSphere::vf48(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x144) = param_2;
  return;
}

// 00E48B20  SoundArea::ShapeSphere::vf4C  size=7  [class]
float10 __fastcall SoundArea::ShapeSphere::vf4C(int param_1)

{
  return (float10)*(float *)(param_1 + 0x144);
}

// 00E48B30  SoundArea::ShapeSphere::vf50  size=13  [class]
void __thiscall SoundArea::ShapeSphere::vf50(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x148) = param_2;
  return;
}

// 00E48B40  SoundArea::ShapeSphere::vf54  size=7  [class]
float10 __fastcall SoundArea::ShapeSphere::vf54(int param_1)

{
  return (float10)*(float *)(param_1 + 0x148);
}

// 00E48BA0  FUN_00e48ba0  size=122  [between]
void __thiscall FUN_00e48ba0(float *param_1,float *param_2,float param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  if (param_3 < 0.0 == (param_3 == 0.0)) {
    fVar1 = *param_2;
    fVar2 = param_2[1];
    fVar3 = param_2[2];
    fVar4 = param_2[3];
    param_1[9] = (float)((int)param_1[9] + 1);
    *param_1 = *param_1 + fVar1 * param_3;
    param_1[1] = param_1[1] + fVar2 * param_3;
    param_1[2] = param_1[2] + fVar3 * param_3;
    param_1[3] = param_1[3] + fVar4 * param_3;
    param_1[8] = param_3 + param_1[8];
    return;
  }
  return;
}

// 00E48C20  FUN_00e48c20  size=124  [between]
void __thiscall FUN_00e48c20(int param_1,float *param_2,float param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  if (param_3 < 0.0 == (param_3 == 0.0)) {
    fVar1 = param_2[1];
    fVar2 = param_2[2];
    fVar3 = param_2[3];
    *(float *)(param_1 + 0x10) = *(float *)(param_1 + 0x10) + *param_2 * param_3;
    *(float *)(param_1 + 0x14) = *(float *)(param_1 + 0x14) + fVar1 * param_3;
    *(float *)(param_1 + 0x18) = *(float *)(param_1 + 0x18) + fVar2 * param_3;
    *(float *)(param_1 + 0x1c) = *(float *)(param_1 + 0x1c) + fVar3 * param_3;
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
    *(float *)(param_1 + 0x28) = param_3 + *(float *)(param_1 + 0x28);
    return;
  }
  return;
}

// 00E48D30  FUN_00e48d30  size=174  [between]
void __thiscall FUN_00e48d30(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  
  fVar2 = 1.0;
  if (param_1[8] <= 0.0) {
    *param_2 = 0.0;
    param_2[1] = 0.0;
    param_2[2] = 0.0;
    param_2[3] = 1.0;
  }
  else {
    fVar1 = param_1[8];
    *param_2 = *param_1 / fVar1;
    param_2[1] = param_1[1] / fVar1;
    param_2[2] = param_1[2] / fVar1;
    param_2[3] = param_1[3] / fVar1;
  }
  fVar1 = 0.0;
  if (param_1[10] <= 0.0) {
    param_2[4] = 0.0;
    param_2[5] = 0.0;
    param_2[6] = 0.0;
  }
  else {
    fVar2 = param_1[10];
    param_2[4] = param_1[4] / fVar2;
    param_2[5] = param_1[5] / fVar2;
    param_2[6] = param_1[6] / fVar2;
    fVar2 = param_1[7] / fVar2;
  }
  param_2[7] = fVar2;
  if (0.0 < param_1[0xd]) {
    fVar1 = param_1[0xc] / param_1[0xd];
  }
  param_2[8] = fVar1;
  return;
}

// 00E48E90  FUN_00e48e90  size=816  [between]
undefined4 FUN_00e48e90(float *param_1,float *param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar1 = *param_2 - *param_1;
  fVar2 = param_2[1] - param_1[1];
  fVar3 = param_2[2] - param_1[2];
  fVar5 = fVar1 * *param_4 + fVar2 * param_4[1] + fVar3 * param_4[2];
  if (fVar5 == 0.0) {
    return 0;
  }
  fVar6 = *param_2 - *param_3;
  fVar7 = param_2[1] - param_3[1];
  fVar8 = param_2[2] - param_3[2];
  fVar4 = param_4[2] * fVar8 + param_4[1] * fVar7 + fVar6 * *param_4;
  if (fVar5 <= 0.0) {
    if (fVar4 >= 0.0 && fVar4 != 0.0) {
      return 0;
    }
    if (fVar5 <= fVar4) {
      fVar4 = fVar7 * fVar3 - fVar8 * fVar2;
      fVar3 = fVar8 * fVar1 - fVar6 * fVar3;
      fVar1 = fVar2 * fVar6 - fVar7 * fVar1;
      fVar2 = fVar1 * (param_3[10] - param_3[2]) +
              fVar4 * (param_3[8] - *param_3) + fVar3 * (param_3[9] - param_3[1]);
      if (0.0 < fVar2) {
        return 0;
      }
      if (fVar2 < fVar5) {
        return 0;
      }
      fVar1 = -((param_3[4] - *param_3) * fVar4 + (param_3[5] - param_3[1]) * fVar3 +
               (param_3[6] - param_3[2]) * fVar1);
      if (0.0 < fVar1) {
        return 0;
      }
      if (fVar5 <= fVar1 + fVar2) {
        return 0xffffffff;
      }
    }
  }
  else {
    if (fVar4 < 0.0) {
      return 0;
    }
    if (fVar4 <= fVar5) {
      fVar4 = fVar7 * fVar3 - fVar8 * fVar2;
      fVar3 = fVar8 * fVar1 - fVar6 * fVar3;
      fVar1 = fVar2 * fVar6 - fVar7 * fVar1;
      fVar2 = fVar1 * (param_3[10] - param_3[2]) +
              fVar4 * (param_3[8] - *param_3) + fVar3 * (param_3[9] - param_3[1]);
      if (fVar2 < 0.0) {
        return 0;
      }
      if (fVar5 < fVar2) {
        return 0;
      }
      fVar1 = -((param_3[4] - *param_3) * fVar4 + (param_3[5] - param_3[1]) * fVar3 +
               (param_3[6] - param_3[2]) * fVar1);
      if (fVar1 < 0.0) {
        return 0;
      }
      if (fVar1 + fVar2 <= fVar5) {
        return 1;
      }
    }
  }
  return 0;
}

// 00E491C0  FUN_00e491c0  size=226  [between]
float * FUN_00e491c0(float *param_1,int *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  code *pcVar5;
  float fVar6;
  int iVar7;
  int iVar8;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  pcVar5 = *(code **)(*param_2 + 0x20);
  *param_1 = 0.0;
  param_1[1] = 0.0;
  param_1[2] = 0.0;
  iVar7 = (*pcVar5)();
  iVar8 = 0;
  if (iVar7 < 1) {
    return param_1;
  }
  do {
    (**(code **)(*param_2 + 0x24))(&fStack_20,iVar8);
    fVar1 = *param_1;
    iVar8 = iVar8 + 1;
    *param_1 = fVar1 + fStack_20;
    fVar2 = param_1[1];
    param_1[1] = fVar2 + fStack_1c;
    fVar3 = param_1[2];
    param_1[2] = fVar3 + fStack_18;
    fVar4 = param_1[3];
    param_1[3] = fVar4 + fStack_14;
  } while (iVar8 < iVar7);
  if (iVar7 < 1) {
    return param_1;
  }
  fVar6 = (float)iVar7;
  *param_1 = (fVar1 + fStack_20) / fVar6;
  param_1[1] = (fVar2 + fStack_1c) / fVar6;
  param_1[2] = (fVar3 + fStack_18) / fVar6;
  param_1[3] = (fVar4 + fStack_14) / fVar6;
  return param_1;
}

// 00E492B0  FUN_00e492b0  size=218  [between]
undefined4
FUN_00e492b0(int *param_1,int param_2,float *param_3,undefined4 param_4,undefined4 param_5)

{
  float fVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  float10 fVar5;
  float10 fVar6;
  float fStack_30;
  float fStack_2c;
  undefined1 auStack_20 [28];
  
  uVar3 = 0;
  iVar2 = (**(code **)(*param_1 + 0x20))();
  fStack_2c = *param_3;
  fVar5 = (float10)(**(code **)(*param_1 + 0x4c))();
  fVar6 = (float10)(**(code **)(*param_1 + 0x54))();
  fStack_30 = (float)(fVar6 + (float10)(float)fVar5);
  if (fStack_30 < 1.5) {
    fStack_30 = 1.5;
  }
  iVar4 = 0;
  if (0 < iVar2) {
    do {
      (**(code **)(*param_1 + 0x24))(auStack_20,iVar4);
      fVar5 = (float10)thunk_FUN_00de19d0(auStack_20,param_4,param_5,0);
      fVar1 = (float)fVar5;
      if ((fVar1 <= fStack_30) && (fStack_2c < fVar1 == (fStack_2c == fVar1))) {
        *(int *)(param_2 + 0x10) = iVar4;
        uVar3 = 1;
        fStack_2c = fVar1;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar2);
  }
  *param_3 = fStack_2c;
  return uVar3;
}

// 00E49390  FUN_00e49390  size=78  [between]
void FUN_00e49390(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [16];
  undefined1 local_20 [28];
  
  (**(code **)(*param_1 + 0x24))(local_20,param_2);
  (**(code **)(*param_1 + 0x24))(auStack_38,param_3);
  thunk_FUN_00de19d0(param_4,auStack_30,&stack0xffffffc0,0);
  return;
}

// 00E493E0  FUN_00e493e0  size=319  [between]
void FUN_00e493e0(int *param_1,undefined4 param_2,undefined4 param_3,float *param_4)

{
  float fVar1;
  uint unaff_ESI;
  float10 fVar2;
  float *pfVar3;
  undefined1 *puVar4;
  float fVar5;
  float fVar6;
  ulonglong uVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  float fStack_40;
  float fStack_3c;
  float afStack_38 [2];
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  undefined1 local_20 [28];
  
  uVar7 = (ulonglong)unaff_ESI;
  puVar4 = local_20;
  (**(code **)(*param_1 + 0x24))(puVar4,param_2);
  pfVar3 = afStack_38;
  (**(code **)(*param_1 + 0x24))(pfVar3,param_3,puVar4,param_2,uVar7);
  fVar5 = fStack_40 - fStack_30;
  fVar1 = fStack_3c - fStack_2c;
  afStack_38[0] = afStack_38[0] - fStack_28;
  dVar9 = (double)(param_4[1] - fStack_2c);
  dVar8 = (double)(*param_4 - fStack_30);
  dVar10 = (double)(param_4[2] - fStack_28);
  fVar6 = (*param_4 - fStack_30) * fVar5 + (param_4[1] - fStack_2c) * fVar1 +
          afStack_38[0] * (param_4[2] - fStack_28);
  fVar2 = (float10)FUN_00fdef70(pfVar3,fVar1 * fVar1 + fVar5 * fVar5 + afStack_38[0] * afStack_38[0]
                                ,puVar4,fVar6,dVar8,dVar9,dVar10);
  fVar5 = (float)fVar2;
  fVar2 = (float10)FUN_00fdef70(pfVar3,(float)((float10)dVar10 * (float10)dVar10 +
                                              (float10)dVar9 * (float10)dVar9 +
                                              (float10)dVar8 * (float10)dVar8),fVar5);
  FUN_00ddbb50(fVar6 / ((float)fVar2 * fVar5));
  return;
}

// 00E49520  FUN_00e49520  size=231  [between]
void FUN_00e49520(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar1 = param_1 + 0x10;
  FUN_00f95f40(param_1,iVar1,param_3,0);
  iVar2 = param_1 + 0x20;
  FUN_00f95f40(iVar1,iVar2,param_3,0);
  iVar3 = param_1 + 0x30;
  FUN_00f95f40(iVar2,iVar3,param_3,0);
  FUN_00f95f40(iVar3,param_1,param_3,0);
  iVar4 = param_1 + 0x50;
  FUN_00f95f40(param_1 + 0x40,iVar4,param_2,0);
  iVar5 = param_1 + 0x60;
  FUN_00f95f40(iVar4,iVar5,param_2,0);
  iVar6 = param_1 + 0x70;
  FUN_00f95f40(iVar5,iVar6,param_2,0);
  FUN_00f95f40(iVar6,param_1 + 0x40,param_2,0);
  FUN_00f95f40(param_1,param_1 + 0x40,param_2,0);
  FUN_00f95f40(iVar1,iVar4,param_2,0);
  FUN_00f95f40(iVar2,iVar5,param_2,0);
  FUN_00f95f40(iVar3,iVar6,param_2,0);
  return;
}

// 00E49610  FUN_00e49610  size=272  [between]
int FUN_00e49610(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int extraout_ECX;
  int extraout_ECX_00;
  int iVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_1 + 0x1c);
  iVar1 = *(int *)(param_1 + 0x34);
  if (param_2 != 0) {
    if (iVar1 == iVar4) {
      if (((*(int *)(param_1 + 0x38) == *(int *)(param_1 + 0x20)) &&
          (*(int *)(param_1 + 0x3c) == *(int *)(param_1 + 0x24))) &&
         (*(int *)(param_1 + 0x40) == *(int *)(param_1 + 0x28))) {
        return -0xff6700;
      }
      if (((iVar1 == iVar4) && (*(int *)(param_1 + 0x38) == *(int *)(param_1 + 0x20))) &&
         (*(int *)(param_1 + 0x3c) == *(int *)(param_1 + 0x24))) {
        return -0xffab00;
      }
    }
    iVar4 = *(int *)(param_1 + 4);
    if (((iVar1 == iVar4) && (*(int *)(param_1 + 0x38) == *(int *)(param_1 + 8))) &&
       ((*(int *)(param_1 + 0x3c) == *(int *)(param_1 + 0xc) &&
        (*(int *)(param_1 + 0x40) == *(int *)(param_1 + 0x10))))) {
      return -0x340000;
    }
    iVar2 = FUN_00e46660();
    iVar3 = extraout_ECX;
    if (iVar2 != 0) {
      return -0x890000;
    }
LAB_00e496fb:
    if ((iVar1 == iVar4) && (*(int *)(iVar3 + 0x38) == *(int *)(iVar3 + 8))) {
      return -1;
    }
    return (-(uint)(iVar1 != iVar4) & 0xffffffde) - 0x222201;
  }
  if (((iVar1 != iVar4) ||
      ((((*(int *)(param_1 + 0x38) != *(int *)(param_1 + 0x20) ||
         (*(int *)(param_1 + 0x3c) != *(int *)(param_1 + 0x24))) ||
        (*(int *)(param_1 + 0x40) != *(int *)(param_1 + 0x28))) &&
       (((iVar1 != iVar4 || (*(int *)(param_1 + 0x38) != *(int *)(param_1 + 0x20))) ||
        (*(int *)(param_1 + 0x3c) != *(int *)(param_1 + 0x24))))))) &&
     (((iVar4 = *(int *)(param_1 + 4), iVar1 != iVar4 ||
       (*(int *)(param_1 + 0x38) != *(int *)(param_1 + 8))) ||
      ((*(int *)(param_1 + 0x3c) != *(int *)(param_1 + 0xc) ||
       (*(int *)(param_1 + 0x40) != *(int *)(param_1 + 0x10))))))) {
    iVar2 = FUN_00e46660();
    iVar3 = extraout_ECX_00;
    if (iVar2 == 0) goto LAB_00e496fb;
  }
  return -0x5b00;
}

// 00E49720  FUN_00e49720  size=63  [between]
undefined4 * __thiscall FUN_00e49720(undefined4 *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined1 local_20 [28];
  
  *param_1 = param_2;
  puVar1 = (undefined4 *)FUN_00e491c0(local_20,param_2);
  param_1[4] = *puVar1;
  param_1[5] = puVar1[1];
  param_1[6] = puVar1[2];
  param_1[7] = puVar1[3];
  return param_1;
}

// 00E49840  FUN_00e49840  size=26  [between]
void __fastcall FUN_00e49840(int param_1)

{
  FUN_00df3b40(*(undefined4 *)(param_1 + 4),1);
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}

// 00E49A00  FUN_00e49a00  size=92  [between]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00e49a00(undefined4 *param_1,undefined4 *param_2)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = _DAT_01dd97c0;
    param_1[1] = _DAT_01dd97c4;
    param_1[2] = _DAT_01dd97c8;
    param_1[3] = _DAT_01dd97cc;
  }
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = _DAT_01dd97d0;
    param_2[1] = _DAT_01dd97d4;
    param_2[2] = _DAT_01dd97d8;
    param_2[3] = _DAT_01dd97dc;
  }
  return DAT_01dd9514;
}

// 00E49BC0  FUN_00e49bc0  size=31  [between]
void __fastcall FUN_00e49bc0(int param_1)

{
  if ((*(byte *)(param_1 + 0x24) & 1) != 0) {
    if (*(int *)(param_1 + 4) != 0) {
      thunk_FUN_00df2950(*(int *)(param_1 + 4));
    }
    *(uint *)(param_1 + 0x24) = *(uint *)(param_1 + 0x24) & 0xfffffffe;
  }
  return;
}

// 00E49E50  FUN_00e49e50  size=46  [between]
void __fastcall FUN_00e49e50(int *param_1)

{
  if (*param_1 != 0) {
    FUN_00df39f0(*param_1);
    *param_1 = 0;
  }
  param_1[1] = 0;
  param_1[3] = 0;
  *(undefined2 *)(param_1 + 4) = 0;
  return;
}

// 00E49E80  FUN_00e49e80  size=85  [between]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00e49e80(void)

{
  FUN_00defba0(&DAT_01dd94f4,"Volume_SE");
  _DAT_01dd94f0 = _DAT_01dd94f4;
  FUN_00defba0(&DAT_01dd94ec,"Volume_VOICE");
  _DAT_01dd94e8 = _DAT_01dd94ec;
  FUN_00defba0(&DAT_01dd94e4,"Volume_ENV");
  _DAT_01dd94e0 = _DAT_01dd94e4;
  return;
}

// 00E49FE0  FUN_00e49fe0  size=47  [between]
void __fastcall FUN_00e49fe0(int param_1)

{
  int *piVar1;
  
  if (*(int *)(param_1 + 0x44) != 0) {
    FUN_00df3b40(*(int *)(param_1 + 0x44),1);
    *(undefined4 *)(param_1 + 0x44) = 0;
  }
  if (*(int *)(param_1 + 0x40) != 0) {
    piVar1 = (int *)(*(int *)(param_1 + 0x40) + 0xc);
    *piVar1 = *piVar1 + -1;
    *(undefined4 *)(param_1 + 0x40) = 0;
  }
  return;
}

// 00E4A010  FUN_00e4a010  size=138  [between]
bool __fastcall FUN_00e4a010(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar1 = *(uint *)(param_1 + 0x10) & 1;
  if (*(int *)(param_1 + 8) != 0) {
    iVar2 = FUN_00df4e10(*(int *)(param_1 + 8),**(undefined4 **)(param_1 + 0x40),uVar1);
    *(int *)(param_1 + 0x44) = iVar2;
    _strncpy_s((char *)(param_1 + 0x4c),0x28,*(char **)(param_1 + 8),0x27);
    *(char **)(param_1 + 0x74) = (char *)(param_1 + 0x4c);
    *(undefined1 *)(param_1 + 0x73) = 0;
    return iVar2 != 0;
  }
  iVar2 = FUN_00df4980(*(undefined4 *)(param_1 + 0xc),**(undefined4 **)(param_1 + 0x40),uVar1);
  *(int *)(param_1 + 0x44) = iVar2;
  *(undefined1 *)(param_1 + 0x4c) = 0;
  uVar3 = thunk_FUN_00df00f0(*(undefined4 *)(param_1 + 0xc));
  *(undefined4 *)(param_1 + 0x74) = uVar3;
  return iVar2 != 0;
}

// 00E4A0A0  FUN_00e4a0a0  size=27  [between]
void __fastcall FUN_00e4a0a0(int param_1)

{
  if ((*(byte *)(param_1 + 4) & 1) == 0) {
    FUN_00df3b60(*(undefined4 *)(param_1 + 0x44));
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 1;
  }
  return;
}

// 00E4A120  FUN_00e4a120  size=100  [between]
void __thiscall FUN_00e4a120(int param_1,undefined4 *param_2,int param_3,undefined4 param_4)

{
  Hw::Wwise::setObjectPosition(**(undefined4 **)(param_1 + 0x40),param_2);
  *(undefined4 *)(param_1 + 0x30) = *param_2;
  *(undefined4 *)(param_1 + 0x34) = param_2[1];
  *(undefined4 *)(param_1 + 0x38) = param_2[2];
  *(undefined4 *)(param_1 + 0x3c) = param_2[3];
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 2;
  if (param_3 != 0) {
    *(int *)(param_1 + 0x14) = param_3;
    *(undefined4 *)(param_1 + 0x18) = param_4;
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 4;
    return;
  }
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffb;
  return;
}

// 00E4A310  FUN_00e4a310  size=61  [between]
void __fastcall FUN_00e4a310(int param_1)

{
  int iVar1;
  
  if ((*(byte *)(param_1 + 0x24) & 1) == 0) {
    iVar1 = FUN_00df4920(0);
    *(int *)(param_1 + 0x3c) = iVar1;
    if (iVar1 != 0) {
      *(uint *)(param_1 + 0x24) = *(uint *)(param_1 + 0x24) | 1;
      *(undefined4 *)(param_1 + 0x60) = 0;
      *(undefined4 *)(param_1 + 100) = 0;
      *(undefined4 *)(param_1 + 0x68) = 0x3f800000;
      *(undefined4 *)(param_1 + 0x50) = 0;
      *(undefined4 *)(param_1 + 0x54) = 0;
      *(undefined4 *)(param_1 + 0x58) = 0;
      *(undefined4 *)(param_1 + 0x70) = 0;
    }
  }
  return;
}

// 00E4A350  FUN_00e4a350  size=79  [between]
void __fastcall FUN_00e4a350(int param_1)

{
  if ((*(byte *)(param_1 + 0x24) & 1) != 0) {
    FUN_00df3b40(*(undefined4 *)(param_1 + 0x40),1);
    FUN_00df3b40(*(undefined4 *)(param_1 + 0x44),1);
    FUN_00df39f0(*(undefined4 *)(param_1 + 0x3c));
    *(undefined4 *)(param_1 + 0x3c) = 0;
    *(undefined4 *)(param_1 + 0x40) = 0;
    *(undefined4 *)(param_1 + 0x44) = 0;
    if (*(int *)(param_1 + 4) != 0) {
      thunk_FUN_00df2950(*(int *)(param_1 + 4));
    }
    *(uint *)(param_1 + 0x24) = *(uint *)(param_1 + 0x24) & 0xcffffffe;
  }
  return;
}

// 00E4A3D0  FUN_00e4a3d0  size=278  [between]
void __thiscall FUN_00e4a3d0(int param_1,float *param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float *pfVar7;
  float *pfVar8;
  
  *param_2 = *param_3 - *param_4;
  param_2[1] = param_3[1] - param_4[1];
  param_2[2] = param_3[2] - param_4[2];
  param_2[3] = param_3[3] - param_4[3];
  if (((*param_2 == 0.0) && (param_2[1] == 0.0)) && (param_2[2] == 0.0)) {
    *param_2 = *(float *)(param_1 + 0x50) - *param_4;
    param_2[1] = *(float *)(param_1 + 0x54) - param_4[1];
    param_2[2] = *(float *)(param_1 + 0x58) - param_4[2];
    param_2[3] = *(float *)(param_1 + 0x5c) - param_4[3];
    if (((*param_2 == 0.0) && (param_2[1] == 0.0)) && (param_2[2] == 0.0)) {
      pfVar7 = (float *)FUN_00e9fe70();
      pfVar8 = (float *)FUN_00e9feb0();
      fVar1 = pfVar8[1];
      fVar2 = pfVar7[1];
      fVar3 = pfVar8[2];
      fVar4 = pfVar7[2];
      fVar5 = pfVar8[3];
      fVar6 = pfVar7[3];
      *param_2 = *pfVar8 - *pfVar7;
      param_2[1] = fVar1 - fVar2;
      param_2[2] = fVar3 - fVar4;
      param_2[3] = fVar5 - fVar6;
      return;
    }
  }
  return;
}

// 00E4A4F0  FUN_00e4a4f0  size=67  [between]
void __thiscall FUN_00e4a4f0(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x34);
  if (iVar1 != 0) {
    if (((*(byte *)(param_1 + 0x28) & 1) == 0) && (*(char *)(param_1 + 3) != '\x02')) {
      FUN_00df3c40(*(undefined4 *)(param_1 + 0x3c),iVar1,param_2,1);
      return;
    }
    FUN_00df3d00(iVar1,param_2,1);
  }
  return;
}

// 00E4A540  FUN_00e4a540  size=104  [between]
void __fastcall FUN_00e4a540(int param_1)

{
  int iVar1;
  
  if ((*(int *)(param_1 + 0x40) == 0) && ((*(uint *)(param_1 + 0x24) & 0x40000000) == 0)) {
    iVar1 = FUN_00df4980(*(undefined4 *)(param_1 + 0x2c),*(undefined4 *)(param_1 + 0x3c),0);
    *(int *)(param_1 + 0x40) = iVar1;
    if (iVar1 == 0) {
      *(uint *)(param_1 + 0x24) = *(uint *)(param_1 + 0x24) | 0x40000000;
    }
    else {
      FUN_00df3b60(iVar1);
      *(uint *)(param_1 + 0x24) = *(uint *)(param_1 + 0x24) | 0x10000000;
    }
    if (*(int *)(param_1 + 0x44) != 0) {
      FUN_00df3b40(*(undefined4 *)(param_1 + 0x44),0);
      *(undefined4 *)(param_1 + 0x44) = 0;
      *(uint *)(param_1 + 0x24) = *(uint *)(param_1 + 0x24) & 0xdfffffff;
    }
  }
  return;
}

// 00E4A5B0  FUN_00e4a5b0  size=48  [between]
void __fastcall FUN_00e4a5b0(int param_1)

{
  if (*(int *)(param_1 + 0x40) != 0) {
    FUN_00df3b80(*(int *)(param_1 + 0x40),0);
    FUN_00df3b40(*(undefined4 *)(param_1 + 0x40),1);
    *(undefined4 *)(param_1 + 0x40) = 0;
    *(uint *)(param_1 + 0x24) = *(uint *)(param_1 + 0x24) & 0xefffffff;
  }
  return;
}

// 00E4A5E0  FUN_00e4a5e0  size=104  [between]
void __fastcall FUN_00e4a5e0(int param_1)

{
  int iVar1;
  
  if ((*(int *)(param_1 + 0x44) == 0) && ((*(uint *)(param_1 + 0x24) & 0x80000000) == 0)) {
    iVar1 = FUN_00df4980(*(undefined4 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x3c),0);
    *(int *)(param_1 + 0x44) = iVar1;
    if (iVar1 == 0) {
      *(uint *)(param_1 + 0x24) = *(uint *)(param_1 + 0x24) | 0x80000000;
    }
    else {
      FUN_00df3b60(iVar1);
      *(uint *)(param_1 + 0x24) = *(uint *)(param_1 + 0x24) | 0x20000000;
    }
    if (*(int *)(param_1 + 0x40) != 0) {
      FUN_00df3b40(*(undefined4 *)(param_1 + 0x40),0);
      *(undefined4 *)(param_1 + 0x40) = 0;
      *(uint *)(param_1 + 0x24) = *(uint *)(param_1 + 0x24) & 0xefffffff;
    }
  }
  return;
}

// 00E4A650  FUN_00e4a650  size=48  [between]
void __fastcall FUN_00e4a650(int param_1)

{
  if (*(int *)(param_1 + 0x44) != 0) {
    FUN_00df3b80(*(int *)(param_1 + 0x44),0);
    FUN_00df3b40(*(undefined4 *)(param_1 + 0x44),1);
    *(undefined4 *)(param_1 + 0x44) = 0;
    *(uint *)(param_1 + 0x24) = *(uint *)(param_1 + 0x24) & 0xdfffffff;
  }
  return;
}

// 00E4A680  FUN_00e4a680  size=85  [between]
void __fastcall FUN_00e4a680(int param_1)

{
  float10 fVar1;
  
  if (*(int *)(param_1 + 0x2c) != 0) {
    fVar1 = (float10)FUN_00defac0(*(int *)(param_1 + 0x2c));
    if (0.0 < (float)fVar1) {
      *(uint *)(param_1 + 0x24) = *(uint *)(param_1 + 0x24) | 2;
      *(float *)(param_1 + 0x20) = (float)fVar1;
      return;
    }
  }
  *(uint *)(param_1 + 0x24) = *(uint *)(param_1 + 0x24) & 0xfffffffd;
  *(undefined4 *)(param_1 + 0x20) = 0x40a00000;
  return;
}

// 00E4A6F0  FUN_00e4a6f0  size=106  [between]
void FUN_00e4a6f0(char *param_1,rsize_t param_2,char *param_3)

{
  char *pcVar1;
  char *pcVar2;
  
  pcVar1 = _strrchr(param_3,0x2e);
  pcVar2 = _strrchr(param_3,0x2f);
  if ((pcVar2 != (char *)0x0) || (pcVar2 = _strrchr(param_3,0x5c), pcVar2 != (char *)0x0)) {
    param_3 = pcVar2 + 1;
  }
  if (pcVar1 != (char *)0x0) {
    _strncpy_s(param_1,param_2,param_3,(int)pcVar1 - (int)param_3);
    return;
  }
  _strcpy_s(param_1,param_2,param_3);
  return;
}

// 00E4A830  FUN_00e4a830  size=333  [between]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00e4a830(float *param_1,float *param_2,float *param_3)

{
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  _DAT_01dd99c0 = *param_1;
  _DAT_01dd99c4 = param_1[1];
  _DAT_01dd99c8 = param_1[2];
  _DAT_01dd99cc = param_1[3];
  _DAT_01dd99d0 = *param_2;
  _DAT_01dd99d4 = param_2[1];
  _DAT_01dd99d8 = param_2[2];
  _DAT_01dd99dc = param_2[3];
  _DAT_01dd99e0 = *param_3;
  _DAT_01dd99e4 = param_3[1];
  _DAT_01dd99e8 = param_3[2];
  _DAT_01dd99ec = param_3[3];
  FUN_00df3e00(0,&DAT_01dd99c0,&DAT_01dd99d0,&DAT_01dd99e0);
  FUN_00df3e00(1,&DAT_01dd99c0,&DAT_01dd99d0,&DAT_01dd99e0);
  if (DAT_01dd9540 != 0) {
    FUN_00f96100(param_1,0x3e800000,0xffff0000,0,0);
    local_20 = *param_1 + *param_2;
    local_1c = param_1[1] + param_2[1];
    local_18 = param_1[2] + param_2[2];
    local_14 = param_2[3] + param_1[3];
    FUN_00f95fa0(param_1,&local_20,0xffff0000,0);
    local_20 = *param_1 + *param_3;
    local_1c = param_1[1] + param_3[1];
    local_18 = param_3[2] + param_1[2];
    local_14 = param_3[3] + param_1[3];
    FUN_00f95fa0(param_1,&local_20,0xff0000ff,0);
  }
  return;
}

// 00E4AAB0  FUN_00e4aab0  size=500  [between]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00e4aab0(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  _DAT_01dd9580 = _DAT_01dd9550;
  _DAT_01dd9584 = _DAT_01dd9554;
  _DAT_01dd9588 = _DAT_01dd9558;
  _DAT_01dd958c = _DAT_01dd955c;
  _DAT_01dd9590 = _DAT_01dd9560;
  _DAT_01dd9594 = _DAT_01dd9564;
  _DAT_01dd9598 = _DAT_01dd9568;
  _DAT_01dd959c = _DAT_01dd956c;
  _DAT_01dd95a0 = _DAT_01dd9570;
  _DAT_01dd95a4 = _DAT_01dd9574;
  _DAT_01dd95a8 = _DAT_01dd9578;
  _DAT_01dd95ac = _DAT_01dd957c;
  _DAT_01dd9550 = _DAT_01dd99c0;
  _DAT_01dd9554 = _DAT_01dd99c4;
  _DAT_01dd9558 = _DAT_01dd99c8;
  _DAT_01dd955c = _DAT_01dd99cc;
  iVar1 = FUN_00932730();
  if (iVar1 != 0) {
    iVar1 = FUN_00a7c800();
    if (iVar1 != 0) {
      _DAT_01dd9560 = *(undefined4 *)(iVar1 + 0x40);
      _DAT_01dd9564 = *(undefined4 *)(iVar1 + 0x44);
      _DAT_01dd9568 = *(undefined4 *)(iVar1 + 0x48);
      _DAT_01dd956c = *(undefined4 *)(iVar1 + 0x4c);
      goto LAB_00e4abce;
    }
  }
  _DAT_01dd9560 = _DAT_01dd99c0;
  _DAT_01dd9564 = _DAT_01dd99c4;
  _DAT_01dd9568 = _DAT_01dd99c8;
  _DAT_01dd956c = _DAT_01dd99cc;
LAB_00e4abce:
  puVar2 = (undefined4 *)FUN_00e9fe70();
  _DAT_01dd9570 = *puVar2;
  _DAT_01dd9574 = puVar2[1];
  _DAT_01dd9578 = puVar2[2];
  _DAT_01dd957c = puVar2[3];
  if (DAT_01dd94fc == 0) {
    DAT_01dd94fc = 1;
    _DAT_01dd9580 = _DAT_01dd9550;
    _DAT_01dd9584 = _DAT_01dd9554;
    _DAT_01dd9588 = _DAT_01dd9558;
    _DAT_01dd958c = _DAT_01dd955c;
    _DAT_01dd9590 = _DAT_01dd9560;
    _DAT_01dd9594 = _DAT_01dd9564;
    _DAT_01dd9598 = _DAT_01dd9568;
    _DAT_01dd959c = _DAT_01dd956c;
    _DAT_01dd95a0 = *puVar2;
    _DAT_01dd95a4 = puVar2[1];
    _DAT_01dd95a8 = puVar2[2];
    _DAT_01dd95ac = puVar2[3];
  }
  return;
}

// 00E4AD10  FUN_00e4ad10  size=39  [between]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00e4ad10(undefined4 param_1,undefined4 param_2)

{
  _DAT_01dd9534 = 0;
  DAT_01dd9530 = DAT_01dd952c;
  _DAT_01dd9538 = param_2;
  DAT_01dd952c = param_1;
  return;
}

// 00E4AD80  thunk_FUN_00df48b0  size=5  [between]
undefined4 thunk_FUN_00df48b0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)FUN_00df3f10();
  if (puVar1 != (undefined4 *)0x0) {
    iVar2 = Hw::Wwise::BankWork::registData(param_1,param_2,param_3);
    if (iVar2 != 0) {
      return *puVar1;
    }
    FUN_00df2bc0(puVar1);
  }
  return 0;
}

// 00E4AD90  thunk_FUN_00df4dd0  size=5  [between]
void thunk_FUN_00df4dd0(int param_1)

{
  int iVar1;
  
  if (param_1 != 0) {
    for (iVar1 = (**(code **)(DAT_01dd4c68 + 0x1c))(0); iVar1 != 0;
        iVar1 = (**(code **)(**(int **)(iVar1 + -4) + 0x1c))(iVar1)) {
      if (*(int *)(iVar1 + 8) == param_1) {
        FUN_00df2bc0();
        return;
      }
    }
  }
  return;
}

// 00E4ADE0  thunk_FUN_00df48f0  size=5  [between]
undefined4 thunk_FUN_00df48f0(undefined4 param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)FUN_00df3f10();
  if (puVar1 != (undefined4 *)0x0) {
    iVar2 = FUN_00dece20(param_1);
    if (iVar2 != 0) {
      return *puVar1;
    }
    FUN_00df2bc0(puVar1);
  }
  return 0;
}

// 00E4AE00  thunk_FUN_00df48b0  size=5  [between]
undefined4 thunk_FUN_00df48b0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)FUN_00df3f10();
  if (puVar1 != (undefined4 *)0x0) {
    iVar2 = Hw::Wwise::BankWork::registData(param_1,param_2,param_3);
    if (iVar2 != 0) {
      return *puVar1;
    }
    FUN_00df2bc0(puVar1);
  }
  return 0;
}

// 00E4AE10  thunk_FUN_00df4dd0  size=5  [between]
void thunk_FUN_00df4dd0(int param_1)

{
  int iVar1;
  
  if (param_1 != 0) {
    for (iVar1 = (**(code **)(DAT_01dd4c68 + 0x1c))(0); iVar1 != 0;
        iVar1 = (**(code **)(**(int **)(iVar1 + -4) + 0x1c))(iVar1)) {
      if (*(int *)(iVar1 + 8) == param_1) {
        FUN_00df2bc0();
        return;
      }
    }
  }
  return;
}

// 00E4AE40  FUN_00e4ae40  size=31  [between]
void FUN_00e4ae40(void)

{
  DAT_01dd9518 = 1;
  DAT_01dd9510 = 1;
  DAT_01dd9500 = 1;
  FUN_00e464b0();
  return;
}

// 00E4AE60  FUN_00e4ae60  size=23  [between]
void FUN_00e4ae60(void)

{
  DAT_01dd9518 = 0;
  DAT_01dd9510 = 0;
  DAT_01dd9500 = 0;
  return;
}

// 00E4AEB0  FUN_00e4aeb0  size=11  [between]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00e4aeb0(undefined4 param_1)

{
  _DAT_01dd94f4 = param_1;
  return;
}

// 00E4AED0  FUN_00e4aed0  size=11  [between]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00e4aed0(undefined4 param_1)

{
  _DAT_01dd94ec = param_1;
  return;
}

// 00E4AEF0  FUN_00e4aef0  size=11  [between]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00e4aef0(undefined4 param_1)

{
  _DAT_01dd9508 = param_1;
  return;
}

// 00E4B150  FUN_00e4b150  size=347  [between]
undefined4 __thiscall FUN_00e4b150(int param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"DryOuterForce");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xd4))(iVar1,param_1);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"DryInnerForce");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xd4))(iVar1,param_1 + 4);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"EffectId");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0x104))(iVar1,param_1 + 8,4);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"OuterForce");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xfc))(iVar1,param_1 + 0x18,4);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"InnerForce");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xfc))(iVar1,param_1 + 0x28,4);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"Priority");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xdc))(iVar1,param_1 + 0x38);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"ControlId");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xec))(iVar1,param_1 + 0x3a);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"DistParamId");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xe8))(iVar1,param_1 + 0x3c);
  }
  return 1;
}

// 00E4B310  FUN_00e4b310  size=31  [between]
void __fastcall FUN_00e4b310(int param_1)

{
  if ((*(byte *)(param_1 + 0x24) & 1) != 0) {
    if (*(int *)(param_1 + 4) != 0) {
      thunk_FUN_00df2950(*(int *)(param_1 + 4));
    }
    *(uint *)(param_1 + 0x24) = *(uint *)(param_1 + 0x24) & 0xfffffffe;
  }
  return;
}

// 00E4B360  FUN_00e4b360  size=274  [between]
void __thiscall FUN_00e4b360(int param_1,int *param_2,int param_3)

{
  float fVar1;
  int *extraout_ECX;
  int iVar2;
  int *piVar3;
  float10 fVar4;
  
  fVar1 = *(float *)(param_3 + 0x20);
  piVar3 = (int *)(param_1 + 0x30);
  iVar2 = 4;
  do {
    if (*piVar3 != 0) {
      FUN_00e46b20(*piVar3,(1.0 - fVar1) * (float)piVar3[4] + (float)piVar3[8] * fVar1,
                   (int)*(short *)(param_1 + 0x60));
      param_2 = extraout_ECX;
    }
    piVar3 = piVar3 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  iVar2 = (int)*(short *)(param_1 + 0x60);
  fVar1 = (1.0 - fVar1) * *(float *)(param_1 + 0x28) + *(float *)(param_1 + 0x2c) * fVar1;
  if (*param_2 <= iVar2) {
    if (*param_2 < iVar2) {
      param_2[10] = 0;
      param_2[1] = 0x3f800000;
      *param_2 = iVar2;
    }
    if (fVar1 < (float)param_2[1]) {
      param_2[1] = (int)fVar1;
    }
  }
  iVar2 = *(int *)(param_1 + 100);
  if (iVar2 != 0) {
    fVar4 = (float10)FUN_00fdef70(1);
    FUN_00df3d00(iVar2,(float)fVar4);
  }
  return;
}

// 00E4B4F0  SoundArea::ShapeBox::vf08  size=341  [class]
void __thiscall SoundArea::ShapeBox::vf08(int param_1,float *param_2,float *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float10 fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  if (*(float *)(param_1 + 0x164) <= *(float *)(param_1 + 0x15c)) {
    fVar6 = *(float *)(param_1 + 0x164);
    uVar1 = *(undefined4 *)(param_1 + 0x15c);
  }
  else {
    fVar6 = *(float *)(param_1 + 0x15c);
    uVar1 = *(undefined4 *)(param_1 + 0x164);
  }
  if (*(float *)(param_1 + 0x170) <= *(float *)(param_1 + 0x16c)) {
    fVar5 = *(float *)(param_1 + 0x170);
    uVar2 = *(undefined4 *)(param_1 + 0x16c);
  }
  else {
    fVar5 = *(float *)(param_1 + 0x16c);
    uVar2 = *(undefined4 *)(param_1 + 0x170);
  }
  if (*(float *)(param_1 + 0x168) <= *(float *)(param_1 + 0x160)) {
    fVar7 = *(float *)(param_1 + 0x168);
    uVar3 = *(undefined4 *)(param_1 + 0x160);
  }
  else {
    fVar7 = *(float *)(param_1 + 0x160);
    uVar3 = *(undefined4 *)(param_1 + 0x168);
  }
  fVar4 = (float10)FUN_00fdef70(fVar5,fVar6,fVar5 * fVar5 + fVar6 * fVar6 + fVar7 * fVar7,uVar2,
                                uVar1,uVar3);
  *param_2 = (float)fVar4;
  fVar4 = (float10)FUN_00fdef70();
  *param_3 = (float)fVar4;
  return;
}

// 00E4B650  FUN_00e4b650  size=701  [between]
void __fastcall FUN_00e4b650(int param_1)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  float *pfVar4;
  int iVar5;
  float *pfVar6;
  float *pfVar7;
  uint uVar8;
  float10 fVar9;
  float local_38;
  float *local_34;
  float local_30;
  float local_2c;
  float *local_28;
  float local_24 [8];
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)&local_38;
  uVar8 = 1;
  pfVar6 = (float *)(param_1 + 0x138);
  local_34 = (float *)0x4;
  pfVar7 = local_24 + 1;
  do {
    uVar3 = uVar8 & 0x80000003;
    if ((int)uVar3 < 0) {
      uVar3 = (uVar3 - 1 | 0xfffffffc) + 1;
    }
    local_30 = *(float *)(param_1 + 0x134 + uVar3 * 8) - pfVar6[-1];
    local_2c = *(float *)(param_1 + 0x138 + uVar3 * 8) - *pfVar6;
    local_38 = local_30 * local_30 + local_2c * local_2c;
    local_28 = (float *)local_2c;
    fVar9 = (float10)FUN_00fdef70();
    uVar8 = uVar8 + 1;
    pfVar6 = pfVar6 + 2;
    local_34 = (float *)((int)local_34 + -1);
    pfVar7[-1] = local_30 / (float)fVar9;
    *pfVar7 = local_2c / (float)fVar9;
    pfVar7 = pfVar7 + 2;
  } while (local_34 != (float *)0x0);
  *(undefined4 *)(param_1 + 0x1a0) = 0;
  local_30 = 4.2039e-45;
  *(undefined4 *)(param_1 + 0x1a4) = 0;
  *(undefined4 *)(param_1 + 0x1a8) = 0;
  *(undefined4 *)(param_1 + 0x1ac) = 0x3f800000;
  local_2c = 5.60519e-45;
  pfVar6 = local_24 + 1;
  pfVar7 = (float *)(param_1 + 0x138);
  local_34 = (float *)(param_1 + 0x15c);
  do {
    uVar8 = (uint)local_30 & 0x80000003;
    if ((int)uVar8 < 0) {
      uVar8 = (uVar8 - 1 | 0xfffffffc) + 1;
    }
    local_28 = local_24 + uVar8 * 2 + 1;
    fVar1 = -local_24[uVar8 * 2] * pfVar6[-1] + -local_24[uVar8 * 2 + 1] * *pfVar6;
    local_38 = 1.0 - fVar1 * fVar1;
    fVar9 = (float10)FUN_00fdef70();
    pfVar4 = local_34 + 1;
    fVar1 = 1.0 / (float)fVar9;
    fVar2 = (pfVar6[-1] * *(float *)(param_1 + 0x15c + uVar8 * 4) * fVar1 + pfVar7[-1]) -
            local_24[uVar8 * 2] * *local_34 * fVar1;
    fVar1 = (*(float *)(param_1 + 0x15c + uVar8 * 4) * *pfVar6 * fVar1 + *pfVar7) -
            *local_34 * *local_28 * fVar1;
    pfVar7[0xf] = fVar2;
    local_30 = (float)((int)local_30 + 1);
    local_2c = (float)((int)local_2c + -1);
    pfVar7[0x10] = fVar1;
    fVar2 = *(float *)(param_1 + 0x1a0) + fVar2;
    *(float *)(param_1 + 0x1a0) = fVar2;
    fVar1 = *(float *)(param_1 + 0x1a8) + fVar1;
    *(float *)(param_1 + 0x1a8) = fVar1;
    pfVar6 = pfVar6 + 2;
    pfVar7 = pfVar7 + 2;
    local_34 = pfVar4;
  } while (local_2c != 0.0);
  iVar5 = 0;
  *(undefined4 *)(param_1 + 0x1b0) = 0;
  pfVar6 = (float *)(param_1 + 0x15c);
  *(float *)(param_1 + 0x1a0) = fVar2 * 0.25;
  *(float *)(param_1 + 0x1a8) = fVar1 * 0.25;
  local_38 = *(float *)(param_1 + 0x170) + *(float *)(param_1 + 0x154);
  *(float *)(param_1 + 0x1a4) =
       (*(float *)(param_1 + 0x158) - *(float *)(param_1 + 0x16c)) * 0.5 + local_38;
  do {
    if (*pfVar6 != 0.0) {
      *(undefined4 *)(param_1 + 0x1b0) = 1;
      __security_check_cookie(local_4 ^ (uint)&local_38);
      return;
    }
    iVar5 = iVar5 + 1;
    pfVar6 = pfVar6 + 1;
  } while (iVar5 < 6);
  __security_check_cookie(local_4 ^ (uint)&local_38);
  return;
}

// 00E4B910  SoundArea::ShapeBox::vf1C  size=5  [class]
undefined4 SoundArea::ShapeBox::vf1C(void)

{
  return 0;
}

// 00E4B920  SoundArea::ShapeBox::vf28  size=314  [class]
undefined4 __thiscall
SoundArea::ShapeBox::vf28(int param_1,float *param_2,float param_3,float param_4)

{
  float fVar1;
  
  *(undefined4 *)(param_1 + 0x120) = 0xffffffff;
  *(undefined4 *)(param_1 + 300) = 0;
  *(undefined4 *)(param_1 + 0x130) = 0;
  *(undefined4 *)(param_1 + 0x124) = 0;
  *(undefined4 *)(param_1 + 0x128) = 0;
  *(undefined4 *)(param_1 + 0x134) = 0;
  *(undefined4 *)(param_1 + 0x138) = 0;
  *(undefined4 *)(param_1 + 0x13c) = 0;
  *(undefined4 *)(param_1 + 0x140) = 0;
  *(undefined4 *)(param_1 + 0x144) = 0;
  *(undefined4 *)(param_1 + 0x148) = 0;
  *(undefined4 *)(param_1 + 0x14c) = 0;
  *(undefined4 *)(param_1 + 0x150) = 0;
  *(undefined4 *)(param_1 + 0x154) = 0;
  *(undefined4 *)(param_1 + 0x158) = 0;
  *(undefined4 *)(param_1 + 0x15c) = 0;
  *(undefined4 *)(param_1 + 0x160) = 0;
  *(undefined4 *)(param_1 + 0x164) = 0;
  *(undefined4 *)(param_1 + 0x168) = 0;
  *(undefined4 *)(param_1 + 0x16c) = 0;
  fVar1 = (param_3 + param_4) * 1.5;
  *(undefined4 *)(param_1 + 0x170) = 0;
  *(float *)(param_1 + 0x134) = *param_2 - fVar1;
  *(float *)(param_1 + 0x138) = param_2[2] - fVar1;
  *(float *)(param_1 + 0x13c) = *param_2 + fVar1;
  *(float *)(param_1 + 0x140) = param_2[2] - fVar1;
  *(float *)(param_1 + 0x144) = *param_2 + fVar1;
  *(float *)(param_1 + 0x148) = param_2[2] + fVar1;
  *(float *)(param_1 + 0x14c) = *param_2 - fVar1;
  *(float *)(param_1 + 0x150) = param_2[2] + fVar1;
  *(float *)(param_1 + 0x154) = param_2[1];
  *(float *)(param_1 + 0x158) = fVar1 + fVar1;
  *(undefined4 *)(param_1 + 0x15c) = 0;
  *(undefined4 *)(param_1 + 0x160) = 0;
  *(undefined4 *)(param_1 + 0x164) = 0;
  *(undefined4 *)(param_1 + 0x168) = 0;
  *(undefined4 *)(param_1 + 0x16c) = 0;
  *(undefined4 *)(param_1 + 0x170) = 0;
  FUN_00e4b650();
  return 1;
}

// 00E4BA60  SoundArea::ShapeBox::vf30  size=815  [class]
void __thiscall SoundArea::ShapeBox::vf30(int param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  float *pfVar4;
  int iVar5;
  float *pfVar6;
  float *pfVar7;
  uint uVar8;
  float10 fVar9;
  float local_38;
  float *local_34;
  float local_30;
  float local_2c;
  float *local_28;
  float local_24 [8];
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)&local_38;
  pfVar6 = (float *)(param_1 + 0x138);
  uVar8 = 1;
  *(float *)(param_1 + 0x134) = *(float *)(param_1 + 0x134) + *param_2;
  local_34 = (float *)0x4;
  *pfVar6 = param_2[2] + *pfVar6;
  *(float *)(param_1 + 0x13c) = *param_2 + *(float *)(param_1 + 0x13c);
  *(float *)(param_1 + 0x140) = *(float *)(param_1 + 0x140) + param_2[2];
  *(float *)(param_1 + 0x144) = *(float *)(param_1 + 0x144) + *param_2;
  *(float *)(param_1 + 0x148) = param_2[2] + *(float *)(param_1 + 0x148);
  *(float *)(param_1 + 0x14c) = *param_2 + *(float *)(param_1 + 0x14c);
  *(float *)(param_1 + 0x150) = *(float *)(param_1 + 0x150) + param_2[2];
  *(float *)(param_1 + 0x154) = param_2[1] + *(float *)(param_1 + 0x154);
  pfVar7 = local_24 + 1;
  do {
    uVar3 = uVar8 & 0x80000003;
    if ((int)uVar3 < 0) {
      uVar3 = (uVar3 - 1 | 0xfffffffc) + 1;
    }
    local_30 = *(float *)(param_1 + 0x134 + uVar3 * 8) - pfVar6[-1];
    local_2c = *(float *)(param_1 + 0x138 + uVar3 * 8) - *pfVar6;
    local_38 = local_30 * local_30 + local_2c * local_2c;
    local_28 = (float *)local_2c;
    fVar9 = (float10)FUN_00fdef70();
    uVar8 = uVar8 + 1;
    pfVar6 = pfVar6 + 2;
    local_34 = (float *)((int)local_34 + -1);
    pfVar7[-1] = local_30 / (float)fVar9;
    *pfVar7 = local_2c / (float)fVar9;
    pfVar7 = pfVar7 + 2;
  } while (local_34 != (float *)0x0);
  *(undefined4 *)(param_1 + 0x1a0) = 0;
  local_30 = 4.2039e-45;
  *(undefined4 *)(param_1 + 0x1a4) = 0;
  *(undefined4 *)(param_1 + 0x1a8) = 0;
  *(undefined4 *)(param_1 + 0x1ac) = 0x3f800000;
  local_2c = 5.60519e-45;
  pfVar6 = local_24 + 1;
  pfVar7 = (float *)(param_1 + 0x138);
  local_34 = (float *)(param_1 + 0x15c);
  do {
    uVar8 = (uint)local_30 & 0x80000003;
    if ((int)uVar8 < 0) {
      uVar8 = (uVar8 - 1 | 0xfffffffc) + 1;
    }
    local_28 = local_24 + uVar8 * 2 + 1;
    fVar1 = -local_24[uVar8 * 2] * pfVar6[-1] + -local_24[uVar8 * 2 + 1] * *pfVar6;
    local_38 = 1.0 - fVar1 * fVar1;
    fVar9 = (float10)FUN_00fdef70();
    pfVar4 = local_34 + 1;
    fVar1 = 1.0 / (float)fVar9;
    fVar2 = (pfVar6[-1] * *(float *)(param_1 + 0x15c + uVar8 * 4) * fVar1 + pfVar7[-1]) -
            local_24[uVar8 * 2] * *local_34 * fVar1;
    fVar1 = (*(float *)(param_1 + 0x15c + uVar8 * 4) * *pfVar6 * fVar1 + *pfVar7) -
            *local_34 * *local_28 * fVar1;
    pfVar7[0xf] = fVar2;
    local_30 = (float)((int)local_30 + 1);
    local_2c = (float)((int)local_2c + -1);
    pfVar7[0x10] = fVar1;
    fVar2 = *(float *)(param_1 + 0x1a0) + fVar2;
    *(float *)(param_1 + 0x1a0) = fVar2;
    fVar1 = *(float *)(param_1 + 0x1a8) + fVar1;
    *(float *)(param_1 + 0x1a8) = fVar1;
    pfVar6 = pfVar6 + 2;
    pfVar7 = pfVar7 + 2;
    local_34 = pfVar4;
  } while (local_2c != 0.0);
  iVar5 = 0;
  *(undefined4 *)(param_1 + 0x1b0) = 0;
  pfVar6 = (float *)(param_1 + 0x15c);
  *(float *)(param_1 + 0x1a0) = fVar2 * 0.25;
  *(float *)(param_1 + 0x1a8) = fVar1 * 0.25;
  local_38 = *(float *)(param_1 + 0x170) + *(float *)(param_1 + 0x154);
  *(float *)(param_1 + 0x1a4) =
       (*(float *)(param_1 + 0x158) - *(float *)(param_1 + 0x16c)) * 0.5 + local_38;
  do {
    if (*pfVar6 != 0.0) {
      *(undefined4 *)(param_1 + 0x1b0) = 1;
      break;
    }
    iVar5 = iVar5 + 1;
    pfVar6 = pfVar6 + 1;
  } while (iVar5 < 6);
  __security_check_cookie(local_4 ^ (uint)&local_38);
  return;
}

// 00E4BD90  SoundArea::ShapeBox::vf60  size=23  [class]
void __thiscall SoundArea::ShapeBox::vf60(int param_1,int param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0x15c + param_2 * 4) = param_3;
  FUN_00e4b650();
  return;
}

// 00E4BDB0  FUN_00e4bdb0  size=221  [between]
undefined4 __thiscall FUN_00e4bdb0(int param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"CheckPosType");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xf0))(iVar1,param_1);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"RangeType");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xf0))(iVar1,param_1 + 1);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"OffsetType");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xf0))(iVar1,param_1 + 2);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"WorkType");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xf0))(iVar1,param_1 + 3);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"SyncStateGroup");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xe8))(iVar1,param_1 + 4);
  }
  return 1;
}

// 00E4BED0  FUN_00e4bed0  size=254  [between]
undefined4 __thiscall FUN_00e4bed0(int *param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"ParentObjId");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xcc))(iVar1,param_1);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"ParentUniqueId");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xe8))(iVar1,param_1 + 1);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"ParentPartsNo");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xd8))(iVar1,param_1 + 2);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,&DAT_016c3cc4);
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xd4))(iVar1,param_1 + 3);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,&DAT_016b1e20);
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xd4))(iVar1,param_1 + 4);
  }
  if (*param_1 == -0x10101011) {
    *param_1 = -1;
  }
  if (param_1[1] == -0x10101011) {
    param_1[1] = 0;
  }
  if (param_1[2] == -0x10101011) {
    param_1[2] = 0;
  }
  return 1;
}

// 00E4BFD0  FUN_00e4bfd0  size=271  [between]
undefined4 __thiscall FUN_00e4bfd0(int param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  
  FUN_00e4bed0(param_2,param_3);
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"Point.x");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xd4))(iVar1,param_1 + 0x14);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"Point.y");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xd4))(iVar1,param_1 + 0x18);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"Point.z");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xd4))(iVar1,param_1 + 0x1c);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"Height");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xd4))(iVar1,param_1 + 0x20);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"AttenuationRange");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xd4))(iVar1,param_1 + 0x24);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"AttenuationOffset");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xd4))(iVar1,param_1 + 0x28);
  }
  return 1;
}

// 00E4C0E0  FUN_00e4c0e0  size=151  [between]
undefined4 __thiscall FUN_00e4c0e0(int param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  
  FUN_00e4bed0(param_2,param_3);
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"Height");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xd4))(iVar1,param_1 + 0x14);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"AttenuationRange");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xd4))(iVar1,param_1 + 0x18);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"AttenuationOffset");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xd4))(iVar1,param_1 + 0x1c);
  }
  return 1;
}

// 00E4C180  FUN_00e4c180  size=195  [between]
undefined4 __thiscall FUN_00e4c180(int param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  
  FUN_00e4bed0(param_2,param_3);
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"PointArray");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xfc))(iVar1,param_1 + 0x14,8);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"PointY");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xd4))(iVar1,param_1 + 0x34);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"Height");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xd4))(iVar1,param_1 + 0x38);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"DepthArray");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xfc))(iVar1,param_1 + 0x3c,6);
  }
  return 1;
}

// 00E4C250  FUN_00e4c250  size=191  [between]
undefined4 __thiscall FUN_00e4c250(int param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  
  FUN_00e4bed0(param_2,param_3);
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"PointY");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xd4))(iVar1,param_1 + 0x14);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"Height");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xd4))(iVar1,param_1 + 0x18);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"AttenuationRange");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xd4))(iVar1,param_1 + 0x1c);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"AttenuationOffset");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xd4))(iVar1,param_1 + 0x20);
  }
  return 1;
}

// 00E4C3E0  FUN_00e4c3e0  size=50  [between]
void __fastcall FUN_00e4c3e0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 0x18);
  iVar3 = 0;
  if (0 < iVar1) {
    do {
      puVar2 = *(undefined4 **)(*(int *)(param_1 + 0x10) + iVar3 * 4);
      if (puVar2 != (undefined4 *)0x0) {
        (**(code **)*puVar2)(1);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar1);
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
  return;
}

// 00E4C440  FUN_00e4c440  size=169  [between]
void __thiscall FUN_00e4c440(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  float unaff_EBX;
  float unaff_ESI;
  int iVar3;
  float *unaff_retaddr;
  float local_10;
  float local_c [2];
  float *pfStack_4;
  
  iVar1 = *(int *)(param_1 + 0x18);
  if (iVar1 != 0) {
    puVar2 = *(undefined4 **)(param_1 + 0x10);
    (**(code **)(*(int *)*puVar2 + 8))(&local_10,local_c);
    iVar3 = 1;
    if (1 < iVar1) {
      do {
        (**(code **)(*(int *)puVar2[iVar3] + 8))(&local_10,local_c);
        if (local_10 < unaff_ESI) {
          unaff_ESI = local_10;
        }
        if (unaff_EBX < local_c[0]) {
          unaff_EBX = local_c[0];
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < iVar1);
    }
    *pfStack_4 = unaff_ESI;
    *unaff_retaddr = unaff_EBX;
    return;
  }
  *param_2 = 0;
  *param_3 = 0;
  return;
}

// 00E4C4F0  FUN_00e4c4f0  size=130  [between]
void __thiscall
FUN_00e4c4f0(int param_1,int *param_2,int *param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_c;
  int local_8;
  int local_4;
  
  local_4 = *(int *)(param_1 + 0x10);
  iVar1 = *(int *)(param_1 + 0x18);
  iVar4 = 0;
  iVar2 = 0;
  iVar3 = 0;
  if (0 < iVar1) {
    do {
      local_c = 0;
      local_8 = 0;
      (**(code **)(**(int **)(local_4 + iVar3 * 4) + 0xc))(&local_c,&local_8,param_4,param_5);
      iVar4 = iVar4 + local_c;
      iVar2 = iVar2 + local_8;
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar1);
    *param_2 = iVar4;
    *param_3 = iVar2;
    return;
  }
  *param_2 = 0;
  *param_3 = 0;
  return;
}

// 00E4C580  FUN_00e4c580  size=61  [between]
undefined4 __thiscall FUN_00e4c580(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = *(int *)(param_1 + 0x10);
  iVar2 = *(int *)(param_1 + 0x18);
  iVar4 = 0;
  if (0 < iVar2) {
    do {
      iVar3 = (**(code **)(**(int **)(iVar1 + iVar4 * 4) + 0x10))(param_2);
      if (iVar3 != 0) {
        return 1;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar2);
  }
  return 0;
}

// 00E4C6F0  FUN_00e4c6f0  size=78  [between]
float10 __fastcall FUN_00e4c6f0(int param_1)

{
  int iVar1;
  int iVar2;
  float10 fVar3;
  
  if (*(char *)(param_1 + 1) == '\x01') {
    return (float10)*(float *)(param_1 + 0x20);
  }
  iVar1 = *(int *)(param_1 + 0x18);
  iVar2 = 0;
  if (0 < iVar1) {
    do {
      fVar3 = (float10)(**(code **)(**(int **)(*(int *)(param_1 + 0x10) + iVar2 * 4) + 0x4c))();
      if ((float10)0 <= (float10)(float)fVar3) {
        return (float10)(float)fVar3;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar1);
  }
  return (float10)*(float *)(param_1 + 0x20);
}

// 00E4C810  FUN_00e4c810  size=80  [between]
float10 __fastcall FUN_00e4c810(int param_1)

{
  int iVar1;
  int iVar2;
  float10 fVar3;
  
  if (*(char *)(param_1 + 1) == '\x01') {
    return (float10)0;
  }
  iVar1 = *(int *)(param_1 + 0x18);
  iVar2 = 0;
  if (0 < iVar1) {
    do {
      fVar3 = (float10)(**(code **)(**(int **)(*(int *)(param_1 + 0x10) + iVar2 * 4) + 0x54))();
      if ((float10)0 <= (float10)(float)fVar3) {
        return (float10)(float)fVar3;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar1);
  }
  return (float10)0;
}

// 00E4C960  SoundArea::ShapeLine::vf0C  size=1088  [class]
void __thiscall
SoundArea::ShapeLine::vf0C(int param_1,int *param_2,int *param_3,float *param_4,float *param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  bool bVar5;
  int iStack_124;
  float local_120;
  float local_11c;
  float local_118;
  float local_114;
  float local_110;
  float fStack_10c;
  float fStack_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  int *local_e8;
  float fStack_e4;
  int *local_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_80;
  float fStack_78;
  float fStack_74;
  float fStack_6c;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  undefined4 uStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)&iStack_124;
  local_e0 = param_2;
  local_e8 = param_3;
  if (*(int *)(param_1 + 0x118) == 0) {
    local_120 = *param_4;
    local_11c = param_4[1];
    local_118 = param_4[2];
    local_114 = param_4[3];
  }
  else {
    D3DXVec3TransformNormal(&local_120,param_4,param_1 + 0xd0);
    local_120 = *(float *)(param_1 + 0x100) + local_120;
    local_11c = *(float *)(param_1 + 0x104) + local_11c;
    local_118 = *(float *)(param_1 + 0x108) + local_118;
  }
  if (*(int *)(param_1 + 0x118) == 0) {
    local_110 = *param_5;
    fStack_10c = param_5[1];
    fStack_108 = param_5[2];
    fStack_104 = param_5[3];
  }
  else {
    D3DXVec3TransformNormal(&local_110,param_5,param_1 + 0xd0);
    local_110 = *(float *)(param_1 + 0x100) + local_110;
    fStack_10c = *(float *)(param_1 + 0x104) + fStack_10c;
    fStack_108 = *(float *)(param_1 + 0x108) + fStack_108;
  }
  fStack_6c = *(float *)(param_1 + 0x134);
  iVar3 = *(int *)(param_1 + 0x14c) + -1;
  iVar2 = 0;
  iStack_124 = 0;
  if (0 < iVar3) {
    pfVar4 = (float *)(*(int *)(param_1 + 0x144) + 0x14);
    fStack_e4 = fStack_64 + 1.0;
    do {
      fStack_90 = pfVar4[-5];
      fStack_8c = pfVar4[-4];
      fStack_88 = pfVar4[-3];
      fStack_100 = pfVar4[-2];
      fStack_fc = pfVar4[-1];
      fStack_f8 = *pfVar4;
      fStack_d0 = fStack_100 - fStack_90;
      fStack_cc = fStack_fc - fStack_8c;
      fStack_c8 = fStack_f8 - fStack_88;
      fStack_bc = fStack_cc * 0.0 - fStack_c8 * fStack_6c;
      fStack_b8 = fStack_c8 * 0.0 - fStack_d0 * 0.0;
      fStack_b4 = fStack_6c * fStack_d0 - fStack_cc * 0.0;
      uStack_44 = 0x3f800000;
      fStack_dc = fStack_90 + 0.0;
      fStack_d8 = fStack_8c + fStack_6c;
      fStack_d4 = fStack_88 + 0.0;
      fStack_94 = fStack_e4;
      fStack_34 = fStack_e4;
      fStack_24 = 1.0;
      fStack_a0 = fStack_dc;
      fStack_98 = fStack_d4;
      fStack_60 = fStack_bc;
      fStack_5c = fStack_b8;
      fStack_58 = fStack_b4;
      fStack_50 = fStack_90;
      fStack_4c = fStack_8c;
      fStack_48 = fStack_88;
      fStack_40 = fStack_dc;
      fStack_3c = fStack_d8;
      fStack_38 = fStack_d4;
      fStack_30 = fStack_100;
      fStack_2c = fStack_fc;
      fStack_28 = fStack_f8;
      iVar1 = FUN_00e48e90(&local_120,&local_110,&fStack_50,&fStack_60);
      bVar5 = false;
      if (iVar1 == 0) {
        fStack_50 = fStack_100;
        fStack_4c = fStack_fc;
        fStack_48 = fStack_f8;
        uStack_44 = 0x3f800000;
        fStack_80 = fStack_dc;
        fStack_78 = fStack_d4;
        fStack_74 = fStack_e4;
        fStack_40 = fStack_dc;
        fStack_3c = fStack_d8;
        fStack_38 = fStack_d4;
        fStack_34 = fStack_e4;
        fStack_b0 = fStack_100 + 0.0;
        fStack_ac = fStack_6c + fStack_fc;
        fStack_a8 = fStack_f8 + 0.0;
        fStack_a4 = fStack_e4;
        fStack_24 = fStack_e4;
        fStack_30 = fStack_b0;
        fStack_2c = fStack_ac;
        fStack_28 = fStack_a8;
        iVar1 = FUN_00e48e90(&local_120,&local_110,&fStack_50,&fStack_60);
        bVar5 = iVar1 == 0;
      }
      if (bVar5 || iVar1 < 0) {
        if (iVar1 < 0) {
          iVar2 = iVar2 + 1;
        }
      }
      else {
        iStack_124 = iStack_124 + 1;
      }
      pfVar4 = pfVar4 + 3;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    *local_e0 = iStack_124;
    *local_e8 = iVar2;
    __security_check_cookie(local_14 ^ (uint)&iStack_124);
    return;
  }
  *local_e0 = 0;
  *local_e8 = 0;
  __security_check_cookie(local_14 ^ (uint)&iStack_124);
  return;
}

// 00E4CDA0  SoundArea::ShapeLine::vf20  size=9  [class]
int __fastcall SoundArea::ShapeLine::vf20(int param_1)

{
  return *(int *)(param_1 + 0x14c) * 2;
}

// 00E4CDB0  SoundArea::ShapeLine::vf24  size=103  [class]
undefined4 __thiscall SoundArea::ShapeLine::vf24(int param_1,undefined4 *param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  
  if (((-1 < (int)param_3) && (iVar2 = (int)param_3 / 2, -1 < iVar2)) &&
     (iVar2 < *(int *)(param_1 + 0x14c))) {
    iVar1 = *(int *)(param_1 + 0x144) + iVar2 * 0xc;
    *param_2 = *(undefined4 *)(*(int *)(param_1 + 0x144) + iVar2 * 0xc);
    param_2[1] = *(undefined4 *)(iVar1 + 4);
    param_2[2] = *(undefined4 *)(iVar1 + 8);
    param_2[3] = 0x3f800000;
    if ((param_3 & 1) != 0) {
      param_2[1] = *(float *)(param_1 + 0x134) + (float)param_2[1];
    }
    FUN_00e47060(param_2,param_2);
    return 1;
  }
  return 0;
}

// 00E4CE20  SoundArea::ShapeLine::vf30  size=337  [class]
void __thiscall SoundArea::ShapeLine::vf30(int param_1,float *param_2)

{
  float *pfVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar3 = *(int *)(param_1 + 0x14c);
  iVar4 = 0;
  if (3 < iVar3) {
    iVar2 = 0;
    iVar5 = (iVar3 - 4U >> 2) + 1;
    iVar4 = iVar5 * 4;
    do {
      *(float *)(*(int *)(param_1 + 0x144) + iVar2) =
           *param_2 + *(float *)(*(int *)(param_1 + 0x144) + iVar2);
      pfVar1 = (float *)(iVar2 + 4 + *(int *)(param_1 + 0x144));
      *pfVar1 = param_2[1] + *pfVar1;
      pfVar1 = (float *)(iVar2 + 8 + *(int *)(param_1 + 0x144));
      *pfVar1 = param_2[2] + *pfVar1;
      pfVar1 = (float *)(iVar2 + 0xc + *(int *)(param_1 + 0x144));
      *pfVar1 = *param_2 + *pfVar1;
      pfVar1 = (float *)(iVar2 + 0x10 + *(int *)(param_1 + 0x144));
      *pfVar1 = param_2[1] + *pfVar1;
      pfVar1 = (float *)(iVar2 + 0x14 + *(int *)(param_1 + 0x144));
      *pfVar1 = param_2[2] + *pfVar1;
      *(float *)(iVar2 + 0x18 + *(int *)(param_1 + 0x144)) =
           *(float *)(iVar2 + 0x18 + *(int *)(param_1 + 0x144)) + *param_2;
      pfVar1 = (float *)(iVar2 + 0x1c + *(int *)(param_1 + 0x144));
      *pfVar1 = param_2[1] + *pfVar1;
      pfVar1 = (float *)(iVar2 + 0x20 + *(int *)(param_1 + 0x144));
      *pfVar1 = param_2[2] + *pfVar1;
      pfVar1 = (float *)(iVar2 + 0x24 + *(int *)(param_1 + 0x144));
      *pfVar1 = *param_2 + *pfVar1;
      pfVar1 = (float *)(iVar2 + 0x28 + *(int *)(param_1 + 0x144));
      *pfVar1 = param_2[1] + *pfVar1;
      pfVar1 = (float *)(iVar2 + 0x2c + *(int *)(param_1 + 0x144));
      iVar2 = iVar2 + 0x30;
      iVar5 = iVar5 + -1;
      *pfVar1 = param_2[2] + *pfVar1;
    } while (iVar5 != 0);
  }
  if (iVar4 < iVar3) {
    iVar2 = iVar4 * 0xc;
    iVar3 = iVar3 - iVar4;
    do {
      *(float *)(*(int *)(param_1 + 0x144) + iVar2) =
           *(float *)(*(int *)(param_1 + 0x144) + iVar2) + *param_2;
      pfVar1 = (float *)(iVar2 + 4 + *(int *)(param_1 + 0x144));
      *pfVar1 = param_2[1] + *pfVar1;
      iVar4 = iVar2 + 8;
      iVar5 = iVar2 + 8;
      iVar2 = iVar2 + 0xc;
      iVar3 = iVar3 + -1;
      *(float *)(iVar5 + *(int *)(param_1 + 0x144)) =
           *(float *)(iVar4 + *(int *)(param_1 + 0x144)) + param_2[2];
    } while (iVar3 != 0);
  }
  return;
}

// 00E4CF80  FUN_00e4cf80  size=1068  [between]
void __thiscall FUN_00e4cf80(int param_1,int param_2,float *param_3)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  int iVar11;
  int iVar12;
  byte *pbVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  uint uVar17;
  byte *pbVar18;
  float10 fVar19;
  float local_50;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  fVar4 = *(float *)(param_1 + 0x140);
  iVar11 = *(int *)(param_1 + 0x148);
  fVar5 = *(float *)(param_1 + 0x13c);
  fVar14 = fVar5 + fVar4;
  iVar12 = *(int *)(param_1 + 0x15c);
  fVar6 = *(float *)(param_1 + 0x134);
  fVar7 = *(float *)(param_1 + 0x138);
  pbVar13 = *(byte **)(param_1 + 0x150);
  fVar8 = *param_3;
  fVar9 = param_3[2];
  if (pbVar13 == (byte *)0x0) {
    return;
  }
  pbVar18 = (byte *)(iVar11 + 1);
  do {
    uVar17 = (uint)pbVar18[-1];
    pfVar1 = (float *)(iVar12 + uVar17 * 8);
    pfVar2 = (float *)(iVar12 + (uint)*pbVar18 * 8);
    pfVar3 = (float *)(iVar12 + (uint)pbVar18[1] * 8);
    fVar16 = (*(float *)(iVar12 + 4 + (uint)*pbVar18 * 8) - *(float *)(iVar12 + 4 + uVar17 * 8)) *
             (fVar8 - *(float *)(iVar12 + uVar17 * 8)) - (fVar9 - pfVar1[1]) * (*pfVar2 - *pfVar1);
    fVar15 = (fVar8 - *pfVar2) * (pfVar3[1] - pfVar2[1]) - (*pfVar3 - *pfVar2) * (fVar9 - pfVar2[1])
    ;
    fVar10 = (pfVar1[1] - pfVar3[1]) * (fVar8 - *pfVar3) - (*pfVar1 - *pfVar3) * (fVar9 - pfVar3[1])
    ;
    if ((((fVar16 < 0.0 != (fVar16 == 0.0)) && (fVar15 < 0.0 != (fVar15 == 0.0))) &&
        (fVar10 < 0.0 != (fVar10 == 0.0))) ||
       (((0.0 <= fVar16 && (0.0 <= fVar15)) && (0.0 <= fVar10)))) {
      local_30 = *param_3;
      fVar10 = param_3[1];
      local_28 = param_3[2];
      local_24 = param_3[3];
      local_2c = fVar7 + fVar6;
      if ((fVar10 <= local_2c) && (local_2c = fVar10, fVar10 < fVar6)) {
        local_2c = fVar6;
      }
      local_20 = local_30 - *param_3;
      local_1c = local_2c - param_3[1];
      local_18 = local_28 - param_3[2];
      fVar19 = (float10)FUN_00fdef70();
      fVar10 = (float)fVar19;
      if ((fVar14 < fVar10 == (fVar14 == fVar10)) &&
         (local_50 = 1.0 - (fVar10 - fVar4) / fVar5, local_50 < 0.0 == (local_50 == 0.0))) {
        if (1.0 < local_50) {
          local_50 = 1.0;
        }
        if ((NAN(fVar10) || NAN(fVar4)) || fVar10 < fVar4 == (fVar10 == fVar4)) {
          if (0.0 < fVar4) {
            local_20 = *param_3 - local_30;
            local_1c = param_3[1] - local_2c;
            local_18 = param_3[2] - local_28;
            local_14 = param_3[3] - local_24;
            fVar5 = local_20 * local_20 + local_1c * local_1c + local_18 * local_18;
            if (fVar5 < 0.0 == (fVar5 == 0.0)) {
              FUN_00ddf460(&local_20,&local_20);
            }
            else {
              FUN_00dd5650(&DAT_0163d0ac);
              local_20 = 0.0;
              local_1c = 1.0;
              local_18 = 0.0;
            }
            local_30 = fVar4 * local_20 + local_30;
            local_2c = local_1c * fVar4 + local_2c;
            local_28 = local_18 * fVar4 + local_28;
            local_24 = fVar4 * local_14 + local_24;
          }
        }
        else {
          local_30 = *param_3;
          local_2c = param_3[1];
          local_28 = param_3[2];
          local_24 = param_3[3];
        }
        *(float *)(param_2 + 0x10) = local_30;
        *(float *)(param_2 + 0x14) = local_2c;
        *(float *)(param_2 + 0x18) = local_28;
        *(float *)(param_2 + 0x1c) = local_24;
        *(float *)(param_2 + 0x20) = local_50;
        return;
      }
    }
    pbVar18 = pbVar18 + 3;
    if (pbVar13 <= pbVar18 + (-1 - iVar11)) {
      return;
    }
  } while( true );
}

// 00E4D3B0  FUN_00e4d3b0  size=301  [between]
void __fastcall FUN_00e4d3b0(int param_1)

{
  int iVar1;
  int iVar2;
  float *pfVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = *(int *)(param_1 + 0x164);
  *(undefined4 *)(param_1 + 0x180) = 0;
  iVar4 = 0;
  *(undefined4 *)(param_1 + 0x188) = 0;
  iVar2 = *(int *)(param_1 + 0x15c);
  if (3 < iVar1) {
    iVar5 = (iVar1 - 4U >> 2) + 1;
    iVar4 = iVar5 * 4;
    pfVar3 = (float *)(iVar2 + 8);
    do {
      iVar5 = iVar5 + -1;
      *(float *)(param_1 + 0x180) = pfVar3[-2] + *(float *)(param_1 + 0x180);
      *(float *)(param_1 + 0x188) = pfVar3[-1] + *(float *)(param_1 + 0x188);
      *(float *)(param_1 + 0x180) = *pfVar3 + *(float *)(param_1 + 0x180);
      *(float *)(param_1 + 0x188) = pfVar3[1] + *(float *)(param_1 + 0x188);
      *(float *)(param_1 + 0x180) = pfVar3[2] + *(float *)(param_1 + 0x180);
      *(float *)(param_1 + 0x188) = pfVar3[3] + *(float *)(param_1 + 0x188);
      *(float *)(param_1 + 0x180) = pfVar3[4] + *(float *)(param_1 + 0x180);
      *(float *)(param_1 + 0x188) = pfVar3[5] + *(float *)(param_1 + 0x188);
      pfVar3 = pfVar3 + 8;
    } while (iVar5 != 0);
  }
  while (iVar4 < iVar1) {
    iVar5 = iVar4 * 8;
    iVar4 = iVar4 + 1;
    *(float *)(param_1 + 0x180) = *(float *)(iVar2 + iVar5) + *(float *)(param_1 + 0x180);
    *(float *)(param_1 + 0x188) = *(float *)(iVar2 + -4 + iVar4 * 8) + *(float *)(param_1 + 0x188);
  }
  *(float *)(param_1 + 0x180) = *(float *)(param_1 + 0x180) / (float)*(int *)(param_1 + 0x164);
  *(float *)(param_1 + 0x184) = *(float *)(param_1 + 0x138) * 0.5 + *(float *)(param_1 + 0x134);
  *(float *)(param_1 + 0x188) = *(float *)(param_1 + 0x188) / (float)*(int *)(param_1 + 0x164);
  return;
}

// 00E4D4E0  SoundArea::ShapePrism::vf20  size=9  [class]
int __fastcall SoundArea::ShapePrism::vf20(int param_1)

{
  return *(int *)(param_1 + 0x164) * 2;
}

// 00E4D4F0  SoundArea::ShapePrism::vf24  size=112  [class]
undefined4 __thiscall SoundArea::ShapePrism::vf24(int param_1,undefined4 *param_2,uint param_3)

{
  int iVar1;
  
  if ((-1 < (int)param_3) && ((int)param_3 < *(int *)(param_1 + 0x164) * 2)) {
    iVar1 = ((int)param_3 / 2) * 8;
    *param_2 = *(undefined4 *)(iVar1 + *(int *)(param_1 + 0x15c));
    param_2[1] = *(undefined4 *)(param_1 + 0x134);
    param_2[2] = *(undefined4 *)(iVar1 + 4 + *(int *)(param_1 + 0x15c));
    if ((param_3 & 1) != 0) {
      param_2[1] = *(float *)(param_1 + 0x138) + (float)param_2[1];
    }
    FUN_00e47060(param_2,param_2);
    return 1;
  }
  return 0;
}

// 00E4D560  SoundArea::ShapePrism::vf30  size=538  [class]
void __thiscall SoundArea::ShapePrism::vf30(int param_1,float *param_2)

{
  int iVar1;
  int iVar2;
  float *pfVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = *(int *)(param_1 + 0x164);
  iVar2 = 0;
  if (3 < iVar4) {
    do {
      *(float *)(*(int *)(param_1 + 0x15c) + iVar2 * 8) =
           *param_2 + *(float *)(*(int *)(param_1 + 0x15c) + iVar2 * 8);
      pfVar3 = (float *)(*(int *)(param_1 + 0x15c) + 4 + iVar2 * 8);
      *pfVar3 = param_2[2] + *pfVar3;
      *(float *)(*(int *)(param_1 + 0x15c) + 8 + iVar2 * 8) =
           *(float *)(*(int *)(param_1 + 0x15c) + 8 + iVar2 * 8) + *param_2;
      pfVar3 = (float *)(*(int *)(param_1 + 0x15c) + 0xc + iVar2 * 8);
      *pfVar3 = param_2[2] + *pfVar3;
      *(float *)(*(int *)(param_1 + 0x15c) + 0x10 + iVar2 * 8) =
           *(float *)(*(int *)(param_1 + 0x15c) + 0x10 + iVar2 * 8) + *param_2;
      pfVar3 = (float *)(*(int *)(param_1 + 0x15c) + 0x14 + iVar2 * 8);
      *pfVar3 = param_2[2] + *pfVar3;
      *(float *)(*(int *)(param_1 + 0x15c) + 0x18 + iVar2 * 8) =
           *(float *)(*(int *)(param_1 + 0x15c) + 0x18 + iVar2 * 8) + *param_2;
      pfVar3 = (float *)(*(int *)(param_1 + 0x15c) + 0x1c + iVar2 * 8);
      iVar2 = iVar2 + 4;
      *pfVar3 = param_2[2] + *pfVar3;
    } while (iVar2 < iVar4 + -3);
  }
  for (; iVar2 < iVar4; iVar2 = iVar2 + 1) {
    *(float *)(*(int *)(param_1 + 0x15c) + iVar2 * 8) =
         *(float *)(*(int *)(param_1 + 0x15c) + iVar2 * 8) + *param_2;
    pfVar3 = (float *)(*(int *)(param_1 + 0x15c) + 4 + iVar2 * 8);
    *pfVar3 = param_2[2] + *pfVar3;
  }
  iVar2 = *(int *)(param_1 + 0x164);
  iVar1 = *(int *)(param_1 + 0x15c);
  iVar4 = 0;
  *(float *)(param_1 + 0x134) = param_2[1] + *(float *)(param_1 + 0x134);
  *(undefined4 *)(param_1 + 0x180) = 0;
  *(undefined4 *)(param_1 + 0x188) = 0;
  if (3 < iVar2) {
    iVar5 = (iVar2 - 4U >> 2) + 1;
    iVar4 = iVar5 * 4;
    pfVar3 = (float *)(iVar1 + 8);
    do {
      iVar5 = iVar5 + -1;
      *(float *)(param_1 + 0x180) = pfVar3[-2] + *(float *)(param_1 + 0x180);
      *(float *)(param_1 + 0x188) = pfVar3[-1] + *(float *)(param_1 + 0x188);
      *(float *)(param_1 + 0x180) = *(float *)(param_1 + 0x180) + *pfVar3;
      *(float *)(param_1 + 0x188) = pfVar3[1] + *(float *)(param_1 + 0x188);
      *(float *)(param_1 + 0x180) = pfVar3[2] + *(float *)(param_1 + 0x180);
      *(float *)(param_1 + 0x188) = pfVar3[3] + *(float *)(param_1 + 0x188);
      *(float *)(param_1 + 0x180) = pfVar3[4] + *(float *)(param_1 + 0x180);
      *(float *)(param_1 + 0x188) = pfVar3[5] + *(float *)(param_1 + 0x188);
      pfVar3 = pfVar3 + 8;
    } while (iVar5 != 0);
  }
  while (iVar4 < iVar2) {
    iVar5 = iVar4 * 8;
    iVar4 = iVar4 + 1;
    *(float *)(param_1 + 0x180) = *(float *)(iVar1 + iVar5) + *(float *)(param_1 + 0x180);
    *(float *)(param_1 + 0x188) = *(float *)(iVar1 + -4 + iVar4 * 8) + *(float *)(param_1 + 0x188);
  }
  *(float *)(param_1 + 0x180) = *(float *)(param_1 + 0x180) / (float)*(int *)(param_1 + 0x164);
  *(float *)(param_1 + 0x184) = *(float *)(param_1 + 0x138) * 0.5 + *(float *)(param_1 + 0x134);
  *(float *)(param_1 + 0x188) = *(float *)(param_1 + 0x188) / (float)*(int *)(param_1 + 0x164);
  return;
}

// 00E4D780  FUN_00e4d780  size=133  [between]
int __thiscall FUN_00e4d780(int param_1,uint param_2,uint param_3)

{
  byte *pbVar1;
  int iVar2;
  uint uVar3;
  int local_4;
  
  local_4 = 0;
  if (*(int *)(param_1 + 0x150) != 0) {
    pbVar1 = (byte *)(*(int *)(param_1 + 0x148) + 1);
    iVar2 = (*(int *)(param_1 + 0x150) - 1U) / 3 + 1;
    do {
      uVar3 = 0;
      if ((pbVar1[-1] == param_2) || (pbVar1[-1] == param_3)) {
        uVar3 = 1;
      }
      if ((*pbVar1 == param_2) || (*pbVar1 == param_3)) {
        uVar3 = uVar3 + 1;
      }
      if ((pbVar1[1] == param_2) || (pbVar1[1] == param_3)) {
        uVar3 = uVar3 + 1;
      }
      if (1 < uVar3) {
        local_4 = local_4 + 1;
      }
      pbVar1 = pbVar1 + 3;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    return local_4;
  }
  return 0;
}

// 00E4D810  FUN_00e4d810  size=49  [between]
int __thiscall FUN_00e4d810(int param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = 0;
  uVar2 = 0;
  if (*(uint *)(param_1 + 0x150) != 0) {
    do {
      if (param_2 == *(byte *)(*(int *)(param_1 + 0x148) + uVar2)) {
        iVar1 = iVar1 + 1;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(uint *)(param_1 + 0x150));
  }
  return iVar1;
}

// 00E4D850  FUN_00e4d850  size=136  [between]
void __thiscall
FUN_00e4d850(int param_1,undefined4 *param_2,int param_3,int param_4,undefined4 *param_5)

{
  undefined4 *puVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  pfVar2 = (float *)(*(int *)(param_1 + 0x160) + ((int)(param_3 + (param_3 >> 0x1f & 3U)) >> 2) * 4)
  ;
  fVar3 = *(float *)(param_4 + 4);
  fVar4 = *pfVar2;
  fVar5 = pfVar2[1];
  fVar6 = *(float *)(param_4 + 4);
  puVar1 = param_2 + 4;
  *param_2 = *param_5;
  param_2[1] = param_5[1];
  param_2[2] = param_5[2];
  param_2[3] = param_5[3];
  *puVar1 = *param_5;
  param_2[5] = param_5[1];
  param_2[6] = param_5[2];
  param_2[7] = param_5[3];
  param_2[8] = fVar5 * fVar6 + (1.0 - fVar3) * fVar4;
  FUN_00e47060(param_2,param_2);
  FUN_00e47060(puVar1,puVar1);
  return;
}

// 00E4D8E0  FUN_00e4d8e0  size=267  [between]
void __thiscall FUN_00e4d8e0(int param_1,float *param_2,int param_3,float *param_4)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  
  iVar5 = (int)(param_3 + (param_3 >> 0x1f & 3U)) >> 2;
  pfVar1 = (float *)(*(int *)(param_1 + 0x160) + iVar5 * 4);
  fVar3 = pfVar1[1] * param_4[1] + *pfVar1 * (1.0 - param_4[1]);
  fVar4 = 1.0 - ABS(*param_4 - 0.5) * 2.0;
  if (*(int *)(param_1 + 0x168) == 2) {
    fVar2 = param_4[1];
    *param_2 = fVar3;
    param_2[1] = (1.0 - ABS(fVar2 - 0.5) * 2.0) * fVar4;
    return;
  }
  if (iVar5 == 0) {
    fVar2 = param_4[1];
    *param_2 = fVar3;
    param_2[1] = fVar2 * fVar4;
    return;
  }
  if (iVar5 == *(int *)(param_1 + 0x168) + -2) {
    fVar2 = param_4[1];
    *param_2 = fVar3;
    param_2[1] = (1.0 - fVar2) * fVar4;
    return;
  }
  *param_2 = fVar3;
  param_2[1] = fVar4;
  return;
}

// 00E4D9F0  FUN_00e4d9f0  size=403  [between]
void FUN_00e4d9f0(float *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined1 auStack_84 [4];
  float local_80;
  float local_7c;
  float local_78;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  undefined4 local_44;
  float local_40;
  float local_3c;
  float local_38;
  undefined4 local_34;
  float local_30;
  float local_2c;
  float local_28;
  undefined4 local_24;
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)auStack_84;
  local_5c = param_1[3] - *param_1;
  local_58 = param_1[4] - param_1[1];
  local_54 = param_1[5] - param_1[2];
  local_80 = local_54 * (param_1[7] - param_1[1]) - local_58 * (param_1[8] - param_1[2]);
  local_7c = local_5c * (param_1[8] - param_1[2]) - (param_1[6] - *param_1) * local_54;
  local_78 = (param_1[6] - *param_1) * local_58 - local_5c * (param_1[7] - param_1[1]);
  local_50 = *param_1;
  local_4c = param_1[1];
  local_48 = param_1[2];
  local_44 = 0x3f800000;
  local_40 = param_1[3];
  local_3c = param_1[4];
  local_38 = param_1[5];
  local_34 = 0x3f800000;
  local_30 = param_1[6];
  local_2c = param_1[7];
  local_28 = param_1[8];
  local_24 = 0x3f800000;
  local_68 = local_80;
  local_64 = local_7c;
  local_60 = local_78;
  iVar1 = FUN_00e48e90(param_2,param_3,&local_50,&local_80);
  if (iVar1 == 0) {
    local_50 = param_1[6];
    local_4c = param_1[7];
    local_48 = param_1[8];
    local_44 = 0x3f800000;
    local_40 = param_1[3];
    local_3c = param_1[4];
    local_38 = param_1[5];
    local_34 = 0x3f800000;
    local_30 = param_1[9];
    local_2c = param_1[10];
    local_28 = param_1[0xb];
    local_24 = 0x3f800000;
    FUN_00e48e90(param_2,param_3,&local_50,&local_80);
  }
  __security_check_cookie(local_14 ^ (uint)auStack_84);
  return;
}

// 00E4DB90  SoundArea::ShapeRail::vf20  size=16  [class]
int __fastcall SoundArea::ShapeRail::vf20(int param_1)

{
  return *(int *)(param_1 + 0x140) + *(int *)(param_1 + 0x154) * 2;
}

// 00E4DBA0  SoundArea::ShapeRail::vf24  size=209  [class]
undefined4 __thiscall SoundArea::ShapeRail::vf24(int *param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  undefined4 *puVar2;
  
  if ((-1 < param_3) && (iVar1 = (**(code **)(*param_1 + 0x20))(), param_3 < iVar1)) {
    iVar1 = param_3 / 6;
    switch(param_3 % 6) {
    case 1:
      puVar2 = (undefined4 *)(param_1[0x4e] + 0xc + iVar1 * 0x30);
      break;
    case 2:
      puVar2 = (undefined4 *)(param_1[0x4e] + 0x18 + iVar1 * 0x30);
      break;
    case 3:
      puVar2 = (undefined4 *)(param_1[0x4e] + 0x24 + iVar1 * 0x30);
      break;
    case 4:
      puVar2 = (undefined4 *)(param_1[0x53] + iVar1 * 0xc);
      break;
    case 5:
      puVar2 = (undefined4 *)(param_1[0x53] + iVar1 * 0xc);
      break;
    default:
      puVar2 = (undefined4 *)(iVar1 * 0x30 + param_1[0x4e]);
    }
    *param_2 = *puVar2;
    param_2[1] = puVar2[1];
    param_2[2] = puVar2[2];
    param_2[3] = 0x3f800000;
    FUN_00e47060(param_2,param_2);
    return 1;
  }
  return 0;
}

// 00E4DD10  FUN_00e4dd10  size=391  [between]
void __fastcall FUN_00e4dd10(int param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  float10 fVar5;
  float local_1c;
  float local_18;
  
  local_1c = 0.0;
  iVar3 = *(int *)(param_1 + 0x168) + -1;
  local_18 = (float)iVar3;
  if (0 < iVar3) {
    do {
      fVar5 = (float10)FUN_00fdef70();
      local_1c = (float)fVar5 + local_1c;
      local_18 = (float)((int)local_18 + -1);
    } while (local_18 != 0.0);
  }
  fVar1 = **(float **)(param_1 + 0x160);
  fVar2 = (*(float **)(param_1 + 0x160))[*(int *)(param_1 + 0x168) + -1];
  iVar4 = 0;
  local_18 = 0.0;
  if (0 < iVar3) {
    do {
      *(float *)(*(int *)(param_1 + 0x160) + iVar4 * 4) =
           (local_18 * (fVar2 - fVar1)) / local_1c + fVar1;
      fVar5 = (float10)FUN_00fdef70();
      iVar4 = iVar4 + 1;
      local_18 = (float)fVar5 + local_18;
    } while (iVar4 < iVar3);
  }
  return;
}

// 00E4DEA0  FUN_00e4dea0  size=538  [between]
void FUN_00e4dea0(undefined4 *param_1)

{
  undefined1 auStack_68 [8];
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
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
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)auStack_68;
  local_60 = *param_1;
  local_5c = param_1[1];
  local_58 = param_1[2];
  local_54 = param_1[3];
  local_50 = param_1[4];
  local_4c = param_1[5];
  local_48 = param_1[6];
  local_44 = param_1[7];
  local_40 = param_1[0x10];
  local_3c = param_1[0x11];
  local_38 = param_1[0x12];
  local_34 = param_1[0x13];
  local_30 = param_1[0x14];
  local_2c = param_1[0x15];
  local_28 = param_1[0x16];
  local_24 = param_1[0x17];
  FUN_00e48830(&local_60);
  local_60 = param_1[4];
  local_5c = param_1[5];
  local_58 = param_1[6];
  local_54 = param_1[7];
  local_50 = param_1[0xc];
  local_4c = param_1[0xd];
  local_48 = param_1[0xe];
  local_44 = param_1[0xf];
  local_40 = param_1[0x14];
  local_3c = param_1[0x15];
  local_38 = param_1[0x16];
  local_34 = param_1[0x17];
  local_30 = param_1[0x1c];
  local_2c = param_1[0x1d];
  local_28 = param_1[0x1e];
  local_24 = param_1[0x1f];
  FUN_00e48830(&local_60);
  local_60 = param_1[0xc];
  local_5c = param_1[0xd];
  local_58 = param_1[0xe];
  local_54 = param_1[0xf];
  local_50 = param_1[8];
  local_4c = param_1[9];
  local_48 = param_1[10];
  local_44 = param_1[0xb];
  local_40 = param_1[0x1c];
  local_3c = param_1[0x1d];
  local_38 = param_1[0x1e];
  local_34 = param_1[0x1f];
  local_30 = param_1[0x18];
  local_2c = param_1[0x19];
  local_28 = param_1[0x1a];
  local_24 = param_1[0x1b];
  FUN_00e48830(&local_60);
  local_60 = param_1[8];
  local_5c = param_1[9];
  local_58 = param_1[10];
  local_54 = param_1[0xb];
  local_50 = *param_1;
  local_4c = param_1[1];
  local_48 = param_1[2];
  local_44 = param_1[3];
  local_40 = param_1[0x18];
  local_3c = param_1[0x19];
  local_38 = param_1[0x1a];
  local_34 = param_1[0x1b];
  local_30 = param_1[0x10];
  local_2c = param_1[0x11];
  local_28 = param_1[0x12];
  local_24 = param_1[0x13];
  FUN_00e48830(&local_60);
  __security_check_cookie(local_14 ^ (uint)auStack_68);
  return;
}

// 00E4E0C0  SoundArea::ShapeSphere::vf04  size=846  [class]
void __thiscall SoundArea::ShapeSphere::vf04(int param_1,int param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float10 fVar4;
  float fStack_5c;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  local_40 = *(float *)(param_1 + 0x134);
  local_3c = *(float *)(param_1 + 0x138);
  local_38 = *(float *)(param_1 + 0x13c);
  local_34 = 1.0;
  if (*(int *)(param_1 + 0x118) == 0) {
    local_30 = *param_3;
    local_2c = param_3[1];
    local_28 = param_3[2];
    local_24 = param_3[3];
  }
  else {
    D3DXVec3TransformNormal(&local_30,param_3,param_1 + 0xd0);
    local_30 = *(float *)(param_1 + 0x100) + local_30;
    local_2c = *(float *)(param_1 + 0x104) + local_2c;
    local_28 = *(float *)(param_1 + 0x108) + local_28;
  }
  fVar1 = local_3c + *(float *)(param_1 + 0x140);
  if ((local_2c < fVar1) && (fVar1 = local_3c, local_3c < local_2c)) {
    local_3c = local_2c;
    fVar1 = local_3c;
  }
  local_3c = fVar1;
  fStack_50 = local_40 - local_30;
  fStack_4c = local_3c - local_2c;
  fStack_48 = local_38 - local_28;
  fVar1 = *(float *)(param_1 + 0x148);
  fVar2 = *(float *)(param_1 + 0x144);
  fVar3 = fVar2 + fVar1;
  if (fStack_48 * fStack_48 + fStack_4c * fStack_4c + fStack_50 * fStack_50 < fVar3 * fVar3) {
    fVar4 = (float10)FUN_00fdef70();
    fVar3 = (float)fVar4;
    fStack_5c = 1.0 - (fVar3 - fVar1) / fVar2;
    if (fStack_5c < 0.0 == (fStack_5c == 0.0)) {
      if (1.0 < fStack_5c) {
        fStack_5c = 1.0;
      }
      if (fVar3 < fVar1 == (fVar3 == fVar1)) {
        if (fVar1 <= 0.0) {
          fStack_20 = local_40;
          fStack_1c = local_3c;
          fStack_18 = local_38;
          fStack_14 = local_34;
        }
        else {
          fStack_50 = local_30 - local_40;
          fStack_4c = local_2c - local_3c;
          fStack_48 = local_28 - local_38;
          fStack_44 = local_24 - local_34;
          fVar2 = fStack_50 * fStack_50 + fStack_4c * fStack_4c + fStack_48 * fStack_48;
          if (fVar2 < 0.0 == (fVar2 == 0.0)) {
            FUN_00ddf460(&fStack_50,&fStack_50);
          }
          else {
            FUN_00dd5650(&DAT_0163d0ac);
            fStack_50 = 0.0;
            fStack_4c = 1.0;
            fStack_48 = 0.0;
          }
          fStack_50 = fVar1 * fStack_50;
          fStack_4c = fStack_4c * fVar1;
          fStack_48 = fStack_48 * fVar1;
          fStack_44 = fVar1 * fStack_44;
          fStack_20 = fStack_50 + local_40;
          fStack_1c = fStack_4c + local_3c;
          fStack_18 = fStack_48 + local_38;
          fStack_14 = fStack_44 + local_34;
        }
      }
      else {
        fStack_20 = local_30;
        fStack_1c = local_2c;
        fStack_18 = local_28;
        fStack_14 = local_24;
      }
      FUN_00e47060(param_2,&local_40);
      FUN_00e47060(param_2 + 0x10,&fStack_20);
      *(float *)(param_2 + 0x20) = fStack_5c;
      return;
    }
  }
  return;
}

// 00E4E410  SoundArea::ShapeSphere::vf18  size=51  [class]
void __fastcall SoundArea::ShapeSphere::vf18(int param_1)

{
  *(undefined4 *)(param_1 + 300) = 0;
  *(undefined4 *)(param_1 + 0x130) = 0;
  *(undefined4 *)(param_1 + 0x120) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x124) = 0;
  *(undefined4 *)(param_1 + 0x128) = 0;
  *(undefined4 *)(param_1 + 0x134) = 0;
  *(undefined4 *)(param_1 + 0x138) = 0;
  *(undefined4 *)(param_1 + 0x13c) = 0;
  *(undefined4 *)(param_1 + 0x140) = 0;
  *(undefined4 *)(param_1 + 0x144) = 0;
  *(undefined4 *)(param_1 + 0x148) = 0;
  FUN_00e4bfd0();
  return;
}

// 00E4E450  FUN_00e4e450  size=545  [callgraph]
float10 FUN_00e4e450(float *param_1,float *param_2,float *param_3,float *param_4,float *param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float10 fVar6;
  
  if (((*param_3 == *param_2) && (param_3[1] == param_2[1])) && (param_3[2] == param_2[2])) {
    *param_4 = *param_2;
    param_4[1] = param_2[1];
    param_4[2] = param_2[2];
    param_4[3] = 1.0;
    *param_5 = 0.0;
    fVar6 = (float10)FUN_00fdef70();
    return (float10)(float)fVar6;
  }
  fVar4 = *param_3 - *param_2;
  fVar1 = param_3[1];
  fVar2 = param_2[1];
  fVar5 = param_3[2] - param_2[2];
  fVar3 = (fVar4 * (*param_1 - *param_2) + (param_1[2] - param_2[2]) * fVar5) /
          (fVar4 * fVar4 + fVar5 * fVar5);
  if (0.0 <= fVar3) {
    if (1.0 < fVar3) {
      fVar3 = 1.0;
    }
  }
  else {
    fVar3 = 0.0;
  }
  *param_5 = fVar3;
  *param_4 = fVar3 * fVar4 + *param_2;
  param_4[1] = (fVar1 - fVar2) * fVar3 + param_2[1];
  param_4[2] = fVar3 * fVar5 + param_2[2];
  fVar6 = (float10)FUN_00fdef70();
  return (float10)(float)fVar6;
}

// 00E4E680  FUN_00e4e680  size=1607  [callgraph]
undefined4
FUN_00e4e680(int *param_1,undefined4 param_2,undefined4 param_3,float *param_4,float *param_5,
            float *param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float10 fVar5;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float local_40;
  float fStack_3c;
  float fStack_38;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  
  (**(code **)(*param_1 + 0x24))(&local_40,param_2);
  (**(code **)(*param_1 + 0x24))(&fStack_28,param_3);
  fStack_70 = fStack_30 - fStack_50;
  fStack_6c = fStack_2c - fStack_4c;
  fStack_68 = fStack_28 - fStack_48;
  fStack_64 = fStack_24 - fStack_44;
  if (((fStack_70 == 0.0) && (fStack_6c == 0.0)) && (fStack_68 == 0.0)) {
    return 0;
  }
  fVar1 = fStack_68 * fStack_68 + fStack_70 * fStack_70 + fStack_6c * fStack_6c;
  if (fVar1 < 0.0 == (fVar1 == 0.0)) {
    FUN_00ddf460(&fStack_70,&fStack_70);
  }
  else {
    FUN_00dd5650(&DAT_0163d0ac);
    fStack_70 = 0.0;
    fStack_6c = 1.0;
    fStack_68 = 0.0;
  }
  fStack_60 = *param_5 - *param_4;
  fStack_5c = param_5[1] - param_4[1];
  fStack_58 = param_5[2] - param_4[2];
  fStack_54 = param_5[3] - param_4[3];
  if (((fStack_60 != 0.0) || (fStack_5c != 0.0)) || (fStack_58 != 0.0)) {
    fVar1 = fStack_58 * fStack_58 + fStack_5c * fStack_5c + fStack_60 * fStack_60;
    if (fVar1 < 0.0 == (fVar1 == 0.0)) {
      FUN_00ddf460(&local_40,&fStack_60);
    }
    else {
      FUN_00dd5650(&DAT_0163d0ac);
      local_40 = 0.0;
      fStack_3c = 1.0;
      fStack_38 = 0.0;
    }
    fVar5 = (float10)FUN_00ddbb50(fStack_68 * 0.0 + fStack_6c + fStack_70 * 0.0);
    if (ABS((float)((float10)1.5707963705062866 - fVar5)) < 1.3089969 !=
        (ABS((float)((float10)1.5707963705062866 - fVar5)) == 1.3089969)) {
      fVar4 = fStack_6c * 0.0 - fStack_68;
      fVar1 = fStack_68 * 0.0 - fStack_70 * 0.0;
      fVar3 = fStack_70 - fStack_6c * 0.0;
      fVar2 = fVar1 * fStack_68 - fVar3 * fStack_6c;
      fVar3 = fStack_70 * fVar3 - fVar4 * fStack_68;
      fVar1 = fVar4 * fStack_6c - fStack_70 * fVar1;
      fVar5 = (float10)FUN_00ddbb50(fStack_38 * fVar1 + fStack_3c * fVar3 + fVar2 * local_40);
      if (0.2617994 <= ABS((float)((float10)1.5707963705062866 - fVar5))) {
        fVar4 = fStack_58 * fVar1 + fStack_60 * fVar2 + fVar3 * fStack_5c;
        if (fVar4 == 0.0) {
          return 0;
        }
        fVar4 = ((fStack_48 - param_4[2]) * fVar1 +
                (fStack_50 - *param_4) * fVar2 + (fStack_4c - param_4[1]) * fVar3) / fVar4;
        fStack_50 = *param_4 + fVar4 * fStack_60;
        fStack_4c = fVar4 * fStack_5c + param_4[1];
        fStack_48 = fStack_58 * fVar4 + param_4[2];
        fVar1 = fVar4 * fStack_54 + param_4[3];
        goto LAB_00e4eaa8;
      }
    }
    fVar3 = fStack_38;
    fVar2 = fStack_3c;
    fVar1 = local_40;
    fVar5 = (float10)FUN_00ddbb50(fStack_70 * local_40 + fStack_6c * fStack_3c +
                                  fStack_68 * fStack_38);
    if (ABS((float)((float10)1.5707963705062866 - fVar5)) < 1.3089969 !=
        (ABS((float)((float10)1.5707963705062866 - fVar5)) == 1.3089969)) {
      fVar4 = fStack_6c * fVar3 - fStack_68 * fVar2;
      fVar3 = fVar1 * fStack_68 - fStack_70 * fVar3;
      fVar1 = fStack_70 * fVar2 - fStack_6c * fVar1;
      fVar2 = fVar3 * fStack_68 - fVar1 * fStack_6c;
      fVar1 = fStack_70 * fVar1 - fVar4 * fStack_68;
      fVar3 = fVar4 * fStack_6c - fVar3 * fStack_70;
      fVar4 = fStack_58 * fVar3 + fVar1 * fStack_5c + fStack_60 * fVar2;
      if (fVar4 == 0.0) {
        return 0;
      }
      fVar4 = (fVar3 * (fStack_48 - param_4[2]) +
              (fStack_4c - param_4[1]) * fVar1 + (fStack_50 - *param_4) * fVar2) / fVar4;
      fStack_50 = fVar4 * fStack_60 + *param_4;
      fStack_4c = param_4[1] + fVar4 * fStack_5c;
      fStack_48 = fVar4 * fStack_58 + param_4[2];
      fVar1 = param_4[3] + fVar4 * fStack_54;
LAB_00e4eaa8:
      *param_6 = fStack_50;
      param_6[1] = fStack_4c;
      param_6[2] = fStack_48;
      param_6[3] = fVar1;
      return 1;
    }
  }
  return 0;
}

// 00E4ECD0  FUN_00e4ecd0  size=1106  [callgraph]
undefined4
FUN_00e4ecd0(int *param_1,undefined4 param_2,undefined4 param_3,float *param_4,float *param_5,
            float *param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float10 fVar4;
  float fVar5;
  float fVar6;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float local_40;
  float fStack_3c;
  float fStack_38;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  
  (**(code **)(*param_1 + 0x24))(&local_40,param_2);
  (**(code **)(*param_1 + 0x24))(&fStack_28,param_3);
  fStack_70 = fStack_30 - fStack_50;
  fStack_6c = fStack_2c - fStack_4c;
  fStack_68 = fStack_28 - fStack_48;
  fStack_64 = fStack_24 - fStack_44;
  if (((fStack_70 == 0.0) && (fStack_6c == 0.0)) && (fStack_68 == 0.0)) {
    return 0;
  }
  fVar1 = fStack_68 * fStack_68 + fStack_70 * fStack_70 + fStack_6c * fStack_6c;
  if (fVar1 < 0.0 == (fVar1 == 0.0)) {
    FUN_00ddf460(&fStack_70,&fStack_70);
  }
  else {
    FUN_00dd5650(&DAT_0163d0ac);
    fStack_70 = 0.0;
    fStack_6c = 1.0;
    fStack_68 = 0.0;
  }
  fStack_60 = *param_5 - *param_4;
  fStack_5c = param_5[1] - param_4[1];
  fStack_58 = param_5[2] - param_4[2];
  fStack_54 = param_5[3] - param_4[3];
  if (((fStack_60 != 0.0) || (fStack_5c != 0.0)) || (fStack_58 != 0.0)) {
    fVar1 = fStack_58 * fStack_58 + fStack_60 * fStack_60 + fStack_5c * fStack_5c;
    if (fVar1 < 0.0 == (fVar1 == 0.0)) {
      FUN_00ddf460(&local_40,&fStack_60);
    }
    else {
      FUN_00dd5650(&DAT_0163d0ac);
      local_40 = 0.0;
      fStack_3c = 1.0;
      fStack_38 = 0.0;
    }
    fVar4 = (float10)FUN_00ddbb50(fStack_68 * 0.0 + fStack_6c + fStack_70 * 0.0);
    if (ABS((float)((float10)1.5707963705062866 - fVar4)) < 1.3089969 !=
        (ABS((float)((float10)1.5707963705062866 - fVar4)) == 1.3089969)) {
      fVar2 = fStack_6c * 0.0 - fStack_68;
      fVar3 = fStack_68 * 0.0 - fStack_70 * 0.0;
      fVar1 = fStack_70 - fStack_6c * 0.0;
      fVar5 = fVar3 * fStack_68 - fVar1 * fStack_6c;
      fVar6 = fStack_70 * fVar1 - fVar2 * fStack_68;
      fVar1 = fVar2 * fStack_6c - fStack_70 * fVar3;
      fVar4 = (float10)FUN_00ddbb50(fStack_38 * fVar1 + fVar5 * local_40 + fStack_3c * fVar6);
      if (0.2617994 <= ABS((float)((float10)1.5707963705062866 - fVar4))) {
        fVar2 = fStack_58 * fVar1 + fVar6 * fStack_5c + fStack_60 * fVar5;
        if (fVar2 == 0.0) {
          return 0;
        }
        fVar2 = ((fStack_48 - param_4[2]) * fVar1 +
                (fStack_50 - *param_4) * fVar5 + (fStack_4c - param_4[1]) * fVar6) / fVar2;
        fVar1 = param_4[1];
        fVar5 = param_4[2];
        fVar6 = param_4[3];
        *param_6 = *param_4 + fVar2 * fStack_60;
        param_6[1] = fVar2 * fStack_5c + fVar1;
        param_6[2] = fVar2 * fStack_58 + fVar5;
        param_6[3] = fVar2 * fStack_54 + fVar6;
        return 1;
      }
    }
  }
  return 0;
}

// 00E4F130  FUN_00e4f130  size=1544  [callgraph]
void FUN_00e4f130(int *param_1,uint param_2,uint param_3,undefined4 param_4)

{
  float fVar1;
  int iVar2;
  undefined4 uVar3;
  float10 fVar4;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float local_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  undefined1 auStack_68 [76];
  uint uStack_1c;
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)&fStack_f4;
  iVar2 = (**(code **)(*param_1 + 0x24))(&local_90,param_2);
  if (((iVar2 != 0) && (iVar2 = (**(code **)(*param_1 + 0x24))(&fStack_a8,param_3), iVar2 != 0)) &&
     ((fStack_a8 != fStack_98 ||
      (((fStack_a4 != fStack_94 || (fStack_a0 != local_90)) || (fStack_9c != fStack_8c)))))) {
    fStack_d8 = fStack_a8 - fStack_98;
    fStack_d4 = fStack_a4 - fStack_94;
    fStack_d0 = fStack_a0 - local_90;
    fStack_cc = fStack_9c - fStack_8c;
    fStack_f0 = fStack_d8 * fStack_d8 + fStack_d4 * fStack_d4 + fStack_d0 * fStack_d0;
    if (fStack_f0 < 0.0 == (fStack_f0 == 0.0)) {
      FUN_00ddf460(&fStack_d8,&fStack_d8);
    }
    else {
      FUN_00dd5650(&DAT_0163d0ac);
      fStack_d8 = 0.0;
      fStack_d4 = 1.0;
      fStack_d0 = 0.0;
    }
    fStack_ec = fStack_d0 * fStack_d0;
    fStack_f4 = ABS(fStack_d8);
    fStack_f0 = fStack_d4 * fStack_d4 + fStack_ec;
    fVar4 = (float10)FUN_00fdef70();
    fStack_f0 = (float)fVar4;
    if (fStack_f0 <= fStack_f4) {
      fStack_f0 = ABS(fStack_d4);
      fStack_f4 = fStack_d8 * fStack_d8 + fStack_ec;
      fVar4 = (float10)FUN_00fdef70();
      fStack_e8 = 0.0;
      if ((float)fVar4 <= fStack_f0) {
        fStack_e4 = 0.0;
        fStack_e0 = 1.0;
      }
      else {
        fStack_e4 = 1.0;
        fStack_e0 = 0.0;
      }
    }
    else {
      fStack_e8 = 1.0;
      fStack_e4 = 0.0;
      fStack_e0 = 0.0;
    }
    fStack_c8 = fStack_d4 * fStack_e0 - fStack_d0 * fStack_e4;
    fStack_c4 = fStack_e8 * fStack_d0 - fStack_d8 * fStack_e0;
    fStack_c0 = fStack_e4 * fStack_d8 - fStack_d4 * fStack_e8;
    fStack_f4 = fStack_c8 * fStack_c8 + fStack_c4 * fStack_c4 + fStack_c0 * fStack_c0;
    fStack_b8 = fStack_c8;
    fStack_b4 = fStack_c4;
    fStack_b0 = fStack_c0;
    if (fStack_f4 < 0.0 == (fStack_f4 == 0.0)) {
      FUN_00ddf460(&fStack_b8,&fStack_b8);
    }
    else {
      FUN_00dd5650(&DAT_0163d0ac);
      fStack_b8 = 0.0;
      fStack_b4 = 1.0;
      fStack_b0 = 0.0;
    }
    fVar4 = (float10)(**(code **)(*param_1 + 0x4c))();
    fStack_f4 = (float)fVar4;
    fVar4 = (float10)(**(code **)(*param_1 + 0x54))();
    fStack_f0 = (float)fVar4;
    if (0.0 < fStack_f4) {
      fStack_f4 = fStack_f0 + fStack_f4;
      if (((param_2 & 1) == 0) && ((param_3 & 1) == 0)) {
        uVar3 = 0;
      }
      else {
        uVar3 = 1;
      }
      uVar3 = FUN_00e49610(param_4,uVar3);
      fStack_e8 = fStack_f4 * fStack_b8;
      fStack_ec = 0.0;
      fStack_e4 = fStack_b4 * fStack_f4;
      fStack_e0 = fStack_b0 * fStack_f4;
      fStack_dc = fStack_f4 * fStack_ac;
      do {
        fVar1 = fStack_ec;
        fStack_f4 = (float)(int)fStack_ec * 6.2831855 * 0.25;
        FUN_00ddcfe0(auStack_68,&fStack_d8,fStack_f4);
        D3DXVec3TransformNormal(&fStack_c8,&fStack_e8,auStack_68);
        fStack_78 = fStack_c8 + fStack_98;
        fStack_74 = fStack_c4 + fStack_94;
        fStack_70 = fStack_c0 + local_90;
        fStack_6c = fStack_bc + fStack_8c;
        fStack_88 = fStack_a8 + fStack_c8;
        fStack_84 = fStack_a4 + fStack_c4;
        fStack_80 = fStack_c0 + fStack_a0;
        fStack_7c = fStack_bc + fStack_9c;
        FUN_00f95f40(&fStack_78,&fStack_88,uVar3,0);
        fStack_ec = (float)((int)fVar1 + 1);
      } while ((int)fStack_ec < 4);
    }
    fVar1 = fStack_f0;
    if (0.0 < fStack_f0) {
      fStack_78 = fStack_b8 * fStack_f0;
      fStack_f0 = 0.0;
      fStack_74 = fStack_b4 * fVar1;
      fStack_70 = fStack_b0 * fVar1;
      fStack_6c = fVar1 * fStack_ac;
      do {
        fVar1 = fStack_f0;
        fStack_f4 = (float)(int)fStack_f0 * 6.2831855 * 0.25;
        FUN_00ddcfe0(auStack_68,&fStack_d8,fStack_f4);
        D3DXVec3TransformNormal(&fStack_88,&fStack_78,auStack_68);
        fStack_c8 = fStack_88 + fStack_98;
        fStack_c4 = fStack_84 + fStack_94;
        fStack_c0 = fStack_80 + local_90;
        fStack_bc = fStack_7c + fStack_8c;
        fStack_e8 = fStack_a8 + fStack_88;
        fStack_e4 = fStack_a4 + fStack_84;
        fStack_e0 = fStack_80 + fStack_a0;
        fStack_dc = fStack_7c + fStack_9c;
        FUN_00f95f40(&fStack_c8,&fStack_e8,0xffffffff,0);
        fStack_f0 = (float)((int)fVar1 + 1);
      } while ((int)fStack_f0 < 4);
      __security_check_cookie(uStack_1c ^ (uint)&stack0xffffff04);
      return;
    }
  }
  __security_check_cookie(uStack_1c ^ (uint)&stack0xffffff04);
  return;
}

// 00E4F740  FUN_00e4f740  size=159  [callgraph]
undefined4 FUN_00e4f740(int param_1,byte *param_2)

{
  undefined4 uVar1;
  
  if (((((*param_2 & 1) != 0) && (*(int *)(param_2 + 0x34) == *(int *)(param_2 + 4))) &&
      (*(int *)(param_2 + 0x38) == *(int *)(param_2 + 8))) &&
     (((*(int *)(param_2 + 0x3c) == *(int *)(param_2 + 0xc) &&
       (*(int *)(param_2 + 0x40) == *(int *)(param_2 + 0x10))) &&
      (param_1 == *(int *)(param_2 + 0x14))))) {
    return 0xff0000ff;
  }
  if (((*(int *)(param_2 + 0x34) == *(int *)(param_2 + 0x1c)) &&
      (*(int *)(param_2 + 0x38) == *(int *)(param_2 + 0x20))) &&
     ((*(int *)(param_2 + 0x3c) == *(int *)(param_2 + 0x24) &&
      ((*(int *)(param_2 + 0x40) == *(int *)(param_2 + 0x28) &&
       (param_1 == *(int *)(param_2 + 0x2c))))))) {
    return 0xff22ff22;
  }
  if ((*(int *)(param_2 + 0x34) == *(int *)(param_2 + 4)) &&
     ((((*(int *)(param_2 + 0x38) == *(int *)(param_2 + 8) &&
        (*(int *)(param_2 + 0x3c) == *(int *)(param_2 + 0xc))) &&
       (*(int *)(param_2 + 0x40) == *(int *)(param_2 + 0x10))) &&
      (param_1 == *(int *)(param_2 + 0x14))))) {
    return 0xffff4444;
  }
  uVar1 = FUN_00e49610();
  return uVar1;
}

// 00E4F880  FUN_00e4f880  size=168  [callgraph]
void FUN_00e4f880(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = 0;
  uVar1 = FUN_00de3f20(&DAT_016ce798,0);
  iVar2 = FUN_00de3cf0(uVar1);
  iVar3 = FUN_00de3ee0(uVar1);
  while (iVar2 != 0) {
    if (iVar3 != 0) {
      uVar1 = FUN_00de38d0(uVar1);
      iVar4 = FUN_00fdbbd0(uVar1,&DAT_016ce794);
      if ((iVar4 != 0) || (iVar4 = FUN_00fdbbd0(uVar1,&DAT_016ce790), iVar4 != 0)) {
        FUN_00df48b0(iVar2,iVar3,uVar1);
      }
    }
    iVar5 = iVar5 + 1;
    uVar1 = FUN_00de3f20(&DAT_016ce798,iVar5);
    iVar2 = FUN_00de3cf0(uVar1);
    iVar3 = FUN_00de3ee0(uVar1);
  }
  return;
}

// 00E4F930  FUN_00e4f930  size=150  [callgraph]
void FUN_00e4f930(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  uVar1 = FUN_00de3f20(&DAT_016ce798,0);
  iVar2 = FUN_00de3cf0(uVar1);
  iVar3 = FUN_00de3ee0(uVar1);
  while (iVar2 != 0) {
    if (iVar3 != 0) {
      uVar1 = FUN_00de38d0(uVar1);
      iVar3 = FUN_00fdbbd0(uVar1,&DAT_016ce794);
      if ((iVar3 != 0) || (iVar3 = FUN_00fdbbd0(uVar1,&DAT_016ce790), iVar3 != 0)) {
        FUN_00df4dd0(iVar2);
      }
    }
    iVar4 = iVar4 + 1;
    uVar1 = FUN_00de3f20(&DAT_016ce798,iVar4);
    iVar2 = FUN_00de3cf0(uVar1);
    iVar3 = FUN_00de3ee0(uVar1);
  }
  return;
}

// 00E4FA00  FUN_00e4fa00  size=35  [callgraph]
undefined4 FUN_00e4fa00(void)

{
  if (DAT_01dd97ac == (undefined *)0x0) {
    DAT_01dd97ac = &DAT_01dd978c;
    DAT_01dd97b0 = 0;
  }
  return 1;
}

// 00E4FBE0  FUN_00e4fbe0  size=261  [callgraph]
undefined4 __thiscall FUN_00e4fbe0(int param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"InEventId_0");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xe8))(iVar1,param_1);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"OutEventId_0");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xe8))(iVar1,param_1 + 4);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"DistParamId");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xe8))(iVar1,param_1 + 8);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"ControlId");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xec))(iVar1,param_1 + 0xc);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"InnerParamValue");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xd4))(iVar1,param_1 + 0x10);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"OuterParamValue");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xd4))(iVar1,param_1 + 0x14);
  }
  return 1;
}

// 00E4FD10  FUN_00e4fd10  size=98  [callgraph]
void __thiscall FUN_00e4fd10(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  FUN_00e4c4f0(&param_3,&param_2,param_2,param_3);
  if (param_3 != param_2) {
    iVar2 = *(int *)(param_1 + 0x40);
    iVar1 = (param_3 <= param_2) + 1;
    if (iVar2 == 0) {
      *(int *)(param_1 + 0x40) = iVar1;
    }
    else if (iVar2 == 1) {
      if (iVar1 == 2) {
        *(undefined4 *)(param_1 + 0x40) = 0;
        return;
      }
    }
    else if ((iVar2 == 2) && (iVar1 == 1)) {
      *(undefined4 *)(param_1 + 0x40) = 0;
      return;
    }
  }
  return;
}

// 00E4FE00  FUN_00e4fe00  size=165  [callgraph]
undefined4 FUN_00e4fe00(int param_1,float *param_2)

{
  float fVar1;
  int iVar2;
  float *pfVar3;
  
  iVar2 = FUN_00ea0000(param_1,param_2);
  if (iVar2 != 0) {
    pfVar3 = (float *)FUN_00e9feb0();
    fVar1 = (param_2[2] - pfVar3[2]) * (param_2[2] - pfVar3[2]) +
            (param_2[1] - pfVar3[1]) * (param_2[1] - pfVar3[1]) +
            (*param_2 - *pfVar3) * (*param_2 - *pfVar3);
    if (*(float *)(param_1 + 0xc) <= 0.0) {
      if (fVar1 <= 9.0) {
        return 1;
      }
    }
    else if (fVar1 <= 250000.0) {
      return 1;
    }
  }
  return 0;
}

// 00E4FF10  FUN_00e4ff10  size=42  [callgraph]
void __fastcall FUN_00e4ff10(int param_1)

{
  int iVar1;
  
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    if ((*(int *)(param_1 + 4) != 0) && (iVar1 = FUN_00a7c7e0(), iVar1 != 0)) {
      return;
    }
    *(ushort *)(param_1 + 0x10) = *(ushort *)(param_1 + 0x10) & 0xfffe;
  }
  return;
}

// 00E4FF40  FUN_00e4ff40  size=168  [callgraph]
void FUN_00e4ff40(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = 0;
  uVar1 = FUN_00de3f20(&DAT_016ce798,0);
  iVar2 = FUN_00de3cf0(uVar1);
  iVar3 = FUN_00de3ee0(uVar1);
  while (iVar2 != 0) {
    if (iVar3 != 0) {
      uVar1 = FUN_00de38d0(uVar1);
      iVar4 = FUN_00fdbbd0(uVar1,&DAT_016ce794);
      if ((iVar4 == 0) && (iVar4 = FUN_00fdbbd0(uVar1,&DAT_016ce790), iVar4 == 0)) {
        FUN_00df48b0(iVar2,iVar3,uVar1);
      }
    }
    iVar5 = iVar5 + 1;
    uVar1 = FUN_00de3f20(&DAT_016ce798,iVar5);
    iVar2 = FUN_00de3cf0(uVar1);
    iVar3 = FUN_00de3ee0(uVar1);
  }
  return;
}

// 00E4FFF0  FUN_00e4fff0  size=150  [callgraph]
void FUN_00e4fff0(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  uVar1 = FUN_00de3f20(&DAT_016ce798,0);
  iVar2 = FUN_00de3cf0(uVar1);
  iVar3 = FUN_00de3ee0(uVar1);
  while (iVar2 != 0) {
    if (iVar3 != 0) {
      uVar1 = FUN_00de38d0(uVar1);
      iVar3 = FUN_00fdbbd0(uVar1,&DAT_016ce794);
      if ((iVar3 == 0) && (iVar3 = FUN_00fdbbd0(uVar1,&DAT_016ce790), iVar3 == 0)) {
        FUN_00df4dd0(iVar2);
      }
    }
    iVar4 = iVar4 + 1;
    uVar1 = FUN_00de3f20(&DAT_016ce798,iVar4);
    iVar2 = FUN_00de3cf0(uVar1);
    iVar3 = FUN_00de3ee0(uVar1);
  }
  return;
}

// 00E500F0  FUN_00e500f0  size=69  [callgraph]
void __fastcall FUN_00e500f0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 0x14) != 0) {
    iVar1 = FUN_00a7c7e0();
    if (iVar1 == 0) {
      *(undefined4 *)(param_1 + 0x14) = 0;
      uVar2 = FUN_00fdbc60();
      FUN_00df3b80(*(undefined4 *)(param_1 + 0x44),uVar2);
      *(undefined4 *)(param_1 + 0x14) = 0;
    }
  }
  return;
}

// 00E50140  FUN_00e50140  size=485  [callgraph]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00e50140(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float10 fVar8;
  float local_20;
  float local_1c;
  float local_18;
  
  fVar6 = _DAT_01dd953c;
  fVar7 = _DAT_018d0164;
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  if ((fVar7 != 1.0) || (fVar6 != 0.0)) {
    fVar2 = *param_2 - _DAT_01dd99c0;
    fVar3 = param_2[1] - _DAT_01dd99c4;
    fVar4 = param_2[2] - _DAT_01dd99c8;
    fVar5 = param_2[3] - _DAT_01dd99cc;
    fVar8 = (float10)FUN_00fdef70();
    fVar1 = (float)fVar8;
    if (fVar1 <= 1.0) {
      if (0.01 <= fVar1) {
        return;
      }
      local_20 = _DAT_01dd99d0 * 0.01;
      local_1c = _DAT_01dd99d4 * 0.01;
      local_18 = _DAT_01dd99d8 * 0.01;
      fVar6 = _DAT_01dd99dc * 0.01;
    }
    else {
      fVar6 = fVar1 * fVar7 + fVar6;
      if (fVar6 < 1.0) {
        fVar6 = 1.0;
      }
      local_20 = (fVar2 / fVar1) * fVar6;
      local_1c = (fVar3 / fVar1) * fVar6;
      local_18 = (fVar4 / fVar1) * fVar6;
      fVar6 = fVar6 * (fVar5 / fVar1);
    }
    *param_1 = _DAT_01dd99c0 + local_20;
    param_1[1] = _DAT_01dd99c4 + local_1c;
    param_1[2] = _DAT_01dd99c8 + local_18;
    param_1[3] = _DAT_01dd99cc + fVar6;
  }
  return;
}

// 00E50370  FUN_00e50370  size=91  [callgraph]
void __fastcall FUN_00e50370(int param_1)

{
  int iVar1;
  uint uVar2;
  
  if ((*(uint *)(param_1 + 0x10) & 0x80000000) == 0) {
    if ((*(byte *)(param_1 + 4) & 2) == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = FUN_00932860(param_1 + 0x30);
    }
    if (DAT_01dd9528 == 0) {
      uVar2 = (uint)(iVar1 != 0);
    }
    else {
      uVar2 = (iVar1 != 0) + 2;
    }
    if (*(uint *)(param_1 + 0x48) != uVar2) {
      FUN_00932870(**(undefined4 **)(param_1 + 0x40),uVar2);
      *(uint *)(param_1 + 0x48) = uVar2;
    }
  }
  return;
}

// 00E503D0  FUN_00e503d0  size=35  [callgraph]
undefined4 FUN_00e503d0(void)

{
  if (DAT_01dd9994 == (undefined *)0x0) {
    DAT_01dd9994 = &DAT_01dd9974;
    DAT_01dd9998 = 0;
  }
  return 1;
}

// 00E50550  FUN_00e50550  size=221  [callgraph]
undefined4 __thiscall FUN_00e50550(int param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,&DAT_016514a4);
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xe8))(iVar1,param_1);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"InEventId");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xe8))(iVar1,param_1 + 4);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"OutEventId");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xe8))(iVar1,param_1 + 8);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"DistParamId");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xe8))(iVar1,param_1 + 0xc);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"ControlId");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xec))(iVar1,param_1 + 0x10);
  }
  return 1;
}

// 00E50670  FUN_00e50670  size=98  [callgraph]
void __thiscall FUN_00e50670(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  FUN_00e4c4f0(&param_3,&param_2,param_2,param_3);
  if (param_3 != param_2) {
    iVar2 = *(int *)(param_1 + 0x70);
    iVar1 = (param_3 <= param_2) + 1;
    if (iVar2 == 0) {
      *(int *)(param_1 + 0x70) = iVar1;
    }
    else if (iVar2 == 1) {
      if (iVar1 == 2) {
        *(undefined4 *)(param_1 + 0x70) = 0;
        return;
      }
    }
    else if ((iVar2 == 2) && (iVar1 == 1)) {
      *(undefined4 *)(param_1 + 0x70) = 0;
      return;
    }
  }
  return;
}

// 00E50730  FUN_00e50730  size=226  [callgraph]
void __fastcall FUN_00e50730(int param_1)

{
  float fVar1;
  char cVar2;
  int iVar3;
  float local_8;
  float local_4;
  
  FUN_00e4c440(&local_4,&local_8);
  if ((*(byte *)(param_1 + 0x24) & 2) == 0) {
    iVar3 = *(int *)(param_1 + 0x34);
    if (iVar3 != 0) {
      if (((*(byte *)(param_1 + 0x28) & 1) == 0) && (*(char *)(param_1 + 3) != '\x02')) {
        FUN_00df3c40(*(undefined4 *)(param_1 + 0x3c),iVar3,local_8,1);
        return;
      }
      FUN_00df3d00(iVar3,local_8,1);
      return;
    }
  }
  else {
    cVar2 = *(char *)(param_1 + 3);
    if ((cVar2 == '\x01') || (cVar2 == '\x02')) {
      fVar1 = 0.1;
    }
    else {
      fVar1 = *(float *)(param_1 + 0x20);
    }
    iVar3 = *(int *)(param_1 + 0x34);
    local_4 = local_8 / (local_8 / fVar1);
    if (iVar3 != 0) {
      if (((*(byte *)(param_1 + 0x28) & 1) == 0) && (cVar2 != '\x02')) {
        FUN_00df3c40(*(undefined4 *)(param_1 + 0x3c),iVar3,local_4,1);
        return;
      }
      FUN_00df3d00(iVar3,local_4,1);
    }
  }
  return;
}

// 00E50890  FUN_00e50890  size=148  [callgraph]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00e50890(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  
  iVar1 = (**(code **)(DAT_01dd99f8 + 0x40))
                    (0x28,4,4,*(undefined4 *)(param_1 + 0x14),"FactoryFixed");
  if (iVar1 != 0) {
    _DAT_01dd9520 = 0;
    _DAT_01dd9524 = 0;
    DAT_01dd9528 = 0;
    uVar3 = 0;
    puVar2 = &DAT_01dd9a68;
    do {
      puVar2[-2] = 0;
      puVar2[-1] = 0;
      *puVar2 = 0;
      puVar2[2] = 0;
      puVar2[3] = 0;
      puVar2[4] = 0;
      puVar2[6] = 0;
      puVar2[7] = 0;
      puVar2[9] = 0x3f800000;
      puVar2[8] = 0;
      puVar2[10] = 0;
      _sprintf_s((char *)(puVar2 + 0xb),0x40,&DAT_016ce800,uVar3);
      uVar3 = uVar3 + 1;
      puVar2 = puVar2 + 0x20;
    } while (uVar3 < 8);
    return 1;
  }
  return 0;
}

// 00E51030  FUN_00e51030  size=734  [callgraph]
void FUN_00e51030(float *param_1,float *param_2,float *param_3,int param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float *pfVar8;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_14;
  
  pfVar8 = (float *)FUN_00e9fe70();
  fVar1 = *pfVar8;
  fVar2 = pfVar8[1];
  fVar3 = pfVar8[2];
  fVar4 = pfVar8[3];
  pfVar8 = (float *)FUN_00e9feb0();
  local_40 = *pfVar8 - fVar1;
  local_3c = pfVar8[1] - fVar2;
  local_38 = pfVar8[2] - fVar3;
  local_34 = pfVar8[3] - fVar4;
  pfVar8 = (float *)FUN_00e9fed0();
  local_30 = *pfVar8;
  local_2c = pfVar8[1];
  local_28 = pfVar8[2];
  local_24 = pfVar8[3];
  fVar5 = local_40 * local_40 + local_3c * local_3c + local_38 * local_38;
  if (fVar5 < 0.0 == (fVar5 == 0.0)) {
    FUN_00ddf460(&local_40,&local_40);
  }
  else {
    FUN_00dd5650(&DAT_0163d0ac);
    local_40 = 0.0;
    local_3c = 1.0;
    local_38 = 0.0;
  }
  fVar5 = (float)(&DAT_01dd9a60)[param_4 * 0x20];
  fVar6 = (float)(&DAT_01dd9a64)[param_4 * 0x20];
  fVar7 = (float)(&DAT_01dd9a68)[param_4 * 0x20];
  *param_1 = fVar7 * local_40 +
             fVar6 * local_30 + fVar5 * (local_3c * local_28 - local_38 * local_2c) + fVar1;
  param_1[1] = local_3c * fVar7 +
               local_2c * fVar6 + (local_30 * local_38 - local_28 * local_40) * fVar5 + fVar2;
  param_1[2] = local_38 * fVar7 +
               local_28 * fVar6 + (local_2c * local_40 - local_3c * local_30) * fVar5 + fVar3;
  param_1[3] = local_34 * fVar7 + fVar6 * local_24 + fVar5 * local_14 + fVar4;
  *param_2 = local_40;
  param_2[1] = local_3c;
  param_2[2] = local_38;
  param_2[3] = local_34;
  *param_3 = local_30;
  param_3[1] = local_2c;
  param_3[2] = local_28;
  param_3[3] = local_24;
  return;
}

// 00E51310  FUN_00e51310  size=1106  [callgraph]
void FUN_00e51310(float *param_1,float *param_2,float *param_3,int param_4)

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
  int iVar13;
  float *pfVar14;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  FUN_00932730();
  FUN_00a7c800();
  iVar13 = FUN_00a12210((&DAT_01dd9a80)[param_4 * 0x20]);
  local_30 = *(float *)(iVar13 + 0x40);
  local_2c = *(float *)(iVar13 + 0x44);
  local_28 = *(float *)(iVar13 + 0x48);
  local_24 = *(float *)(iVar13 + 0x4c);
  pfVar14 = (float *)FUN_00e9fe70();
  fVar1 = *pfVar14;
  fVar2 = pfVar14[1];
  fVar3 = pfVar14[2];
  fVar4 = pfVar14[3];
  pfVar14 = (float *)FUN_00e9fe70();
  local_40 = local_30 - *pfVar14;
  local_3c = local_2c - pfVar14[1];
  local_38 = local_28 - pfVar14[2];
  local_34 = local_24 - pfVar14[3];
  pfVar14 = (float *)FUN_00e9fed0();
  local_20 = *pfVar14;
  local_1c = pfVar14[1];
  local_18 = pfVar14[2];
  local_14 = pfVar14[3];
  fVar5 = local_40 * local_40 + local_3c * local_3c + local_38 * local_38;
  if (fVar5 < 0.0 == (fVar5 == 0.0)) {
    FUN_00ddf460(&local_40,&local_40);
  }
  else {
    FUN_00dd5650(&DAT_0163d0ac);
    local_40 = 0.0;
    local_3c = 1.0;
    local_38 = 0.0;
  }
  fVar12 = local_3c * local_18 - local_38 * local_1c;
  fVar7 = local_20 * local_38 - local_40 * local_18;
  fVar11 = local_40 * local_1c - local_3c * local_20;
  fVar10 = fVar7 * local_38 - fVar11 * local_3c;
  fVar9 = fVar11 * local_40 - local_38 * fVar12;
  fVar8 = local_3c * fVar12 - fVar7 * local_40;
  fVar5 = (float)(&DAT_01dd9a60)[param_4 * 0x20];
  if ((*(byte *)(&DAT_01dd9a88 + param_4 * 0x20) & 2) == 0) {
    fVar6 = (float)(&DAT_01dd9a64)[param_4 * 0x20];
    local_50 = fVar6 * fVar10 + fVar5 * fVar12 + fVar1;
    local_4c = fVar9 * fVar6 + fVar5 * fVar7 + fVar2;
    local_48 = fVar8 * fVar6 + fVar5 * fVar11 + fVar3;
    local_44 = local_14 * fVar6 + fVar5 * local_14 + fVar4;
    fVar1 = (float)(&DAT_01dd9a68)[param_4 * 0x20];
  }
  else {
    fVar5 = -fVar5;
    fVar1 = -(float)(&DAT_01dd9a64)[param_4 * 0x20];
    local_50 = fVar1 * fVar10 + fVar5 * fVar12 + local_30;
    local_4c = fVar9 * fVar1 + fVar5 * fVar7 + local_2c;
    local_48 = fVar8 * fVar1 + fVar5 * fVar11 + local_28;
    local_44 = local_14 * fVar1 + fVar5 * local_14 + local_24;
    fVar1 = -(float)(&DAT_01dd9a68)[param_4 * 0x20];
  }
  *param_1 = fVar1 * local_40 + local_50;
  param_1[1] = local_3c * fVar1 + local_4c;
  param_1[2] = local_38 * fVar1 + local_48;
  param_1[3] = local_34 * fVar1 + local_44;
  *param_2 = local_40;
  param_2[1] = local_3c;
  param_2[2] = local_38;
  param_2[3] = local_34;
  *param_3 = fVar10;
  param_3[1] = fVar9;
  param_3[2] = fVar8;
  param_3[3] = local_14;
  return;
}

// 00E51770  FUN_00e51770  size=1478  [callgraph]
void FUN_00e51770(float *param_1,float *param_2,float *param_3,int param_4)

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
  float *pfVar11;
  int iVar12;
  float10 fVar13;
  float local_90;
  float local_8c;
  float local_88;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  pfVar11 = (float *)FUN_00e9fe70();
  local_50 = *pfVar11;
  local_4c = pfVar11[1];
  local_48 = pfVar11[2];
  local_44 = pfVar11[3];
  pfVar11 = (float *)FUN_00e9feb0();
  local_60 = *pfVar11 - local_50;
  local_5c = pfVar11[1] - local_4c;
  local_58 = pfVar11[2] - local_48;
  local_54 = pfVar11[3] - local_44;
  pfVar11 = (float *)FUN_00e9fed0();
  local_30 = *pfVar11;
  local_2c = pfVar11[1];
  local_28 = pfVar11[2];
  local_24 = pfVar11[3];
  fVar1 = local_60 * local_60 + local_5c * local_5c + local_58 * local_58;
  if (fVar1 < 0.0 == (fVar1 == 0.0)) {
    FUN_00ddf460(&local_60,&local_60);
  }
  else {
    FUN_00dd5650(&DAT_0163d0ac);
    local_60 = 0.0;
    local_5c = 1.0;
    local_58 = 0.0;
  }
  fVar6 = local_5c * local_28 - local_58 * local_2c;
  fVar1 = local_30 * local_58 - local_60 * local_28;
  fVar5 = local_60 * local_2c - local_5c * local_30;
  fVar3 = fVar1 * local_58 - fVar5 * local_5c;
  fVar2 = local_60 * fVar5 - fVar6 * local_58;
  fVar4 = fVar6 * local_5c - fVar1 * local_60;
  iVar12 = FUN_00932730();
  if (((iVar12 != 0) && (iVar12 = FUN_00a7c800(), iVar12 != 0)) &&
     (iVar12 = FUN_00a12210((&DAT_01dd9a80)[param_4 * 0x20]), iVar12 != 0)) {
    local_40 = *(float *)(iVar12 + 0x40);
    local_3c = *(float *)(iVar12 + 0x44);
    local_38 = *(float *)(iVar12 + 0x48);
    pfVar11 = (float *)FUN_00e9fe70();
    local_20 = local_40 - *pfVar11;
    local_1c = local_3c - pfVar11[1];
    local_18 = local_38 - pfVar11[2];
    local_90 = (float)(&DAT_01dd9a60)[param_4 * 0x20] / 100.0;
    local_8c = (float)(&DAT_01dd9a64)[param_4 * 0x20] / 100.0;
    local_88 = (float)(&DAT_01dd9a68)[param_4 * 0x20] / 100.0;
    if ((*(byte *)(&DAT_01dd9a88 + param_4 * 0x20) & 2) != 0) {
      local_90 = 1.0 - local_90;
      local_8c = 1.0 - local_8c;
      local_88 = 1.0 - local_88;
    }
    local_90 = (local_20 * fVar6 + fVar1 * local_1c + fVar5 * local_18) * local_90;
    local_8c = (local_18 * fVar4 + fVar3 * local_20 + fVar2 * local_1c) * local_8c;
    local_88 = (local_5c * local_1c + local_60 * local_20 + local_58 * local_18) * local_88;
    fVar6 = local_88 * local_60 + local_8c * fVar3 + local_90 * fVar6 + local_50;
    fVar1 = local_88 * local_5c + local_8c * fVar2 + local_90 * fVar1 + local_4c;
    fVar5 = local_88 * local_58 + fVar4 * local_8c + local_90 * fVar5 + local_48;
    fVar7 = local_88 * local_54 + local_8c * local_24 + local_14 * local_90 + local_44;
    local_60 = fVar6 - local_50;
    local_5c = fVar1 - local_4c;
    local_58 = fVar5 - local_48;
    local_54 = fVar7 - local_44;
    fVar8 = local_60 * local_60;
    fVar10 = local_5c * local_5c;
    fVar9 = local_58 * local_58;
    local_40 = local_60;
    local_3c = local_5c;
    local_38 = local_58;
    local_34 = local_54;
    fVar13 = (float10)FUN_00fdef70();
    if (0.01 <= (float)fVar13) {
      if (fVar8 + fVar10 + fVar9 <= 0.0) {
        FUN_00dd5650(&DAT_0163d0ac);
        local_60 = 0.0;
        local_5c = 1.0;
        local_58 = 0.0;
      }
      else {
        FUN_00ddf460(&local_60,&local_60);
      }
    }
    else {
      pfVar11 = (float *)FUN_00e9feb0();
      local_60 = *pfVar11 - local_50;
      local_5c = pfVar11[1] - local_4c;
      local_58 = pfVar11[2] - local_48;
      local_54 = pfVar11[3] - local_44;
    }
    *param_1 = fVar6;
    param_1[1] = fVar1;
    param_1[2] = fVar5;
    param_1[3] = fVar7;
    *param_2 = local_60;
    param_2[1] = local_5c;
    param_2[2] = local_58;
    param_2[3] = local_54;
    *param_3 = fVar3;
    param_3[1] = fVar2;
    param_3[2] = fVar4;
    param_3[3] = local_24;
  }
  return;
}

// 00E51D40  FUN_00e51d40  size=29  [callgraph]
void FUN_00e51d40(int param_1)

{
  FUN_00e4ff40(param_1 + 8,2);
  FUN_00e4f880(param_1 + 8,2);
  return;
}

// 00E51D60  FUN_00e51d60  size=29  [callgraph]
void FUN_00e51d60(int param_1)

{
  FUN_00e4fff0(param_1 + 8,2);
  FUN_00e4f930(param_1 + 8,2);
  return;
}

// 00E51D80  FUN_00e51d80  size=37  [callgraph]
void FUN_00e51d80(undefined4 param_1,undefined4 param_2)

{
  cXmlBinary::cXmlBinary_46(param_1,param_2);
  FUN_00e4ff40(param_1,param_2);
  FUN_00e4f880(param_1,param_2);
  return;
}

// 00E51DB0  FUN_00e51db0  size=30  [callgraph]
void FUN_00e51db0(undefined4 param_1,undefined4 param_2)

{
  FUN_00e4fff0(param_1,param_2);
  FUN_00e4f930(param_1,param_2);
  return;
}

// 00E520E0  FUN_00e520e0  size=54  [callgraph]
void __fastcall FUN_00e520e0(int param_1)

{
  undefined4 local_8;
  undefined1 local_4 [4];
  
  FUN_00e4c440(local_4,&local_8);
  if (*(int *)(param_1 + 100) != 0) {
    FUN_00df3d00(*(int *)(param_1 + 100),local_8,1);
  }
  return;
}

// 00E52160  FUN_00e52160  size=714  [callgraph]
void __fastcall FUN_00e52160(int *param_1)

{
  int iVar1;
  float unaff_EBX;
  float afStack_114 [2];
  undefined1 auStack_10c [4];
  float fStack_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined1 auStack_70 [92];
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)afStack_114;
  iVar1 = (**(code **)(*param_1 + 0x5c))();
  fStack_108 = *(float *)(iVar1 + 0xc);
  fStack_104 = *(float *)(iVar1 + 0x10);
  param_1[0x46] = 0;
  if ((fStack_108 == 0.0) && (fStack_104 == 0.0)) {
    fStack_a8 = 0.0;
    fStack_ac = 0.0;
    fStack_b0 = 0.0;
    uStack_b4 = 0;
    uStack_bc = 0;
    uStack_c0 = 0;
    uStack_c4 = 0;
    uStack_c8 = 0;
    uStack_d0 = 0;
    uStack_d4 = 0;
    uStack_d8 = 0;
    uStack_dc = 0;
    uStack_a4 = 0x3f800000;
    uStack_b8 = 0x3f800000;
    uStack_cc = 0x3f800000;
    uStack_e0 = 0x3f800000;
  }
  else {
    FUN_00e491c0(&fStack_100,param_1);
    fStack_f0 = fStack_100 * -1.0;
    fStack_ec = fStack_fc * -1.0;
    fStack_e8 = fStack_f8 * -1.0;
    fStack_e4 = fStack_f4 * -1.0;
    D3DXMatrixTranslation(&uStack_e0,fStack_100,fStack_fc,fStack_f8);
    uStack_78 = 0;
    uStack_7c = 0;
    uStack_80 = 0;
    uStack_84 = 0;
    uStack_8c = 0;
    uStack_90 = 0;
    uStack_94 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_a4 = 0;
    fStack_a8 = 0.0;
    fStack_ac = 0.0;
    uStack_74 = 0x3f800000;
    uStack_88 = 0x3f800000;
    uStack_9c = 0x3f800000;
    fStack_b0 = 1.0;
    if (afStack_114[0] != 0.0) {
      D3DXMatrixRotationY(auStack_70,afStack_114[0]);
      D3DXMatrixMultiply(&uStack_b8,&uStack_78,&uStack_b8);
    }
    if (unaff_EBX != 0.0) {
      D3DXMatrixRotationX(auStack_70,unaff_EBX);
      D3DXMatrixMultiply(&uStack_b8,&uStack_78,&uStack_b8);
    }
    D3DXMatrixMultiply(&fStack_f0,&fStack_b0,&fStack_f0);
    D3DXVec3TransformNormal(&stack0xfffffee4,auStack_10c,&fStack_fc);
    fStack_b0 = fStack_b0 + fStack_100;
    param_1[0x46] = 1;
    fStack_ac = fStack_ac + fStack_fc;
    fStack_a8 = fStack_a8 + fStack_f8;
  }
  if (param_1[0x45] == 0) {
    FID_conflict__memcpy(param_1 + 0x24,&uStack_e0,0x40);
  }
  else {
    D3DXMatrixMultiply(param_1 + 0x14,param_1 + 4,param_1[0x45] + 0x10);
    D3DXMatrixMultiply(param_1 + 0x24,&fStack_ec,param_1 + 0x14);
    param_1[0x46] = 1;
  }
  if (param_1[0x46] != 0) {
    D3DXMatrixInverse(param_1 + 0x34,0,param_1 + 0x24);
  }
  __security_check_cookie(local_14 ^ (uint)afStack_114);
  return;
}

// 00E52430  FUN_00e52430  size=54  [callgraph]
void __thiscall FUN_00e52430(int *param_1,undefined4 param_2,int param_3,int param_4)

{
  int *piVar1;
  
  piVar1 = (int *)(**(code **)(*param_1 + 0x5c))();
  if ((*piVar1 == param_3) && (piVar1[1] == param_4)) {
    FUN_00e46fc0(param_2,piVar1[2]);
    FUN_00e52160();
  }
  return;
}

// 00E524A0  FUN_00e524a0  size=28  [callgraph]
void __thiscall FUN_00e524a0(int *param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x5c))();
  *(undefined4 *)(iVar1 + 0xc) = param_2;
  FUN_00e52160();
  return;
}

// 00E524C0  FUN_00e524c0  size=28  [callgraph]
void __thiscall FUN_00e524c0(int *param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x5c))();
  *(undefined4 *)(iVar1 + 0x10) = param_2;
  FUN_00e52160();
  return;
}

// 00E524E0  FUN_00e524e0  size=100  [callgraph]
void __thiscall FUN_00e524e0(int *param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = (undefined4 *)(**(code **)(*param_1 + 0x5c))();
  if (param_2 == 0) {
    param_1[0x44] = 0;
    param_1[0x45] = 0;
    *puVar1 = 0xffffffff;
    puVar1[1] = 0;
    FUN_00e52160();
    return;
  }
  *puVar1 = *(undefined4 *)(param_2 + 0x24);
  uVar2 = FUN_00932bb0(param_2);
  puVar1[1] = uVar2;
  FUN_00e46fc0(param_2,puVar1[2]);
  FUN_00e52160();
  return;
}

// 00E52550  FUN_00e52550  size=47  [callgraph]
void __thiscall FUN_00e52550(int *param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x5c))();
  *(undefined4 *)(iVar1 + 8) = param_2;
  if (param_1[0x44] != 0) {
    FUN_00e46fc0(param_1[0x44],param_2);
  }
  FUN_00e52160();
  return;
}

// 00E52580  SoundArea::ShapeBox::vf04  size=317  [class]
void __thiscall SoundArea::ShapeBox::vf04(int param_1,int param_2,float *param_3)

{
  int iVar1;
  float10 fVar2;
  float10 fVar3;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  undefined1 auStack_20 [28];
  
  if (*(int *)(param_1 + 0x118) == 0) {
    local_30 = *param_3;
    local_2c = param_3[1];
    local_28 = param_3[2];
    local_24 = param_3[3];
  }
  else {
    D3DXVec3TransformNormal(&local_30,param_3,param_1 + 0xd0);
    local_30 = *(float *)(param_1 + 0x100) + local_30;
    local_2c = *(float *)(param_1 + 0x104) + local_2c;
    local_28 = *(float *)(param_1 + 0x108) + local_28;
  }
  iVar1 = FUN_00e47220(param_1 + 0x134,&local_30);
  if (((iVar1 != 0) && (*(float *)(param_1 + 0x154) <= local_2c)) &&
     (local_2c <= *(float *)(param_1 + 0x158) + *(float *)(param_1 + 0x154))) {
    fVar2 = (float10)FUN_00e47340(auStack_20,&local_30);
    FUN_00e47060(param_2,param_1 + 0x1a0);
    FUN_00e47060(param_2 + 0x10,auStack_20);
    if ((float)fVar2 != 0.0) {
      fVar3 = (float10)FUN_00e47500(&local_30);
      fVar2 = (float10)(float)fVar2;
      *(float *)(param_2 + 0x20) = (float)((float10)1 - fVar2 / (fVar3 + fVar2));
      return;
    }
    *(undefined4 *)(param_2 + 0x20) = 0x3f800000;
    return;
  }
  return;
}

// 00E526C0  SoundArea::ShapeBox::vf18  size=118  [class]
undefined4 __thiscall SoundArea::ShapeBox::vf18(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 300) = 0;
  *(undefined4 *)(param_1 + 0x124) = 0;
  *(undefined4 *)(param_1 + 0x130) = 0;
  *(undefined4 *)(param_1 + 0x128) = 0;
  *(undefined4 *)(param_1 + 0x120) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x134) = 0;
  *(undefined4 *)(param_1 + 0x138) = 0;
  *(undefined4 *)(param_1 + 0x13c) = 0;
  *(undefined4 *)(param_1 + 0x140) = 0;
  *(undefined4 *)(param_1 + 0x144) = 0;
  *(undefined4 *)(param_1 + 0x148) = 0;
  *(undefined4 *)(param_1 + 0x14c) = 0;
  *(undefined4 *)(param_1 + 0x150) = 0;
  *(undefined4 *)(param_1 + 0x154) = 0;
  *(undefined4 *)(param_1 + 0x158) = 0;
  *(undefined4 *)(param_1 + 0x15c) = 0;
  *(undefined4 *)(param_1 + 0x160) = 0;
  *(undefined4 *)(param_1 + 0x164) = 0;
  *(undefined4 *)(param_1 + 0x168) = 0;
  *(undefined4 *)(param_1 + 0x16c) = 0;
  *(undefined4 *)(param_1 + 0x170) = 0;
  iVar1 = FUN_00e4c180(param_2,param_3);
  if (iVar1 == 0) {
    return 0;
  }
  FUN_00e4b650();
  return 1;
}

// 00E52740  FUN_00e52740  size=82  [between]
void __fastcall FUN_00e52740(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 0x18);
  iVar3 = 0;
  if (0 < iVar1) {
    do {
      puVar2 = *(undefined4 **)(*(int *)(param_1 + 0x10) + iVar3 * 4);
      if (puVar2 != (undefined4 *)0x0) {
        (**(code **)*puVar2)(1);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar1);
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (*(int *)(param_1 + 0x10) != 0) {
    *(undefined4 *)(param_1 + 0x18) = 0;
    if (*(int *)(param_1 + 0x1c) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 0x10),0);
      *(undefined4 *)(param_1 + 0x1c) = 0;
    }
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  return;
}

// 00E52850  SoundArea::ShapeLine::vf04  size=1754  [class]
void __thiscall SoundArea::ShapeLine::vf04(int param_1,float *param_2,float *param_3)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float *pfVar5;
  float10 fVar6;
  float fStack_ec;
  float fStack_e8;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c4;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float local_b0;
  int local_ac;
  float fStack_a8;
  int local_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_8c;
  float local_88;
  float local_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float local_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined4 local_24;
  float fStack_20;
  float fStack_1c;
  
  if (*(int *)(param_1 + 0x118) == 0) {
    local_d0 = *param_3;
    local_cc = param_3[1];
    local_c8 = param_3[2];
    local_c4 = param_3[3];
  }
  else {
    D3DXVec3TransformNormal(&local_d0,param_3,param_1 + 0xd0);
    local_d0 = *(float *)(param_1 + 0x100) + local_d0;
    local_cc = *(float *)(param_1 + 0x104) + local_cc;
    local_c8 = *(float *)(param_1 + 0x108) + local_c8;
  }
  local_b0 = *(float *)(param_1 + 0x13c);
  iVar2 = *(int *)(param_1 + 0x14c);
  iVar3 = *(int *)(param_1 + 0x144);
  local_88 = *(float *)(param_1 + 0x138);
  iVar4 = iVar2 + -1;
  local_2c = 0;
  local_24 = 0;
  local_84 = local_88 + local_b0;
  local_a4 = 1;
  local_ac = 0;
  local_64 = *(float *)(param_1 + 0x134);
  uStack_50 = 0;
  uStack_4c = 0;
  uStack_48 = 0;
  uStack_44 = 0x3f800000;
  uStack_34 = 0x3f800000;
  uStack_40 = 0;
  uStack_3c = 0;
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_28 = 0;
  fStack_20 = 0.0;
  fStack_1c = 0.0;
  if (0 < iVar4) {
    do {
      FUN_00e4e450(&local_d0,iVar3,iVar3 + 0xc,&fStack_c0,&fStack_8c);
      fStack_80 = fStack_c0;
      fStack_7c = fStack_bc;
      fStack_78 = fStack_b8;
      fStack_74 = fStack_b4;
      fVar1 = fStack_bc + local_64;
      if ((local_cc < fStack_bc + local_64) && (fVar1 = fStack_7c, fStack_bc < local_cc)) {
        fStack_7c = local_cc;
        fVar1 = fStack_7c;
      }
      fStack_7c = fVar1;
      fStack_60 = fStack_c0 - local_d0;
      fStack_5c = fStack_7c - local_cc;
      fStack_58 = fStack_b8 - local_c8;
      fVar6 = (float10)FUN_00fdef70();
      fVar1 = (float)fVar6;
      if (local_84 < fVar1 == (local_84 == fVar1)) {
        fStack_a8 = 1.0 - (ABS(0.5 - fStack_8c) + ABS(0.5 - fStack_8c));
        if (0.5 <= fStack_8c) {
          fVar6 = (float10)FUN_00fdef70();
        }
        else {
          fVar6 = (float10)FUN_00fdef70();
        }
        fStack_e8 = (float)fVar6 / local_84;
        if (fStack_e8 < fStack_a8) {
          fStack_e8 = fStack_a8;
        }
        if (1.0 < fStack_e8) {
          fStack_e8 = 1.0;
        }
        if (fStack_8c < 0.0 == (fStack_8c == 0.0)) {
          if (1.0 <= fStack_8c) {
            local_a4 = 1;
            if (local_ac != iVar2 + -2) goto LAB_00e52e7b;
            fStack_e8 = 1.0;
          }
        }
        else {
          if (local_a4 == 0) goto LAB_00e52e7b;
          fStack_e8 = 1.0;
        }
        if (local_88 <= 0.0) {
          fStack_ec = 1.0;
        }
        else {
          fStack_ec = 1.0 - (fVar1 - local_b0) / local_88;
        }
        if (fStack_ec < 0.0 == (fStack_ec == 0.0)) {
          if (1.0 < fStack_ec) {
            fStack_ec = 1.0;
          }
          if (fVar1 < local_b0 == (fVar1 == local_b0)) {
            if (local_b0 <= 0.0) {
              fStack_a0 = fStack_c0;
              fStack_9c = fStack_7c;
              fStack_98 = fStack_b8;
              fStack_94 = fStack_b4;
            }
            else {
              fStack_e0 = local_d0 - fStack_c0;
              fStack_dc = local_cc - fStack_7c;
              fStack_d8 = local_c8 - fStack_b8;
              fStack_d4 = local_c4 - fStack_b4;
              fStack_a8 = fStack_dc * fStack_dc + fStack_e0 * fStack_e0 + fStack_d8 * fStack_d8;
              if (fStack_a8 < 0.0 == (fStack_a8 == 0.0)) {
                FUN_00ddf460(&fStack_e0,&fStack_e0);
              }
              else {
                FUN_00dd5650(&DAT_0163d0ac);
                fStack_e0 = 0.0;
                fStack_dc = 1.0;
                fStack_d8 = 0.0;
              }
              fStack_e0 = local_b0 * fStack_e0;
              fStack_dc = fStack_dc * local_b0;
              fStack_d8 = fStack_d8 * local_b0;
              fStack_d4 = local_b0 * fStack_d4;
              fStack_a0 = fStack_e0 + fStack_c0;
              fStack_9c = fStack_dc + fStack_7c;
              fStack_98 = fStack_d8 + fStack_b8;
              fStack_94 = fStack_d4 + fStack_b4;
            }
          }
          else {
            fStack_a0 = local_d0;
            fStack_9c = local_cc;
            fStack_98 = local_c8;
            fStack_94 = local_c4;
          }
          FUN_00e48ba0(&fStack_80,fStack_e8 * fStack_ec);
          FUN_00e48c20(&fStack_a0,fStack_e8 * fStack_ec);
          if (fStack_ec < 0.0 == (fStack_ec == 0.0)) {
            local_a4 = 0;
            fStack_20 = fStack_ec * fStack_ec + fStack_20;
            fStack_1c = fStack_ec + fStack_1c;
          }
          else {
            local_a4 = 0;
          }
        }
      }
LAB_00e52e7b:
      local_ac = local_ac + 1;
      iVar3 = iVar3 + 0xc;
    } while (local_ac < iVar4);
  }
  FUN_00e48d30(param_2);
  if (*(int *)(param_1 + 0x118) != 0) {
    D3DXVec3TransformNormal(param_2,param_2,param_1 + 0x90);
    *param_2 = *param_2 + *(float *)(param_1 + 0xc0);
    param_2[1] = *(float *)(param_1 + 0xc4) + param_2[1];
    param_2[2] = *(float *)(param_1 + 200) + param_2[2];
  }
  pfVar5 = param_2 + 4;
  if (*(int *)(param_1 + 0x118) == 0) {
    *pfVar5 = *pfVar5;
    param_2[5] = param_2[5];
    param_2[6] = param_2[6];
    param_2[7] = param_2[7];
    return;
  }
  D3DXVec3TransformNormal(pfVar5,pfVar5,param_1 + 0x90);
  *pfVar5 = *pfVar5 + *(float *)(param_1 + 0xc0);
  param_2[5] = *(float *)(param_1 + 0xc4) + param_2[5];
  param_2[6] = *(float *)(param_1 + 200) + param_2[6];
  return;
}

// 00E52F30  SoundArea::ShapeLine::vf10  size=366  [class]
undefined4 __thiscall SoundArea::ShapeLine::vf10(int param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float10 fVar6;
  float fStack_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  
  if (*(int *)(param_1 + 0x118) == 0) {
    local_40 = *param_2;
    local_3c = param_2[1];
    local_38 = param_2[2];
    local_34 = param_2[3];
  }
  else {
    D3DXVec3TransformNormal(&local_40,param_2,param_1 + 0xd0);
    local_40 = *(float *)(param_1 + 0x100) + local_40;
    local_3c = *(float *)(param_1 + 0x104) + local_3c;
    local_38 = *(float *)(param_1 + 0x108) + local_38;
  }
  iVar3 = *(int *)(param_1 + 0x144);
  local_44 = *(float *)(param_1 + 0x13c) + *(float *)(param_1 + 0x138);
  iVar5 = 0;
  fVar1 = *(float *)(param_1 + 0x134);
  iVar4 = *(int *)(param_1 + 0x14c) + -1;
  if (0 < iVar4) {
    do {
      FUN_00e4e450(&local_40,iVar3,iVar3 + 0xc,&fStack_30,&fStack_48);
      fVar2 = fStack_2c + fVar1;
      if ((local_3c < fVar2) && (fVar2 = fStack_2c, fStack_2c < local_3c)) {
        fStack_2c = local_3c;
        fVar2 = fStack_2c;
      }
      fStack_2c = fVar2;
      fStack_20 = fStack_30 - local_40;
      fStack_1c = fStack_2c - local_3c;
      fStack_18 = fStack_28 - local_38;
      fStack_48 = fStack_18 * fStack_18 + fStack_1c * fStack_1c + fStack_20 * fStack_20;
      fVar6 = (float10)FUN_00fdef70();
      fStack_48 = (float)fVar6;
      if (local_44 < fStack_48 == (local_44 == fStack_48)) {
        return 1;
      }
      iVar5 = iVar5 + 1;
      iVar3 = iVar3 + 0xc;
    } while (iVar5 < iVar4);
  }
  return 0;
}

// 00E530B0  SoundArea::ShapeLine::vf18  size=332  [class]
undefined4 __thiscall SoundArea::ShapeLine::vf18(int param_1,int *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  int unaff_EBP;
  
  *(undefined4 *)(param_1 + 300) = 0;
  *(undefined4 *)(param_1 + 0x130) = 0;
  *(undefined4 *)(param_1 + 0x134) = 0;
  *(undefined4 *)(param_1 + 0x138) = 0;
  *(undefined4 *)(param_1 + 0x120) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x13c) = 0;
  *(undefined4 *)(param_1 + 0x124) = 0;
  *(undefined4 *)(param_1 + 0x128) = 0;
  if (*(int *)(param_1 + 0x144) != 0) {
    *(undefined4 *)(param_1 + 0x14c) = 0;
    if (*(int *)(param_1 + 0x150) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 0x144),0);
      *(undefined4 *)(param_1 + 0x150) = 0;
    }
    *(undefined4 *)(param_1 + 0x144) = 0;
    *(undefined4 *)(param_1 + 0x148) = 0;
  }
  iVar2 = FUN_00e4c0e0(param_2,param_3);
  if (iVar2 != 0) {
    iVar2 = (**(code **)(*param_2 + 0x9c))(param_3,"PointNum");
    if (iVar2 != -1) {
      (**(code **)(*param_2 + 0xe8))(iVar2,&stack0xfffffff4);
    }
    if ((*(int *)(param_1 + 0x148) < unaff_EBP) && (iVar2 = FUN_00e614a0(unaff_EBP), iVar2 == 0)) {
      FUN_00dd5650(&DAT_016cdba0);
      return 0;
    }
    if (unaff_EBP != *(int *)(param_1 + 0x14c)) {
      *(int *)(param_1 + 0x14c) = unaff_EBP;
    }
    uVar1 = *(undefined4 *)(param_1 + 0x144);
    iVar2 = (**(code **)(*param_2 + 0x9c))(param_3,"PointArray");
    if (iVar2 != -1) {
      (**(code **)(*param_2 + 0xfc))(iVar2,uVar1,unaff_EBP * 3);
    }
    return 1;
  }
  return 0;
}

// 00E53200  SoundArea::ShapeLine::vf28  size=266  [class]
undefined4 __thiscall
SoundArea::ShapeLine::vf28(int param_1,undefined4 *param_2,float param_3,float param_4)

{
  undefined4 *puVar1;
  float fVar2;
  int iVar3;
  
  *(undefined4 *)(param_1 + 300) = 0;
  *(undefined4 *)(param_1 + 0x130) = 0;
  *(undefined4 *)(param_1 + 0x134) = 0;
  *(undefined4 *)(param_1 + 0x120) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x138) = 0;
  *(undefined4 *)(param_1 + 0x124) = 0;
  *(undefined4 *)(param_1 + 0x13c) = 0;
  *(undefined4 *)(param_1 + 0x128) = 0;
  if ((*(int *)(param_1 + 0x148) < 2) && (iVar3 = FUN_00e614a0(2), iVar3 == 0)) {
    FUN_00dd5650(&DAT_016cdba0);
    return 0;
  }
  if (*(int *)(param_1 + 0x14c) != 2) {
    *(undefined4 *)(param_1 + 0x14c) = 2;
  }
  puVar1 = *(undefined4 **)(param_1 + 0x144);
  fVar2 = (param_4 + param_3) * 1.5;
  *puVar1 = *param_2;
  puVar1[1] = param_2[1];
  puVar1[2] = param_2[2];
  iVar3 = *(int *)(param_1 + 0x144);
  *(undefined4 *)(iVar3 + 0xc) = *param_2;
  *(undefined4 *)(iVar3 + 0x10) = param_2[1];
  *(undefined4 *)(iVar3 + 0x14) = param_2[2];
  **(float **)(param_1 + 0x144) = **(float **)(param_1 + 0x144) - fVar2;
  *(float *)(*(int *)(param_1 + 0x144) + 0xc) = fVar2 + *(float *)(*(int *)(param_1 + 0x144) + 0xc);
  *(undefined4 *)(param_1 + 0x134) = 0;
  *(float *)(param_1 + 0x138) = param_3;
  *(float *)(param_1 + 0x13c) = param_4;
  return 1;
}

// 00E53310  FUN_00e53310  size=694  [between]
int __thiscall FUN_00e53310(int *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  float fVar1;
  int iVar2;
  int iVar3;
  float10 fVar4;
  int local_60;
  float local_5c;
  int local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  undefined1 local_20 [28];
  
  local_5c = 1000.0;
  local_58 = param_1[0x53] + -1;
  local_60 = -1;
  if (local_58 != 0) {
    iVar3 = 2;
    do {
      iVar2 = FUN_00e4e680(param_1,iVar3 + -2,iVar3,param_3,param_4,&local_40);
      if (iVar2 != 0) {
        (**(code **)(*param_1 + 0x24))(local_20,iVar3 + -2);
        (**(code **)(*param_1 + 0x24))(&uStack_38,iVar3);
        fVar4 = (float10)thunk_FUN_00de19d0(&local_40,local_20,auStack_30,0);
        fVar1 = (float)fVar4;
        if (local_5c < fVar1 == (local_5c == fVar1)) {
          local_50 = local_40;
          uStack_4c = uStack_3c;
          uStack_48 = uStack_38;
          uStack_44 = uStack_34;
          local_60 = iVar3;
          local_5c = fVar1;
        }
      }
      iVar3 = iVar3 + 2;
      local_58 = local_58 + -1;
    } while (local_58 != 0);
    if ((local_60 == 2) &&
       (fVar4 = (float10)FUN_00e493e0(param_1,0,2,&local_50), (float10)1.5707963705062866 < fVar4))
    {
      local_60 = 0;
    }
  }
  iVar3 = param_1[0x53];
  if ((local_60 == iVar3 * 2 + -2) &&
     (fVar4 = (float10)FUN_00e493e0(param_1,iVar3 * 2 + -2,iVar3 * 2 + -4,&local_50),
     (float10)1.5707963705062866 < fVar4)) {
    local_60 = param_1[0x53] * 2;
  }
  if (0.0 < (float)param_1[0x4d]) {
    local_58 = param_1[0x53] + -1;
    if (local_58 != 0) {
      iVar3 = 3;
      do {
        iVar2 = FUN_00e4e680(param_1,iVar3 + -2,iVar3,param_3,param_4,&local_40);
        if (iVar2 != 0) {
          (**(code **)(*param_1 + 0x24))(auStack_30,iVar3 + -2);
          (**(code **)(*param_1 + 0x24))(auStack_28,iVar3);
          fVar4 = (float10)thunk_FUN_00de19d0(&local_40,auStack_30,local_20,0);
          fVar1 = (float)fVar4;
          if (local_5c < fVar1 == (local_5c == fVar1)) {
            local_50 = local_40;
            uStack_4c = uStack_3c;
            uStack_48 = uStack_38;
            uStack_44 = uStack_34;
            local_60 = iVar3;
            local_5c = fVar1;
          }
        }
        iVar3 = iVar3 + 2;
        local_58 = local_58 + -1;
      } while (local_58 != 0);
    }
    if ((local_60 == 3) &&
       (fVar4 = (float10)FUN_00e493e0(param_1,1,3,&local_50), (float10)1.5707963705062866 < fVar4))
    {
      local_60 = 1;
    }
    iVar3 = param_1[0x53];
    if ((local_60 == iVar3 * 2 + -1) &&
       (fVar4 = (float10)FUN_00e493e0(param_1,iVar3 * 2 + -1,iVar3 * 2 + -3,&local_50),
       (float10)1.5707963705062866 < fVar4)) {
      local_60 = param_1[0x53] * 2 + 1;
    }
  }
  *param_2 = local_50;
  param_2[1] = uStack_4c;
  param_2[2] = uStack_48;
  param_2[3] = uStack_44;
  return local_60;
}

// 00E535D0  FUN_00e535d0  size=1625  [between]
void __thiscall FUN_00e535d0(int param_1,undefined4 param_2,float *param_3)

{
  undefined4 *puVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  float10 fVar8;
  float local_ec;
  float local_e8;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c4;
  float local_bc;
  int local_b8;
  undefined4 local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  float local_98;
  int local_94;
  int local_90;
  float local_8c;
  float local_88;
  int local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  float local_74;
  int local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  float local_60;
  float local_5c;
  float local_58;
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
  float local_20;
  float local_1c;
  
  local_bc = *(float *)(param_1 + 0x140);
  local_94 = *(int *)(param_1 + 0x15c);
  local_90 = *(int *)(param_1 + 0x170);
  local_98 = *(float *)(param_1 + 0x13c);
  iVar7 = 0;
  local_88 = local_98 + local_bc;
  iVar3 = *(int *)(param_1 + 0x178);
  local_2c = 0;
  local_24 = 0;
  local_b4 = *(undefined4 *)(param_1 + 0x134);
  local_b8 = 0;
  local_84 = 0;
  local_74 = *(float *)(param_1 + 0x138);
  local_50 = 0;
  local_4c = 0;
  local_48 = 0;
  local_44 = 0x3f800000;
  local_34 = 0x3f800000;
  local_40 = 0;
  local_3c = 0;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0.0;
  local_1c = 0.0;
  uVar5 = local_b4;
  uVar6 = local_b4;
  if (0 < iVar3) {
    do {
      local_68 = uVar6;
      local_7c = uVar5;
      puVar1 = (undefined4 *)(local_94 + (uint)*(byte *)(iVar7 + local_90) * 8);
      local_70 = iVar7 + 1;
      local_6c = *puVar1;
      local_64 = puVar1[1];
      puVar1 = (undefined4 *)(local_94 + (uint)*(byte *)(local_70 % iVar3 + local_90) * 8);
      local_80 = *puVar1;
      local_78 = puVar1[1];
      FUN_00e4e450(param_3,&local_6c,&local_80,&local_e0,&local_8c);
      fVar2 = 1.0 - (ABS(0.5 - local_8c) + ABS(0.5 - local_8c));
      if (0.5 <= local_8c) {
        fVar8 = (float10)FUN_00fdef70();
      }
      else {
        fVar8 = (float10)FUN_00fdef70();
      }
      local_e8 = (float)fVar8 / local_88;
      if (local_e8 < fVar2) {
        local_e8 = fVar2;
      }
      if (1.0 < local_e8) {
        local_e8 = 1.0;
      }
      fVar2 = local_dc + local_74;
      if ((fVar2 < param_3[1] == (fVar2 == param_3[1])) && (fVar2 = local_dc, local_dc < param_3[1])
         ) {
        fVar2 = param_3[1];
      }
      local_dc = fVar2;
      local_60 = local_e0 - *param_3;
      local_5c = local_dc - param_3[1];
      local_58 = local_d8 - param_3[2];
      fVar8 = (float10)FUN_00fdef70();
      fVar2 = (float)fVar8;
      if (local_88 < fVar2 == (local_88 == fVar2)) {
        if (local_8c < 0.0 == (local_8c == 0.0)) {
          if (!NAN(local_8c) && 1.0 < local_8c != (local_8c == 1.0)) {
            local_b8 = 1;
            iVar4 = local_84;
            if (iVar7 != iVar3 + -1) goto LAB_00e53c01;
            goto joined_r0x00e539a0;
          }
        }
        else {
          iVar4 = local_b8;
          if (iVar7 == 0) {
            local_84 = 1;
          }
joined_r0x00e539a0:
          if (iVar4 == 0) goto LAB_00e53c01;
          local_e8 = 1.0;
        }
        if (local_98 <= 0.0) {
          local_ec = 1.0;
        }
        else {
          local_ec = 1.0 - (fVar2 - local_bc) / local_98;
        }
        if (local_ec < 0.0 == (local_ec == 0.0)) {
          if (1.0 < local_ec) {
            local_ec = 1.0;
          }
          if (local_bc < fVar2) {
            if (local_bc <= 0.0) {
              local_b0 = local_e0;
              local_ac = local_dc;
              local_a8 = local_d8;
              local_a4 = local_d4;
            }
            else {
              local_d0 = *param_3 - local_e0;
              local_cc = param_3[1] - local_dc;
              local_c8 = param_3[2] - local_d8;
              local_c4 = param_3[3] - local_d4;
              fVar2 = local_d0 * local_d0 + local_cc * local_cc + local_c8 * local_c8;
              if (fVar2 < 0.0 == (fVar2 == 0.0)) {
                FUN_00ddf460(&local_d0,&local_d0);
              }
              else {
                FUN_00dd5650(&DAT_0163d0ac);
                local_d0 = 0.0;
                local_cc = 1.0;
                local_c8 = 0.0;
              }
              local_d0 = local_bc * local_d0;
              local_cc = local_cc * local_bc;
              local_c8 = local_c8 * local_bc;
              local_c4 = local_bc * local_c4;
              local_b0 = local_d0 + local_e0;
              local_ac = local_cc + local_dc;
              local_a8 = local_c8 + local_d8;
              local_a4 = local_c4 + local_d4;
            }
          }
          else {
            local_b0 = *param_3;
            local_ac = param_3[1];
            local_a8 = param_3[2];
            local_a4 = param_3[3];
          }
          FUN_00e48ba0(&local_e0,local_e8 * local_ec);
          FUN_00e48c20(&local_b0,local_e8 * local_ec);
          if (local_ec < 0.0 == (local_ec == 0.0)) {
            local_b8 = 0;
            local_20 = local_ec * local_ec + local_20;
            local_1c = local_ec + local_1c;
          }
          else {
            local_b8 = 0;
          }
        }
      }
LAB_00e53c01:
      iVar7 = local_70;
      uVar5 = local_7c;
      uVar6 = local_68;
    } while (local_70 < iVar3);
  }
  FUN_00e48d30(param_2);
  return;
}

// 00E53C30  SoundArea::ShapePrism::vf18  size=618  [class]
undefined4 __thiscall SoundArea::ShapePrism::vf18(int param_1,int *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 unaff_EBX;
  int unaff_EBP;
  int unaff_retaddr;
  
  *(undefined4 *)(param_1 + 300) = 0;
  *(undefined4 *)(param_1 + 0x130) = 0;
  *(undefined4 *)(param_1 + 0x134) = 0;
  *(undefined4 *)(param_1 + 0x138) = 0;
  *(undefined4 *)(param_1 + 0x120) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x13c) = 0;
  *(undefined4 *)(param_1 + 0x124) = 0;
  *(undefined4 *)(param_1 + 0x140) = 0;
  *(undefined4 *)(param_1 + 0x128) = 0;
  if (*(int *)(param_1 + 0x148) != 0) {
    *(undefined4 *)(param_1 + 0x150) = 0;
    if (*(int *)(param_1 + 0x154) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 0x148),0);
      *(undefined4 *)(param_1 + 0x154) = 0;
    }
    *(undefined4 *)(param_1 + 0x148) = 0;
    *(undefined4 *)(param_1 + 0x14c) = 0;
  }
  if (*(int *)(param_1 + 0x15c) != 0) {
    *(undefined4 *)(param_1 + 0x164) = 0;
    if (*(int *)(param_1 + 0x168) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 0x15c),0);
      *(undefined4 *)(param_1 + 0x168) = 0;
    }
    *(undefined4 *)(param_1 + 0x15c) = 0;
    *(undefined4 *)(param_1 + 0x160) = 0;
  }
  if (*(int *)(param_1 + 0x170) != 0) {
    *(undefined4 *)(param_1 + 0x178) = 0;
    if (*(int *)(param_1 + 0x17c) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 0x170),0);
      *(undefined4 *)(param_1 + 0x17c) = 0;
    }
    *(undefined4 *)(param_1 + 0x170) = 0;
    *(undefined4 *)(param_1 + 0x174) = 0;
  }
  iVar2 = FUN_00e4c250(param_2,param_3);
  if (iVar2 != 0) {
    iVar2 = (**(code **)(*param_2 + 0x9c))(param_3,"IndexNum");
    if (iVar2 != -1) {
      (**(code **)(*param_2 + 0xe8))(iVar2,&stack0x00000000);
    }
    if ((unaff_retaddr <= *(int *)(param_1 + 0x14c)) ||
       (iVar2 = FUN_00e616b0(unaff_retaddr), iVar2 != 0)) {
      if (unaff_retaddr != *(int *)(param_1 + 0x150)) {
        *(int *)(param_1 + 0x150) = unaff_retaddr;
      }
      uVar1 = *(undefined4 *)(unaff_EBP + 0x148);
      iVar2 = (**(code **)(*param_2 + 0x9c))(param_3,"IndexArray");
      if (iVar2 != -1) {
        (**(code **)(*param_2 + 0x114))(iVar2,uVar1,unaff_EBP);
      }
      iVar2 = (**(code **)(*param_2 + 0x9c))(param_3,"PointNum");
      if (iVar2 != -1) {
        (**(code **)(*param_2 + 0xe8))(iVar2,&stack0x00000000);
      }
      if ((unaff_retaddr <= *(int *)(unaff_EBP + 0x160)) ||
         (iVar2 = FUN_00e61780(unaff_retaddr), iVar2 != 0)) {
        if (unaff_retaddr != *(int *)(unaff_EBP + 0x164)) {
          *(int *)(unaff_EBP + 0x164) = unaff_retaddr;
        }
        FUN_00d9fe40(param_3,"PointArray",*(undefined4 *)(unaff_EBP + 0x15c),unaff_retaddr * 2);
        iVar2 = (**(code **)(*param_2 + 0x9c))(param_3,"OutlineIndexNum");
        if (iVar2 != -1) {
          (**(code **)(*param_2 + 0xe8))(iVar2,&stack0xfffffff8);
        }
        iVar2 = FUN_00e624a0(unaff_EBX);
        if (iVar2 == 0) {
          return 0;
        }
        FUN_00d9fd50(param_3,"OutlineIndexArray",*(undefined4 *)(unaff_EBP + 0x170),unaff_EBX);
        FUN_00e4d3b0();
        return 1;
      }
    }
    FUN_00dd5650(&DAT_016cdba0);
    return 0;
  }
  return 0;
}

// 00E53EA0  SoundArea::ShapePrism::vf28  size=496  [class]
undefined4 __thiscall
SoundArea::ShapePrism::vf28(int param_1,float *param_2,float param_3,float param_4)

{
  float fVar1;
  float fVar2;
  int iVar3;
  
  *(undefined4 *)(param_1 + 300) = 0;
  *(undefined4 *)(param_1 + 0x130) = 0;
  *(undefined4 *)(param_1 + 0x134) = 0;
  *(undefined4 *)(param_1 + 0x120) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x138) = 0;
  *(undefined4 *)(param_1 + 0x124) = 0;
  *(undefined4 *)(param_1 + 0x13c) = 0;
  *(undefined4 *)(param_1 + 0x128) = 0;
  *(undefined4 *)(param_1 + 0x140) = 0;
  if (*(int *)(param_1 + 0x14c) < 3) {
    iVar3 = FUN_00e616b0(3);
    if (iVar3 == 0) goto LAB_00e53f00;
  }
  if (*(int *)(param_1 + 0x150) != 3) {
    *(undefined4 *)(param_1 + 0x150) = 3;
  }
  if (*(int *)(param_1 + 0x160) < 3) {
    iVar3 = FUN_00e61780(3);
    if (iVar3 == 0) goto LAB_00e53f00;
  }
  if (*(int *)(param_1 + 0x164) != 3) {
    *(undefined4 *)(param_1 + 0x164) = 3;
  }
  if (*(int *)(param_1 + 0x174) < 3) {
    iVar3 = FUN_00e616b0(3);
    if (iVar3 == 0) {
LAB_00e53f00:
      FUN_00dd5650(&DAT_016cdba0);
      return 0;
    }
  }
  if (*(int *)(param_1 + 0x178) != 3) {
    *(undefined4 *)(param_1 + 0x178) = 3;
  }
  **(undefined1 **)(param_1 + 0x148) = 0;
  *(undefined1 *)(*(int *)(param_1 + 0x148) + 1) = 1;
  fVar1 = (param_4 + param_3) * 1.5;
  *(undefined1 *)(*(int *)(param_1 + 0x148) + 2) = 2;
  **(float **)(param_1 + 0x15c) = *param_2;
  *(float *)(*(int *)(param_1 + 0x15c) + 4) = param_2[2] + (fVar1 * 1.73 * 2.0) / 3.0;
  *(float *)(*(int *)(param_1 + 0x15c) + 8) = *param_2 - fVar1;
  fVar2 = (fVar1 * 1.73) / 3.0;
  *(float *)(*(int *)(param_1 + 0x15c) + 0xc) = param_2[2] - fVar2;
  *(float *)(*(int *)(param_1 + 0x15c) + 0x10) = *param_2 + fVar1;
  *(float *)(*(int *)(param_1 + 0x15c) + 0x14) = param_2[2] - fVar2;
  **(undefined1 **)(param_1 + 0x170) = 0;
  *(undefined1 *)(*(int *)(param_1 + 0x170) + 1) = 1;
  *(undefined1 *)(*(int *)(param_1 + 0x170) + 2) = 2;
  *(float *)(param_1 + 0x134) = param_2[1];
  *(float *)(param_1 + 0x138) = fVar1 * 2.0;
  *(float *)(param_1 + 0x13c) = param_3;
  *(float *)(param_1 + 0x140) = param_4;
  FUN_00e4d3b0();
  return 1;
}

// 00E54090  FUN_00e54090  size=595  [between]
bool __thiscall
FUN_00e54090(int *param_1,undefined4 *param_2,int *param_3,int *param_4,undefined4 param_5,
            undefined4 param_6)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  float10 fVar9;
  float local_a8;
  uint local_a4;
  int local_a0;
  int local_9c;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [16];
  undefined1 local_30 [16];
  undefined1 auStack_20 [28];
  
  local_a8 = 1000.0;
  iVar1 = param_1[0x52];
  uVar2 = param_1[0x54];
  local_9c = -1;
  local_a0 = -1;
  local_a4 = 0;
  iVar4 = -1;
  if (uVar2 != 0) {
    uVar3 = 0;
    while( true ) {
      do {
        uVar7 = (uint)*(byte *)(uVar3 + local_a4 + iVar1);
        uVar3 = uVar3 + 1;
        uVar6 = (uint)*(byte *)(uVar3 % 3 + local_a4 + iVar1);
        iVar4 = FUN_00e4d780(uVar7,uVar6);
        if (iVar4 < 2) {
          iVar4 = uVar6 * 2;
          iVar8 = uVar7 * 2;
          iVar5 = FUN_00e4ecd0(param_1,iVar8,iVar4,param_5,param_6,&local_70);
          if (iVar5 != 0) {
            (**(code **)(*param_1 + 0x24))(local_30,iVar8);
            (**(code **)(*param_1 + 0x24))(&uStack_58,iVar4);
            fVar9 = (float10)thunk_FUN_00de19d0(&local_70,local_30,auStack_50,0);
            if ((float)fVar9 < local_a8) {
              local_90 = local_70;
              local_8c = uStack_6c;
              local_88 = uStack_68;
              local_84 = uStack_64;
              local_a8 = (float)fVar9;
              local_a0 = iVar4;
              local_9c = iVar8;
            }
          }
          if (0.0 < (float)param_1[0x4e]) {
            iVar4 = iVar4 + 1;
            iVar8 = iVar8 + 1;
            iVar5 = FUN_00e4ecd0(param_1,iVar8,iVar4,param_5,param_6,&local_60);
            if (iVar5 != 0) {
              (**(code **)(*param_1 + 0x24))(auStack_20,iVar8);
              (**(code **)(*param_1 + 0x24))(auStack_48,iVar4);
              fVar9 = (float10)thunk_FUN_00de19d0(&local_60,auStack_20,auStack_40,0);
              if ((float)fVar9 < local_a8) {
                local_90 = local_60;
                local_8c = uStack_5c;
                local_88 = uStack_58;
                local_84 = uStack_54;
                local_a8 = (float)fVar9;
                local_a0 = iVar4;
                local_9c = iVar8;
              }
            }
          }
        }
      } while (uVar3 < 3);
      local_a4 = local_a4 + 3;
      iVar4 = local_9c;
      if (uVar2 <= local_a4) break;
      uVar3 = 0;
    }
  }
  *param_2 = local_90;
  param_2[1] = local_8c;
  param_2[2] = local_88;
  param_2[3] = local_84;
  *param_3 = iVar4;
  *param_4 = local_a0;
  return iVar4 != -1;
}

// 00E542F0  SoundArea::ShapeRail::vf04  size=234  [class]
void __thiscall SoundArea::ShapeRail::vf04(int param_1,undefined4 param_2,float *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int local_28 [2];
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  if (*(int *)(param_1 + 0x118) == 0) {
    local_20 = *param_3;
    local_1c = param_3[1];
    local_18 = param_3[2];
    local_14 = param_3[3];
  }
  else {
    D3DXVec3TransformNormal(&local_20,param_3,param_1 + 0xd0);
    local_20 = *(float *)(param_1 + 0x100) + local_20;
    local_1c = *(float *)(param_1 + 0x104) + local_1c;
    local_18 = *(float *)(param_1 + 0x108) + local_18;
  }
  local_28[0] = *(int *)(param_1 + 0x138);
  iVar3 = *(int *)(param_1 + 0x140) + -4;
  iVar2 = 0;
  if (0 < iVar3) {
    while (iVar1 = FUN_00e48130(local_28[0],&local_20), iVar1 == 0) {
      local_28[0] = local_28[0] + 0x30;
      iVar2 = iVar2 + 4;
      if (iVar3 <= iVar2) {
        return;
      }
    }
    FUN_00e485c0(local_28,*(int *)(param_1 + 0x138) + iVar2 * 0xc,&local_20);
    FUN_00e4d850(param_2,iVar2,local_28,&local_20);
  }
  return;
}

// 00E543E0  SoundArea::ShapeRail::vf14  size=486  [class]
undefined4 __thiscall
SoundArea::ShapeRail::vf14(int param_1,undefined4 param_2,float *param_3,float *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int local_3c;
  int local_38 [2];
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  if (*(int *)(param_1 + 0x118) == 0) {
    local_30 = *param_3;
    local_2c = param_3[1];
    local_28 = param_3[2];
    local_24 = param_3[3];
  }
  else {
    D3DXVec3TransformNormal(&local_30,param_3,param_1 + 0xd0);
    local_30 = local_30 + *(float *)(param_1 + 0x100);
    local_2c = *(float *)(param_1 + 0x104) + local_2c;
    local_28 = *(float *)(param_1 + 0x108) + local_28;
  }
  local_3c = *(int *)(param_1 + 0x138);
  iVar2 = *(int *)(param_1 + 0x140) + -4;
  iVar3 = 0;
  local_38[0] = local_3c;
  if (0 < iVar2) {
    do {
      iVar1 = FUN_00e48130(local_3c,&local_30);
      if (iVar1 != 0) {
        FUN_00e485c0(local_38,local_38[0] + iVar3 * 0xc,&local_30);
        FUN_00e4d8e0(param_2,iVar3,local_38);
        return 1;
      }
      local_3c = local_3c + 0x30;
      iVar3 = iVar3 + 4;
    } while (iVar3 < iVar2);
  }
  if (*(int *)(param_1 + 0x118) == 0) {
    fStack_20 = *param_4;
    fStack_1c = param_4[1];
    fStack_18 = param_4[2];
    fStack_14 = param_4[3];
  }
  else {
    D3DXVec3TransformNormal(&fStack_20,param_4,param_1 + 0xd0);
    fStack_20 = *(float *)(param_1 + 0x100) + fStack_20;
    fStack_1c = *(float *)(param_1 + 0x104) + fStack_1c;
    fStack_18 = *(float *)(param_1 + 0x108) + fStack_18;
  }
  iVar2 = FUN_00e4d9f0(local_38[0],&local_30,&fStack_20);
  if (iVar2 < 1) {
    iVar2 = *(int *)(param_1 + 0x140);
    iVar3 = FUN_00e4d9f0(local_38[0] + (iVar2 * 3 + -0xc) * 4,&local_30,&fStack_20);
    if (-1 < iVar3) {
      return 0;
    }
    local_38[0] = 0;
    local_38[1] = 0x3f800000;
    FUN_00e4d8e0(param_2,iVar2 + -8,local_38);
    return 1;
  }
  local_38[0] = 0;
  local_38[1] = 0;
  FUN_00e4d8e0(param_2,0,local_38);
  return 1;
}

// 00E545D0  FUN_00e545d0  size=341  [between]
undefined4 __fastcall FUN_00e545d0(int param_1)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  
  iVar14 = (int)((*(int *)(param_1 + 0x140) >> 0x1f & 3U) + *(int *)(param_1 + 0x140)) >> 2;
  if (iVar14 != *(int *)(param_1 + 0x154)) {
    if ((*(int *)(param_1 + 0x150) < iVar14) && (iVar11 = FUN_00e614a0(iVar14), iVar11 == 0)) {
      FUN_00dd5650(&DAT_016cdba0);
      return 0;
    }
    if (iVar14 != *(int *)(param_1 + 0x154)) {
      *(int *)(param_1 + 0x154) = iVar14;
    }
  }
  if (0 < iVar14) {
    iVar13 = 0;
    iVar11 = 0;
    do {
      pfVar1 = (float *)(*(int *)(param_1 + 0x138) + iVar11);
      iVar12 = *(int *)(param_1 + 0x138) + iVar11;
      iVar11 = iVar11 + 0x30;
      iVar13 = iVar13 + 0xc;
      iVar14 = iVar14 + -1;
      fVar2 = *(float *)(iVar12 + 4);
      fVar3 = *(float *)(iVar12 + 8);
      fVar4 = *(float *)(iVar12 + 0x10);
      fVar5 = *(float *)(iVar12 + 0x14);
      fVar6 = *(float *)(iVar12 + 0x1c);
      fVar7 = *(float *)(iVar12 + 0x20);
      fVar8 = *(float *)(iVar12 + 0x28);
      fVar9 = *(float *)(iVar12 + 0x2c);
      iVar10 = *(int *)(param_1 + 0x14c);
      *(float *)(iVar10 + -0xc + iVar13) =
           (*(float *)(iVar12 + 0x24) +
           *(float *)(iVar12 + 0x18) + *(float *)(iVar12 + 0xc) + *pfVar1 + 0.0) * 0.25;
      *(float *)(iVar10 + -8 + iVar13) = (fVar8 + fVar6 + fVar4 + fVar2 + 0.0) * 0.25;
      *(float *)(iVar10 + -4 + iVar13) = (fVar9 + fVar7 + fVar5 + fVar3 + 0.0) * 0.25;
    } while (iVar14 != 0);
  }
  return 1;
}

// 00E54730  SoundArea::ShapeRail::vf28  size=555  [class]
bool __thiscall SoundArea::ShapeRail::vf28(int param_1,float *param_2,float param_3,float param_4)

{
  float *pfVar1;
  undefined4 *puVar2;
  float fVar3;
  int iVar4;
  
  *(undefined4 *)(param_1 + 300) = 0;
  *(undefined4 *)(param_1 + 0x130) = 0;
  *(undefined4 *)(param_1 + 0x120) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x124) = 0;
  *(undefined4 *)(param_1 + 0x128) = 0;
  if (*(int *)(param_1 + 0x13c) < 8) {
    iVar4 = FUN_00e614a0(8);
    if (iVar4 == 0) goto LAB_00e54778;
  }
  if (*(int *)(param_1 + 0x140) != 8) {
    *(undefined4 *)(param_1 + 0x140) = 8;
  }
  if (*(int *)(param_1 + 0x164) < 2) {
    iVar4 = FUN_00e61860(2);
    if (iVar4 == 0) {
LAB_00e54778:
      FUN_00dd5650(&DAT_016cdba0);
      return false;
    }
  }
  if (*(int *)(param_1 + 0x168) != 2) {
    *(undefined4 *)(param_1 + 0x168) = 2;
  }
  pfVar1 = *(float **)(param_1 + 0x138);
  fVar3 = (param_3 + param_4) * 1.5;
  *pfVar1 = *param_2 - fVar3;
  pfVar1[1] = param_2[1] - fVar3;
  *(float *)(*(int *)(param_1 + 0x138) + 8) = param_2[2] - fVar3;
  iVar4 = *(int *)(param_1 + 0x138);
  *(float *)(iVar4 + 0xc) = *param_2 - fVar3;
  *(float *)(iVar4 + 0x10) = param_2[1] + fVar3;
  *(float *)(*(int *)(param_1 + 0x138) + 0x14) = param_2[2] - fVar3;
  iVar4 = *(int *)(param_1 + 0x138);
  *(float *)(iVar4 + 0x18) = *param_2 + fVar3;
  *(float *)(iVar4 + 0x1c) = param_2[1] - fVar3;
  *(float *)(*(int *)(param_1 + 0x138) + 0x20) = param_2[2] - fVar3;
  iVar4 = *(int *)(param_1 + 0x138);
  *(float *)(iVar4 + 0x24) = *param_2 + fVar3;
  *(float *)(iVar4 + 0x28) = param_2[1] + fVar3;
  *(float *)(*(int *)(param_1 + 0x138) + 0x2c) = param_2[2] - fVar3;
  iVar4 = *(int *)(param_1 + 0x138);
  *(float *)(iVar4 + 0x30) = *param_2 - fVar3;
  *(float *)(iVar4 + 0x34) = param_2[1] - fVar3;
  *(float *)(*(int *)(param_1 + 0x138) + 0x38) = param_2[2] + fVar3;
  iVar4 = *(int *)(param_1 + 0x138);
  *(float *)(iVar4 + 0x3c) = *param_2 - fVar3;
  *(float *)(iVar4 + 0x40) = param_2[1] + fVar3;
  *(float *)(*(int *)(param_1 + 0x138) + 0x44) = param_2[2] + fVar3;
  iVar4 = *(int *)(param_1 + 0x138);
  *(float *)(iVar4 + 0x48) = *param_2 + fVar3;
  *(float *)(iVar4 + 0x4c) = param_2[1] - fVar3;
  *(float *)(*(int *)(param_1 + 0x138) + 0x50) = param_2[2] + fVar3;
  iVar4 = *(int *)(param_1 + 0x138);
  *(float *)(iVar4 + 0x54) = *param_2 + fVar3;
  *(float *)(iVar4 + 0x58) = param_2[1] + fVar3;
  *(float *)(*(int *)(param_1 + 0x138) + 0x5c) = fVar3 + param_2[2];
  puVar2 = *(undefined4 **)(param_1 + 0x160);
  *puVar2 = 0;
  puVar2[1] = 0x3f800000;
  iVar4 = FUN_00e545d0();
  return iVar4 != 0;
}

// 00E54960  SoundArea::ShapeRail::vf30  size=342  [class]
void __thiscall SoundArea::ShapeRail::vf30(int param_1,float *param_2)

{
  float *pfVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar3 = *(int *)(param_1 + 0x140);
  iVar4 = 0;
  if (3 < iVar3) {
    iVar2 = 0;
    iVar5 = (iVar3 - 4U >> 2) + 1;
    iVar4 = iVar5 * 4;
    do {
      *(float *)(*(int *)(param_1 + 0x138) + iVar2) =
           *param_2 + *(float *)(*(int *)(param_1 + 0x138) + iVar2);
      pfVar1 = (float *)(iVar2 + 4 + *(int *)(param_1 + 0x138));
      *pfVar1 = param_2[1] + *pfVar1;
      pfVar1 = (float *)(iVar2 + 8 + *(int *)(param_1 + 0x138));
      *pfVar1 = param_2[2] + *pfVar1;
      pfVar1 = (float *)(iVar2 + 0xc + *(int *)(param_1 + 0x138));
      *pfVar1 = *param_2 + *pfVar1;
      pfVar1 = (float *)(iVar2 + 0x10 + *(int *)(param_1 + 0x138));
      *pfVar1 = param_2[1] + *pfVar1;
      pfVar1 = (float *)(iVar2 + 0x14 + *(int *)(param_1 + 0x138));
      *pfVar1 = param_2[2] + *pfVar1;
      *(float *)(iVar2 + 0x18 + *(int *)(param_1 + 0x138)) =
           *(float *)(iVar2 + 0x18 + *(int *)(param_1 + 0x138)) + *param_2;
      pfVar1 = (float *)(iVar2 + 0x1c + *(int *)(param_1 + 0x138));
      *pfVar1 = param_2[1] + *pfVar1;
      pfVar1 = (float *)(iVar2 + 0x20 + *(int *)(param_1 + 0x138));
      *pfVar1 = param_2[2] + *pfVar1;
      pfVar1 = (float *)(iVar2 + 0x24 + *(int *)(param_1 + 0x138));
      *pfVar1 = *param_2 + *pfVar1;
      pfVar1 = (float *)(iVar2 + 0x28 + *(int *)(param_1 + 0x138));
      *pfVar1 = param_2[1] + *pfVar1;
      pfVar1 = (float *)(iVar2 + 0x2c + *(int *)(param_1 + 0x138));
      iVar2 = iVar2 + 0x30;
      iVar5 = iVar5 + -1;
      *pfVar1 = param_2[2] + *pfVar1;
    } while (iVar5 != 0);
  }
  if (iVar4 < iVar3) {
    iVar2 = iVar4 * 0xc;
    iVar3 = iVar3 - iVar4;
    do {
      *(float *)(*(int *)(param_1 + 0x138) + iVar2) =
           *(float *)(*(int *)(param_1 + 0x138) + iVar2) + *param_2;
      pfVar1 = (float *)(iVar2 + 4 + *(int *)(param_1 + 0x138));
      *pfVar1 = param_2[1] + *pfVar1;
      iVar4 = iVar2 + 8;
      iVar5 = iVar2 + 8;
      iVar2 = iVar2 + 0xc;
      iVar3 = iVar3 + -1;
      *(float *)(iVar5 + *(int *)(param_1 + 0x138)) =
           *(float *)(iVar4 + *(int *)(param_1 + 0x138)) + param_2[2];
    } while (iVar3 != 0);
  }
  FUN_00e545d0();
  return;
}

// 00E54AC0  FUN_00e54ac0  size=406  [between]
int __thiscall FUN_00e54ac0(int *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float10 fVar5;
  int local_64;
  uint local_60;
  float local_5c;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined1 auStack_30 [16];
  undefined1 local_20 [28];
  
  local_5c = 1000.0;
  iVar2 = param_1[0x55];
  local_64 = -1;
  local_60 = 0;
  if (iVar2 != 1) {
    iVar4 = 10;
    do {
      iVar3 = FUN_00e4e680(param_1,iVar4 + -6,iVar4,param_3,param_4,&local_40);
      if (iVar3 != 0) {
        (**(code **)(*param_1 + 0x24))(local_20,iVar4 + -6);
        (**(code **)(*param_1 + 0x24))(&uStack_38,iVar4);
        fVar5 = (float10)thunk_FUN_00de19d0(&local_40,local_20,auStack_30,0);
        fVar1 = (float)fVar5;
        if (local_5c < fVar1 == (local_5c == fVar1)) {
          local_50 = local_40;
          local_64 = local_60 + 1;
          uStack_4c = uStack_3c;
          uStack_48 = uStack_38;
          uStack_44 = uStack_34;
          local_5c = fVar1;
        }
      }
      local_60 = local_60 + 1;
      iVar4 = iVar4 + 6;
    } while (local_60 < iVar2 - 1U);
    if ((local_64 == 1) &&
       (fVar5 = (float10)FUN_00e493e0(param_1,4,10,&local_50), (float10)1.5707963705062866 < fVar5))
    {
      local_64 = 0;
    }
  }
  if ((local_64 == param_1[0x55] + -1) &&
     (fVar5 = (float10)FUN_00e493e0(param_1,param_1[0x55] * 6 + -2,param_1[0x55] * 6 + -8,&local_50)
     , (float10)1.5707963705062866 < fVar5)) {
    local_64 = param_1[0x55];
  }
  *param_2 = local_50;
  param_2[1] = uStack_4c;
  param_2[2] = uStack_48;
  param_2[3] = uStack_44;
  return local_64;
}

// 00E54C60  FUN_00e54c60  size=237  [between]
void FUN_00e54c60(int *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  float10 fVar2;
  undefined4 uStack_30;
  float fStack_28;
  float fStack_24;
  undefined1 auStack_20 [28];
  
  fVar2 = (float10)(**(code **)(*param_1 + 0x4c))();
  fStack_24 = (float)fVar2;
  fVar2 = (float10)(**(code **)(*param_1 + 0x54))();
  fStack_28 = (float)fVar2;
  if (fStack_24 < 0.0) {
    fStack_24 = 1.5;
  }
  if (fStack_28 < 0.0) {
    fStack_28 = 0.0;
  }
  if (0.0 < fStack_24) {
    fStack_24 = fStack_24 + fStack_28;
    uVar1 = FUN_00e4f740(param_2,param_3);
    (**(code **)(*param_1 + 0x24))(auStack_20,param_2);
    FUN_00f96130(auStack_20,fStack_24,uVar1,2,0,0);
  }
  if (0.0 < fStack_28) {
    (**(code **)(*param_1 + 0x24))(auStack_20,param_2);
    FUN_00f96130(&fStack_28,uStack_30,0xffffffff,2,0,0);
  }
  return;
}

// 00E54D50  FUN_00e54d50  size=383  [between]
void __fastcall FUN_00e54d50(int *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  iVar5 = (**(code **)(*(int *)*param_1 + 0x5c))();
  if ((*(float *)(iVar5 + 0xc) != 0.0) ||
     (iVar5 = (**(code **)(*(int *)*param_1 + 0x5c))(), *(float *)(iVar5 + 0x10) != 0.0)) {
    FUN_00e52160();
    FUN_00e491c0(&fStack_20,*param_1);
    fStack_50 = fStack_20 - (float)param_1[4];
    fStack_4c = fStack_1c - (float)param_1[5];
    fStack_48 = fStack_18 - (float)param_1[6];
    fStack_44 = fStack_14 - (float)param_1[7];
    if ((fStack_50 != 0.0) || ((fStack_4c != 0.0 || (fStack_48 != 0.0)))) {
      fVar1 = fStack_50;
      fVar2 = fStack_4c;
      fVar3 = fStack_48;
      fVar4 = fStack_44;
      if (*(int *)(*param_1 + 0x118) != 0) {
        D3DXVec3TransformNormal(&fStack_40,&fStack_50,*param_1 + 0xd0);
        fVar1 = fStack_40;
        fVar2 = fStack_3c;
        fVar3 = fStack_38;
        fVar4 = fStack_34;
      }
      fStack_34 = fVar4;
      fStack_38 = fVar3;
      fStack_3c = fVar2;
      fStack_40 = fVar1;
      fStack_30 = fStack_50 - fStack_40;
      fStack_2c = fStack_4c - fStack_3c;
      fStack_28 = fStack_48 - fStack_38;
      fStack_24 = fStack_44 - fStack_34;
      if (*(int *)(*param_1 + 0x118) != 0) {
        D3DXVec3TransformNormal(&fStack_30,&fStack_30,*param_1 + 0x90);
      }
      (**(code **)(*(int *)*param_1 + 0x30))(&fStack_30);
      FUN_00e52160();
      return;
    }
  }
  return;
}

// 00E54F70  FUN_00e54f70  size=88  [between]
undefined4 __thiscall FUN_00e54f70(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  
  if (*(int *)(param_1 + 4) == 0) {
    if (param_2 == 0) {
      if (DAT_01dd94f8 == 0) {
        return 0;
      }
      iVar1 = FUN_00df4980(param_3,DAT_01dd94f8,0);
    }
    else {
      if (DAT_01dd94f8 == 0) {
        return 0;
      }
      iVar1 = FUN_00df4e10(param_2,DAT_01dd94f8,0);
    }
    *(int *)(param_1 + 4) = iVar1;
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}

// 00E552A0  FUN_00e552a0  size=210  [between]
void __thiscall FUN_00e552a0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int local_1c;
  int local_18;
  int local_14;
  
  iVar4 = param_2;
  iVar1 = *(int *)(param_1 + 0x14);
  local_14 = 0;
  if (0 < iVar1) {
    local_1c = 0;
    do {
      *(int *)(iVar4 + 0x38) = local_14;
      piVar5 = (int *)(*(int *)(param_1 + 0xc) + local_1c);
      if (*piVar5 != 0) {
        iVar2 = piVar5[4];
        local_18 = 0;
        if (0 < iVar2) {
          param_2 = 0;
          do {
            *(int *)(iVar4 + 0x3c) = local_18;
            iVar7 = piVar5[2] + param_2;
            *(uint *)(iVar4 + 0x44) = (uint)*(byte *)(iVar7 + 3);
            iVar3 = *(int *)(iVar7 + 0x18);
            iVar6 = 0;
            if (0 < iVar3) {
              do {
                *(int *)(iVar4 + 0x40) = iVar6;
                (**(code **)(**(int **)(*(int *)(iVar7 + 0x10) + iVar6 * 4) + 0x58))(iVar4);
                iVar6 = iVar6 + 1;
              } while (iVar6 < iVar3);
            }
            param_2 = param_2 + 0x44;
            local_18 = local_18 + 1;
          } while (local_18 < iVar2);
        }
      }
      local_1c = local_1c + 0x2c;
      local_14 = local_14 + 1;
    } while (local_14 < iVar1);
  }
  return;
}

// 00E553B0  FUN_00e553b0  size=37  [between]
void __fastcall FUN_00e553b0(int param_1)

{
  if ((*(byte *)(param_1 + 0x24) & 1) != 0) {
    if (*(int *)(param_1 + 4) != 0) {
      thunk_FUN_00df2950(*(int *)(param_1 + 4));
    }
    *(uint *)(param_1 + 0x24) = *(uint *)(param_1 + 0x24) & 0xfffffffe;
  }
  FUN_00e52740();
  return;
}

// 00E55460  FUN_00e55460  size=304  [between]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00e55460(int param_1)

{
  float *pfVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 auStack_78 [8];
  undefined1 local_70 [4];
  undefined1 auStack_6c [12];
  undefined1 local_60 [48];
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)auStack_78;
  if ((*(byte *)(param_1 + 4) & 2) == 0) goto LAB_00e5557f;
  if ((*(uint *)(param_1 + 0x10) & 0x80000000) == 0) {
    iVar3 = *(int *)(param_1 + 0x14);
    if (iVar3 != 0) {
      if (*(int *)(param_1 + 0x18) == -2) {
        *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(iVar3 + 0x130);
        *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(iVar3 + 0x134);
        *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(iVar3 + 0x138);
        uVar2 = *(undefined4 *)(iVar3 + 0x13c);
      }
      else {
        iVar3 = FUN_00a12290(*(int *)(param_1 + 0x18));
        if (iVar3 == 0) {
          iVar3 = *(int *)(param_1 + 0x14);
          *(undefined4 *)(param_1 + 0x18) = 0xffffffff;
        }
        *(int *)(param_1 + 0x1c) = iVar3;
        if ((*(byte *)(param_1 + 4) & 4) != 0) {
          D3DXMatrixInverse(local_60,0,iVar3 + 0x10);
          pfVar1 = (float *)(param_1 + 0x20);
          D3DXVec3TransformNormal(pfVar1,param_1 + 0x30,auStack_6c);
          *pfVar1 = *pfVar1 + fStack_30;
          *(float *)(param_1 + 0x24) = fStack_2c + *(float *)(param_1 + 0x24);
          *(float *)(param_1 + 0x28) = *(float *)(param_1 + 0x28) + fStack_28;
          goto LAB_00e5555c;
        }
        *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(iVar3 + 0x40);
        *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(iVar3 + 0x44);
        *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(iVar3 + 0x48);
        uVar2 = *(undefined4 *)(iVar3 + 0x4c);
      }
      goto LAB_00e55559;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x30) = _DAT_01dd99c0;
    *(undefined4 *)(param_1 + 0x34) = _DAT_01dd99c4;
    *(undefined4 *)(param_1 + 0x38) = _DAT_01dd99c8;
    uVar2 = _DAT_01dd99cc;
LAB_00e55559:
    *(undefined4 *)(param_1 + 0x3c) = uVar2;
  }
LAB_00e5555c:
  FUN_00e50140(local_70,param_1 + 0x30);
  Hw::Wwise::setObjectPosition(**(undefined4 **)(param_1 + 0x40),local_70);
LAB_00e5557f:
  __security_check_cookie(local_14 ^ (uint)auStack_78);
  return;
}

// 00E55590  FUN_00e55590  size=239  [between]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00e55590(int param_1)

{
  float *pfVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 local_20 [28];
  
  if ((*(uint *)(param_1 + 4) & 2) == 0) {
    return;
  }
  if ((*(uint *)(param_1 + 0x10) & 0x80000000) == 0) {
    iVar3 = *(int *)(param_1 + 0x14);
    if (iVar3 == 0) goto LAB_00e55655;
    if (*(int *)(param_1 + 0x18) == -2) {
      *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(iVar3 + 0x130);
      *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(iVar3 + 0x134);
      *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(iVar3 + 0x138);
      uVar2 = *(undefined4 *)(iVar3 + 0x13c);
    }
    else {
      if ((*(uint *)(param_1 + 4) & 4) != 0) {
        iVar3 = *(int *)(param_1 + 0x1c);
        pfVar1 = (float *)(param_1 + 0x30);
        D3DXVec3TransformNormal(pfVar1,param_1 + 0x20,iVar3 + 0x10);
        *pfVar1 = *(float *)(iVar3 + 0x40) + *pfVar1;
        *(float *)(param_1 + 0x34) = *(float *)(iVar3 + 0x44) + *(float *)(param_1 + 0x34);
        *(float *)(param_1 + 0x38) = *(float *)(iVar3 + 0x48) + *(float *)(param_1 + 0x38);
        goto LAB_00e55655;
      }
      iVar3 = *(int *)(param_1 + 0x1c);
      *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(iVar3 + 0x40);
      *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(iVar3 + 0x44);
      *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(iVar3 + 0x48);
      uVar2 = *(undefined4 *)(iVar3 + 0x4c);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x30) = _DAT_01dd99c0;
    *(undefined4 *)(param_1 + 0x34) = _DAT_01dd99c4;
    *(undefined4 *)(param_1 + 0x38) = _DAT_01dd99c8;
    uVar2 = _DAT_01dd99cc;
  }
  *(undefined4 *)(param_1 + 0x3c) = uVar2;
LAB_00e55655:
  FUN_00e50140(local_20,param_1 + 0x30);
  Hw::Wwise::setObjectPosition(**(undefined4 **)(param_1 + 0x40),local_20);
  return;
}

// 00E55780  FUN_00e55780  size=85  [between]
void __fastcall FUN_00e55780(int param_1)

{
  if ((*(byte *)(param_1 + 0x24) & 1) != 0) {
    FUN_00df3b40(*(undefined4 *)(param_1 + 0x40),1);
    FUN_00df3b40(*(undefined4 *)(param_1 + 0x44),1);
    FUN_00df39f0(*(undefined4 *)(param_1 + 0x3c));
    *(undefined4 *)(param_1 + 0x3c) = 0;
    *(undefined4 *)(param_1 + 0x40) = 0;
    *(undefined4 *)(param_1 + 0x44) = 0;
    if (*(int *)(param_1 + 4) != 0) {
      thunk_FUN_00df2950(*(int *)(param_1 + 4));
    }
    *(uint *)(param_1 + 0x24) = *(uint *)(param_1 + 0x24) & 0xcffffffe;
  }
  FUN_00e52740();
  return;
}

// 00E557E0  FUN_00e557e0  size=44  [between]
void __fastcall FUN_00e557e0(int param_1)

{
  if ((*(byte *)(param_1 + 0x24) & 4) != 0) {
    FUN_00e50730();
    if (*(int *)(param_1 + 0x30) != 0) {
      FUN_00e4a5e0();
      return;
    }
    if (*(int *)(param_1 + 0x2c) != 0) {
      FUN_00e4a5b0();
      return;
    }
  }
  return;
}

// 00E55810  FUN_00e55810  size=979  [between]
void __thiscall FUN_00e55810(int param_1,int param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  float10 fVar5;
  float local_48;
  float local_40;
  float local_3c;
  double local_38;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  local_30 = *(float *)(param_2 + 0x10);
  local_2c = *(float *)(param_2 + 0x14);
  local_28 = *(float *)(param_2 + 0x18);
  local_24 = *(float *)(param_2 + 0x1c);
  local_20 = local_30 - *param_3;
  local_1c = local_2c - param_3[1];
  local_18 = local_28 - param_3[2];
  local_40 = local_18 * local_18 + local_20 * local_20 + local_1c * local_1c;
  fVar5 = (float10)FUN_00fdef70();
  fVar1 = (float)fVar5;
  local_40 = fVar1;
  if ((*(byte *)(param_1 + 0x24) & 2) == 0) {
    *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_2 + 0x10);
    *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_2 + 0x14);
    *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_2 + 0x18);
    *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_2 + 0x1c);
    iVar4 = *(int *)(param_1 + 0x34);
    if (iVar4 == 0) {
      return;
    }
    if (((*(byte *)(param_1 + 0x28) & 1) == 0) && (*(char *)(param_1 + 3) != '\x02')) {
      FUN_00df3c40(*(undefined4 *)(param_1 + 0x3c),iVar4,fVar1,1);
      return;
    }
  }
  else {
    local_3c = *(float *)(param_2 + 0x20);
    if ((*(char *)(param_1 + 3) == '\x01') || (*(char *)(param_1 + 3) == '\x02')) {
      fVar2 = 0.1;
    }
    else {
      fVar2 = *(float *)(param_1 + 0x20);
    }
    FUN_00e4c440(&local_38,&local_40);
    if (local_40 < 1.0) {
      local_40 = 1.0;
    }
    if (local_3c <= 0.99999) {
      fVar3 = 1.0 / fVar2;
      local_38 = (double)(1.0 - local_3c);
      local_48 = (fVar1 / (1.0 - local_3c)) / fVar2;
      if (local_48 <= fVar3) {
        local_48 = fVar3;
      }
      if (local_40 / fVar2 < local_48) {
        local_48 = local_40 / fVar2;
      }
      local_40 = local_48;
      local_3c = fVar3;
      FUN_00e4a3d0(&local_20,(undefined4 *)(param_2 + 0x10),param_3);
      local_3c = local_20 * local_20 + local_1c * local_1c + local_18 * local_18;
      if (local_3c < 0.0 == (local_3c == 0.0)) {
        FUN_00ddf460(&local_20,&local_20);
      }
      else {
        FUN_00dd5650(&DAT_0163d0ac);
        local_20 = 0.0;
        local_1c = 1.0;
        local_18 = 0.0;
      }
      local_3c = local_48 * fVar2;
      fVar1 = local_3c * (float)local_38;
      local_14 = fVar1 * local_14;
      local_30 = *param_3 + fVar1 * local_20;
      local_2c = param_3[1] + local_1c * fVar1;
      local_28 = param_3[2] + local_18 * fVar1;
      local_24 = param_3[3] + local_14;
    }
    else {
      local_40 = local_40 / fVar2;
      local_30 = *param_3;
      local_2c = param_3[1];
      local_28 = param_3[2];
      local_24 = param_3[3];
    }
    local_20 = local_30 - *param_3;
    local_1c = local_2c - param_3[1];
    local_18 = local_28 - param_3[2];
    Hw::Wwise::setObjectPosition(*(undefined4 *)(param_1 + 0x3c),&local_30);
    *(float *)(param_1 + 0x50) = local_30;
    *(float *)(param_1 + 0x54) = local_2c;
    *(float *)(param_1 + 0x58) = local_28;
    *(float *)(param_1 + 0x5c) = local_24;
    FUN_00df3ab0(*(undefined4 *)(param_1 + 0x3c),local_40);
    local_3c = local_18 * local_18 + local_20 * local_20 + local_1c * local_1c;
    fVar5 = (float10)FUN_00fdef70();
    local_3c = (float)fVar5;
    iVar4 = *(int *)(param_1 + 0x34);
    local_40 = local_3c / local_40;
    if (iVar4 == 0) {
      return;
    }
    if (((*(byte *)(param_1 + 0x28) & 1) == 0) && (*(char *)(param_1 + 3) != '\x02')) {
      FUN_00df3c40(*(undefined4 *)(param_1 + 0x3c),iVar4,local_40,1);
      return;
    }
  }
  FUN_00df3d00(iVar4,local_40,1);
  return;
}

// 00E55C80  FUN_00e55c80  size=192  [between]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00e55c80(undefined4 *param_1)

{
  undefined4 uVar1;
  uint uVar2;
  
  param_1[0xc] = _DAT_01dd99c0;
  param_1[0xd] = _DAT_01dd99c4;
  param_1[0xe] = _DAT_01dd99c8;
  param_1[0xf] = _DAT_01dd99cc;
  param_1[0x10] = _DAT_01dd99d0;
  param_1[0x11] = _DAT_01dd99d4;
  param_1[0x12] = _DAT_01dd99d8;
  param_1[0x13] = _DAT_01dd99dc;
  uVar1 = FUN_00dd2c80();
  *param_1 = uVar1;
  uVar2 = FUN_00dd2c90();
  param_1[1] = uVar2;
  if ((uint)param_1[2] < uVar2) {
    param_1[2] = uVar2;
  }
  uVar1 = FUN_00dd2c80();
  param_1[3] = uVar1;
  uVar2 = FUN_00dd2c90();
  param_1[4] = uVar2;
  if ((uint)param_1[5] < uVar2) {
    param_1[5] = uVar2;
  }
  uVar1 = FUN_00dd2c80();
  param_1[6] = uVar1;
  uVar2 = FUN_00dd2c90();
  param_1[7] = uVar2;
  if ((uint)param_1[8] < uVar2) {
    param_1[8] = uVar2;
  }
  FUN_00decce0(param_1 + 0x14);
  return;
}

// 00E55D40  FUN_00e55d40  size=977  [between]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00e55d40(undefined4 param_1,undefined4 param_2,float param_3,float param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  uint uVar7;
  uint uVar8;
  
  FUN_00e55c80();
  fVar6 = _DAT_01dd95f8;
  fVar5 = _DAT_01dd95f4;
  fVar4 = _DAT_01dd95f0;
  fVar3 = _DAT_01dd95e8;
  fVar2 = _DAT_01dd95e4;
  fVar1 = _DAT_01dd95e0;
  if (DAT_01dd9638 == (int *)0x0) {
    uVar7 = 0;
  }
  else {
    uVar7 = (**(code **)(*DAT_01dd9638 + 0x14))();
    uVar7 = uVar7 >> 10;
    if (DAT_01dd9638 != (int *)0x0) {
      uVar8 = (**(code **)(*DAT_01dd9638 + 0x10))();
      uVar8 = uVar8 >> 10;
      goto LAB_00e55dc7;
    }
  }
  uVar8 = 0;
LAB_00e55dc7:
  FUN_00f96580(param_2,param_4 * 0.0 + param_3,param_4,0xffffffff,param_1,"SE WORK   %5d/%5d/%5d",
               DAT_01dd95b4,DAT_01dd95b8,DAT_01dd95b0);
  FUN_00f96580(param_2,param_4 + param_3,param_4,0xffffffff,param_1,"BGM WORK  %5d/%5d/%5d",
               DAT_01dd95c0,DAT_01dd95c4,DAT_01dd95bc);
  FUN_00f96580(param_2,param_4 + param_4 + param_3,param_4,0xffffffff,param_1,
               "OBJ WORK  %5d/%5d/%5d",DAT_01dd95cc,DAT_01dd95d0,DAT_01dd95c8);
  FUN_00f96580(param_2,param_4 * 3.0 + param_3,param_4,0xffffffff,param_1,"SYS EVENT %5d/%5d/%5d",
               DAT_01dd9604,DAT_01dd9608,DAT_01dd9600);
  FUN_00f96580(param_2,param_4 * 4.0 + param_3,param_4,0xffffffff,param_1,"SYS OBJ   %5d/%5d/%5d",
               DAT_01dd9610,DAT_01dd9614,DAT_01dd960c);
  FUN_00f96580(param_2,param_4 * 5.0 + param_3,param_4,0xffffffff,param_1,"TRANSFER  %5d/%5d/%5d",
               DAT_01dd9628,DAT_01dd962c,DAT_01dd9624);
  FUN_00f96580(param_2,param_4 * 6.0 + param_3,param_4,0xffffffff,param_1,"COMMAND   %5d/%5d/%5d",
               DAT_01dd961c,DAT_01dd9620,DAT_01dd9618);
  FUN_00f96580(param_2,param_4 * 7.0 + param_3,param_4,0xffffffff,param_1,"LSTN POS  %.2f %.2f %.2f"
               ,(double)fVar1,(double)fVar2,(double)fVar3);
  FUN_00f96580(param_2,param_4 * 8.0 + param_3,param_4,0xffffffff,param_1,"LSTN DIR  %.2f %.2f %.2f"
               ,(double)fVar4,(double)fVar5,(double)fVar6);
  FUN_00f96580(param_2,param_4 * 9.0 + param_3,param_4,0xffffffff,param_1,"SYNC      %.3fms",
               (double)_DAT_01dd9630);
  FUN_00f96580(param_2,param_4 * 10.0 + param_3,param_4,0xffffffff,param_1,"ASYNC     %.3fms",
               (double)_DAT_01dd9634);
  FUN_00f96580(param_2,param_4 * 11.0 + param_3,param_4,0xffffffff,param_1,"SYS HEAP  %d/%d",uVar7,
               uVar8);
  return;
}

// 00E56210  FUN_00e56210  size=308  [between]
void __thiscall FUN_00e56210(int param_1,int param_2,int param_3,int param_4)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_2c;
  int *local_28;
  int *local_24;
  int local_20;
  int local_1c;
  int local_18;
  undefined1 auStack_14 [16];
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)&local_2c;
  if (0 < *(int *)(param_1 + 0x14)) {
    local_24 = (int *)(*(int *)(param_1 + 0xc) + 0x10);
    local_2c = *(int *)(param_1 + 0x14);
    do {
      if (0 < *local_24) {
        local_28 = (int *)(local_24[-2] + 0x18);
        local_20 = *local_24;
        do {
          iVar5 = *local_28;
          local_1c = local_28[-2];
          iVar4 = 0;
          local_18 = iVar5;
          if (0 < iVar5) {
            do {
              piVar1 = *(int **)(local_1c + iVar4 * 4);
              piVar2 = (int *)(**(code **)(*piVar1 + 0x5c))();
              if ((*piVar2 == param_3) && (piVar2[1] == param_4)) {
                iVar5 = piVar2[2];
                FUN_00a7c800();
                piVar1[0x44] = param_2;
                iVar3 = FUN_00a12210(iVar5);
                piVar1[0x45] = iVar3;
                if (iVar3 == 0) {
                  FUN_009f8ea0(auStack_14,0x10,*(undefined4 *)(param_2 + 0x24),0);
                  FUN_00dd5650(&DAT_016ce4a0,auStack_14,iVar5);
                }
                else {
                  D3DXMatrixInverse(piVar1 + 4,0,iVar3 + 0x10);
                }
                FUN_00e52160();
                iVar5 = local_18;
              }
              iVar4 = iVar4 + 1;
            } while (iVar4 < iVar5);
          }
          local_28 = local_28 + 0x28;
          local_20 = local_20 + -1;
        } while (local_20 != 0);
        local_20 = 0;
      }
      local_24 = local_24 + 0xb;
      local_2c = local_2c + -1;
    } while (local_2c != 0);
    local_2c = 0;
  }
  __security_check_cookie(local_4 ^ (uint)&local_2c);
  return;
}

// 00E563E0  FUN_00e563e0  size=213  [between]
void __thiscall FUN_00e563e0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int local_1c;
  int local_18;
  int local_14;
  
  iVar4 = param_2;
  iVar1 = *(int *)(param_1 + 0x14);
  local_14 = 0;
  if (0 < iVar1) {
    local_1c = 0;
    do {
      *(int *)(iVar4 + 0x38) = local_14;
      piVar5 = (int *)(*(int *)(param_1 + 0xc) + local_1c);
      if (*piVar5 != 0) {
        iVar2 = piVar5[4];
        local_18 = 0;
        if (0 < iVar2) {
          param_2 = 0;
          do {
            *(int *)(iVar4 + 0x3c) = local_18;
            iVar7 = piVar5[2] + param_2;
            *(uint *)(iVar4 + 0x44) = (uint)*(byte *)(iVar7 + 3);
            iVar3 = *(int *)(iVar7 + 0x18);
            iVar6 = 0;
            if (0 < iVar3) {
              do {
                *(int *)(iVar4 + 0x40) = iVar6;
                (**(code **)(**(int **)(*(int *)(iVar7 + 0x10) + iVar6 * 4) + 0x58))(iVar4);
                iVar6 = iVar6 + 1;
              } while (iVar6 < iVar3);
            }
            param_2 = param_2 + 0xa0;
            local_18 = local_18 + 1;
          } while (local_18 < iVar2);
        }
      }
      local_1c = local_1c + 0x2c;
      local_14 = local_14 + 1;
    } while (local_14 < iVar1);
  }
  return;
}

// 00E564C0  FUN_00e564c0  size=37  [between]
void __fastcall FUN_00e564c0(int param_1)

{
  if ((*(byte *)(param_1 + 0x24) & 1) != 0) {
    if (*(int *)(param_1 + 4) != 0) {
      thunk_FUN_00df2950(*(int *)(param_1 + 4));
    }
    *(uint *)(param_1 + 0x24) = *(uint *)(param_1 + 0x24) & 0xfffffffe;
  }
  FUN_00e52740();
  return;
}

// 00E564F0  FUN_00e564f0  size=60  [between]
void __fastcall FUN_00e564f0(int param_1)

{
  undefined4 local_8;
  undefined1 local_4 [4];
  
  if ((*(byte *)(param_1 + 0x24) & 2) != 0) {
    FUN_00e4c440(local_4,&local_8);
    if (*(int *)(param_1 + 100) != 0) {
      FUN_00df3d00(*(int *)(param_1 + 100),local_8,1);
    }
  }
  return;
}

// 00E56530  FUN_00e56530  size=131  [between]
void __fastcall FUN_00e56530(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)(**(code **)(*param_1 + 0x5c))();
  if (*piVar1 != -1) {
    iVar2 = FUN_00932850(*piVar1,piVar1[1]);
    if (iVar2 != 0) {
      FUN_00e46fc0(iVar2,piVar1[2]);
      FUN_00e52160();
      return;
    }
  }
  param_1[0x22] = 0;
  param_1[0x21] = 0;
  param_1[0x20] = 0;
  param_1[0x1f] = 0;
  param_1[0x1d] = 0;
  param_1[0x1c] = 0;
  param_1[0x1b] = 0;
  param_1[0x1a] = 0;
  param_1[0x18] = 0;
  param_1[0x17] = 0;
  param_1[0x16] = 0;
  param_1[0x15] = 0;
  param_1[0x23] = 0x3f800000;
  param_1[0x1e] = 0x3f800000;
  param_1[0x19] = 0x3f800000;
  param_1[0x14] = 0x3f800000;
  FUN_00e52160();
  return;
}

// 00E565D0  SoundArea::ShapeBox::vf58  size=1401  [class]
void __thiscall SoundArea::ShapeBox::vf58(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  float *pfVar3;
  int iVar4;
  undefined1 auStack_b4 [8];
  float *local_ac;
  float fStack_a8;
  float fStack_a4;
  float local_a0 [8];
  undefined4 local_80;
  float local_7c;
  undefined4 local_78;
  undefined4 local_70;
  float local_6c;
  undefined4 local_68;
  float local_60;
  float local_5c;
  undefined4 local_58;
  undefined4 local_50;
  float local_4c;
  undefined4 local_48;
  undefined4 local_40;
  float local_3c;
  undefined4 local_38;
  undefined4 local_30;
  float local_2c;
  undefined4 local_28;
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)auStack_b4;
  if (*(int *)(param_1 + 0x1b0) != 0) {
    pfVar3 = local_a0 + 2;
    local_a0[0] = *(float *)(param_1 + 0x174);
    local_a0[1] = *(float *)(param_1 + 0x170) + *(float *)(param_1 + 0x154);
    local_a0[2] = (float)*(undefined4 *)(param_1 + 0x178);
    local_60 = *(float *)(param_1 + 0x174);
    local_5c = (*(float *)(param_1 + 0x158) + *(float *)(param_1 + 0x154)) -
               *(float *)(param_1 + 0x16c);
    local_ac = (float *)0x8;
    local_58 = *(undefined4 *)(param_1 + 0x178);
    local_a0[4] = (float)*(undefined4 *)(param_1 + 0x17c);
    local_a0[5] = local_a0[1];
    local_a0[6] = (float)*(undefined4 *)(param_1 + 0x180);
    local_50 = *(undefined4 *)(param_1 + 0x17c);
    local_4c = local_5c;
    local_48 = *(undefined4 *)(param_1 + 0x180);
    local_80 = *(undefined4 *)(param_1 + 0x184);
    local_7c = local_a0[1];
    local_78 = *(undefined4 *)(param_1 + 0x188);
    local_40 = *(undefined4 *)(param_1 + 0x184);
    local_3c = local_5c;
    local_38 = *(undefined4 *)(param_1 + 0x188);
    local_70 = *(undefined4 *)(param_1 + 0x18c);
    local_6c = local_a0[1];
    local_68 = *(undefined4 *)(param_1 + 400);
    local_30 = *(undefined4 *)(param_1 + 0x18c);
    local_2c = local_5c;
    local_28 = *(undefined4 *)(param_1 + 400);
    do {
      if (*(int *)(param_1 + 0x118) == 0) {
        pfVar3[-2] = pfVar3[-2];
        pfVar3[-1] = pfVar3[-1];
        *pfVar3 = *pfVar3;
        pfVar3[1] = pfVar3[1];
      }
      else {
        D3DXVec3TransformNormal(pfVar3 + -2,pfVar3 + -2,param_1 + 0x90);
        pfVar3[-2] = *(float *)(param_1 + 0xc0) + pfVar3[-2];
        pfVar3[-1] = *(float *)(param_1 + 0xc4) + pfVar3[-1];
        *pfVar3 = *(float *)(param_1 + 200) + *pfVar3;
      }
      pfVar3 = pfVar3 + 4;
      local_ac = (float *)((int)local_ac + -1);
    } while (local_ac != (float *)0x0);
    FUN_00e49520(local_a0,0xffffffff,0xffffffff);
  }
  iVar2 = 0;
  do {
    FUN_00e54c60(param_1,iVar2,param_2);
    iVar2 = iVar2 + 1;
  } while (iVar2 < 8);
  pfVar3 = local_a0 + 2;
  local_a0[0] = *(float *)(param_1 + 0x134);
  local_a0[1] = (float)*(undefined4 *)(param_1 + 0x154);
  local_a0[2] = (float)*(undefined4 *)(param_1 + 0x138);
  local_60 = *(float *)(param_1 + 0x134);
  local_5c = *(float *)(param_1 + 0x158) + *(float *)(param_1 + 0x154);
  local_ac = (float *)&DAT_00000008;
  local_58 = *(undefined4 *)(param_1 + 0x138);
  local_a0[4] = (float)*(undefined4 *)(param_1 + 0x13c);
  local_a0[5] = (float)*(undefined4 *)(param_1 + 0x154);
  local_a0[6] = (float)*(undefined4 *)(param_1 + 0x140);
  local_50 = *(undefined4 *)(param_1 + 0x13c);
  local_4c = local_5c;
  local_48 = *(undefined4 *)(param_1 + 0x140);
  local_80 = *(undefined4 *)(param_1 + 0x144);
  local_7c = (float)*(undefined4 *)(param_1 + 0x154);
  local_78 = *(undefined4 *)(param_1 + 0x148);
  local_40 = *(undefined4 *)(param_1 + 0x144);
  local_3c = local_5c;
  local_38 = *(undefined4 *)(param_1 + 0x148);
  local_70 = *(undefined4 *)(param_1 + 0x14c);
  local_6c = (float)*(undefined4 *)(param_1 + 0x154);
  local_68 = *(undefined4 *)(param_1 + 0x150);
  local_30 = *(undefined4 *)(param_1 + 0x14c);
  local_2c = local_5c;
  local_28 = *(undefined4 *)(param_1 + 0x150);
  do {
    if (*(int *)(param_1 + 0x118) == 0) {
      pfVar3[-2] = pfVar3[-2];
      pfVar3[-1] = pfVar3[-1];
      *pfVar3 = *pfVar3;
      pfVar3[1] = pfVar3[1];
    }
    else {
      D3DXVec3TransformNormal(pfVar3 + -2,pfVar3 + -2,param_1 + 0x90);
      pfVar3[-2] = pfVar3[-2] + *(float *)(param_1 + 0xc0);
      pfVar3[-1] = *(float *)(param_1 + 0xc4) + pfVar3[-1];
      *pfVar3 = *(float *)(param_1 + 200) + *pfVar3;
    }
    pfVar3 = pfVar3 + 4;
    local_ac = (float *)((int)local_ac + -1);
  } while (local_ac != (float *)0x0);
  iVar2 = *(int *)(param_2 + 0x34);
  iVar4 = *(int *)(param_2 + 0x1c);
  if (iVar2 == iVar4) {
    if (((*(int *)(param_2 + 0x38) == *(int *)(param_2 + 0x20)) &&
        (*(int *)(param_2 + 0x3c) == *(int *)(param_2 + 0x24))) &&
       (*(int *)(param_2 + 0x40) == *(int *)(param_2 + 0x28))) {
      iVar1 = -0xff6700;
    }
    else {
      if (((iVar2 != iVar4) || (*(int *)(param_2 + 0x38) != *(int *)(param_2 + 0x20))) ||
         (*(int *)(param_2 + 0x3c) != *(int *)(param_2 + 0x24))) goto LAB_00e56924;
      iVar1 = -0xffab00;
    }
  }
  else {
LAB_00e56924:
    iVar1 = *(int *)(param_2 + 4);
    if (iVar2 == iVar1) {
      if (((*(int *)(param_2 + 0x38) == *(int *)(param_2 + 8)) &&
          (*(int *)(param_2 + 0x3c) == *(int *)(param_2 + 0xc))) &&
         (*(int *)(param_2 + 0x40) == *(int *)(param_2 + 0x10))) {
        iVar1 = -0x340000;
      }
      else {
        if (iVar2 != iVar1) goto LAB_00e56976;
        if ((*(int *)(param_2 + 0x38) == *(int *)(param_2 + 8)) &&
           (*(int *)(param_2 + 0x3c) == *(int *)(param_2 + 0xc))) {
          iVar1 = -0x890000;
        }
        else {
          if ((iVar2 != iVar1) || (*(int *)(param_2 + 0x38) != *(int *)(param_2 + 8)))
          goto LAB_00e56976;
          iVar1 = -1;
        }
      }
    }
    else {
LAB_00e56976:
      iVar1 = (-(uint)(iVar2 != iVar1) & 0xffffffde) - 0x222201;
    }
  }
  if (iVar2 == iVar4) {
    if (((*(int *)(param_2 + 0x38) == *(int *)(param_2 + 0x20)) &&
        (*(int *)(param_2 + 0x3c) == *(int *)(param_2 + 0x24))) &&
       (*(int *)(param_2 + 0x40) == *(int *)(param_2 + 0x28))) {
      iVar2 = -0x5b00;
      goto LAB_00e56a25;
    }
    if (((iVar2 == iVar4) && (*(int *)(param_2 + 0x38) == *(int *)(param_2 + 0x20))) &&
       (*(int *)(param_2 + 0x3c) == *(int *)(param_2 + 0x24))) {
      iVar2 = -0x5b00;
      goto LAB_00e56a25;
    }
  }
  iVar4 = *(int *)(param_2 + 4);
  if (iVar2 == iVar4) {
    if (((*(int *)(param_2 + 0x38) == *(int *)(param_2 + 8)) &&
        (*(int *)(param_2 + 0x3c) == *(int *)(param_2 + 0xc))) &&
       (*(int *)(param_2 + 0x40) == *(int *)(param_2 + 0x10))) {
      iVar2 = -0x5b00;
      goto LAB_00e56a25;
    }
    if (iVar2 == iVar4) {
      if ((*(int *)(param_2 + 0x38) == *(int *)(param_2 + 8)) &&
         (*(int *)(param_2 + 0x3c) == *(int *)(param_2 + 0xc))) {
        iVar2 = -0x5b00;
        goto LAB_00e56a25;
      }
      if ((iVar2 == iVar4) && (*(int *)(param_2 + 0x38) == *(int *)(param_2 + 8))) {
        iVar2 = -1;
        goto LAB_00e56a25;
      }
    }
  }
  iVar2 = (-(uint)(iVar2 != iVar4) & 0xffffffde) - 0x222201;
LAB_00e56a25:
  FUN_00e49520(local_a0,iVar1,iVar2);
  if ((((*(int *)(param_2 + 0x34) == *(int *)(param_2 + 4)) &&
       (*(int *)(param_2 + 0x38) == *(int *)(param_2 + 8))) &&
      (*(int *)(param_2 + 0x3c) == *(int *)(param_2 + 0xc))) &&
     (*(int *)(param_2 + 0x40) == *(int *)(param_2 + 0x10))) {
    iVar2 = *(int *)(param_2 + 0x18);
    fStack_a4 = *(float *)(param_1 + 0x170) + *(float *)(param_1 + 0x154);
    local_ac = (float *)(param_1 + 0x15c);
    iVar4 = 0;
    fStack_a8 = (*(float *)(param_1 + 0x158) - *(float *)(param_1 + 0x170)) -
                *(float *)(param_1 + 0x16c);
    do {
      if (*local_ac != 0.0) {
        FUN_00e477d0(param_1 + 0x174,fStack_a4,fStack_a8,iVar4,
                     (-(uint)(iVar4 != iVar2) & 0xffc180bf) + 0x80ff4040);
      }
      local_ac = local_ac + 1;
      iVar4 = iVar4 + 1;
    } while (iVar4 < 6);
    iVar4 = 0;
    do {
      FUN_00e477d0(param_1 + 0x134,*(undefined4 *)(param_1 + 0x154),*(undefined4 *)(param_1 + 0x158)
                   ,iVar4,(-(uint)(iVar4 != iVar2) & 0xdfc1407f) + 0x80ff8080);
      iVar4 = iVar4 + 1;
    } while (iVar4 < 6);
  }
  __security_check_cookie(local_14 ^ (uint)auStack_b4);
  return;
}

// 00E56B50  SoundArea::ShapeBox::ShapeBox  size=225  [class]
undefined4 * SoundArea::ShapeBox::ShapeBox(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  switch(param_1) {
  case 0:
    puVar2 = (undefined4 *)FUN_00dd3500(0x150,&DAT_01b7bda0);
    if (puVar2 == (undefined4 *)0x0) {
      return (undefined4 *)0x0;
    }
    puVar2[0x44] = 0;
    puVar2[0x45] = 0;
    *puVar2 = ShapeSphere::vftable;
    break;
  case 1:
    iVar1 = FUN_00dd3500(0x160,&DAT_01b7bda0);
    if (iVar1 == 0) {
      return (undefined4 *)0x0;
    }
    puVar2 = (undefined4 *)ShapeLine::ShapeLine();
    break;
  case 2:
    puVar2 = (undefined4 *)FUN_00dd3500(0x1c0,&DAT_01b7bda0);
    if (puVar2 == (undefined4 *)0x0) {
      return (undefined4 *)0x0;
    }
    puVar2[0x44] = 0;
    puVar2[0x45] = 0;
    *puVar2 = vftable;
    break;
  case 3:
    iVar1 = FUN_00dd3500(400,&DAT_01b7bda0);
    if (iVar1 == 0) {
      return (undefined4 *)0x0;
    }
    puVar2 = (undefined4 *)ShapePrism::ShapePrism();
    break;
  case 4:
    iVar1 = FUN_00dd3500(0x170,&DAT_01b7bda0);
    if (iVar1 == 0) {
      return (undefined4 *)0x0;
    }
    puVar2 = (undefined4 *)ShapeRail::ShapeRail();
    break;
  default:
    goto LAB_00e56c30;
  }
  if (puVar2 != (undefined4 *)0x0) {
    return puVar2;
  }
LAB_00e56c30:
  return (undefined4 *)0x0;
}

// 00E56C50  FUN_00e56c50  size=79  [between]
int * FUN_00e56c50(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)SoundArea::ShapeBox::ShapeBox(param_1);
  if (piVar1 != (int *)0x0) {
    iVar2 = (**(code **)(*piVar1 + 0x28))(param_2,param_3,param_4);
    if (iVar2 != 0) {
      FUN_00e56530();
      return piVar1;
    }
    (**(code **)*piVar1)(1);
  }
  return (int *)0x0;
}

// 00E56CC0  FUN_00e56cc0  size=509  [between]
void __thiscall FUN_00e56cc0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  
  iVar1 = *(int *)(param_1 + 0x18);
  iVar3 = 0;
  iVar2 = *(int *)(param_1 + 0x10);
  if (0 < iVar1) {
    do {
      local_40 = 0;
      local_3c = 0;
      local_38 = 0;
      local_30 = 0;
      local_2c = 0;
      local_28 = 0;
      local_20 = 0;
      local_34 = 0x3f800000;
      local_24 = 0x3f800000;
      if (*(int *)(*(int *)(iVar2 + iVar3 * 4) + 0x114) != 0) {
        FUN_00e52160();
      }
      (**(code **)(**(int **)(iVar2 + iVar3 * 4) + 4))(&local_40,param_3);
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar1);
  }
  FUN_00e48d30(param_2);
  return;
}

// 00E56EC0  FUN_00e56ec0  size=250  [between]
undefined4 __thiscall FUN_00e56ec0(int param_1,float *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  int local_4;
  
  iVar1 = *(int *)(param_1 + 0x18);
  local_10 = 0.0;
  local_c = 0.0;
  iVar4 = 0;
  local_8 = 0.0;
  iVar2 = *(int *)(param_1 + 0x10);
  local_4 = 0;
  if (0 < iVar1) {
    do {
      local_18 = 0.0;
      local_14 = 0.0;
      if (*(int *)(*(int *)(iVar2 + iVar4 * 4) + 0x114) != 0) {
        FUN_00e52160();
      }
      iVar3 = (**(code **)(**(int **)(iVar2 + iVar4 * 4) + 0x14))(&local_18,param_3,param_4);
      if (iVar3 != 0) {
        local_4 = local_4 + 1;
        local_10 = local_10 + local_18 * local_14;
        local_c = local_c + local_14;
        local_8 = local_18 + local_8;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar1);
    if (local_c != 0.0) {
      param_2[1] = local_c;
      *param_2 = local_10 / local_c;
      return 1;
    }
    if (local_4 != 0) {
      param_2[1] = local_c;
      *param_2 = local_8 / (float)local_4;
      return 1;
    }
  }
  return 0;
}

// 00E56FC0  FUN_00e56fc0  size=382  [between]
undefined4 __thiscall FUN_00e56fc0(undefined4 *param_1,int *param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  uint unaff_EBP;
  int iVar5;
  undefined4 unaff_retaddr;
  char *pcVar6;
  uint uStack_c;
  
  iVar2 = param_1[6];
  iVar5 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  if (0 < iVar2) {
    do {
      puVar1 = *(undefined4 **)(param_1[4] + iVar5 * 4);
      if (puVar1 != (undefined4 *)0x0) {
        (**(code **)*puVar1)(1);
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar2);
  }
  param_1[6] = 0;
  iVar2 = FUN_00e4bdb0(param_2,param_3);
  if (iVar2 == 0) {
    return 0;
  }
  pcVar6 = "ShapeNum";
  iVar2 = (**(code **)(*param_2 + 0x9c))(param_3,"ShapeNum");
  if (iVar2 != -1) {
    (**(code **)(*param_2 + 0xe8))(iVar2,&stack0xffffffec);
  }
  if (((int)param_1[5] < (int)unaff_EBP) && (iVar2 = FUN_00e61390(unaff_EBP), iVar2 == 0)) {
    FUN_00dd5650(&DAT_016cdba0);
  }
  else if (unaff_EBP != param_1[6]) {
    param_1[6] = unaff_EBP;
  }
  iVar2 = param_1[6];
  iVar5 = 0;
  if (0 < iVar2) {
    do {
      *(undefined4 *)(param_1[4] + iVar5 * 4) = 0;
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar2);
  }
  uStack_c = param_1[6];
  iVar2 = 0;
  if (0 < (int)uStack_c) {
    do {
      uVar3 = (**(code **)(*param_2 + 0x14))(param_3,iVar2);
      uStack_c = uStack_c & 0xffffff00;
      iVar5 = (**(code **)(*param_2 + 0x9c))(uVar3,"ShapeType");
      if (iVar5 != -1) {
        (**(code **)(*param_2 + 0xf0))(iVar5,&stack0xffffffec);
      }
      piVar4 = (int *)SoundArea::ShapeBox::ShapeBox(unaff_EBP & 0xff);
      if (piVar4 == (int *)0x0) {
        return 0;
      }
      *(int **)(param_1[4] + iVar2 * 4) = piVar4;
      iVar5 = (**(code **)(*piVar4 + 0x18))(param_2,pcVar6);
      if (iVar5 == 0) {
        return 0;
      }
      FUN_00e56530();
      iVar2 = iVar2 + 1;
      param_3 = unaff_retaddr;
    } while (iVar2 < (int)uStack_c);
  }
  return 1;
}

// 00E57140  FUN_00e57140  size=278  [between]
undefined4 __thiscall FUN_00e57140(int param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  float10 fVar3;
  float10 fVar4;
  float fStack_2c;
  float fStack_28;
  undefined1 auStack_20 [4];
  float fStack_1c;
  
  if ((param_2 < 0) || (*(int *)(param_1 + 0x18) <= param_2)) {
    return 0;
  }
  piVar1 = *(int **)(*(int *)(param_1 + 0x10) + param_2 * 4);
  iVar2 = (**(code **)(*piVar1 + 0x2c))();
  if (iVar2 != param_3) {
    FUN_00e491c0(auStack_20,piVar1);
    fVar3 = (float10)(**(code **)(*piVar1 + 0x4c))();
    fStack_28 = (float)fVar3;
    fVar3 = (float10)(**(code **)(*piVar1 + 0x54))();
    fStack_2c = (float)fVar3;
    fVar3 = (float10)(**(code **)(*piVar1 + 0x44))();
    if (fStack_28 < 0.0) {
      fVar4 = (float10)FUN_00e4c6f0();
      fStack_28 = (float)fVar4;
    }
    if (fStack_2c < 0.0) {
      fVar4 = (float10)FUN_00e4c810();
      fStack_2c = (float)fVar4;
    }
    if (0.0 < (float)fVar3) {
      fStack_1c = fStack_1c - (float)fVar3 * 0.5;
    }
    iVar2 = FUN_00e56c50(param_3,auStack_20,fStack_28,fStack_2c);
    if (iVar2 == 0) {
      return 0;
    }
    *(int *)(*(int *)(param_1 + 0x10) + param_2 * 4) = iVar2;
    (**(code **)*piVar1)(1);
  }
  return 1;
}

// 00E57260  SoundArea::ShapeLine::vf58  size=1853  [class]
void __thiscall SoundArea::ShapeLine::vf58(int *param_1,int param_2)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  undefined1 auStack_144 [4];
  int local_140;
  float fStack_130;
  float fStack_12c;
  float fStack_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  float fStack_118;
  int local_114;
  float fStack_110;
  float fStack_10c;
  float fStack_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float local_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)auStack_144;
  if (0 < param_1[0x53]) {
    iVar5 = 1;
    local_140 = param_1[0x53];
    do {
      FUN_00e54c60(param_1,iVar5,param_2);
      iVar5 = iVar5 + 2;
      local_140 = local_140 + -1;
    } while (local_140 != 0);
  }
  if (0 < param_1[0x53] + -1) {
    iVar5 = 1;
    local_140 = param_1[0x53] + -1;
    do {
      FUN_00e4f130(param_1,iVar5,iVar5 + 2,param_2);
      local_140 = local_140 + -1;
      iVar5 = iVar5 + 2;
    } while (local_140 != 0);
  }
  if (0.0 < (float)param_1[0x4d]) {
    if (0 < param_1[0x53]) {
      iVar5 = 0;
      local_140 = param_1[0x53];
      do {
        FUN_00e54c60(param_1,iVar5,param_2);
        FUN_00e4f130(param_1,iVar5,iVar5 + 1,param_2);
        iVar5 = iVar5 + 2;
        local_140 = local_140 + -1;
      } while (local_140 != 0);
    }
    if (0 < param_1[0x53] + -1) {
      iVar5 = 0;
      local_140 = param_1[0x53] + -1;
      do {
        FUN_00e4f130(param_1,iVar5,iVar5 + 2,param_2);
        local_140 = local_140 + -1;
        iVar5 = iVar5 + 2;
      } while (local_140 != 0);
    }
  }
  if (((float)param_1[0x4d] <= 0.0) || (*(int *)(param_2 + 0x44) != 1)) goto LAB_00e57986;
  iVar5 = *(int *)(param_2 + 0x34);
  if (iVar5 == *(int *)(param_2 + 0x1c)) {
    if (((*(int *)(param_2 + 0x38) == *(int *)(param_2 + 0x20)) &&
        (*(int *)(param_2 + 0x3c) == *(int *)(param_2 + 0x24))) &&
       (*(int *)(param_2 + 0x40) == *(int *)(param_2 + 0x28))) {
      local_140 = -0xff6700;
    }
    else {
      if (((iVar5 != *(int *)(param_2 + 0x1c)) ||
          (*(int *)(param_2 + 0x38) != *(int *)(param_2 + 0x20))) ||
         (*(int *)(param_2 + 0x3c) != *(int *)(param_2 + 0x24))) goto LAB_00e573a8;
      local_140 = -0xffab00;
    }
  }
  else {
LAB_00e573a8:
    iVar1 = *(int *)(param_2 + 4);
    if (iVar5 == iVar1) {
      if (((*(int *)(param_2 + 0x38) == *(int *)(param_2 + 8)) &&
          (*(int *)(param_2 + 0x3c) == *(int *)(param_2 + 0xc))) &&
         (*(int *)(param_2 + 0x40) == *(int *)(param_2 + 0x10))) {
        local_140 = -0x340000;
      }
      else {
        if (iVar5 != iVar1) goto LAB_00e57405;
        if ((*(int *)(param_2 + 0x38) == *(int *)(param_2 + 8)) &&
           (*(int *)(param_2 + 0x3c) == *(int *)(param_2 + 0xc))) {
          local_140 = -0x890000;
        }
        else {
          if ((iVar5 != iVar1) || (*(int *)(param_2 + 0x38) != *(int *)(param_2 + 8)))
          goto LAB_00e57405;
          local_140 = -1;
        }
      }
    }
    else {
LAB_00e57405:
      local_140 = (-(uint)(iVar5 != iVar1) & 0xffffffde) - 0x222201;
    }
  }
  if (0 < param_1[0x53] + -1) {
    iVar5 = 2;
    local_114 = param_1[0x53] + -1;
    do {
      (**(code **)(*param_1 + 0x24))(&local_80,iVar5 + -2);
      iVar1 = iVar5 + -1;
      (**(code **)(*param_1 + 0x24))(&fStack_78,iVar1);
      (**(code **)(*param_1 + 0x24))(&fStack_70,iVar5);
      (**(code **)(*param_1 + 0x24))(&fStack_68,iVar1);
      (**(code **)(*param_1 + 0x24))(&fStack_60,iVar5);
      (**(code **)(*param_1 + 0x24))(&fStack_58,iVar5 + 1);
      FUN_00f96010(&fStack_b0,0x80c0c0ff,2);
      FUN_00f96010(&local_80,0x80c0c0ff,2);
      fVar4 = fStack_a8;
      fVar3 = fStack_ac;
      fVar2 = fStack_b0;
      fStack_b0 = fStack_90;
      fStack_ac = fStack_8c;
      fStack_a8 = fStack_88;
      fStack_a4 = fStack_84;
      fStack_90 = fVar2;
      fStack_8c = fVar3;
      fStack_88 = fVar4;
      fStack_84 = 1.0;
      FUN_00f96010(&fStack_b0,0x80c0c0ff,2);
      fVar4 = fStack_78;
      fVar3 = fStack_7c;
      fVar2 = local_80;
      local_80 = fStack_60;
      fStack_7c = fStack_5c;
      fStack_78 = fStack_58;
      fStack_74 = fStack_54;
      fStack_60 = fVar2;
      fStack_5c = fVar3;
      fStack_58 = fVar4;
      fStack_54 = 1.0;
      FUN_00f96010(&local_80,0x80c0c0ff,2);
      (**(code **)(*param_1 + 0x24))(&fStack_b0,iVar5 + -2);
      (**(code **)(*param_1 + 0x24))(&fStack_a8,iVar1);
      (**(code **)(*param_1 + 0x24))(&fStack_90,iVar5);
      (**(code **)(*param_1 + 0x24))(&fStack_88,iVar5 + 1);
      fStack_c0 = fStack_70 - local_80;
      fStack_bc = fStack_6c - fStack_7c;
      fStack_b8 = fStack_68 - fStack_78;
      fStack_b0 = fStack_50 - local_80;
      fStack_ac = fStack_4c - fStack_7c;
      fStack_a8 = fStack_48 - fStack_78;
      fStack_130 = fStack_bc * fStack_a8 - fStack_b8 * fStack_ac;
      fStack_12c = fStack_b0 * fStack_b8 - fStack_c0 * fStack_a8;
      fStack_128 = fStack_ac * fStack_c0 - fStack_bc * fStack_b0;
      fStack_d4 = fStack_12c * fStack_12c + fStack_130 * fStack_130 + fStack_128 * fStack_128;
      fStack_120 = fStack_130;
      fStack_11c = fStack_12c;
      fStack_118 = fStack_128;
      if (fStack_d4 < 0.0 == (fStack_d4 == 0.0)) {
        FUN_00ddf460(&fStack_130,&fStack_130);
      }
      else {
        FUN_00dd5650(&DAT_0163d0ac);
        fStack_130 = 0.0;
        fStack_12c = 1.0;
        fStack_128 = 0.0;
      }
      fStack_100 = local_80 + fStack_70;
      fStack_fc = fStack_7c + fStack_6c;
      fStack_f8 = fStack_78 + fStack_68;
      fStack_f4 = fStack_74 + fStack_64;
      fStack_f0 = fStack_100 + fStack_50;
      fStack_ec = fStack_fc + fStack_4c;
      fStack_e8 = fStack_f8 + fStack_48;
      fStack_e4 = fStack_f4 + fStack_44;
      fStack_d0 = fStack_f0 + fStack_40;
      fStack_cc = fStack_ec + fStack_3c;
      fStack_c8 = fStack_e8 + fStack_38;
      fStack_c4 = fStack_e4 + fStack_34;
      fStack_110 = fStack_d0 * 0.25;
      fStack_10c = fStack_cc * 0.25;
      fStack_108 = fStack_c8 * 0.25;
      fStack_104 = fStack_c4 * 0.25;
      fStack_90 = fStack_130 + fStack_110;
      fStack_8c = fStack_12c + fStack_10c;
      fStack_88 = fStack_128 + fStack_108;
      fStack_84 = fStack_104 + fStack_124;
      fStack_a0 = fStack_110 - fStack_130;
      fStack_9c = fStack_10c - fStack_12c;
      fStack_98 = fStack_108 - fStack_128;
      fStack_94 = fStack_104 - fStack_124;
      FUN_00f95fa0(&fStack_a0,&fStack_90,local_140,0);
      iVar5 = iVar5 + 2;
      local_114 = local_114 + -1;
    } while (local_114 != 0);
  }
LAB_00e57986:
  __security_check_cookie(local_14 ^ (uint)auStack_144);
  return;
}

// 00E579A0  SoundArea::ShapePrism::vf04  size=210  [class]
void __thiscall SoundArea::ShapePrism::vf04(int param_1,undefined4 *param_2,float *param_3)

{
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  if (*(int *)(param_1 + 0x118) == 0) {
    local_20 = *param_3;
    local_1c = param_3[1];
    local_18 = param_3[2];
    local_14 = param_3[3];
  }
  else {
    D3DXVec3TransformNormal(&local_20,param_3,param_1 + 0xd0);
    local_20 = *(float *)(param_1 + 0x100) + local_20;
    local_1c = *(float *)(param_1 + 0x104) + local_1c;
    local_18 = *(float *)(param_1 + 0x108) + local_18;
  }
  *param_2 = *(undefined4 *)(param_1 + 0x180);
  param_2[1] = *(undefined4 *)(param_1 + 0x184);
  param_2[2] = *(undefined4 *)(param_1 + 0x188);
  param_2[3] = *(undefined4 *)(param_1 + 0x18c);
  FUN_00e4cf80(param_2,&local_20);
  if ((float)param_2[8] <= 0.0) {
    FUN_00e535d0(param_2,&local_20);
  }
  FUN_00e47060(param_2,param_2);
  FUN_00e47060(param_2 + 4,param_2 + 4);
  return;
}

// 00E57A80  SoundArea::ShapePrism::vf58  size=689  [class]
void __thiscall SoundArea::ShapePrism::vf58(int *param_1,undefined4 param_2)

{
  char cVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  char *pcVar7;
  int local_48;
  uint local_44;
  uint local_38;
  uint local_34;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  undefined1 local_20 [28];
  
  iVar6 = param_1[0x59];
  iVar4 = 0;
  if (0 < iVar6) {
    do {
      FUN_00e54c60(param_1,iVar4 * 2,param_2);
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar6);
  }
  local_34 = param_1[0x52];
  if (0 < param_1[0x54]) {
    pcVar5 = (char *)(local_34 + 1);
    local_48 = (param_1[0x54] - 1U) / 3 + 1;
    do {
      cVar3 = *pcVar5;
      cVar1 = pcVar5[-1];
      cVar2 = pcVar5[1];
      FUN_00e4f130(param_1,cVar1 * '\x02',cVar3 * '\x02',param_2);
      FUN_00e4f130(param_1,cVar3 * '\x02',cVar2 * '\x02',param_2);
      FUN_00e4f130(param_1,cVar2 * '\x02',cVar1 * '\x02',param_2);
      pcVar5 = pcVar5 + 3;
      local_48 = local_48 + -1;
    } while (local_48 != 0);
  }
  local_44 = param_1[0x5e];
  pcVar5 = (char *)param_1[0x5c];
  local_38 = local_44;
  if (0 < (int)local_44) {
    pcVar7 = pcVar5;
    do {
      cVar3 = pcVar5[(int)(pcVar7 + (1 - (int)pcVar5)) % (int)local_38];
      (**(code **)(*param_1 + 0x24))(local_20,*pcVar7 * '\x02');
      (**(code **)(*param_1 + 0x24))(&local_38,cVar3 * '\x02');
      FUN_00f95f40(local_20,auStack_30,0xffffffff,0);
      pcVar7 = pcVar7 + 1;
      local_44 = local_44 - 1;
    } while (local_44 != 0);
  }
  if (0.0 < (float)param_1[0x4e]) {
    local_44 = param_1[0x59];
    if (0 < (int)local_44) {
      iVar6 = 1;
      do {
        FUN_00e54c60(param_1,iVar6,param_2);
        FUN_00e4f130(param_1,iVar6 + -1,iVar6,param_2);
        iVar6 = iVar6 + 2;
        local_44 = local_44 + -1;
      } while (local_44 != 0);
    }
    if (0 < param_1[0x54]) {
      pcVar5 = (char *)(local_34 + 1);
      local_44 = (param_1[0x54] - 1U) / 3 + 1;
      do {
        local_34 = (uint)(byte)(*pcVar5 * '\x02' + 1);
        local_38 = (uint)(byte)(pcVar5[-1] * '\x02' + 1);
        cVar3 = pcVar5[1] * '\x02' + '\x01';
        FUN_00e4f130(param_1,local_38,local_34,param_2);
        FUN_00e4f130(param_1,local_34,cVar3,param_2);
        FUN_00e4f130(param_1,cVar3,local_38,param_2);
        pcVar5 = pcVar5 + 3;
        local_44 = local_44 + -1;
      } while (local_44 != 0);
    }
    local_44 = param_1[0x5e];
    pcVar5 = (char *)param_1[0x5c];
    if (0 < (int)local_44) {
      local_34 = 1 - (int)pcVar5;
      pcVar7 = pcVar5;
      local_38 = local_44;
      do {
        cVar3 = pcVar5[(int)(pcVar7 + local_34) % (int)local_38];
        (**(code **)(*param_1 + 0x24))(auStack_30,*pcVar7 * '\x02' + '\x01');
        (**(code **)(*param_1 + 0x24))(auStack_28,cVar3 * '\x02' + '\x01');
        FUN_00f95f40(auStack_30,local_20,0xffffffff,0);
        pcVar7 = pcVar7 + 1;
        local_44 = local_44 - 1;
      } while (local_44 != 0);
    }
  }
  return;
}

// 00E57D40  SoundArea::ShapeRail::vf18  size=367  [class]
undefined4 __thiscall SoundArea::ShapeRail::vf18(int param_1,int *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 unaff_EDI;
  int unaff_retaddr;
  int iStack_4;
  
  *(undefined4 *)(param_1 + 300) = 0;
  *(undefined4 *)(param_1 + 0x130) = 0;
  *(undefined4 *)(param_1 + 0x120) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x124) = 0;
  *(undefined4 *)(param_1 + 0x128) = 0;
  iStack_4 = param_1;
  FUN_00e4bed0(param_2,param_3);
  iVar2 = (**(code **)(*param_2 + 0x9c))(param_3,"PointNum");
  if (iVar2 != -1) {
    (**(code **)(*param_2 + 0xe8))(iVar2,&stack0x00000000);
  }
  if ((unaff_retaddr <= *(int *)(param_1 + 0x13c)) ||
     (iVar2 = FUN_00e614a0(unaff_retaddr), iVar2 != 0)) {
    if (unaff_retaddr != *(int *)(param_1 + 0x140)) {
      *(int *)(param_1 + 0x140) = unaff_retaddr;
    }
    uVar1 = *(undefined4 *)(param_1 + 0x138);
    iVar2 = (**(code **)(*param_2 + 0x9c))(param_3,"PointArray");
    if (iVar2 != -1) {
      (**(code **)(*param_2 + 0xfc))(iVar2,uVar1,unaff_EDI);
    }
    iVar2 = (**(code **)(*param_2 + 0x9c))(param_3,"ValueNum");
    if (iVar2 != -1) {
      (**(code **)(*param_2 + 0xe8))(iVar2,&iStack_4);
    }
    iVar2 = iStack_4;
    if ((iStack_4 <= *(int *)(param_1 + 0x164)) || (iVar3 = FUN_00e61860(iStack_4), iVar3 != 0)) {
      if (iVar2 != *(int *)(param_1 + 0x168)) {
        *(int *)(param_1 + 0x168) = iVar2;
      }
      FUN_00d9fe40(param_3,"ValueArray",*(undefined4 *)(param_1 + 0x160),iStack_4);
      FUN_00e545d0();
      return 1;
    }
  }
  FUN_00dd5650(&DAT_016cdba0);
  return 0;
}

// 00E57EB0  SoundArea::ShapeRail::vf58  size=2216  [class]
void __thiscall SoundArea::ShapeRail::vf58(int param_1,int param_2)

{
  int iVar1;
  float *pfVar2;
  float *pfVar3;
  int iVar4;
  int iVar5;
  undefined1 auStack_104 [8];
  int local_fc;
  int local_f8;
  int local_f4;
  int local_f0;
  int local_ec;
  int local_e8;
  int local_e4;
  float local_e0;
  float local_dc;
  float local_d8;
  undefined4 local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  undefined4 local_c4;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  undefined4 uStack_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  undefined4 uStack_a4;
  float afStack_a0 [7];
  undefined4 uStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  undefined4 uStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  undefined4 uStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  undefined4 uStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  undefined4 uStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  undefined4 uStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  undefined4 uStack_24;
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)auStack_104;
  iVar5 = *(int *)(param_1 + 0x154) * 6;
  local_e8 = param_2;
  local_fc = 0;
  local_e4 = param_1;
  if (0 < iVar5) {
    do {
      FUN_00e54c60(param_1,local_fc,param_2);
      local_fc = local_fc + 1;
    } while (local_fc < iVar5);
  }
  iVar5 = *(int *)(param_2 + 0x34);
  iVar1 = *(int *)(param_2 + 0x1c);
  if (iVar5 == iVar1) {
    if (((*(int *)(param_2 + 0x38) == *(int *)(param_2 + 0x20)) &&
        (*(int *)(param_2 + 0x3c) == *(int *)(param_2 + 0x24))) &&
       (*(int *)(param_2 + 0x40) == *(int *)(param_2 + 0x28))) {
      local_f4 = -0x5b00;
    }
    else {
      if (((iVar5 != iVar1) || (*(int *)(param_2 + 0x38) != *(int *)(param_2 + 0x20))) ||
         (*(int *)(param_2 + 0x3c) != *(int *)(param_2 + 0x24))) goto LAB_00e57f5a;
      local_f4 = -0x5b00;
    }
  }
  else {
LAB_00e57f5a:
    iVar4 = *(int *)(param_2 + 4);
    if (iVar5 == iVar4) {
      if (((*(int *)(param_2 + 0x38) == *(int *)(param_2 + 8)) &&
          (*(int *)(param_2 + 0x3c) == *(int *)(param_2 + 0xc))) &&
         (*(int *)(param_2 + 0x40) == *(int *)(param_2 + 0x10))) {
        local_f4 = -0x5b00;
      }
      else {
        if (iVar5 != iVar4) goto LAB_00e57fb7;
        if ((*(int *)(param_2 + 0x38) == *(int *)(param_2 + 8)) &&
           (*(int *)(param_2 + 0x3c) == *(int *)(param_2 + 0xc))) {
          local_f4 = -0x5b00;
        }
        else {
          if ((iVar5 != iVar4) || (*(int *)(param_2 + 0x38) != *(int *)(param_2 + 8)))
          goto LAB_00e57fb7;
          local_f4 = -1;
        }
      }
    }
    else {
LAB_00e57fb7:
      local_f4 = (-(uint)(iVar5 != iVar4) & 0xffffffde) - 0x222201;
    }
  }
  if (iVar5 == iVar1) {
    if (((*(int *)(param_2 + 0x38) == *(int *)(param_2 + 0x20)) &&
        (*(int *)(param_2 + 0x3c) == *(int *)(param_2 + 0x24))) &&
       (*(int *)(param_2 + 0x40) == *(int *)(param_2 + 0x28))) {
      local_f8 = -0xff6700;
      goto LAB_00e58095;
    }
    if (((iVar5 == iVar1) && (*(int *)(param_2 + 0x38) == *(int *)(param_2 + 0x20))) &&
       (*(int *)(param_2 + 0x3c) == *(int *)(param_2 + 0x24))) {
      local_f8 = -0xffab00;
      goto LAB_00e58095;
    }
  }
  iVar1 = *(int *)(param_2 + 4);
  if (iVar5 == iVar1) {
    if (((*(int *)(param_2 + 0x38) == *(int *)(param_2 + 8)) &&
        (*(int *)(param_2 + 0x3c) == *(int *)(param_2 + 0xc))) &&
       (*(int *)(param_2 + 0x40) == *(int *)(param_2 + 0x10))) {
      local_f8 = -0x340000;
      goto LAB_00e58095;
    }
    if (iVar5 == iVar1) {
      if ((*(int *)(param_2 + 0x38) == *(int *)(param_2 + 8)) &&
         (*(int *)(param_2 + 0x3c) == *(int *)(param_2 + 0xc))) {
        local_f8 = -0x890000;
        goto LAB_00e58095;
      }
      if ((iVar5 == iVar1) && (*(int *)(param_2 + 0x38) == *(int *)(param_2 + 8))) {
        local_f8 = -1;
        goto LAB_00e58095;
      }
    }
  }
  local_f8 = (-(uint)(iVar5 != iVar1) & 0xffffffde) - 0x222201;
LAB_00e58095:
  iVar5 = local_f8;
  iVar1 = *(int *)(param_1 + 0x154) + -1;
  if (0 < iVar1) {
    local_fc = 0;
    local_f0 = iVar1;
    do {
      pfVar2 = (float *)(*(int *)(param_1 + 0x14c) + local_fc);
      local_e0 = *pfVar2;
      local_dc = pfVar2[1];
      local_d8 = pfVar2[2];
      local_d4 = 0x3f800000;
      local_d0 = pfVar2[3];
      local_cc = pfVar2[4];
      local_c8 = pfVar2[5];
      local_c4 = 0x3f800000;
      if (*(int *)(param_1 + 0x118) != 0) {
        D3DXVec3TransformNormal(&local_e0,&local_e0,param_1 + 0x90);
        local_e0 = local_e0 + *(float *)(param_1 + 0xc0);
        local_dc = *(float *)(param_1 + 0xc4) + local_dc;
        local_d8 = *(float *)(param_1 + 200) + local_d8;
        if (*(int *)(param_1 + 0x118) != 0) {
          D3DXVec3TransformNormal(&local_d0,&local_d0,param_1 + 0x90);
          local_d0 = local_d0 + *(float *)(param_1 + 0xc0);
          local_cc = *(float *)(param_1 + 0xc4) + local_cc;
          local_c8 = *(float *)(param_1 + 200) + local_c8;
        }
      }
      FUN_00f95f40(&local_e0,&local_d0);
      local_fc = local_fc + 0xc;
      local_f0 = local_f0 + -1;
    } while (local_f0 != 0);
  }
  if (((*(int *)(param_2 + 0x34) == *(int *)(param_2 + 4)) &&
      (*(int *)(param_2 + 0x38) == *(int *)(param_2 + 8))) &&
     (*(int *)(param_2 + 0x3c) == *(int *)(param_2 + 0xc))) {
    local_ec = *(int *)(param_1 + 0x154);
    iVar1 = 0;
    if (0 < local_ec) {
      local_fc = 0;
      do {
        pfVar2 = (float *)(*(int *)(param_1 + 0x14c) + local_fc);
        local_e0 = *pfVar2;
        local_dc = pfVar2[1];
        local_d8 = pfVar2[2];
        local_d4 = 0x3f800000;
        FUN_00ea0000(&local_e0,&local_e0);
        FUN_00f963b0(local_e0,local_dc,0x41200000,0xffffffff,&DAT_016ceb60);
        local_fc = local_fc + 0xc;
        iVar1 = iVar1 + 1;
      } while (iVar1 < local_ec);
    }
  }
  local_f0 = ((int)(*(int *)(param_1 + 0x140) + (*(int *)(param_1 + 0x140) >> 0x1f & 3U)) >> 2) + -1
  ;
  local_fc = 0;
  if (0 < local_f0) {
    do {
      pfVar3 = (float *)(local_fc * 0x30 + *(int *)(param_1 + 0x138));
      pfVar2 = afStack_a0 + 2;
      local_ec = 8;
      afStack_a0[0] = *pfVar3;
      afStack_a0[1] = pfVar3[1];
      afStack_a0[2] = pfVar3[2];
      afStack_a0[3] = 1.0;
      afStack_a0[4] = pfVar3[3];
      afStack_a0[5] = pfVar3[4];
      afStack_a0[6] = pfVar3[5];
      uStack_84 = 0x3f800000;
      fStack_80 = pfVar3[6];
      fStack_7c = pfVar3[7];
      fStack_78 = pfVar3[8];
      uStack_74 = 0x3f800000;
      fStack_70 = pfVar3[9];
      fStack_6c = pfVar3[10];
      fStack_68 = pfVar3[0xb];
      uStack_64 = 0x3f800000;
      fStack_60 = pfVar3[0xc];
      fStack_5c = pfVar3[0xd];
      fStack_58 = pfVar3[0xe];
      uStack_54 = 0x3f800000;
      fStack_50 = pfVar3[0xf];
      fStack_4c = pfVar3[0x10];
      fStack_48 = pfVar3[0x11];
      uStack_44 = 0x3f800000;
      fStack_40 = pfVar3[0x12];
      fStack_3c = pfVar3[0x13];
      fStack_38 = pfVar3[0x14];
      uStack_34 = 0x3f800000;
      fStack_30 = pfVar3[0x15];
      fStack_2c = pfVar3[0x16];
      fStack_28 = pfVar3[0x17];
      uStack_24 = 0x3f800000;
      do {
        if (*(int *)(param_1 + 0x118) == 0) {
          pfVar2[-2] = pfVar2[-2];
          pfVar2[-1] = pfVar2[-1];
          *pfVar2 = *pfVar2;
          pfVar2[1] = pfVar2[1];
        }
        else {
          pfVar3 = pfVar2 + -2;
          D3DXVec3TransformNormal(pfVar3,pfVar3,param_1 + 0x90);
          *pfVar3 = *(float *)(param_1 + 0xc0) + *pfVar3;
          pfVar2[-1] = *(float *)(param_1 + 0xc4) + pfVar2[-1];
          *pfVar2 = *(float *)(param_1 + 200) + *pfVar2;
          iVar5 = local_f8;
          param_1 = local_e4;
        }
        pfVar2 = pfVar2 + 4;
        local_ec = local_ec + -1;
      } while (local_ec != 0);
      FUN_00f95f40(afStack_a0,afStack_a0 + 4,iVar5);
      FUN_00f95f40(afStack_a0 + 4,&fStack_70,iVar5,0);
      FUN_00f95f40(&fStack_70,&fStack_80,iVar5,0);
      iVar1 = local_f4;
      FUN_00f95f40(&fStack_80,afStack_a0,local_f4,0);
      FUN_00f95f40(afStack_a0,&fStack_60,iVar1);
      FUN_00f95f40(afStack_a0 + 4,&fStack_50,iVar5,0);
      FUN_00f95f40(&fStack_80,&fStack_40,iVar1,0);
      FUN_00f95f40(&fStack_70,&fStack_30,iVar5,0);
      if (local_fc == local_f0 + -1) {
        FUN_00f95f40(&fStack_60,&fStack_50,iVar5);
        FUN_00f95f40(&fStack_50,&fStack_30,iVar5,0);
        FUN_00f95f40(&fStack_30,&fStack_40,iVar5,0);
        FUN_00f95f40(&fStack_40,&fStack_60,iVar1,0);
      }
      FUN_00f95f40(&fStack_80,&fStack_60);
      FUN_00f95f40(&fStack_70,&fStack_50,iVar5,0);
      iVar4 = FUN_00e46690();
      iVar1 = local_fc;
      if (iVar4 != 0) {
        FUN_00e4dea0();
        iVar1 = local_fc;
        if (local_fc == 0) {
          local_e0 = afStack_a0[0];
          local_dc = afStack_a0[1];
          local_d8 = afStack_a0[2];
          local_d4 = afStack_a0[3];
          local_d0 = afStack_a0[4];
          local_cc = afStack_a0[5];
          local_c8 = afStack_a0[6];
          local_c4 = uStack_84;
          fStack_c0 = fStack_80;
          fStack_bc = fStack_7c;
          fStack_b8 = fStack_78;
          uStack_b4 = uStack_74;
          fStack_b0 = fStack_70;
          fStack_ac = fStack_6c;
          fStack_a8 = fStack_68;
          uStack_a4 = uStack_64;
          FUN_00e48830();
        }
        if (iVar1 == local_f0 + -1) {
          local_e0 = fStack_60;
          local_dc = fStack_5c;
          local_d8 = fStack_58;
          local_d4 = uStack_54;
          local_d0 = fStack_50;
          local_cc = fStack_4c;
          local_c8 = fStack_48;
          local_c4 = uStack_44;
          fStack_c0 = fStack_40;
          fStack_bc = fStack_3c;
          fStack_b8 = fStack_38;
          uStack_b4 = uStack_34;
          fStack_b0 = fStack_30;
          fStack_ac = fStack_2c;
          fStack_a8 = fStack_28;
          uStack_a4 = uStack_24;
          FUN_00e48830();
        }
      }
      local_fc = iVar1 + 1;
    } while (local_fc < local_f0);
    __security_check_cookie(local_14 ^ (uint)auStack_104);
    return;
  }
  __security_check_cookie(local_14 ^ (uint)auStack_104);
  return;
}

// 00E58760  SoundArea::ShapeSphere::vf58  size=63  [class]
void __thiscall SoundArea::ShapeSphere::vf58(int param_1,undefined4 param_2)

{
  FUN_00e54c60(param_1,1,param_2);
  if (0.0 < *(float *)(param_1 + 0x140)) {
    FUN_00e54c60(param_1,0,param_2);
    FUN_00e4f130(param_1,0,1,param_2);
  }
  return;
}

// 00E587B0  FUN_00e587b0  size=206  [between]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00e587b0(int param_1)

{
  int iVar1;
  int iVar2;
  uint unaff_ESI;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined *puStack_20;
  char *pcStack_1c;
  undefined1 auStack_14 [16];
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)auStack_14;
  uStack_28 = *(undefined4 *)(param_1 + 0xc);
  iVar2 = *(int *)(param_1 + 0x10);
  pcStack_1c = "FactoryFixed";
  puStack_20 = &DAT_01b7bda0;
  uStack_24 = 4;
  iVar1 = (**(code **)(DAT_01dd9688 + 0x40))(0x28);
  if (iVar1 != 0) {
    iVar1 = (**(code **)(DAT_01dd96f0 + 0x40))(8,iVar2,0x10,&DAT_01b7bda0,"FactoryFixed");
    if (iVar1 != 0) {
      iVar2 = FUN_00e62a50(iVar2 * 2,&DAT_01b7bda0);
      if (iVar2 != 0) {
        _sprintf_s((char *)&uStack_28,0x10,"BGM_ch%d",0);
        DAT_01dd94f8 = FUN_00df4920(&uStack_28);
        _DAT_01dd9508 = 0;
        _DAT_01dd950c = 0;
        __security_check_cookie(unaff_ESI ^ (uint)&uStack_28);
        return;
      }
    }
  }
  __security_check_cookie(unaff_ESI ^ (uint)&uStack_28);
  return;
}

// 00E58980  FUN_00e58980  size=118  [between]
void FUN_00e58980(byte *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int local_c;
  
  iVar2 = DAT_01dd97b0;
  local_c = 0;
  if (0 < DAT_01dd97b0) {
    do {
      *(int *)(param_1 + 0x34) = local_c;
      if (((*param_1 & 4) == 0) || (local_c == *(int *)(param_1 + 4))) {
        iVar1 = *(int *)(*(int *)(DAT_01dd97ac + local_c * 4) + 0x14);
        iVar3 = 0;
        if (0 < iVar1) {
          do {
            *(int *)(param_1 + 0x38) = iVar3;
            FUN_00e62890(param_1);
            iVar3 = iVar3 + 1;
          } while (iVar3 < iVar1);
        }
      }
      local_c = local_c + 1;
    } while (local_c < iVar2);
  }
  return;
}

// 00E58A10  FUN_00e58a10  size=306  [between]
void __thiscall FUN_00e58a10(int param_1,int param_2,int param_3,int param_4)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_2c;
  int *local_28;
  int *local_24;
  int local_20;
  int local_1c;
  int local_18;
  undefined1 auStack_14 [16];
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)&local_2c;
  if (0 < *(int *)(param_1 + 0x14)) {
    local_24 = (int *)(*(int *)(param_1 + 0xc) + 0x10);
    local_2c = *(int *)(param_1 + 0x14);
    do {
      if (0 < *local_24) {
        local_28 = (int *)(local_24[-2] + 0x18);
        local_20 = *local_24;
        do {
          iVar5 = *local_28;
          local_1c = local_28[-2];
          iVar4 = 0;
          local_18 = iVar5;
          if (0 < iVar5) {
            do {
              piVar1 = *(int **)(local_1c + iVar4 * 4);
              piVar2 = (int *)(**(code **)(*piVar1 + 0x5c))();
              if ((*piVar2 == param_3) && (piVar2[1] == param_4)) {
                iVar5 = piVar2[2];
                FUN_00a7c800();
                piVar1[0x44] = param_2;
                iVar3 = FUN_00a12210(iVar5);
                piVar1[0x45] = iVar3;
                if (iVar3 == 0) {
                  FUN_009f8ea0(auStack_14,0x10,*(undefined4 *)(param_2 + 0x24),0);
                  FUN_00dd5650(&DAT_016ce4a0,auStack_14,iVar5);
                }
                else {
                  D3DXMatrixInverse(piVar1 + 4,0,iVar3 + 0x10);
                }
                FUN_00e52160();
                iVar5 = local_18;
              }
              iVar4 = iVar4 + 1;
            } while (iVar4 < iVar5);
          }
          local_28 = local_28 + 0x11;
          local_20 = local_20 + -1;
        } while (local_20 != 0);
        local_20 = 0;
      }
      local_24 = local_24 + 0xb;
      local_2c = local_2c + -1;
    } while (local_2c != 0);
    local_2c = 0;
  }
  __security_check_cookie(local_4 ^ (uint)&local_2c);
  return;
}

// 00E58C00  FUN_00e58c00  size=216  [between]
void __fastcall FUN_00e58c00(byte *param_1)

{
  int iVar1;
  undefined4 local_38 [2];
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  iVar1 = FUN_00e47e10();
  if (iVar1 != 1) {
    iVar1 = FUN_00e49a00(&local_20,&local_30);
    if (iVar1 == 0) {
      iVar1 = (uint)*param_1 * 0x10;
      local_20 = *(undefined4 *)(&DAT_01dd9550 + iVar1);
      local_1c = *(undefined4 *)(&DAT_01dd9554 + iVar1);
      local_18 = *(undefined4 *)(&DAT_01dd9558 + iVar1);
      local_14 = *(undefined4 *)(&DAT_01dd955c + iVar1);
      local_30 = *(undefined4 *)(&DAT_01dd9580 + iVar1);
      local_2c = *(undefined4 *)(&DAT_01dd9584 + iVar1);
      local_28 = *(undefined4 *)(&DAT_01dd9588 + iVar1);
      local_24 = *(undefined4 *)(&DAT_01dd958c + iVar1);
    }
    iVar1 = FUN_00e56ec0(local_38,&local_20,&local_30);
    if ((iVar1 != 0) && (iVar1 = *(int *)(param_1 + 0x30), iVar1 != 0)) {
      FUN_00df3d00(iVar1,local_38[0],1);
      FUN_00df3c40(DAT_01dd94f8,iVar1,local_38[0],1);
    }
  }
  return;
}

// 00E58CE0  FUN_00e58ce0  size=162  [between]
undefined4 __thiscall FUN_00e58ce0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  if ((*(byte *)(param_1 + 0x24) & 1) != 0) {
    if (*(int *)(param_1 + 4) != 0) {
      thunk_FUN_00df2950(*(int *)(param_1 + 4));
    }
    *(uint *)(param_1 + 0x24) = *(uint *)(param_1 + 0x24) & 0xfffffffe;
  }
  if ((*(uint *)(param_1 + 0x24) & 1) == 0) {
    *(uint *)(param_1 + 0x24) = *(uint *)(param_1 + 0x24) | 1;
  }
  *(undefined4 *)(param_1 + 0x38) = 0x42c80000;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  iVar1 = FUN_00e4fbe0(param_2,param_3);
  if (iVar1 != 0) {
    iVar1 = FUN_00e56fc0(param_2,param_3);
    if (iVar1 != 0) {
      *(undefined4 *)(param_1 + 0x20) = 0x40a00000;
      if (*(int *)(param_1 + 4) != 0) {
        Hw::Wwise::StateWatcher(*(int *)(param_1 + 4));
      }
      return 1;
    }
  }
  return 0;
}

// 00E58D90  FUN_00e58d90  size=168  [between]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00e58d90(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_00dd7240();
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = param_1[2];
  iVar2 = (**(code **)(DAT_01dd9870 + 0x40))(0x28,*param_1,4,&DAT_01b7bda0,"FactoryFixed");
  if (iVar2 != 0) {
    iVar2 = (**(code **)(DAT_01dd98d8 + 0x40))(0x80,iVar1,0x10,&DAT_01b7bda0,"FactoryFixed");
    if (iVar2 != 0) {
      iVar1 = FUN_00e62c40(iVar1 * 2,&DAT_01b7bda0);
      if (iVar1 != 0) {
        _DAT_01dd94f4 = 0;
        _DAT_01dd94f0 = 0;
        _DAT_01dd94ec = 0;
        _DAT_01dd94e8 = 0;
        _DAT_01dd94e4 = 0;
        _DAT_01dd94e0 = 0;
        return 1;
      }
    }
  }
  return 0;
}

// 00E58E40  FUN_00e58e40  size=129  [between]
void FUN_00e58e40(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  
  if (DAT_01dd9860 != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_01dd9848);
  }
  uVar1 = (int)param_1 >> 8 & 0xffff;
  if (uVar1 < DAT_01dd9938) {
    if ((((*(uint *)(DAT_01dd9948 + uVar1 * 8) ^ param_1) & 0xffffff00) == 0) &&
       (*(int *)(DAT_01dd9948 + 4 + uVar1 * 8) != 0)) {
      FUN_00e4a120(param_2,param_3,param_4);
    }
  }
  else {
    FUN_00dd5650(&DAT_01663fb0);
  }
  if (DAT_01dd9860 != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_01dd9848);
  }
  return;
}

// 00E58ED0  FUN_00e58ed0  size=116  [between]
bool FUN_00e58ed0(uint param_1)

{
  uint uVar1;
  int iVar2;
  
  if (DAT_01dd9860 != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_01dd9848);
  }
  uVar1 = (int)param_1 >> 8 & 0xffff;
  if (uVar1 < DAT_01dd9938) {
    if (((*(uint *)(DAT_01dd9948 + uVar1 * 8) ^ param_1) & 0xffffff00) == 0) {
      iVar2 = *(int *)(DAT_01dd9948 + 4 + uVar1 * 8);
      goto LAB_00e58f0a;
    }
  }
  else {
    FUN_00dd5650(&DAT_01663fb0);
  }
  iVar2 = 0;
LAB_00e58f0a:
  if (DAT_01dd9860 != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_01dd9848);
  }
  return iVar2 != 0;
}

// 00E58FB0  FUN_00e58fb0  size=75  [between]
void FUN_00e58fb0(undefined4 *param_1)

{
  int *piVar1;
  
  if (param_1[0x11] != 0) {
    FUN_00df3b40(param_1[0x11],1);
    param_1[0x11] = 0;
  }
  if (param_1[0x10] != 0) {
    piVar1 = (int *)(param_1[0x10] + 0xc);
    *piVar1 = *piVar1 + -1;
    param_1[0x10] = 0;
  }
  if (param_1 != (undefined4 *)0x0) {
    FUN_00e62d80(*param_1);
    FUN_00dd4920(param_1);
  }
  return;
}

// 00E59000  FUN_00e59000  size=156  [between]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00e59000(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((*(byte *)(param_1 + 4) & 1) == 0) {
    FUN_00df3b60(*(undefined4 *)(param_1 + 0x44));
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 1;
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    iVar1 = FUN_00a7c7e0();
    if (iVar1 == 0) {
      *(undefined4 *)(param_1 + 0x14) = 0;
      uVar2 = FUN_00fdbc60();
      FUN_00df3b80(*(undefined4 *)(param_1 + 0x44),uVar2);
      *(undefined4 *)(param_1 + 0x14) = 0;
    }
  }
  FUN_00e55590();
  if ((*(uint *)(param_1 + 0x10) & 0x80000000) == 0) {
    uVar2 = **(undefined4 **)(param_1 + 0x40);
    FUN_00df3ad0(uVar2,&DAT_018d0170,DAT_018d0190);
    FUN_00df3b20(uVar2,_DAT_018d016c);
  }
  FUN_00e50370();
  return;
}

// 00E590A0  FUN_00e590a0  size=306  [between]
void __thiscall FUN_00e590a0(int param_1,int param_2,int param_3,int param_4)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_2c;
  int *local_28;
  int *local_24;
  int local_20;
  int local_1c;
  int local_18;
  undefined1 auStack_14 [16];
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)&local_2c;
  if (0 < *(int *)(param_1 + 0x14)) {
    local_24 = (int *)(*(int *)(param_1 + 0xc) + 0x10);
    local_2c = *(int *)(param_1 + 0x14);
    do {
      if (0 < *local_24) {
        local_28 = (int *)(local_24[-2] + 0x18);
        local_20 = *local_24;
        do {
          iVar5 = *local_28;
          local_1c = local_28[-2];
          iVar4 = 0;
          local_18 = iVar5;
          if (0 < iVar5) {
            do {
              piVar1 = *(int **)(local_1c + iVar4 * 4);
              piVar2 = (int *)(**(code **)(*piVar1 + 0x5c))();
              if ((*piVar2 == param_3) && (piVar2[1] == param_4)) {
                iVar5 = piVar2[2];
                FUN_00a7c800();
                piVar1[0x44] = param_2;
                iVar3 = FUN_00a12210(iVar5);
                piVar1[0x45] = iVar3;
                if (iVar3 == 0) {
                  FUN_009f8ea0(auStack_14,0x10,*(undefined4 *)(param_2 + 0x24),0);
                  FUN_00dd5650(&DAT_016ce4a0,auStack_14,iVar5);
                }
                else {
                  D3DXMatrixInverse(piVar1 + 4,0,iVar3 + 0x10);
                }
                FUN_00e52160();
                iVar5 = local_18;
              }
              iVar4 = iVar4 + 1;
            } while (iVar4 < iVar5);
          }
          local_28 = local_28 + 0x20;
          local_20 = local_20 + -1;
        } while (local_20 != 0);
        local_20 = 0;
      }
      local_24 = local_24 + 0xb;
      local_2c = local_2c + -1;
    } while (local_2c != 0);
    local_2c = 0;
  }
  __security_check_cookie(local_4 ^ (uint)&local_2c);
  return;
}

// 00E592A0  FUN_00e592a0  size=90  [between]
void __thiscall FUN_00e592a0(int param_1,undefined4 param_2,undefined4 param_3)

{
  if (*(int *)(param_1 + 0x2c) != 0) {
    FUN_00e55810(param_2,param_3);
    FUN_00e4a540();
    return;
  }
  if ((*(int *)(param_1 + 0x30) != 0) && (*(int *)(param_1 + 0x44) != 0)) {
    FUN_00df3b80(*(int *)(param_1 + 0x44),0);
    FUN_00df3b40(*(undefined4 *)(param_1 + 0x44),1);
    *(undefined4 *)(param_1 + 0x44) = 0;
    *(uint *)(param_1 + 0x24) = *(uint *)(param_1 + 0x24) & 0xdfffffff;
  }
  return;
}

// 00E59300  FUN_00e59300  size=154  [between]
void __fastcall FUN_00e59300(byte *param_1)

{
  int iVar1;
  undefined4 local_38 [2];
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  iVar1 = FUN_00e47e10();
  if (iVar1 != 1) {
    iVar1 = (uint)*param_1 * 0x10;
    local_20 = *(undefined4 *)(&DAT_01dd9550 + iVar1);
    local_1c = *(undefined4 *)(&DAT_01dd9554 + iVar1);
    local_18 = *(undefined4 *)(&DAT_01dd9558 + iVar1);
    local_14 = *(undefined4 *)(&DAT_01dd955c + iVar1);
    local_30 = *(undefined4 *)(&DAT_01dd9580 + iVar1);
    local_2c = *(undefined4 *)(&DAT_01dd9584 + iVar1);
    local_28 = *(undefined4 *)(&DAT_01dd9588 + iVar1);
    local_24 = *(undefined4 *)(&DAT_01dd958c + iVar1);
    iVar1 = FUN_00e56ec0(local_38,&local_20,&local_30);
    if (iVar1 != 0) {
      FUN_00e4a4f0(local_38[0]);
    }
  }
  return;
}

// 00E593A0  FUN_00e593a0  size=226  [between]
undefined4 __thiscall FUN_00e593a0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  if ((*(byte *)(param_1 + 0x24) & 1) != 0) {
    FUN_00df3b40(*(undefined4 *)(param_1 + 0x40),1);
    FUN_00df3b40(*(undefined4 *)(param_1 + 0x44),1);
    FUN_00df39f0(*(undefined4 *)(param_1 + 0x3c));
    *(undefined4 *)(param_1 + 0x3c) = 0;
    *(undefined4 *)(param_1 + 0x40) = 0;
    *(undefined4 *)(param_1 + 0x44) = 0;
    if (*(int *)(param_1 + 4) != 0) {
      thunk_FUN_00df2950(*(int *)(param_1 + 4));
    }
    *(uint *)(param_1 + 0x24) = *(uint *)(param_1 + 0x24) & 0xcffffffe;
    if ((*(byte *)(param_1 + 0x24) & 1) != 0) goto LAB_00e59423;
  }
  iVar1 = FUN_00df4920(0);
  *(int *)(param_1 + 0x3c) = iVar1;
  if (iVar1 != 0) {
    *(uint *)(param_1 + 0x24) = *(uint *)(param_1 + 0x24) | 1;
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined4 *)(param_1 + 100) = 0;
    *(undefined4 *)(param_1 + 0x68) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x50) = 0;
    *(undefined4 *)(param_1 + 0x54) = 0;
    *(undefined4 *)(param_1 + 0x58) = 0;
    *(undefined4 *)(param_1 + 0x70) = 0;
  }
LAB_00e59423:
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  iVar1 = FUN_00e50550(param_2,param_3);
  if (iVar1 != 0) {
    iVar1 = FUN_00e56fc0(param_2,param_3);
    if (iVar1 != 0) {
      FUN_00e4a680();
      if (*(int *)(param_1 + 4) != 0) {
        Hw::Wwise::StateWatcher(*(int *)(param_1 + 4));
      }
      return 1;
    }
  }
  return 0;
}

// 00E59490  FUN_00e59490  size=139  [between]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00e59490(void)

{
  undefined1 local_40 [16];
  undefined1 local_30 [16];
  undefined1 local_20 [28];
  
  if ((&DAT_01dd9a84)[DAT_01dd952c * 0x20] == 0) {
    FUN_00e51030(local_20,local_30,local_40);
  }
  else if ((*(byte *)(&DAT_01dd9a88 + DAT_01dd952c * 0x20) & 1) == 0) {
    FUN_00e51310();
  }
  else {
    FUN_00e51770(local_20,local_30,local_40,DAT_01dd952c);
  }
  _DAT_018d0164 = (&DAT_01dd9a8c)[DAT_01dd952c * 0x20];
  _DAT_01dd953c = (&DAT_01dd9a90)[DAT_01dd952c * 0x20];
  FUN_00e4a830(local_20,local_30,local_40);
  return;
}

// 00E59520  FUN_00e59520  size=791  [between]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00e59520(void)

{
  float fVar1;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_90;
  float local_8c;
  float local_88;
  float local_80;
  float local_7c;
  float local_78;
  float local_70;
  float local_6c;
  float local_68;
  float local_60;
  float local_5c;
  float local_58;
  float local_50;
  float local_4c;
  float local_48;
  float local_40;
  float local_3c;
  float local_38;
  double local_28;
  float local_20;
  float local_1c;
  float local_18;
  
  if ((&DAT_01dd9a84)[DAT_01dd952c * 0x20] == 0) {
    FUN_00e51030(&local_90,&local_70,&local_40);
  }
  else if ((*(byte *)(&DAT_01dd9a88 + DAT_01dd952c * 0x20) & 1) == 0) {
    FUN_00e51310();
  }
  else {
    FUN_00e51770(&local_90,&local_70,&local_40,DAT_01dd952c);
  }
  if ((&DAT_01dd9a84)[DAT_01dd9530 * 0x20] == 0) {
    FUN_00e51030(&local_60,&local_80,&local_50);
  }
  else if ((*(byte *)(&DAT_01dd9a88 + DAT_01dd9530 * 0x20) & 1) == 0) {
    FUN_00e51310();
  }
  else {
    FUN_00e51770(&local_60,&local_80,&local_50,DAT_01dd9530);
  }
  local_a4 = _DAT_01dd9534 / _DAT_01dd9538;
  fVar1 = 1.0 - local_a4;
  local_28 = (double)fVar1;
  local_20 = local_60 * fVar1 + local_90 * local_a4;
  local_1c = local_5c * fVar1 + local_8c * local_a4;
  local_18 = local_58 * fVar1 + local_88 * local_a4;
  local_a0 = local_80 * fVar1 + local_70 * local_a4;
  local_9c = local_7c * fVar1 + local_6c * local_a4;
  local_98 = local_78 * fVar1 + local_68 * local_a4;
  local_c0 = local_50 * fVar1 + local_40 * local_a4;
  local_bc = local_4c * fVar1 + local_3c * local_a4;
  local_b8 = fVar1 * local_48 + local_38 * local_a4;
  fVar1 = local_a0 * local_a0 + local_9c * local_9c + local_98 * local_98;
  if (fVar1 < 0.0 == (fVar1 == 0.0)) {
    FUN_00ddf460(&local_a0,&local_a0);
  }
  else {
    FUN_00dd5650(&DAT_0163d0ac);
    local_a0 = 0.0;
    local_9c = 1.0;
    local_98 = 0.0;
  }
  fVar1 = local_c0 * local_c0 + local_bc * local_bc + local_b8 * local_b8;
  if (fVar1 < 0.0 == (fVar1 == 0.0)) {
    FUN_00ddf460(&local_c0,&local_c0);
  }
  else {
    FUN_00dd5650(&DAT_0163d0ac);
    local_c0 = 0.0;
    local_bc = 1.0;
    local_b8 = 0.0;
  }
  _DAT_018d0164 =
       local_a4 * (float)(&DAT_01dd9a8c)[DAT_01dd952c * 0x20] +
       (float)(&DAT_01dd9a8c)[DAT_01dd9530 * 0x20] * (float)local_28;
  _DAT_01dd953c =
       local_a4 * (float)(&DAT_01dd9a90)[DAT_01dd952c * 0x20] +
       (float)(&DAT_01dd9a90)[DAT_01dd9530 * 0x20] * (float)local_28;
  FUN_00e4a830(&local_20,&local_a0,&local_c0);
  return;
}

// 00E59840  thunk_FUN_00e58e40  size=5  [between]
void thunk_FUN_00e58e40(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  
  if (DAT_01dd9860 != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_01dd9848);
  }
  uVar1 = (int)param_1 >> 8 & 0xffff;
  if (uVar1 < DAT_01dd9938) {
    if ((((*(uint *)(DAT_01dd9948 + uVar1 * 8) ^ param_1) & 0xffffff00) == 0) &&
       (*(int *)(DAT_01dd9948 + 4 + uVar1 * 8) != 0)) {
      FUN_00e4a120(param_2,param_3,param_4);
    }
  }
  else {
    FUN_00dd5650(&DAT_01663fb0);
  }
  if (DAT_01dd9860 != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_01dd9848);
  }
  return;
}

// 00E59850  thunk_FUN_00e58ed0  size=5  [between]
bool thunk_FUN_00e58ed0(uint param_1)

{
  uint uVar1;
  int iVar2;
  
  if (DAT_01dd9860 != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_01dd9848);
  }
  uVar1 = (int)param_1 >> 8 & 0xffff;
  if (uVar1 < DAT_01dd9938) {
    if (((*(uint *)(DAT_01dd9948 + uVar1 * 8) ^ param_1) & 0xffffff00) == 0) {
      iVar2 = *(int *)(DAT_01dd9948 + 4 + uVar1 * 8);
      goto LAB_00e58f0a;
    }
  }
  else {
    FUN_00dd5650(&DAT_01663fb0);
  }
  iVar2 = 0;
LAB_00e58f0a:
  if (DAT_01dd9860 != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_01dd9848);
  }
  return iVar2 != 0;
}

// 00E59860  FUN_00e59860  size=84  [between]
undefined4 FUN_00e59860(uint param_1)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = (int)param_1 >> 8 & 0xffff;
  if (DAT_01dd9938 <= uVar1) {
    FUN_00dd5650(&DAT_01663fb0);
    return 0xffffffff;
  }
  if ((((*(uint *)(DAT_01dd9948 + uVar1 * 8) ^ param_1) & 0xffffff00) == 0) &&
     (*(int *)(DAT_01dd9948 + 4 + uVar1 * 8) != 0)) {
    uVar2 = thunk_FUN_00df31b0();
    return uVar2;
  }
  return 0xffffffff;
}

// 00E598C0  FUN_00e598c0  size=290  [between]
void FUN_00e598c0(int *param_1)

{
  int iVar1;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)&local_34;
  FUN_00decb40();
  local_34 = param_1[3] + *param_1;
  local_30 = local_34 * 2;
  local_2c = param_1[1] + 1;
  local_28 = local_2c * 2;
  local_24 = param_1[4] + param_1[2];
  local_14 = param_1[6];
  local_20 = local_24 * 2;
  local_8 = param_1[10];
  local_18 = param_1[5];
  local_10 = param_1[8];
  local_c = param_1[9];
  iVar1 = FUN_00df4570(&local_34);
  if (iVar1 != 0) {
    iVar1 = FUN_00e50890(param_1);
    if (iVar1 != 0) {
      iVar1 = (**(code **)(DAT_01dd97e8 + 0x40))(0x14,param_1[1],0x10,&DAT_01b7bda0,"FactoryFixed");
      if (iVar1 != 0) {
        iVar1 = FUN_00e58d90(param_1);
        if (iVar1 != 0) {
          iVar1 = FUN_00e587b0(param_1);
          if (iVar1 != 0) {
            if (DAT_01dd9664 == (undefined *)0x0) {
              DAT_01dd9664 = &DAT_01dd9644;
              DAT_01dd9668 = 0;
            }
            iVar1 = FUN_00e503d0();
            if (iVar1 != 0) {
              FUN_00e4fa00();
              __security_check_cookie(local_4 ^ (uint)&local_34);
              return;
            }
          }
        }
      }
    }
  }
  __security_check_cookie(local_4 ^ (uint)&local_34);
  return;
}

// 00E599F0  FUN_00e599f0  size=109  [between]
void FUN_00e599f0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 local_c;
  
  iVar2 = DAT_01dd9668;
  iVar1 = DAT_01dd9664;
  local_c = 0;
  if (0 < DAT_01dd9668) {
    do {
      iVar3 = *(int *)(*(int *)(iVar1 + local_c * 4) + 0x14);
      if (0 < iVar3) {
        do {
          FUN_00e63250(param_1,param_2,param_3);
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
      local_c = local_c + 1;
    } while (local_c < iVar2);
  }
  return;
}

// 00E59AC0  FUN_00e59ac0  size=118  [between]
void FUN_00e59ac0(byte *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int local_c;
  
  iVar2 = DAT_01dd9668;
  local_c = 0;
  if (0 < DAT_01dd9668) {
    do {
      *(int *)(param_1 + 0x34) = local_c;
      if (((*param_1 & 4) == 0) || (local_c == *(int *)(param_1 + 4))) {
        iVar1 = *(int *)(*(int *)(DAT_01dd9664 + local_c * 4) + 0x14);
        iVar3 = 0;
        if (0 < iVar1) {
          do {
            *(int *)(param_1 + 0x38) = iVar3;
            FUN_00e633d0(param_1);
            iVar3 = iVar3 + 1;
          } while (iVar3 < iVar1);
        }
      }
      local_c = local_c + 1;
    } while (local_c < iVar2);
  }
  return;
}

// 00E59B70  FUN_00e59b70  size=316  [between]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00e59b70(byte *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 local_58;
  undefined1 local_54 [4];
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
  float local_20;
  
  if ((param_1[0x24] & 1) != 0) {
    local_50 = _DAT_01dd9670;
    local_4c = _DAT_01dd9674;
    local_48 = _DAT_01dd9678;
    local_44 = _DAT_01dd967c;
    if (DAT_01dd9504 == 0) {
      iVar1 = (uint)*param_1 * 0x10;
      local_50 = *(undefined4 *)(&DAT_01dd9550 + iVar1);
      local_4c = *(undefined4 *)(&DAT_01dd9554 + iVar1);
      local_48 = *(undefined4 *)(&DAT_01dd9558 + iVar1);
      local_44 = *(undefined4 *)(&DAT_01dd955c + iVar1);
    }
    FUN_00e56cc0(&local_40,&local_50);
    if ((local_20 <= 0.0) || (iVar1 = FUN_00e47e10(), iVar1 == 1)) {
      if ((param_1[0x24] & 2) != 0) {
        FUN_00e4c440(local_54,&local_58);
        if (*(int *)(param_1 + 100) != 0) {
          FUN_00df3d00(*(int *)(param_1 + 100),local_58,1);
        }
      }
      *(uint *)(param_1 + 0x24) = *(uint *)(param_1 + 0x24) & 0xfffffffd;
    }
    else {
      FUN_00e4b360(param_2,&local_40,&local_50);
      *(uint *)(param_1 + 0x24) = *(uint *)(param_1 + 0x24) | 2;
    }
    *(undefined4 *)(param_1 + 0x70) = local_40;
    *(undefined4 *)(param_1 + 0x74) = local_3c;
    *(undefined4 *)(param_1 + 0x78) = local_38;
    *(undefined4 *)(param_1 + 0x7c) = local_34;
    *(undefined4 *)(param_1 + 0x80) = local_30;
    *(undefined4 *)(param_1 + 0x84) = local_2c;
    *(undefined4 *)(param_1 + 0x88) = local_28;
    *(undefined4 *)(param_1 + 0x8c) = local_24;
    *(float *)(param_1 + 0x90) = local_20;
    return;
  }
  return;
}

// 00E59CB0  FUN_00e59cb0  size=250  [between]
undefined4 __thiscall FUN_00e59cb0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  if ((*(byte *)(param_1 + 0x24) & 1) != 0) {
    if (*(int *)(param_1 + 4) != 0) {
      thunk_FUN_00df2950(*(int *)(param_1 + 4));
    }
    *(uint *)(param_1 + 0x24) = *(uint *)(param_1 + 0x24) & 0xfffffffe;
  }
  if ((*(uint *)(param_1 + 0x24) & 1) == 0) {
    *(uint *)(param_1 + 0x24) = *(uint *)(param_1 + 0x24) | 1;
    *(undefined4 *)(param_1 + 0x70) = 0;
    *(undefined4 *)(param_1 + 0x74) = 0;
    *(undefined4 *)(param_1 + 0x78) = 0;
    *(undefined4 *)(param_1 + 0x7c) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x80) = 0;
    *(undefined4 *)(param_1 + 0x84) = 0;
    *(undefined4 *)(param_1 + 0x88) = 0;
    *(undefined4 *)(param_1 + 0x8c) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x90) = 0;
  }
  *(undefined4 *)(param_1 + 0x28) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x2c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  iVar1 = FUN_00e4b150(param_2,param_3);
  if (iVar1 != 0) {
    iVar1 = FUN_00e56fc0(param_2,param_3);
    if (iVar1 != 0) {
      *(undefined4 *)(param_1 + 0x20) = 0x40a00000;
      if (*(int *)(param_1 + 4) != 0) {
        Hw::Wwise::StateWatcher(*(int *)(param_1 + 4));
      }
      return 1;
    }
  }
  return 0;
}

// 00E59DB0  FUN_00e59db0  size=149  [between]
void __thiscall FUN_00e59db0(int *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined1 local_40 [16];
  int *local_30;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  local_30 = param_1;
  puVar1 = (undefined4 *)FUN_00e491c0(local_40,param_1);
  local_20 = *puVar1;
  local_1c = puVar1[1];
  local_18 = puVar1[2];
  local_14 = puVar1[3];
  if (param_1[0x46] == 0) {
    local_50 = *param_2;
    local_4c = param_2[1];
    local_48 = param_2[2];
    local_44 = param_2[3];
  }
  else {
    D3DXVec3TransformNormal(&local_50,param_2,param_1 + 0x34);
  }
  (**(code **)(*param_1 + 0x30))(&local_50);
  FUN_00e54d50();
  return;
}

// 00E59E50  FUN_00e59e50  size=237  [between]
void __thiscall FUN_00e59e50(int *param_1,float *param_2)

{
  float fVar1;
  int iVar2;
  int iVar3;
  float local_40;
  float local_3c;
  float local_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  local_40 = 0.0;
  local_3c = 0.0;
  local_38 = 0.0;
  iVar2 = (**(code **)(*param_1 + 0x20))();
  iVar3 = 0;
  if (0 < iVar2) {
    do {
      (**(code **)(*param_1 + 0x24))(&fStack_30,iVar3);
      local_40 = local_40 + fStack_30;
      iVar3 = iVar3 + 1;
      local_3c = local_3c + fStack_2c;
      local_38 = fStack_28 + local_38;
      fStack_34 = fStack_24 + fStack_34;
    } while (iVar3 < iVar2);
  }
  fVar1 = (float)iVar2;
  fStack_20 = *param_2 - local_40 / fVar1;
  fStack_1c = param_2[1] - local_3c / fVar1;
  fStack_18 = param_2[2] - local_38 / fVar1;
  fStack_14 = param_2[3] - fStack_34 / fVar1;
  FUN_00e59db0(&fStack_20);
  return;
}

// 00E59F40  SoundArea::ShapeBox::vf34  size=287  [class]
undefined4 __thiscall SoundArea::ShapeBox::vf34(int param_1,float *param_2,uint param_3)

{
  undefined4 *puVar1;
  int iVar2;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  undefined1 local_40 [16];
  int local_30;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  local_30 = param_1;
  puVar1 = (undefined4 *)FUN_00e491c0(local_40,param_1);
  local_20 = *puVar1;
  local_1c = puVar1[1];
  local_18 = puVar1[2];
  local_14 = puVar1[3];
  if (7 < param_3) {
    FUN_00e54d50();
    return 0;
  }
  if (*(int *)(param_1 + 0x118) == 0) {
    local_50 = *param_2;
    local_4c = param_2[1];
    local_48 = param_2[2];
    local_44 = param_2[3];
  }
  else {
    D3DXVec3TransformNormal(&local_50,param_2,param_1 + 0xd0);
  }
  iVar2 = (int)param_3 / 2;
  *(float *)(param_1 + 0x134 + iVar2 * 8) = *(float *)(param_1 + 0x134 + iVar2 * 8) + local_50;
  *(float *)(param_1 + 0x138 + iVar2 * 8) = local_48 + *(float *)(param_1 + 0x138 + iVar2 * 8);
  if ((param_3 & 1) == 0) {
    *(float *)(param_1 + 0x154) = local_4c + *(float *)(param_1 + 0x154);
  }
  else {
    *(float *)(param_1 + 0x158) = *(float *)(param_1 + 0x158) + local_4c;
  }
  if (*(float *)(param_1 + 0x158) < 0.0) {
    *(undefined4 *)(param_1 + 0x158) = 0;
  }
  FUN_00e4b650();
  FUN_00e54d50();
  return 1;
}

// 00E5A060  SoundArea::ShapeBox::vf40  size=82  [class]
void __thiscall SoundArea::ShapeBox::vf40(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined1 local_40 [16];
  int local_30;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  local_30 = param_1;
  puVar1 = (undefined4 *)FUN_00e491c0(local_40,param_1);
  local_20 = *puVar1;
  local_1c = puVar1[1];
  local_18 = puVar1[2];
  local_14 = puVar1[3];
  *(undefined4 *)(param_1 + 0x158) = param_2;
  FUN_00e54d50();
  return;
}

// 00E5A0C0  FUN_00e5a0c0  size=119  [between]
int FUN_00e5a0c0(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = (**(code **)(*param_1 + 0x2c))();
  iVar2 = SoundArea::ShapeBox::ShapeBox(uVar1);
  if (iVar2 != 0) {
    switch(uVar1) {
    case 0:
      FUN_00e61f20(param_1);
      return iVar2;
    case 1:
      FUN_00e63080(param_1);
      return iVar2;
    case 2:
      FUN_00e61fc0(param_1);
      return iVar2;
    case 3:
      FUN_00e630c0(param_1);
      return iVar2;
    case 4:
      FUN_00e64920(param_1);
    }
    return iVar2;
  }
  return 0;
}

// 00E5A150  SoundArea::ShapeSphere::ShapeSphere  size=477  [class]
/* WARNING: Type propagation algorithm not settling */

undefined4 __thiscall SoundArea::ShapeSphere::ShapeSphere(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  float fVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  float10 fVar6;
  int *local_2c;
  float local_28;
  int local_24 [8];
  
  local_24[0] = param_1;
  if (*(char *)(param_1 + 3) != '\x01') {
    if (*(char *)(param_1 + 3) == '\x02') {
      iVar4 = FUN_00dd3500(0x170,&DAT_01b7bda0);
      if (iVar4 != 0) {
        piVar3 = (int *)ShapeRail::ShapeRail();
        if (piVar3 != (int *)0x0) {
          piVar5 = (int *)0x0;
          fVar2 = 5.0;
          goto LAB_00e5a1c3;
        }
      }
      piVar3 = (int *)0x0;
      local_2c = (int *)0x0;
    }
    else {
      fVar6 = (float10)FUN_00e4c6f0();
      local_28 = (float)fVar6;
      fVar6 = (float10)FUN_00e4c810();
      local_2c = (int *)(float)fVar6;
      piVar3 = (int *)FUN_00dd3500(0x150,&DAT_01b7bda0);
      if (piVar3 != (int *)0x0) {
        piVar3[0x44] = 0;
        piVar3[0x45] = 0;
        *piVar3 = (int)vftable;
        fVar2 = local_28;
        piVar5 = local_2c;
LAB_00e5a1c3:
        iVar4 = (**(code **)(*piVar3 + 0x28))(param_2,fVar2,piVar5);
        if (iVar4 != 0) {
          FUN_00e56530();
          local_2c = piVar3;
          goto LAB_00e5a2e8;
        }
        (**(code **)*piVar3)(1);
      }
      piVar3 = (int *)0x0;
      local_2c = (int *)0x0;
    }
    goto LAB_00e5a2e8;
  }
  iVar4 = FUN_00dd3500(0x160,&DAT_01b7bda0);
  if (iVar4 == 0) {
LAB_00e5a262:
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = (int *)ShapeLine::ShapeLine();
    if (piVar3 == (int *)0x0) goto LAB_00e5a262;
    iVar4 = (**(code **)(*piVar3 + 0x28))(param_2,0x40a00000,0);
    if (iVar4 == 0) {
      (**(code **)*piVar3)(1);
      piVar3 = (int *)0x0;
    }
    else {
      FUN_00e56530();
    }
  }
  local_2c = piVar3;
  (**(code **)(*piVar3 + 0x48))(0x3dcccccd);
  (**(code **)(*piVar3 + 0x40))(0x40a00000);
  local_24[1] = 0;
  local_24[2] = 0xc0200000;
  local_24[3] = 0;
  FUN_00e59db0(local_24 + 1);
LAB_00e5a2e8:
  iVar4 = local_24[0];
  if (piVar3 != (int *)0x0) {
    uVar1 = *(undefined4 *)(param_1 + 0x18);
    piVar5 = (int *)FUN_00e631d0(local_24,&local_2c);
    if (*piVar5 != *(int *)(iVar4 + 0xc)) {
      return uVar1;
    }
    (**(code **)*piVar3)(1);
  }
  return 0xffffffff;
}

// 00E5A480  FUN_00e5a480  size=312  [between]
void __thiscall FUN_00e5a480(int param_1,float *param_2)

{
  int iVar1;
  int *piVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  int local_50;
  int local_4c;
  float local_40;
  float local_3c;
  float local_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  local_40 = 0.0;
  local_3c = 0.0;
  iVar1 = *(int *)(param_1 + 0x18);
  local_38 = 0.0;
  local_4c = 0;
  local_50 = 0;
  if (0 < iVar1) {
    do {
      piVar2 = *(int **)(*(int *)(param_1 + 0x10) + local_50 * 4);
      iVar4 = (**(code **)(*piVar2 + 0x20))();
      iVar5 = 0;
      if (0 < iVar4) {
        local_4c = local_4c + iVar4;
        do {
          (**(code **)(*piVar2 + 0x24))(&fStack_30,iVar5);
          local_40 = local_40 + fStack_30;
          iVar5 = iVar5 + 1;
          local_3c = fStack_2c + local_3c;
          local_38 = fStack_28 + local_38;
          fStack_34 = fStack_24 + fStack_34;
        } while (iVar5 < iVar4);
      }
      local_50 = local_50 + 1;
    } while (local_50 < iVar1);
  }
  fVar3 = (float)local_4c;
  iVar1 = *(int *)(param_1 + 0x18);
  iVar4 = 0;
  fStack_20 = *param_2 - local_40 / fVar3;
  fStack_1c = param_2[1] - local_3c / fVar3;
  fStack_18 = param_2[2] - local_38 / fVar3;
  fStack_14 = param_2[3] - fStack_34 / fVar3;
  if (0 < iVar1) {
    do {
      FUN_00e59db0(&fStack_20);
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar1);
  }
  return;
}

// 00E5A5C0  FUN_00e5a5c0  size=107  [between]
void __thiscall FUN_00e5a5c0(int param_1,uint param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined1 local_20 [28];
  
  if (*(byte *)(param_1 + 3) != param_2) {
    *(char *)(param_1 + 3) = (char)param_2;
    FUN_00e491c0(local_20,**(undefined4 **)(param_1 + 0x10));
    iVar1 = *(int *)(param_1 + 0x18);
    iVar3 = 0;
    if (0 < iVar1) {
      do {
        puVar2 = *(undefined4 **)(*(int *)(param_1 + 0x10) + iVar3 * 4);
        if (puVar2 != (undefined4 *)0x0) {
          (**(code **)*puVar2)(1);
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < iVar1);
    }
    *(undefined4 *)(param_1 + 0x18) = 0;
    SoundArea::ShapeSphere::ShapeSphere(local_20);
  }
  return;
}

// 00E5A630  FUN_00e5a630  size=185  [between]
void __thiscall FUN_00e5a630(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  
  iVar1 = param_1[6];
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  iVar5 = 0;
  param_1[8] = param_2[8];
  if (0 < iVar1) {
    do {
      puVar2 = *(undefined4 **)(param_1[4] + iVar5 * 4);
      if (puVar2 != (undefined4 *)0x0) {
        (**(code **)*puVar2)(1);
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar1);
  }
  param_1[6] = 0;
  iVar1 = param_2[6];
  if (((int)param_1[5] < iVar1) && (iVar5 = FUN_00e61390(iVar1), iVar5 == 0)) {
    FUN_00dd5650(&DAT_016cdba0);
  }
  else if (iVar1 != param_1[6]) {
    param_1[6] = iVar1;
  }
  uVar3 = param_1[6];
  uVar6 = 0;
  if (uVar3 != 0) {
    do {
      if (((int)uVar6 < 0) || ((int)param_2[6] <= (int)uVar6)) {
        uVar4 = 0;
      }
      else {
        uVar4 = *(undefined4 *)(param_2[4] + uVar6 * 4);
      }
      iVar5 = param_1[4];
      iVar1 = uVar6 * 4;
      uVar4 = FUN_00e5a0c0(uVar4);
      uVar6 = uVar6 + 1;
      *(undefined4 *)(iVar5 + iVar1) = uVar4;
    } while (uVar6 < uVar3);
  }
  return;
}

// 00E5A6F0  SoundArea::ShapeLine::vf34  size=332  [class]
undefined4 __thiscall SoundArea::ShapeLine::vf34(int param_1,float *param_2,uint param_3)

{
  float *pfVar1;
  undefined4 *puVar2;
  int iVar3;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  undefined1 local_40 [16];
  int local_30;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  local_30 = param_1;
  puVar2 = (undefined4 *)FUN_00e491c0(local_40,param_1);
  local_20 = *puVar2;
  local_1c = puVar2[1];
  local_18 = puVar2[2];
  local_14 = puVar2[3];
  if ((((int)param_3 < 0) || (iVar3 = (int)param_3 / 2, iVar3 < 0)) ||
     (*(int *)(param_1 + 0x14c) <= iVar3)) {
    FUN_00e54d50();
    return 0;
  }
  if (*(int *)(param_1 + 0x118) == 0) {
    local_50 = *param_2;
    local_4c = param_2[1];
    local_48 = param_2[2];
    local_44 = param_2[3];
  }
  else {
    D3DXVec3TransformNormal(&local_50,param_2,param_1 + 0xd0);
  }
  iVar3 = iVar3 * 0xc;
  *(float *)(*(int *)(param_1 + 0x144) + iVar3) =
       *(float *)(*(int *)(param_1 + 0x144) + iVar3) + local_50;
  pfVar1 = (float *)(iVar3 + 8 + *(int *)(param_1 + 0x144));
  *pfVar1 = local_48 + *pfVar1;
  if ((param_3 & 1) == 0) {
    *(float *)(iVar3 + 4 + *(int *)(param_1 + 0x144)) =
         local_4c + *(float *)(iVar3 + 4 + *(int *)(param_1 + 0x144));
  }
  else {
    *(float *)(param_1 + 0x134) = *(float *)(param_1 + 0x134) + local_4c;
  }
  if (*(float *)(param_1 + 0x134) < 0.0) {
    *(undefined4 *)(param_1 + 0x134) = 0;
    FUN_00e54d50();
    return 1;
  }
  FUN_00e54d50();
  return 1;
}

// 00E5A840  SoundArea::ShapeLine::vf38  size=267  [class]
uint __thiscall SoundArea::ShapeLine::vf38(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  undefined1 local_54 [4];
  undefined4 local_50;
  float local_4c;
  undefined4 local_48;
  undefined4 local_40;
  float local_3c;
  undefined4 local_38;
  int local_30;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  local_30 = param_1;
  puVar1 = (undefined4 *)FUN_00e491c0(&local_50,param_1);
  local_20 = *puVar1;
  local_1c = puVar1[1];
  local_18 = puVar1[2];
  local_14 = puVar1[3];
  uVar2 = FUN_00e53310(&local_40,param_2,param_3);
  if (uVar2 == 0xffffffff) {
    FUN_00e54d50();
    return 0xffffffff;
  }
  FUN_00e470c0(&local_40,&local_40);
  local_50 = local_40;
  local_4c = local_3c;
  local_48 = local_38;
  if ((uVar2 & 1) != 0) {
    local_4c = local_3c - *(float *)(param_1 + 0x134);
  }
  if ((int)uVar2 < 0) {
    iVar3 = -1;
  }
  else {
    iVar3 = (int)uVar2 / 2;
  }
  if (*(int *)(param_1 + 0x14c) <= iVar3) {
    FUN_00e63670(local_54,&local_50);
    FUN_00e54d50();
    return uVar2;
  }
  FUN_00e63530(local_54,iVar3,&local_50);
  FUN_00e54d50();
  return uVar2;
}

// 00E5A950  SoundArea::ShapeLine::vf3C  size=206  [class]
uint __thiscall SoundArea::ShapeLine::vf3C(int param_1,uint param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined1 local_40 [16];
  int local_30;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  local_30 = param_1;
  puVar1 = (undefined4 *)FUN_00e491c0(local_40,param_1);
  local_20 = *puVar1;
  local_1c = puVar1[1];
  local_18 = puVar1[2];
  local_14 = puVar1[3];
  if (*(int *)(param_1 + 0x14c) < 3) {
    FUN_00e54d50();
    return param_2;
  }
  if (((-1 < (int)param_2) && (iVar2 = (int)param_2 / 2, -1 < iVar2)) &&
     (iVar2 < *(int *)(param_1 + 0x14c))) {
    FUN_00e60be0(iVar2);
    if (*(int *)(param_1 + 0x14c) <= iVar2) {
      iVar2 = iVar2 + -1;
    }
    if ((param_2 & 1) != 0) {
      FUN_00e54d50();
      return iVar2 * 2 + 1;
    }
    FUN_00e54d50();
    return iVar2 * 2;
  }
  FUN_00e54d50();
  return 0xffffffff;
}

// 00E5AA20  SoundArea::ShapeLine::vf40  size=82  [class]
void __thiscall SoundArea::ShapeLine::vf40(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined1 local_40 [16];
  int local_30;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  local_30 = param_1;
  puVar1 = (undefined4 *)FUN_00e491c0(local_40,param_1);
  local_20 = *puVar1;
  local_1c = puVar1[1];
  local_18 = puVar1[2];
  local_14 = puVar1[3];
  *(undefined4 *)(param_1 + 0x134) = param_2;
  FUN_00e54d50();
  return;
}

// 00E5AA80  SoundArea::ShapePrism::vf34  size=303  [class]
undefined4 __thiscall SoundArea::ShapePrism::vf34(int param_1,float *param_2,uint param_3)

{
  float *pfVar1;
  int iVar2;
  undefined4 *puVar3;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  undefined1 local_40 [16];
  int local_30;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  local_30 = param_1;
  puVar3 = (undefined4 *)FUN_00e491c0(local_40,param_1);
  local_20 = *puVar3;
  local_1c = puVar3[1];
  local_18 = puVar3[2];
  local_14 = puVar3[3];
  if ((-1 < (int)param_3) && ((int)param_3 < *(int *)(param_1 + 0x164) * 2)) {
    if (*(int *)(param_1 + 0x118) == 0) {
      local_50 = *param_2;
      local_4c = param_2[1];
      local_48 = param_2[2];
      local_44 = param_2[3];
    }
    else {
      D3DXVec3TransformNormal(&local_50,param_2,param_1 + 0xd0);
    }
    iVar2 = ((int)param_3 / 2) * 8;
    *(float *)(*(int *)(param_1 + 0x15c) + iVar2) =
         *(float *)(*(int *)(param_1 + 0x15c) + iVar2) + local_50;
    pfVar1 = (float *)(*(int *)(param_1 + 0x15c) + 4 + iVar2);
    *pfVar1 = local_48 + *pfVar1;
    if ((param_3 & 1) == 0) {
      *(float *)(param_1 + 0x134) = local_4c + *(float *)(param_1 + 0x134);
    }
    else {
      *(float *)(param_1 + 0x138) = *(float *)(param_1 + 0x138) + local_4c;
    }
    if (*(float *)(param_1 + 0x138) < 0.0) {
      *(undefined4 *)(param_1 + 0x138) = 0;
    }
    FUN_00e4d3b0();
    FUN_00e54d50();
    return 1;
  }
  FUN_00e54d50();
  return 0;
}

// 00E5ABB0  SoundArea::ShapePrism::vf38  size=520  [class]
int __thiscall SoundArea::ShapePrism::vf38(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  char local_5f;
  char local_5e;
  undefined1 local_5d;
  int local_5c;
  uint local_58;
  int local_54;
  undefined4 local_50 [2];
  undefined4 local_48;
  undefined1 local_40 [16];
  int local_30;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  local_30 = param_1;
  puVar1 = (undefined4 *)FUN_00e491c0(local_40,param_1);
  local_20 = *puVar1;
  local_1c = puVar1[1];
  local_18 = puVar1[2];
  local_14 = puVar1[3];
  if ((*(int *)(param_1 + 0x164) < 0xff) &&
     (iVar2 = FUN_00e54090(local_50,&local_58,&local_54,param_2,param_3), iVar2 != 0)) {
    FUN_00e470c0(local_50,local_50);
    iVar2 = *(int *)(param_1 + 0x150);
    uVar6 = *(uint *)(param_1 + 0x164);
    local_5c = param_1 + 0x144;
    if ((*(int *)(param_1 + 0x14c) < iVar2 + 3) && (iVar3 = FUN_00e616b0(iVar2 + 3), iVar3 == 0)) {
      FUN_00dd5650(&DAT_016cdba0);
      FUN_00e54d50();
      return -1;
    }
    if (iVar2 + 3 != *(int *)(local_5c + 0xc)) {
      *(int *)(local_5c + 0xc) = iVar2 + 3;
    }
    iVar3 = FUN_00e625e0(uVar6 + 1);
    if (iVar3 != 0) {
      if ((int)local_58 < 0) {
        local_5f = -1;
      }
      else {
        local_5f = (char)((int)local_58 / 2);
      }
      if (local_54 < 0) {
        local_5e = -1;
      }
      else {
        local_5e = (char)(local_54 / 2);
      }
      *(char *)(iVar2 + *(int *)(param_1 + 0x148)) = local_5f;
      *(char *)(*(int *)(param_1 + 0x148) + 1 + iVar2) = local_5e;
      local_5d = (undefined1)uVar6;
      *(undefined1 *)(*(int *)(param_1 + 0x148) + 2 + iVar2) = local_5d;
      uVar6 = uVar6 & 0xff;
      uVar4 = 0;
      *(undefined4 *)(*(int *)(param_1 + 0x15c) + uVar6 * 8) = local_50[0];
      *(undefined4 *)(*(int *)(param_1 + 0x15c) + 4 + uVar6 * 8) = local_48;
      uVar5 = *(uint *)(param_1 + 0x178);
      if (uVar5 != 0) {
        do {
          if (*(char *)(*(int *)(param_1 + 0x170) + uVar4) == local_5f) {
            uVar5 = (uVar4 + 1) % uVar5;
            if (*(char *)(uVar5 + *(int *)(param_1 + 0x170)) == local_5e) {
              uVar4 = uVar5;
            }
            FUN_00e63730(&local_54,uVar4,&local_5d);
            break;
          }
          uVar4 = uVar4 + 1;
        } while (uVar4 < uVar5);
      }
      FUN_00e4d3b0();
      iVar2 = uVar6 * 2 + 1;
      if ((local_58 & 1) == 0) {
        iVar2 = uVar6 * 2;
      }
      FUN_00e54d50();
      return iVar2;
    }
    FUN_00e624a0(iVar2);
  }
  FUN_00e54d50();
  return -1;
}

// 00E5ADC0  SoundArea::ShapePrism::vf3C  size=542  [class]
uint __thiscall SoundArea::ShapePrism::vf3C(int param_1,uint param_2)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint local_4c;
  uint local_48;
  undefined1 local_40 [16];
  int local_30;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  local_30 = param_1;
  puVar5 = (undefined4 *)FUN_00e491c0(local_40,param_1);
  local_20 = *puVar5;
  local_1c = puVar5[1];
  local_18 = puVar5[2];
  local_14 = puVar5[3];
  if (3 < *(int *)(param_1 + 0x164)) {
    if ((((int)param_2 < 0) || (uVar8 = (int)param_2 / 2, (int)uVar8 < 0)) ||
       (*(int *)(param_1 + 0x164) <= (int)uVar8)) {
      FUN_00e54d50();
      return 0xffffffff;
    }
    iVar6 = FUN_00e4d810(uVar8);
    if (iVar6 < 2) {
      local_4c = *(uint *)(param_1 + 0x150);
      uVar9 = 0;
      if (local_4c != 0) {
        do {
          iVar6 = *(int *)(param_1 + 0x148);
          bVar2 = *(byte *)(iVar6 + uVar9);
          bVar3 = *(byte *)(iVar6 + 1 + uVar9);
          bVar4 = *(byte *)(iVar6 + 2 + uVar9);
          if (((bVar2 == uVar8) || (bVar3 == uVar8)) || (bVar4 == uVar8)) {
            FUN_00e60c90(uVar9);
            FUN_00e60c90(uVar9);
            FUN_00e60c90(uVar9);
            uVar9 = uVar9 - 3;
            local_4c = local_4c - 3;
          }
          else {
            if ((int)uVar8 < (int)(uint)bVar2) {
              *(byte *)(uVar9 + *(int *)(param_1 + 0x148)) = bVar2 - 1;
            }
            if ((int)uVar8 < (int)(uint)bVar3) {
              *(byte *)(*(int *)(param_1 + 0x148) + 1 + uVar9) = bVar3 - 1;
            }
            if ((int)uVar8 < (int)(uint)bVar4) {
              *(byte *)(*(int *)(param_1 + 0x148) + 2 + uVar9) = bVar4 - 1;
            }
          }
          uVar9 = uVar9 + 3;
        } while (uVar9 < local_4c);
      }
      uVar9 = *(uint *)(param_1 + 0x178);
      uVar10 = 0;
      local_48 = uVar9;
      if (uVar9 != 0) {
        do {
          pbVar1 = (byte *)(uVar10 + *(int *)(param_1 + 0x170));
          bVar2 = *pbVar1;
          if (bVar2 == uVar8) {
            if ((int)uVar10 < *(int *)(param_1 + 0x178)) {
              uVar7 = uVar10;
              if ((int)uVar10 < *(int *)(param_1 + 0x178) + -1) {
                do {
                  *(undefined1 *)(*(int *)(param_1 + 0x170) + uVar7) =
                       *(undefined1 *)(*(int *)(param_1 + 0x170) + 1 + uVar7);
                  uVar7 = uVar7 + 1;
                  uVar9 = local_48;
                } while ((int)uVar7 < *(int *)(param_1 + 0x178) + -1);
              }
              *(int *)(param_1 + 0x178) = *(int *)(param_1 + 0x178) + -1;
            }
            uVar10 = uVar10 - 1;
            uVar9 = uVar9 - 1;
            local_48 = uVar9;
          }
          else if ((int)uVar8 < (int)(uint)bVar2) {
            *pbVar1 = bVar2 - 1;
          }
          uVar10 = uVar10 + 1;
        } while (uVar10 < uVar9);
      }
      if ((int)uVar8 < *(int *)(param_1 + 0x164)) {
        uVar9 = uVar8;
        if ((int)uVar8 < *(int *)(param_1 + 0x164) + -1) {
          do {
            puVar5 = (undefined4 *)(*(int *)(param_1 + 0x15c) + uVar9 * 8);
            *puVar5 = puVar5[2];
            puVar5[1] = puVar5[3];
            uVar9 = uVar9 + 1;
          } while ((int)uVar9 < *(int *)(param_1 + 0x164) + -1);
        }
        *(int *)(param_1 + 0x164) = *(int *)(param_1 + 0x164) + -1;
      }
      if (*(int *)(param_1 + 0x164) <= (int)uVar8) {
        uVar8 = uVar8 - 1;
      }
      FUN_00e4d3b0();
      uVar9 = uVar8 * 2 + 1;
      if ((param_2 & 1) == 0) {
        uVar9 = uVar8 * 2;
      }
      FUN_00e54d50();
      return uVar9;
    }
  }
  FUN_00e54d50();
  return param_2;
}

// 00E5AFF0  SoundArea::ShapePrism::vf40  size=82  [class]
void __thiscall SoundArea::ShapePrism::vf40(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined1 local_40 [16];
  int local_30;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  local_30 = param_1;
  puVar1 = (undefined4 *)FUN_00e491c0(local_40,param_1);
  local_20 = *puVar1;
  local_1c = puVar1[1];
  local_18 = puVar1[2];
  local_14 = puVar1[3];
  *(undefined4 *)(param_1 + 0x138) = param_2;
  FUN_00e54d50();
  return;
}

// 00E5B050  SoundArea::ShapeRail::vf34  size=970  [class]
undefined4 __thiscall SoundArea::ShapeRail::vf34(int *param_1,float *param_2,int param_3)

{
  int iVar1;
  float *pfVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  undefined1 auStack_40 [16];
  int *piStack_30;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  if ((-1 < param_3) && (iVar4 = (**(code **)(*param_1 + 0x20))(), param_3 < iVar4)) {
    piStack_30 = param_1;
    puVar5 = (undefined4 *)FUN_00e491c0(auStack_40,param_1);
    uStack_20 = *puVar5;
    uStack_1c = puVar5[1];
    uStack_18 = puVar5[2];
    uStack_14 = puVar5[3];
    iVar4 = param_3 / 6;
    if (param_1[0x46] == 0) {
      fStack_50 = *param_2;
      fStack_4c = param_2[1];
      fStack_48 = param_2[2];
      fStack_44 = param_2[3];
    }
    else {
      D3DXVec3TransformNormal(&fStack_50,param_2,param_1 + 0x34);
    }
    switch(param_3 % 6) {
    case 1:
      *(float *)(param_1[0x4e] + 0xc + iVar4 * 0x30) =
           *(float *)(param_1[0x4e] + 0xc + iVar4 * 0x30) + fStack_50;
      *(float *)(param_1[0x4e] + 0x10 + iVar4 * 0x30) =
           *(float *)(param_1[0x4e] + 0x10 + iVar4 * 0x30) + fStack_4c;
      *(float *)(param_1[0x4e] + 0x14 + iVar4 * 0x30) =
           *(float *)(param_1[0x4e] + 0x14 + iVar4 * 0x30) + fStack_48;
      *(undefined4 *)(param_1[0x4e] + iVar4 * 0x30) =
           *(undefined4 *)(param_1[0x4e] + 0xc + iVar4 * 0x30);
      *(undefined4 *)(param_1[0x4e] + 8 + iVar4 * 0x30) =
           *(undefined4 *)(param_1[0x4e] + 0x14 + iVar4 * 0x30);
      *(undefined4 *)(param_1[0x4e] + 0x28 + iVar4 * 0x30) =
           *(undefined4 *)(param_1[0x4e] + 0x10 + iVar4 * 0x30);
      break;
    case 2:
      *(float *)(param_1[0x4e] + 0x18 + iVar4 * 0x30) =
           *(float *)(param_1[0x4e] + 0x18 + iVar4 * 0x30) + fStack_50;
      pfVar2 = (float *)(param_1[0x4e] + 0x1c + iVar4 * 0x30);
      *pfVar2 = fStack_4c + *pfVar2;
      *(float *)(param_1[0x4e] + 0x20 + iVar4 * 0x30) =
           *(float *)(param_1[0x4e] + 0x20 + iVar4 * 0x30) + fStack_48;
      *(undefined4 *)(param_1[0x4e] + 0x24 + iVar4 * 0x30) =
           *(undefined4 *)(param_1[0x4e] + 0x18 + iVar4 * 0x30);
      pfVar2 = (float *)(param_1[0x4e] + 0x28 + iVar4 * 0x30);
      *pfVar2 = fStack_4c + *pfVar2;
      *(undefined4 *)(param_1[0x4e] + 0x2c + iVar4 * 0x30) =
           *(undefined4 *)(param_1[0x4e] + 0x20 + iVar4 * 0x30);
      *(undefined4 *)(param_1[0x4e] + 4 + iVar4 * 0x30) =
           *(undefined4 *)(param_1[0x4e] + 0x1c + iVar4 * 0x30);
      *(undefined4 *)(param_1[0x4e] + 0x10 + iVar4 * 0x30) =
           *(undefined4 *)(param_1[0x4e] + 0x28 + iVar4 * 0x30);
      break;
    case 3:
      *(float *)(param_1[0x4e] + 0x24 + iVar4 * 0x30) =
           *(float *)(param_1[0x4e] + 0x24 + iVar4 * 0x30) + fStack_50;
      *(float *)(param_1[0x4e] + 0x28 + iVar4 * 0x30) =
           *(float *)(param_1[0x4e] + 0x28 + iVar4 * 0x30) + fStack_4c;
      *(float *)(param_1[0x4e] + 0x2c + iVar4 * 0x30) =
           *(float *)(param_1[0x4e] + 0x2c + iVar4 * 0x30) + fStack_48;
      *(undefined4 *)(param_1[0x4e] + 0x18 + iVar4 * 0x30) =
           *(undefined4 *)(param_1[0x4e] + 0x24 + iVar4 * 0x30);
      *(undefined4 *)(param_1[0x4e] + 0x20 + iVar4 * 0x30) =
           *(undefined4 *)(param_1[0x4e] + 0x2c + iVar4 * 0x30);
      *(undefined4 *)(param_1[0x4e] + 0x10 + iVar4 * 0x30) =
           *(undefined4 *)(param_1[0x4e] + 0x28 + iVar4 * 0x30);
      break;
    case 4:
    case 5:
      iVar3 = iVar4 * 0x30;
      *(float *)(param_1[0x4e] + iVar3) = *(float *)(param_1[0x4e] + iVar3) + fStack_50;
      pfVar2 = (float *)(param_1[0x4e] + 4 + iVar3);
      *pfVar2 = fStack_4c + *pfVar2;
      *(float *)(param_1[0x4e] + 8 + iVar3) = *(float *)(param_1[0x4e] + 8 + iVar3) + fStack_48;
      pfVar2 = (float *)(param_1[0x4e] + 0xc + iVar3);
      *pfVar2 = fStack_50 + *pfVar2;
      *(float *)(param_1[0x4e] + 0x10 + iVar3) =
           *(float *)(param_1[0x4e] + 0x10 + iVar3) + fStack_4c;
      pfVar2 = (float *)(param_1[0x4e] + 0x14 + iVar3);
      *pfVar2 = fStack_48 + *pfVar2;
      iVar1 = iVar4 * 0xc + 6;
      *(float *)(param_1[0x4e] + iVar1 * 4) = *(float *)(param_1[0x4e] + iVar1 * 4) + fStack_50;
      pfVar2 = (float *)(param_1[0x4e] + 0x1c + iVar3);
      *pfVar2 = fStack_4c + *pfVar2;
      *(float *)(param_1[0x4e] + 0x20 + iVar3) =
           *(float *)(param_1[0x4e] + 0x20 + iVar3) + fStack_48;
      pfVar2 = (float *)(param_1[0x4e] + (iVar4 * 0xc + 9) * 4);
      *pfVar2 = fStack_50 + *pfVar2;
      *(float *)(param_1[0x4e] + 0x28 + iVar3) =
           *(float *)(param_1[0x4e] + 0x28 + iVar3) + fStack_4c;
      pfVar2 = (float *)(param_1[0x4e] + 0x2c + iVar3);
      *pfVar2 = fStack_48 + *pfVar2;
      break;
    default:
      *(float *)(param_1[0x4e] + iVar4 * 0x30) =
           *(float *)(param_1[0x4e] + iVar4 * 0x30) + fStack_50;
      pfVar2 = (float *)(param_1[0x4e] + 4 + iVar4 * 0x30);
      *pfVar2 = fStack_4c + *pfVar2;
      *(float *)(param_1[0x4e] + 8 + iVar4 * 0x30) =
           *(float *)(param_1[0x4e] + 8 + iVar4 * 0x30) + fStack_48;
      *(undefined4 *)(param_1[0x4e] + 0xc + iVar4 * 0x30) =
           *(undefined4 *)(param_1[0x4e] + iVar4 * 0x30);
      pfVar2 = (float *)(param_1[0x4e] + 0x10 + iVar4 * 0x30);
      *pfVar2 = fStack_4c + *pfVar2;
      *(undefined4 *)(param_1[0x4e] + 0x14 + iVar4 * 0x30) =
           *(undefined4 *)(param_1[0x4e] + 8 + iVar4 * 0x30);
      *(undefined4 *)(param_1[0x4e] + 0x1c + iVar4 * 0x30) =
           *(undefined4 *)(param_1[0x4e] + 4 + iVar4 * 0x30);
      *(undefined4 *)(param_1[0x4e] + 0x28 + iVar4 * 0x30) =
           *(undefined4 *)(param_1[0x4e] + 0x10 + iVar4 * 0x30);
    }
    FUN_00e545d0();
    FUN_00e54d50();
    return 1;
  }
  return 0;
}

// 00E5B430  SoundArea::ShapeRail::vf38  size=1229  [class]
void __thiscall SoundArea::ShapeRail::vf38(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  float *pfVar5;
  float *pfVar6;
  float10 fVar7;
  undefined1 auStack_b4 [8];
  float local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  int local_80;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined1 local_60 [28];
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)auStack_b4;
  local_80 = param_1;
  puVar2 = (undefined4 *)FUN_00e491c0(local_60,param_1);
  local_70 = *puVar2;
  local_6c = puVar2[1];
  local_68 = puVar2[2];
  local_64 = puVar2[3];
  iVar3 = FUN_00e54ac0(&local_90,param_2,param_3);
  if (iVar3 == -1) {
    FUN_00e54d50();
    __security_check_cookie(local_14 ^ (uint)auStack_b4);
    return;
  }
  FUN_00e470c0(&local_90,&local_90);
  if (iVar3 == 0) {
    pfVar5 = *(float **)(param_1 + 0x138);
    pfVar6 = *(float **)(param_1 + 0x14c);
    local_98 = *pfVar5 - *pfVar6;
    local_a4 = pfVar5[1] - pfVar6[1];
    local_9c = pfVar5[2] - pfVar6[2];
    local_a0 = **(float **)(param_1 + 0x160);
  }
  else if (iVar3 == (int)(*(int *)(param_1 + 0x140) + (*(int *)(param_1 + 0x140) >> 0x1f & 3U)) >> 2
          ) {
    iVar4 = *(int *)(param_1 + 0x138) + iVar3 * 0x30;
    local_98 = *(float *)(*(int *)(param_1 + 0x138) + -0x30 + iVar3 * 0x30) -
               *(float *)(*(int *)(param_1 + 0x14c) + -0xc + iVar3 * 0xc);
    iVar1 = *(int *)(param_1 + 0x14c) + iVar3 * 0xc;
    local_a4 = *(float *)(iVar4 + -0x2c) - *(float *)(iVar1 + -8);
    local_9c = *(float *)(iVar4 + -0x28) - *(float *)(iVar1 + -4);
    local_a0 = *(float *)(*(int *)(param_1 + 0x160) + -4 + iVar3 * 4);
  }
  else {
    pfVar6 = (float *)(iVar3 * 0x30 + *(int *)(param_1 + 0x138));
    iVar1 = iVar3 * 0xc;
    pfVar5 = (float *)(*(int *)(param_1 + 0x14c) + iVar1);
    local_98 = ((pfVar6[-0xc] - *(float *)(*(int *)(param_1 + 0x14c) + -0xc + iVar1)) +
               (*pfVar6 - *pfVar5)) * 0.5;
    local_a4 = ((pfVar6[-0xb] - pfVar5[-2]) + (pfVar6[1] - pfVar5[1])) * 0.5;
    local_9c = ((pfVar6[-10] - pfVar5[-1]) + (pfVar6[2] - pfVar5[2])) * 0.5;
    local_94 = *pfVar5 - local_90;
    local_a0 = pfVar5[1] - local_8c;
    local_ac = local_a0 * local_a0 + local_94 * local_94 +
               (pfVar5[2] - local_88) * (pfVar5[2] - local_88);
    fVar7 = (float10)FUN_00fdef70();
    local_a8 = (float)fVar7;
    pfVar5 = (float *)(iVar1 + -0xc + *(int *)(param_1 + 0x14c));
    local_94 = *pfVar5 - local_90;
    local_a0 = pfVar5[2] - local_88;
    local_ac = (pfVar5[1] - local_8c) * (pfVar5[1] - local_8c) + local_94 * local_94 +
               local_a0 * local_a0;
    fVar7 = (float10)FUN_00fdef70();
    local_ac = (float)fVar7;
    pfVar5 = (float *)(*(int *)(param_1 + 0x160) + iVar3 * 4);
    local_a0 = (local_a8 * pfVar5[-1] + local_ac * *pfVar5) / (local_ac + local_a8);
  }
  local_44 = local_98 + local_90;
  local_40 = local_a4 + local_8c;
  local_3c = local_88 + local_9c;
  local_34 = local_8c - local_a4;
  local_2c = local_90 - local_98;
  local_a8 = local_88 - local_9c;
  local_a4 = local_40;
  local_38 = local_44;
  local_30 = local_3c;
  local_28 = local_40;
  local_24 = local_a8;
  local_20 = local_2c;
  local_1c = local_34;
  local_18 = local_a8;
  if (iVar3 < (int)(*(int *)(param_1 + 0x140) + (*(int *)(param_1 + 0x140) >> 0x1f & 3U)) >> 2) {
    iVar1 = iVar3 * 4;
    FUN_00e63530(&local_a8,iVar1,&local_44);
    FUN_00e63530(&local_a8,iVar1 + 1,&local_38);
    FUN_00e63530(&local_a8,iVar1 + 2,&local_2c);
    FUN_00e63530(&local_a8,iVar1 + 3,&local_20);
    FUN_00e63840(&local_a8,iVar3,&local_a0);
  }
  else {
    FUN_00e63670(&local_a8,&local_44);
    FUN_00e63670(&local_a8,&local_38);
    FUN_00e63670(&local_a8,&local_2c);
    FUN_00e63670(&local_a8,&local_20);
    FUN_00e63910(&local_a8,&local_a0);
  }
  FUN_00e545d0();
  FUN_00e54d50();
  __security_check_cookie(local_14 ^ (uint)auStack_b4);
  return;
}

// 00E5B900  SoundArea::ShapeRail::vf3C  size=226  [class]
int __thiscall SoundArea::ShapeRail::vf3C(int *param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined1 local_40 [16];
  int *local_30;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  local_30 = param_1;
  puVar1 = (undefined4 *)FUN_00e491c0(local_40,param_1);
  local_20 = *puVar1;
  local_1c = puVar1[1];
  local_18 = puVar1[2];
  local_14 = puVar1[3];
  if (param_1[0x50] < 9) {
    FUN_00e54d50();
    return param_2;
  }
  iVar2 = (param_2 / 6) * 4;
  FUN_00e60be0(iVar2 + 3);
  FUN_00e60be0(iVar2 + 2);
  FUN_00e60be0(iVar2 + 1);
  FUN_00e60be0(iVar2);
  FUN_00e60dc0(param_2 / 6);
  FUN_00e545d0();
  iVar2 = (**(code **)(*param_1 + 0x20))();
  if (iVar2 <= param_2) {
    param_2 = param_2 + -6;
  }
  FUN_00e54d50();
  return param_2;
}

// 00E5B9F0  SoundArea::ShapeSphere::vf34  size=289  [class]
undefined4 __thiscall SoundArea::ShapeSphere::vf34(int param_1,float *param_2,uint param_3)

{
  undefined4 *puVar1;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  undefined1 local_40 [16];
  int local_30;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  local_30 = param_1;
  puVar1 = (undefined4 *)FUN_00e491c0(local_40,param_1);
  local_20 = *puVar1;
  local_1c = puVar1[1];
  local_18 = puVar1[2];
  local_14 = puVar1[3];
  if (1 < param_3) {
    FUN_00e54d50();
    return 0;
  }
  if (*(int *)(param_1 + 0x118) == 0) {
    local_50 = *param_2;
    local_4c = param_2[1];
    local_48 = param_2[2];
    local_44 = param_2[3];
  }
  else {
    D3DXVec3TransformNormal(&local_50,param_2,param_1 + 0xd0);
  }
  *(float *)(param_1 + 0x134) = local_50 + *(float *)(param_1 + 0x134);
  *(float *)(param_1 + 0x13c) = *(float *)(param_1 + 0x13c) + local_48;
  if ((param_3 & 1) == 0) {
    *(float *)(param_1 + 0x138) = *(float *)(param_1 + 0x138) + local_4c;
  }
  else {
    *(float *)(param_1 + 0x140) = local_4c + *(float *)(param_1 + 0x140);
  }
  if (*(float *)(param_1 + 0x140) < 0.0) {
    *(undefined4 *)(param_1 + 0x140) = 0;
    FUN_00e54d50();
    return 1;
  }
  FUN_00e54d50();
  return 1;
}

// 00E5BB20  SoundArea::ShapeSphere::vf40  size=82  [class]
void __thiscall SoundArea::ShapeSphere::vf40(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined1 local_40 [16];
  int local_30;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  local_30 = param_1;
  puVar1 = (undefined4 *)FUN_00e491c0(local_40,param_1);
  local_20 = *puVar1;
  local_1c = puVar1[1];
  local_18 = puVar1[2];
  local_14 = puVar1[3];
  *(undefined4 *)(param_1 + 0x140) = param_2;
  FUN_00e54d50();
  return;
}

// 00E5BBA0  FUN_00e5bba0  size=134  [callgraph]
int * FUN_00e5bba0(undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)FUN_00dd2bc0();
  if (piVar1 == (int *)0x0) {
    return (int *)0x0;
  }
  *piVar1 = 0;
  piVar1[1] = 0;
  iVar2 = FUN_00e62ad0(piVar1);
  if (iVar2 != 0) {
    if (*piVar1 == 0) {
      *piVar1 = iVar2;
      iVar2 = FUN_00e54f70(param_1,param_2);
      if (iVar2 != 0) {
        return piVar1;
      }
      FUN_00df3b40(piVar1[1],1);
      piVar1[1] = 0;
      iVar2 = *piVar1;
      goto LAB_00e5bc0b;
    }
    FUN_00e62b90(iVar2);
  }
  iVar2 = *piVar1;
LAB_00e5bc0b:
  FUN_00e62b90(iVar2);
  FUN_00dd4920(piVar1);
  return (int *)0x0;
}

// 00E5BC90  FUN_00e5bc90  size=109  [callgraph]
void FUN_00e5bc90(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 local_c;
  
  iVar2 = DAT_01dd97b0;
  iVar1 = DAT_01dd97ac;
  local_c = 0;
  if (0 < DAT_01dd97b0) {
    do {
      iVar3 = *(int *)(*(int *)(iVar1 + local_c * 4) + 0x14);
      if (0 < iVar3) {
        do {
          FUN_00e63b00(param_1,param_2,param_3);
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
      local_c = local_c + 1;
    } while (local_c < iVar2);
  }
  return;
}

// 00E5BD60  FUN_00e5bd60  size=140  [callgraph]
bool __thiscall FUN_00e5bd60(undefined1 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  if ((param_1[0x24] & 1) != 0) {
    if (*(int *)(param_1 + 4) != 0) {
      thunk_FUN_00df2950(*(int *)(param_1 + 4));
    }
    *(uint *)(param_1 + 0x24) = *(uint *)(param_1 + 0x24) & 0xfffffffe;
  }
  if ((*(uint *)(param_1 + 0x24) & 1) == 0) {
    *(uint *)(param_1 + 0x24) = *(uint *)(param_1 + 0x24) | 1;
  }
  *(undefined2 *)(param_1 + 1) = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *param_1 = 1;
  *(undefined4 *)(param_1 + 0x38) = 0x42c80000;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  uVar1 = FUN_00df2ab0(param_2,2);
  *(undefined4 *)(param_1 + 0x28) = uVar1;
  *(undefined4 *)(param_1 + 0x20) = 0x40a00000;
  iVar2 = SoundArea::ShapeSphere::ShapeSphere(param_3);
  return iVar2 != -1;
}

// 00E5BE80  FUN_00e5be80  size=163  [callgraph]
void FUN_00e5be80(void)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  piVar1 = (int *)(**(code **)(DAT_01dd97e8 + 0x1c))(0);
  while (piVar1 != (int *)0x0) {
    if (((*(byte *)(piVar1 + 4) & 1) != 0) &&
       ((piVar1[1] == 0 || (iVar2 = FUN_00a7c7e0(), iVar2 == 0)))) {
      *(ushort *)(piVar1 + 4) = *(ushort *)(piVar1 + 4) & 0xfffe;
    }
    if ((piVar1[3] < 1) && ((*(byte *)(piVar1 + 4) & 1) == 0)) {
      if (*piVar1 != 0) {
        FUN_00df39f0(*piVar1);
        *piVar1 = 0;
      }
      *(undefined2 *)(piVar1 + 4) = 0;
      piVar1[1] = 0;
      piVar1[3] = 0;
      piVar3 = (int *)(**(code **)(DAT_01dd97e8 + 0x1c))(piVar1);
      FUN_00dd4920(piVar1);
      piVar1 = piVar3;
    }
    else {
      piVar1 = (int *)(**(code **)(*(int *)piVar1[-1] + 0x1c))(piVar1);
    }
  }
  return;
}

// 00E5BF60  FUN_00e5bf60  size=142  [callgraph]
void FUN_00e5bf60(void)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = (int *)(**(code **)(DAT_01dd97e8 + 0x1c))(0);
  while (piVar1 != (int *)0x0) {
    *(ushort *)(piVar1 + 4) = *(ushort *)(piVar1 + 4) & 0xfffe;
    piVar1[1] = 0;
    if (piVar1[3] < 1) {
      if (*piVar1 != 0) {
        FUN_00df39f0(*piVar1);
        *piVar1 = 0;
      }
      *(undefined2 *)(piVar1 + 4) = 0;
      piVar1[1] = 0;
      piVar1[3] = 0;
      piVar2 = (int *)(**(code **)(DAT_01dd97e8 + 0x1c))(piVar1);
      FUN_00dd4920(piVar1);
      piVar1 = piVar2;
    }
    else {
      piVar1 = (int *)(**(code **)(*(int *)piVar1[-1] + 0x1c))(piVar1);
    }
  }
  return;
}

// 00E5C000  FUN_00e5c000  size=205  [callgraph]
int * FUN_00e5c000(int param_1,int param_2,short param_3)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  if (param_1 != 0) {
    for (piVar1 = (int *)(**(code **)(DAT_01dd97e8 + 0x1c))(0); piVar1 != (int *)0x0;
        piVar1 = (int *)(**(code **)(*(int *)piVar1[-1] + 0x1c))(piVar1)) {
      if (((((*(byte *)(piVar1 + 4) & 1) != 0) && (piVar1[1] != 0)) && (piVar1[1] == param_1)) &&
         ((piVar1[2] == param_2 && (*(short *)((int)piVar1 + 0x12) == param_3)))) {
        piVar1[3] = piVar1[3] + 1;
        return piVar1;
      }
    }
  }
  piVar2 = (int *)FUN_00dd2bc0();
  piVar1 = (int *)0x0;
  if (piVar2 != (int *)0x0) {
    piVar2[2] = 0;
    *piVar2 = 0;
    piVar2[1] = 0;
    piVar2[3] = 0;
    piVar2[4] = 0;
    piVar2[1] = param_1;
    piVar2[2] = param_2;
    *(short *)((int)piVar2 + 0x12) = param_3;
    iVar3 = FUN_00df4920(0);
    *piVar2 = iVar3;
    if (iVar3 == 0) {
      piVar2[1] = 0;
      piVar2[3] = 0;
      *(undefined2 *)(piVar2 + 4) = 0;
      FUN_00dd4920(piVar2);
      return (int *)0x0;
    }
    piVar2[3] = piVar2[3] + 1;
    *(ushort *)(piVar2 + 4) = (ushort)(param_1 != 0);
    piVar1 = piVar2;
  }
  return piVar1;
}

// 00E5C1C0  FUN_00e5c1c0  size=135  [callgraph]
void FUN_00e5c1c0(void)

{
  int iVar1;
  undefined4 uVar2;
  int unaff_retaddr;
  
  if (DAT_01dd9860 != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_01dd9848);
  }
  for (iVar1 = (**(code **)(DAT_01dd98d8 + 0x1c))(0); iVar1 != 0;
      iVar1 = (**(code **)(**(int **)(iVar1 + -4) + 0x1c))(iVar1)) {
    if (*(int *)(iVar1 + 0x14) == unaff_retaddr) {
      uVar2 = FUN_00fdbc60();
      FUN_00df3b80(*(undefined4 *)(iVar1 + 0x44),uVar2);
      *(undefined4 *)(iVar1 + 0x14) = 0;
    }
  }
  if (DAT_01dd9860 != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_01dd9848);
  }
  return;
}

// 00E5C470  FUN_00e5c470  size=109  [callgraph]
void FUN_00e5c470(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 local_c;
  
  iVar2 = DAT_01dd9998;
  iVar1 = DAT_01dd9994;
  local_c = 0;
  if (0 < DAT_01dd9998) {
    do {
      iVar3 = *(int *)(*(int *)(iVar1 + local_c * 4) + 0x14);
      if (0 < iVar3) {
        do {
          FUN_00e63e80(param_1,param_2,param_3);
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
      local_c = local_c + 1;
    } while (local_c < iVar2);
  }
  return;
}

// 00E5C540  FUN_00e5c540  size=789  [callgraph]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00e5c540(byte *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  float local_30;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  iVar2 = (uint)*param_1 * 0x10;
  iVar3 = *(int *)(param_1 + 0x10);
  local_20 = *(undefined4 *)(&DAT_01dd9550 + iVar2);
  iVar4 = 0;
  local_1c = *(undefined4 *)(&DAT_01dd9554 + iVar2);
  local_18 = *(undefined4 *)(&DAT_01dd9558 + iVar2);
  local_14 = *(undefined4 *)(&DAT_01dd955c + iVar2);
  iVar2 = *(int *)(param_1 + 0x18);
  if (0 < iVar2) {
    do {
      local_50 = 0;
      local_4c = 0;
      local_48 = 0;
      local_40 = 0;
      local_3c = 0;
      local_38 = 0;
      local_30 = 0.0;
      local_44 = 0x3f800000;
      local_34 = 0x3f800000;
      if (*(int *)(*(int *)(iVar3 + iVar4 * 4) + 0x114) != 0) {
        FUN_00e52160();
      }
      (**(code **)(**(int **)(iVar3 + iVar4 * 4) + 4))(&local_50,&local_20);
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar2);
  }
  FUN_00e48d30(&local_50);
  if ((local_30 <= 0.0) || (iVar3 = FUN_00e47e10(), iVar3 == 1)) {
    if ((param_1[0x24] & 4) != 0) {
      FUN_00e50730();
      if (*(int *)(param_1 + 0x30) == 0) {
        if (*(int *)(param_1 + 0x2c) != 0) {
          FUN_00e4a5b0();
        }
      }
      else {
        FUN_00e4a5e0();
      }
    }
    *(uint *)(param_1 + 0x24) = *(uint *)(param_1 + 0x24) & 0xfffffffb;
  }
  else {
    FUN_00e592a0(&local_50,&local_20);
    *(uint *)(param_1 + 0x24) = *(uint *)(param_1 + 0x24) | 4;
  }
  uVar1 = *(undefined4 *)(param_1 + 0x3c);
  FUN_00df3ad0(uVar1,&DAT_018d0170,DAT_018d0190);
  FUN_00df3b20(uVar1,_DAT_018d016c);
  uVar5 = -(uint)(DAT_01dd9528 != 0) & 2;
  if (*(uint *)(param_1 + 0x74) != uVar5) {
    FUN_00932870(*(undefined4 *)(param_1 + 0x3c),uVar5);
    *(uint *)(param_1 + 0x74) = uVar5;
  }
  return;
}

// 00E5C860  FUN_00e5c860  size=109  [callgraph]
int __thiscall FUN_00e5c860(int param_1,byte *param_2)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  int iVar4;
  int *piVar5;
  byte *pbVar6;
  bool bVar7;
  
  if (param_2 == (byte *)0x0) {
    return 0;
  }
  iVar2 = (**(code **)(*(int *)(param_1 + 8) + 0x1c))(0);
  do {
    if (iVar2 == 0) {
      return 0;
    }
    pbVar3 = (byte *)(iVar2 + 8);
    pbVar6 = param_2;
    do {
      bVar1 = *pbVar3;
      bVar7 = bVar1 < *pbVar6;
      if (bVar1 != *pbVar6) {
LAB_00e5c8a6:
        iVar4 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
        goto LAB_00e5c8ab;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar3[1];
      bVar7 = bVar1 < pbVar6[1];
      if (bVar1 != pbVar6[1]) goto LAB_00e5c8a6;
      pbVar3 = pbVar3 + 2;
      pbVar6 = pbVar6 + 2;
    } while (bVar1 != 0);
    iVar4 = 0;
LAB_00e5c8ab:
    if (iVar4 == 0) {
      return iVar2;
    }
    if (iVar2 == 0) {
      piVar5 = (int *)0x0;
    }
    else {
      piVar5 = *(int **)(iVar2 + -4);
    }
    iVar2 = (**(code **)(*piVar5 + 0x1c))(iVar2);
  } while( true );
}

// 00E5C8D0  FUN_00e5c8d0  size=57  [callgraph]
int * __thiscall FUN_00e5c8d0(int param_1,int param_2)

{
  int *piVar1;
  
  if (param_2 != 0) {
    for (piVar1 = (int *)(**(code **)(*(int *)(param_1 + 8) + 0x1c))(0); piVar1 != (int *)0x0;
        piVar1 = (int *)(**(code **)(*(int *)piVar1[-1] + 0x1c))(piVar1)) {
      if (*piVar1 == param_2) {
        return piVar1;
      }
    }
  }
  return (int *)0x0;
}

// 00E5C910  FUN_00e5c910  size=58  [callgraph]
int __thiscall FUN_00e5c910(int param_1,int param_2)

{
  int iVar1;
  
  if (param_2 != 0) {
    for (iVar1 = (**(code **)(*(int *)(param_1 + 8) + 0x1c))(0); iVar1 != 0;
        iVar1 = (**(code **)(**(int **)(iVar1 + -4) + 0x1c))(iVar1)) {
      if (*(int *)(iVar1 + 4) == param_2) {
        return iVar1;
      }
    }
  }
  return 0;
}

// 00E5C9A0  FUN_00e5c9a0  size=110  [callgraph]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00e5c9a0(void)

{
  int iVar1;
  
  iVar1 = FUN_00932730();
  if (iVar1 == 0) {
    return;
  }
  if (DAT_01dd9544 == 0) {
    if (DAT_01dd952c == -1) {
      FUN_00e50b50();
      return;
    }
    _DAT_01dd9534 = _DAT_01dd9534 + 1.0;
    if (_DAT_01dd9534 <= _DAT_01dd9538) {
      if (0.0 < _DAT_01dd9538) {
        FUN_00e59520();
        return;
      }
    }
    else {
      _DAT_01dd9538 = 0.0;
    }
    FUN_00e59490();
    return;
  }
  FUN_00e50e70();
  return;
}

// 00E5CA30  FUN_00e5ca30  size=69  [callgraph]
void FUN_00e5ca30(undefined4 param_1,undefined4 param_2)

{
  if (DAT_01dd9860 != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_01dd9848);
  }
  FUN_00e64e00(param_1,&LAB_00e4a0c0,param_2);
  if (DAT_01dd9860 != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_01dd9848);
  }
  return;
}

// 00E5CA80  FUN_00e5ca80  size=22  [callgraph]
void FUN_00e5ca80(undefined4 param_1,undefined4 param_2)

{
  FUN_00e5c1c0(param_1,param_2);
  return;
}

// 00E5CAC0  FUN_00e5cac0  size=74  [callgraph]
void FUN_00e5cac0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  if (DAT_01dd9860 != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_01dd9848);
  }
  FUN_00e64eb0(param_1,&LAB_00e4a1b0,param_2,param_3);
  if (DAT_01dd9860 != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_01dd9848);
  }
  return;
}

// 00E5CB10  FUN_00e5cb10  size=71  [callgraph]
void FUN_00e5cb10(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  if (DAT_01dd9860 != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_01dd9848);
  }
  FUN_00e64f70(param_1,&LAB_00e4a1d0,param_2,param_3);
  if (DAT_01dd9860 != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_01dd9848);
  }
  return;
}

// 00E5CBB0  FUN_00e5cbb0  size=21  [callgraph]
void FUN_00e5cbb0(undefined4 param_1)

{
  FUN_00e64b60(param_1,&LAB_00e49870);
  return;
}

// 00E5CC50  FUN_00e5cc50  size=973  [callgraph]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00e5cc50(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int local_f8;
  int local_f4;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e4;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d4;
  float local_d0;
  int local_cc;
  float local_c8;
  int local_c4;
  float local_c0;
  float local_bc;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  undefined4 local_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  float local_20;
  
  if (*(int *)(param_1 + 0x28) != 0) {
    local_f4 = *(int *)(param_1 + 0x10);
    if (0 < local_f4) {
      puVar3 = (undefined4 *)(*(int *)(param_1 + 8) + 0x88);
      do {
        iVar2 = 0;
        if ((*(byte *)(puVar3 + -0x19) & 1) != 0) {
          local_b0 = _DAT_01dd9670;
          local_ac = _DAT_01dd9674;
          local_a8 = _DAT_01dd9678;
          local_a4 = _DAT_01dd967c;
          if (DAT_01dd9504 == 0) {
            iVar1 = (uint)*(byte *)(puVar3 + -0x22) * 0x10;
            local_b0 = *(undefined4 *)(&DAT_01dd9550 + iVar1);
            local_ac = *(undefined4 *)(&DAT_01dd9554 + iVar1);
            local_a8 = *(undefined4 *)(&DAT_01dd9558 + iVar1);
            local_a4 = *(undefined4 *)(&DAT_01dd955c + iVar1);
          }
          local_f8 = puVar3[-0x1c];
          iVar1 = puVar3[-0x1e];
          local_f0 = 0.0;
          local_ec = 0.0;
          local_cc = 0;
          local_e8 = 0.0;
          local_c4 = 0;
          local_e0 = 0.0;
          local_dc = 0.0;
          local_d8 = 0.0;
          local_d0 = 0.0;
          local_e4 = 1.0;
          local_d4 = 1.0;
          local_c8 = 0.0;
          local_c0 = 0.0;
          local_bc = 0.0;
          if (0 < local_f8) {
            do {
              local_70 = 0.0;
              local_6c = 0.0;
              local_68 = 0.0;
              local_60 = 0.0;
              local_5c = 0.0;
              local_58 = 0.0;
              local_50 = 0.0;
              local_64 = 1.0;
              local_54 = 1.0;
              if (*(int *)(*(int *)(iVar1 + iVar2 * 4) + 0x114) != 0) {
                FUN_00e52160();
              }
              (**(code **)(**(int **)(iVar1 + iVar2 * 4) + 4))(&local_70,&local_b0);
              if (local_50 < 0.0 == (local_50 == 0.0)) {
                fStack_a0 = local_50 * local_70;
                local_cc = local_cc + 1;
                fStack_9c = local_50 * local_6c;
                fStack_98 = local_50 * local_68;
                fStack_94 = local_50 * local_64;
                local_f0 = fStack_a0 + local_f0;
                local_ec = fStack_9c + local_ec;
                local_e8 = fStack_98 + local_e8;
                local_e4 = fStack_94 + local_e4;
                local_d0 = local_50 + local_d0;
                if (local_50 < 0.0 == (local_50 == 0.0)) {
                  local_c4 = local_c4 + 1;
                  fStack_80 = local_60 * local_50;
                  fStack_7c = local_5c * local_50;
                  fStack_78 = local_58 * local_50;
                  fStack_74 = local_54 * local_50;
                  local_e0 = local_e0 + fStack_80;
                  local_dc = local_dc + fStack_7c;
                  local_d8 = local_d8 + fStack_78;
                  local_d4 = local_d4 + fStack_74;
                  local_c8 = local_50 + local_c8;
                  if (local_50 < 0.0 == (local_50 == 0.0)) {
                    local_c0 = local_50 * local_50 + local_c0;
                    local_bc = local_50 + local_bc;
                  }
                }
              }
              iVar2 = iVar2 + 1;
            } while (iVar2 < local_f8);
          }
          FUN_00e48d30(&local_40);
          if ((local_20 <= 0.0) || (iVar2 = FUN_00e47e10(), iVar2 == 1)) {
            if ((*(byte *)(puVar3 + -0x19) & 2) != 0) {
              FUN_00e4c440(&local_f8,&local_84);
              if (puVar3[-9] != 0) {
                FUN_00df3d00(puVar3[-9],local_84,1);
              }
            }
            puVar3[-0x19] = puVar3[-0x19] & 0xfffffffd;
          }
          else {
            FUN_00e4b360(param_2,&local_40,&local_b0);
            puVar3[-0x19] = puVar3[-0x19] | 2;
          }
          puVar3[-6] = local_40;
          puVar3[-5] = local_3c;
          puVar3[-4] = local_38;
          puVar3[-3] = local_34;
          puVar3[-2] = local_30;
          puVar3[-1] = local_2c;
          *puVar3 = local_28;
          puVar3[1] = local_24;
          puVar3[2] = local_20;
        }
        puVar3 = puVar3 + 0x28;
        local_f4 = local_f4 + -1;
      } while (local_f4 != 0);
    }
  }
  return;
}

// 00E5D020  FUN_00e5d020  size=233  [callgraph]
bool __thiscall FUN_00e5d020(undefined4 *param_1,char *param_2,undefined4 param_3)

{
  ulong uVar1;
  int iVar2;
  
  if ((*(byte *)(param_1 + 9) & 1) != 0) {
    if (param_1[1] != 0) {
      thunk_FUN_00df2950(param_1[1]);
    }
    param_1[9] = param_1[9] & 0xfffffffe;
  }
  if ((param_1[9] & 1) == 0) {
    param_1[9] = param_1[9] | 1;
    param_1[0x1c] = 0;
    param_1[0x1d] = 0;
    param_1[0x1e] = 0;
    param_1[0x1f] = 0x3f800000;
    param_1[0x20] = 0;
    param_1[0x21] = 0;
    param_1[0x22] = 0;
    param_1[0x23] = 0x3f800000;
    param_1[0x24] = 0;
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[10] = 0x3f800000;
  param_1[0xb] = 0x3f800000;
  param_1[0xc] = 0;
  param_1[0x10] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0x14] = 0x3f800000;
  param_1[0xf] = 0;
  param_1[0x11] = 0;
  param_1[0x15] = 0x3f800000;
  param_1[0x12] = 0;
  param_1[0x16] = 0x3f800000;
  param_1[0x13] = 0;
  param_1[0x17] = 0x3f800000;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  if (param_2 == (char *)0x0) {
    param_1[0xc] = 0;
  }
  else {
    uVar1 = AK::SoundEngine::GetIDFromString(param_2);
    param_1[0xc] = uVar1;
  }
  param_1[8] = 0x40a00000;
  iVar2 = SoundArea::ShapeSphere::ShapeSphere(param_3);
  return iVar2 != -1;
}

// 00E5D1C0  FUN_00e5d1c0  size=198  [callgraph]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00e5d1c0(void)

{
  float fVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  
  fVar1 = _DAT_01dd9508;
  if (_DAT_01dd9508 != _DAT_01dd950c) {
    FUN_00df3cd0("Volume_BGM",_DAT_01dd9508,0);
    _DAT_01dd950c = fVar1;
  }
  puVar2 = (undefined4 *)(**(code **)(DAT_01dd96f0 + 0x1c))(0);
  while (puVar2 != (undefined4 *)0x0) {
    iVar3 = thunk_FUN_00df3140(puVar2[1]);
    if (iVar3 == 0) {
      puVar2 = (undefined4 *)(**(code **)(*(int *)puVar2[-1] + 0x1c))(puVar2);
    }
    else {
      FUN_00df3b40(puVar2[1],1);
      puVar2[1] = 0;
      FUN_00e62b90(*puVar2);
      puVar4 = (undefined4 *)(**(code **)(DAT_01dd96f0 + 0x1c))(puVar2);
      FUN_00dd4920(puVar2);
      puVar2 = puVar4;
    }
  }
  return;
}

// 00E5D2E0  FUN_00e5d2e0  size=348  [callgraph]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00e5d2e0(void)

{
  int *piVar1;
  float fVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  
  fVar2 = _DAT_01dd94f4;
  if (_DAT_01dd94f4 != _DAT_01dd94f0) {
    FUN_00df3cd0("Volume_SE",_DAT_01dd94f4,0);
    _DAT_01dd94f0 = fVar2;
  }
  fVar2 = _DAT_01dd94ec;
  if (_DAT_01dd94ec != _DAT_01dd94e8) {
    FUN_00df3cd0("Volume_VOICE",_DAT_01dd94ec,0);
    _DAT_01dd94e8 = fVar2;
  }
  fVar2 = _DAT_01dd94e4;
  if (_DAT_01dd94e4 != _DAT_01dd94e0) {
    FUN_00df3cd0("Volume_ENV",_DAT_01dd94e4,0);
    _DAT_01dd94e0 = fVar2;
  }
  puVar3 = (undefined4 *)(**(code **)(DAT_01dd98d8 + 0x1c))(0);
  while (puVar3 != (undefined4 *)0x0) {
    FUN_00e59000();
    iVar4 = thunk_FUN_00df3140(puVar3[0x11]);
    if (iVar4 == 0) {
      puVar3 = (undefined4 *)(**(code **)(*(int *)puVar3[-1] + 0x1c))(puVar3);
    }
    else {
      if (puVar3[0x11] != 0) {
        FUN_00df3b40(puVar3[0x11],1);
        puVar3[0x11] = 0;
      }
      if (puVar3[0x10] != 0) {
        piVar1 = (int *)(puVar3[0x10] + 0xc);
        *piVar1 = *piVar1 + -1;
        puVar3[0x10] = 0;
      }
      FUN_00e62d80(*puVar3);
      puVar5 = (undefined4 *)(**(code **)(DAT_01dd98d8 + 0x1c))(puVar3);
      FUN_00dd4920(puVar3);
      puVar3 = puVar5;
    }
  }
  return;
}

// 00E5D4E0  FUN_00e5d4e0  size=97  [callgraph]
undefined4 __thiscall FUN_00e5d4e0(int param_1,undefined4 *param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_00e5c000(0,0xffffffff,0);
  *(int *)(param_1 + 0x40) = iVar1;
  if (iVar1 == 0) {
    return 0;
  }
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 2;
  *(undefined4 *)(param_1 + 0x30) = *param_2;
  *(undefined4 *)(param_1 + 0x34) = param_2[1];
  *(undefined4 *)(param_1 + 0x38) = param_2[2];
  *(undefined4 *)(param_1 + 0x3c) = param_2[3];
  if (param_3 != 0) {
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 4;
    *(int *)(param_1 + 0x14) = param_3;
    *(undefined4 *)(param_1 + 0x18) = param_4;
  }
  FUN_00e55460();
  return 1;
}

// 00E602F0  SoundArea::ShapeBox::vf00  size=31  [class]
undefined4 * __thiscall SoundArea::ShapeBox::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = Shape::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00E60320  FUN_00e60320  size=113  [between]
void __thiscall FUN_00e60320(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar2 = (undefined4 *)(param_2 + 0x10);
  puVar3 = (undefined4 *)(param_1 + 0x10);
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = (undefined4 *)(param_2 + 0x50);
  puVar3 = (undefined4 *)(param_1 + 0x50);
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = (undefined4 *)(param_2 + 0x90);
  puVar3 = (undefined4 *)(param_1 + 0x90);
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = (undefined4 *)(param_2 + 0xd0);
  puVar3 = (undefined4 *)(param_1 + 0xd0);
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)(param_1 + 0x110) = *(undefined4 *)(param_2 + 0x110);
  *(undefined4 *)(param_1 + 0x114) = *(undefined4 *)(param_2 + 0x114);
  *(undefined4 *)(param_1 + 0x118) = *(undefined4 *)(param_2 + 0x118);
  return;
}

// 00E60460  FUN_00e60460  size=24  [between]
void __fastcall FUN_00e60460(undefined4 *param_1)

{
  FUN_00df3b40(*param_1,1);
  *param_1 = 0;
  return;
}

// 00E604C0  FUN_00e604c0  size=45  [between]
void __fastcall FUN_00e604c0(int *param_1)

{
  int *piVar1;
  
  if (param_1[1] != 0) {
    FUN_00df3b40(param_1[1],1);
    param_1[1] = 0;
  }
  if (*param_1 != 0) {
    piVar1 = (int *)(*param_1 + 0xc);
    *piVar1 = *piVar1 + -1;
    *param_1 = 0;
  }
  return;
}

// 00E606A0  FUN_00e606a0  size=48  [between]
void __fastcall FUN_00e606a0(undefined4 *param_1)

{
  FUN_00df3b40(param_1[1],1);
  FUN_00df3b40(param_1[2],1);
  FUN_00df39f0(*param_1);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}

// 00E60770  FUN_00e60770  size=37  [between]
bool __thiscall FUN_00e60770(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_00df4980(param_2,*param_1,0);
  param_1[1] = iVar1;
  return iVar1 != 0;
}

// 00E60800  FUN_00e60800  size=37  [between]
bool __thiscall FUN_00e60800(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_00df4980(param_2,*param_1,0);
  param_1[2] = iVar1;
  return iVar1 != 0;
}

// 00E60BE0  FUN_00e60be0  size=87  [between]
int __thiscall FUN_00e60be0(int param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0xc) <= param_2) {
    return -1;
  }
  if (param_2 < *(int *)(param_1 + 0xc) + -1) {
    iVar2 = param_2 * 0xc;
    iVar3 = param_2;
    do {
      puVar1 = (undefined4 *)(*(int *)(param_1 + 4) + iVar2);
      *puVar1 = *(undefined4 *)(*(int *)(param_1 + 4) + 0xc + iVar2);
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 0xc;
      puVar1[1] = puVar1[4];
      puVar1[2] = puVar1[5];
    } while (iVar3 < *(int *)(param_1 + 0xc) + -1);
  }
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -1;
  iVar2 = -1;
  if (param_2 < *(int *)(param_1 + 0xc)) {
    iVar2 = param_2;
  }
  return iVar2;
}

// 00E60C90  FUN_00e60c90  size=66  [between]
int __thiscall FUN_00e60c90(int param_1,int param_2)

{
  int iVar1;
  
  if (param_2 < *(int *)(param_1 + 0xc)) {
    iVar1 = param_2;
    if (param_2 < *(int *)(param_1 + 0xc) + -1) {
      do {
        *(undefined1 *)(*(int *)(param_1 + 4) + iVar1) =
             *(undefined1 *)(*(int *)(param_1 + 4) + 1 + iVar1);
        iVar1 = iVar1 + 1;
      } while (iVar1 < *(int *)(param_1 + 0xc) + -1);
    }
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -1;
    iVar1 = -1;
    if (param_2 < *(int *)(param_1 + 0xc)) {
      iVar1 = param_2;
    }
    return iVar1;
  }
  return -1;
}

// 00E60DC0  FUN_00e60dc0  size=70  [between]
int __thiscall FUN_00e60dc0(int param_1,int param_2)

{
  int iVar1;
  
  if (param_2 < *(int *)(param_1 + 0xc)) {
    iVar1 = param_2;
    if (param_2 < *(int *)(param_1 + 0xc) + -1) {
      do {
        *(undefined4 *)(*(int *)(param_1 + 4) + iVar1 * 4) =
             *(undefined4 *)(*(int *)(param_1 + 4) + 4 + iVar1 * 4);
        iVar1 = iVar1 + 1;
      } while (iVar1 < *(int *)(param_1 + 0xc) + -1);
    }
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -1;
    iVar1 = -1;
    if (param_2 < *(int *)(param_1 + 0xc)) {
      iVar1 = param_2;
    }
    return iVar1;
  }
  return -1;
}

// 00E61360  FUN_00e61360  size=43  [between]
void __fastcall FUN_00e61360(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    if (*(int *)(param_1 + 0x10) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 4),0);
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}

// 00E61390  FUN_00e61390  size=202  [between]
undefined4 __thiscall FUN_00e61390(int param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if (*(int *)(param_1 + 8) == param_2) {
    return 1;
  }
  puVar1 = (undefined4 *)FUN_00dd29b0(param_2 * 4,0x20,0,0);
  if (puVar1 != (undefined4 *)0x0) {
    iVar2 = 0;
    if (*(int *)(param_1 + 0xc) < param_2) {
      puVar3 = puVar1;
      if (0 < *(int *)(param_1 + 0xc)) {
        do {
          if (puVar3 != (undefined4 *)0x0) {
            *puVar3 = *(undefined4 *)(*(int *)(param_1 + 4) + iVar2 * 4);
          }
          iVar2 = iVar2 + 1;
          puVar3 = puVar3 + 1;
        } while (iVar2 < *(int *)(param_1 + 0xc));
      }
    }
    else {
      puVar3 = puVar1;
      if (0 < param_2) {
        do {
          if (puVar3 != (undefined4 *)0x0) {
            *puVar3 = *(undefined4 *)(*(int *)(param_1 + 4) + iVar2 * 4);
          }
          iVar2 = iVar2 + 1;
          puVar3 = puVar3 + 1;
        } while (iVar2 < param_2);
      }
      *(int *)(param_1 + 0xc) = param_2;
    }
    if (*(int *)(param_1 + 0x10) != 0) {
      FUN_00dd48d0(*(undefined4 *)(param_1 + 4),0);
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    *(undefined4 **)(param_1 + 4) = puVar1;
    *(int *)(param_1 + 8) = param_2;
    *(undefined4 *)(param_1 + 0x10) = 1;
    return 1;
  }
  FUN_00dd5650(&DAT_016cd660);
  return 0;
}

// 00E614A0  FUN_00e614a0  size=499  [between]
undefined4 __thiscall FUN_00e614a0(int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if (*(int *)(param_1 + 8) == param_2) {
    return 1;
  }
  puVar1 = (undefined4 *)FUN_00dd29b0(param_2 * 0xc,0x20,0,0);
  if (puVar1 != (undefined4 *)0x0) {
    if (*(int *)(param_1 + 0xc) < param_2) {
      if (0 < *(int *)(param_1 + 0xc)) {
        iVar4 = 0;
        iVar5 = 0;
        puVar2 = puVar1;
        do {
          if (puVar2 != (undefined4 *)0x0) {
            iVar3 = *(int *)(param_1 + 4);
            *puVar2 = *(undefined4 *)(iVar3 + iVar4);
            puVar2[1] = *(undefined4 *)(iVar3 + 4 + iVar4);
            puVar2[2] = *(undefined4 *)(iVar3 + 8 + iVar4);
          }
          iVar5 = iVar5 + 1;
          iVar4 = iVar4 + 0xc;
          puVar2 = puVar2 + 3;
        } while (iVar5 < *(int *)(param_1 + 0xc));
      }
    }
    else {
      iVar4 = 0;
      if (3 < param_2) {
        puVar2 = puVar1 + 5;
        iVar5 = (param_2 - 4U >> 2) + 1;
        iVar4 = iVar5 * 4;
        do {
          if (puVar2 != (undefined4 *)0x14) {
            iVar3 = *(int *)(param_1 + 4) + (-0x14 - (int)puVar1);
            puVar2[-5] = *(undefined4 *)(iVar3 + (int)puVar2);
            puVar2[-4] = *(undefined4 *)(iVar3 + 4 + (int)puVar2);
            puVar2[-3] = *(undefined4 *)(iVar3 + 8 + (int)puVar2);
          }
          if (puVar2 != (undefined4 *)&DAT_00000008) {
            iVar3 = *(int *)(param_1 + 4) + (-0x14 - (int)puVar1);
            puVar2[-2] = *(undefined4 *)(iVar3 + 0xc + (int)puVar2);
            puVar2[-1] = *(undefined4 *)((int)puVar2 + iVar3 + 0x10);
            *puVar2 = *(undefined4 *)((int)puVar2 + iVar3 + 0x14);
          }
          if (puVar2 + 1 != (undefined4 *)0x0) {
            iVar3 = *(int *)(param_1 + 4) + (4 - (int)puVar1);
            puVar2[1] = *(undefined4 *)(iVar3 + (int)puVar2);
            puVar2[2] = *(undefined4 *)(iVar3 + 4 + (int)puVar2);
            puVar2[3] = *(undefined4 *)(iVar3 + 8 + (int)puVar2);
          }
          if (puVar2 + 4 != (undefined4 *)0x0) {
            iVar3 = *(int *)(param_1 + 4) + (0x10 - (int)puVar1);
            puVar2[4] = *(undefined4 *)(iVar3 + (int)puVar2);
            puVar2[5] = *(undefined4 *)(iVar3 + 4 + (int)puVar2);
            puVar2[6] = *(undefined4 *)(iVar3 + 8 + (int)puVar2);
          }
          puVar2 = puVar2 + 0xc;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
      if (iVar4 < param_2) {
        iVar5 = iVar4 * 0xc;
        puVar2 = puVar1 + iVar4 * 3;
        iVar4 = param_2 - iVar4;
        do {
          if (puVar2 != (undefined4 *)0x0) {
            iVar3 = *(int *)(param_1 + 4);
            *puVar2 = *(undefined4 *)(iVar3 + iVar5);
            puVar2[1] = *(undefined4 *)(iVar3 + 4 + iVar5);
            puVar2[2] = *(undefined4 *)(iVar3 + 8 + iVar5);
          }
          iVar5 = iVar5 + 0xc;
          puVar2 = puVar2 + 3;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
      }
      *(int *)(param_1 + 0xc) = param_2;
    }
    if (*(int *)(param_1 + 0x10) != 0) {
      FUN_00dd48d0(*(undefined4 *)(param_1 + 4),0);
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    *(int *)(param_1 + 8) = param_2;
    *(undefined4 **)(param_1 + 4) = puVar1;
    *(undefined4 *)(param_1 + 0x10) = 1;
    return 1;
  }
  FUN_00dd5650(&DAT_016cd660);
  return 0;
}

// 00E616B0  FUN_00e616b0  size=186  [between]
undefined4 __thiscall FUN_00e616b0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 8) == param_2) {
    return 1;
  }
  iVar1 = FUN_00dd29b0(param_2,0x20,0,0);
  if (iVar1 != 0) {
    iVar2 = 0;
    if (*(int *)(param_1 + 0xc) < param_2) {
      if (0 < *(int *)(param_1 + 0xc)) {
        do {
          if ((undefined1 *)(iVar2 + iVar1) != (undefined1 *)0x0) {
            *(undefined1 *)(iVar2 + iVar1) = *(undefined1 *)(iVar2 + *(int *)(param_1 + 4));
          }
          iVar2 = iVar2 + 1;
        } while (iVar2 < *(int *)(param_1 + 0xc));
      }
    }
    else {
      if (0 < param_2) {
        do {
          if ((undefined1 *)(iVar2 + iVar1) != (undefined1 *)0x0) {
            *(undefined1 *)(iVar2 + iVar1) = *(undefined1 *)(iVar2 + *(int *)(param_1 + 4));
          }
          iVar2 = iVar2 + 1;
        } while (iVar2 < param_2);
      }
      *(int *)(param_1 + 0xc) = param_2;
    }
    if (*(int *)(param_1 + 0x10) != 0) {
      FUN_00dd48d0(*(undefined4 *)(param_1 + 4),0);
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    *(int *)(param_1 + 4) = iVar1;
    *(int *)(param_1 + 8) = param_2;
    *(undefined4 *)(param_1 + 0x10) = 1;
    return 1;
  }
  FUN_00dd5650(&DAT_016cd660);
  return 0;
}

// 00E61780  FUN_00e61780  size=211  [between]
undefined4 __thiscall FUN_00e61780(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  
  if (*(int *)(param_1 + 8) == param_2) {
    return 1;
  }
  puVar2 = (undefined4 *)FUN_00dd29b0(param_2 * 8,0x20,0,0);
  if (puVar2 != (undefined4 *)0x0) {
    iVar3 = 0;
    if (*(int *)(param_1 + 0xc) < param_2) {
      puVar4 = puVar2;
      if (0 < *(int *)(param_1 + 0xc)) {
        do {
          if (puVar4 != (undefined4 *)0x0) {
            iVar1 = *(int *)(param_1 + 4);
            *puVar4 = *(undefined4 *)(iVar1 + iVar3 * 8);
            puVar4[1] = *(undefined4 *)(iVar1 + 4 + iVar3 * 8);
          }
          iVar3 = iVar3 + 1;
          puVar4 = puVar4 + 2;
        } while (iVar3 < *(int *)(param_1 + 0xc));
      }
    }
    else {
      puVar4 = puVar2;
      if (0 < param_2) {
        do {
          if (puVar4 != (undefined4 *)0x0) {
            iVar1 = *(int *)(param_1 + 4);
            *puVar4 = *(undefined4 *)(iVar1 + iVar3 * 8);
            puVar4[1] = *(undefined4 *)(iVar1 + 4 + iVar3 * 8);
          }
          iVar3 = iVar3 + 1;
          puVar4 = puVar4 + 2;
        } while (iVar3 < param_2);
      }
      *(int *)(param_1 + 0xc) = param_2;
    }
    if (*(int *)(param_1 + 0x10) != 0) {
      FUN_00dd48d0(*(undefined4 *)(param_1 + 4),0);
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    *(undefined4 **)(param_1 + 4) = puVar2;
    *(int *)(param_1 + 8) = param_2;
    *(undefined4 *)(param_1 + 0x10) = 1;
    return 1;
  }
  FUN_00dd5650(&DAT_016cd660);
  return 0;
}

// 00E61860  FUN_00e61860  size=397  [between]
undefined4 __thiscall FUN_00e61860(int param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int local_10;
  
  if (*(int *)(param_1 + 8) == param_2) {
    return 1;
  }
  puVar1 = (undefined4 *)FUN_00dd29b0(param_2 * 4,0x20,0,0);
  if (puVar1 != (undefined4 *)0x0) {
    if (*(int *)(param_1 + 0xc) < param_2) {
      iVar2 = 0;
      puVar3 = puVar1;
      if (0 < *(int *)(param_1 + 0xc)) {
        do {
          if (puVar3 != (undefined4 *)0x0) {
            *puVar3 = *(undefined4 *)(*(int *)(param_1 + 4) + iVar2 * 4);
          }
          iVar2 = iVar2 + 1;
          puVar3 = puVar3 + 1;
        } while (iVar2 < *(int *)(param_1 + 0xc));
      }
    }
    else {
      iVar2 = 0;
      if (3 < param_2) {
        iVar4 = (param_2 - 4U >> 2) + 1;
        local_10 = 8;
        puVar3 = puVar1 + 2;
        iVar2 = iVar4 * 4;
        do {
          if (puVar3 != (undefined4 *)&DAT_00000008) {
            puVar3[-2] = *(undefined4 *)(*(int *)(param_1 + 4) + (-8 - (int)puVar1) + (int)puVar3);
          }
          if (puVar3 != (undefined4 *)&DAT_00000004) {
            puVar3[-1] = *(undefined4 *)
                          (*(int *)(param_1 + 4) + (-8 - (int)puVar1) + 4 + (int)puVar3);
          }
          if (puVar3 != (undefined4 *)0x0) {
            *puVar3 = *(undefined4 *)(*(int *)(param_1 + 4) + local_10);
          }
          if (puVar3 + 1 != (undefined4 *)0x0) {
            puVar3[1] = *(undefined4 *)(*(int *)(param_1 + 4) + (4 - (int)puVar1) + (int)puVar3);
          }
          local_10 = local_10 + 0x10;
          puVar3 = puVar3 + 4;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
      }
      if (iVar2 < param_2) {
        puVar3 = puVar1 + iVar2;
        do {
          if (puVar3 != (undefined4 *)0x0) {
            *puVar3 = *(undefined4 *)(*(int *)(param_1 + 4) + iVar2 * 4);
          }
          iVar2 = iVar2 + 1;
          puVar3 = puVar3 + 1;
        } while (iVar2 < param_2);
      }
      *(int *)(param_1 + 0xc) = param_2;
    }
    if (*(int *)(param_1 + 0x10) != 0) {
      FUN_00dd48d0(*(undefined4 *)(param_1 + 4),0);
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    *(int *)(param_1 + 8) = param_2;
    *(undefined4 **)(param_1 + 4) = puVar1;
    *(undefined4 *)(param_1 + 0x10) = 1;
    return 1;
  }
  FUN_00dd5650(&DAT_016cd660);
  return 0;
}

// 00E61A10  FUN_00e61a10  size=37  [between]
void __fastcall FUN_00e61a10(int param_1)

{
  if (*(int *)(param_1 + 0x10) != 0) {
    FUN_00dd4940(*(int *)(param_1 + 0x10));
    *(undefined4 *)(param_1 + 0x10) = 0;
    FUN_00dd7270();
    return;
  }
  return;
}

// 00E61B20  FUN_00e61b20  size=37  [between]
void __fastcall FUN_00e61b20(int param_1)

{
  if (*(int *)(param_1 + 0x10) != 0) {
    FUN_00dd4940(*(int *)(param_1 + 0x10));
    *(undefined4 *)(param_1 + 0x10) = 0;
    FUN_00dd7270();
    return;
  }
  return;
}

// 00E61EB0  SoundArea::Shape::vf00  size=31  [class]
undefined4 * __thiscall SoundArea::Shape::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00E61F00  SoundArea::ShapeSphere::vf00  size=31  [class]
undefined4 * __thiscall SoundArea::ShapeSphere::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = Shape::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00E61F20  FUN_00e61f20  size=153  [between]
int __thiscall FUN_00e61f20(int param_1,int param_2)

{
  FUN_00e60320(param_2);
  *(undefined4 *)(param_1 + 0x120) = *(undefined4 *)(param_2 + 0x120);
  *(undefined4 *)(param_1 + 0x124) = *(undefined4 *)(param_2 + 0x124);
  *(undefined4 *)(param_1 + 0x128) = *(undefined4 *)(param_2 + 0x128);
  *(undefined4 *)(param_1 + 300) = *(undefined4 *)(param_2 + 300);
  *(undefined4 *)(param_1 + 0x130) = *(undefined4 *)(param_2 + 0x130);
  *(undefined4 *)(param_1 + 0x134) = *(undefined4 *)(param_2 + 0x134);
  *(undefined4 *)(param_1 + 0x138) = *(undefined4 *)(param_2 + 0x138);
  *(undefined4 *)(param_1 + 0x13c) = *(undefined4 *)(param_2 + 0x13c);
  *(undefined4 *)(param_1 + 0x140) = *(undefined4 *)(param_2 + 0x140);
  *(undefined4 *)(param_1 + 0x144) = *(undefined4 *)(param_2 + 0x144);
  *(undefined4 *)(param_1 + 0x148) = *(undefined4 *)(param_2 + 0x148);
  return param_1;
}

// 00E61FC0  FUN_00e61fc0  size=200  [between]
int __thiscall FUN_00e61fc0(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  FUN_00e60320(param_2);
  puVar2 = (undefined4 *)(param_2 + 0x120);
  puVar3 = (undefined4 *)(param_1 + 0x120);
  for (iVar1 = 0x15; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)(param_1 + 0x174) = *(undefined4 *)(param_2 + 0x174);
  *(undefined4 *)(param_1 + 0x178) = *(undefined4 *)(param_2 + 0x178);
  *(undefined4 *)(param_1 + 0x17c) = *(undefined4 *)(param_2 + 0x17c);
  *(undefined4 *)(param_1 + 0x180) = *(undefined4 *)(param_2 + 0x180);
  *(undefined4 *)(param_1 + 0x184) = *(undefined4 *)(param_2 + 0x184);
  *(undefined4 *)(param_1 + 0x188) = *(undefined4 *)(param_2 + 0x188);
  *(undefined4 *)(param_1 + 0x18c) = *(undefined4 *)(param_2 + 0x18c);
  *(undefined4 *)(param_1 + 400) = *(undefined4 *)(param_2 + 400);
  *(undefined4 *)(param_1 + 0x1a0) = *(undefined4 *)(param_2 + 0x1a0);
  *(undefined4 *)(param_1 + 0x1a4) = *(undefined4 *)(param_2 + 0x1a4);
  *(undefined4 *)(param_1 + 0x1a8) = *(undefined4 *)(param_2 + 0x1a8);
  *(undefined4 *)(param_1 + 0x1ac) = *(undefined4 *)(param_2 + 0x1ac);
  *(undefined4 *)(param_1 + 0x1b0) = *(undefined4 *)(param_2 + 0x1b0);
  return param_1;
}

// 00E62100  FUN_00e62100  size=43  [between]
void __fastcall FUN_00e62100(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    if (*(int *)(param_1 + 0x10) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 4),0);
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}

// 00E62320  FUN_00e62320  size=43  [between]
void __fastcall FUN_00e62320(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    if (*(int *)(param_1 + 0x10) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 4),0);
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}

// 00E62390  FUN_00e62390  size=223  [between]
void __thiscall FUN_00e62390(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  
  if (*(int *)(param_2 + 0xc) == 0) {
    if (*(int *)(param_1 + 4) != 0) {
      *(undefined4 *)(param_1 + 0xc) = 0;
      if (*(int *)(param_1 + 0x10) != 0) {
        FUN_00dd48d0(*(int *)(param_1 + 4),0);
        *(undefined4 *)(param_1 + 0x10) = 0;
      }
      *(undefined4 *)(param_1 + 4) = 0;
      *(undefined4 *)(param_1 + 8) = 0;
      return;
    }
  }
  else {
    puVar2 = (undefined4 *)FUN_00dd29b0(*(int *)(param_2 + 0xc) * 0xc,0x20,0,0);
    if (puVar2 == (undefined4 *)0x0) {
      FUN_00dd5650(&DAT_016ce844);
      return;
    }
    if (*(int *)(param_1 + 4) != 0) {
      *(undefined4 *)(param_1 + 0xc) = 0;
      if (*(int *)(param_1 + 0x10) != 0) {
        FUN_00dd48d0(*(int *)(param_1 + 4),0);
        *(undefined4 *)(param_1 + 0x10) = 0;
      }
      *(undefined4 *)(param_1 + 4) = 0;
      *(undefined4 *)(param_1 + 8) = 0;
    }
    *(undefined4 **)(param_1 + 4) = puVar2;
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 0xc);
    *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
    *(undefined4 *)(param_1 + 0x10) = 1;
    iVar3 = 0;
    if (0 < *(int *)(param_2 + 0xc)) {
      iVar4 = 0;
      do {
        if (puVar2 != (undefined4 *)0x0) {
          iVar1 = *(int *)(param_2 + 4);
          *puVar2 = *(undefined4 *)(iVar1 + iVar4);
          puVar2[1] = *(undefined4 *)(iVar1 + 4 + iVar4);
          puVar2[2] = *(undefined4 *)(iVar1 + 8 + iVar4);
        }
        iVar3 = iVar3 + 1;
        iVar4 = iVar4 + 0xc;
        puVar2 = puVar2 + 3;
      } while (iVar3 < *(int *)(param_2 + 0xc));
    }
  }
  return;
}

// 00E62470  FUN_00e62470  size=43  [between]
void __fastcall FUN_00e62470(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    if (*(int *)(param_1 + 0x10) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 4),0);
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}

// 00E624A0  FUN_00e624a0  size=61  [between]
undefined4 __thiscall FUN_00e624a0(int param_1,int param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 8) < param_2) {
    iVar1 = FUN_00e616b0(param_2);
    if (iVar1 == 0) {
      FUN_00dd5650(&DAT_016cdba0);
      return 0;
    }
  }
  if (param_2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = param_2;
  }
  return 1;
}

// 00E624E0  FUN_00e624e0  size=195  [between]
void __thiscall FUN_00e624e0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (*(int *)(param_2 + 0xc) == 0) {
    if (*(int *)(param_1 + 4) != 0) {
      *(undefined4 *)(param_1 + 0xc) = 0;
      if (*(int *)(param_1 + 0x10) != 0) {
        FUN_00dd48d0(*(int *)(param_1 + 4),0);
        *(undefined4 *)(param_1 + 0x10) = 0;
      }
      *(undefined4 *)(param_1 + 4) = 0;
      *(undefined4 *)(param_1 + 8) = 0;
      return;
    }
  }
  else {
    iVar1 = FUN_00dd29b0(*(int *)(param_2 + 0xc),0x20,0,0);
    if (iVar1 == 0) {
      FUN_00dd5650(&DAT_016ce844);
      return;
    }
    if (*(int *)(param_1 + 4) != 0) {
      *(undefined4 *)(param_1 + 0xc) = 0;
      if (*(int *)(param_1 + 0x10) != 0) {
        FUN_00dd48d0(*(int *)(param_1 + 4),0);
        *(undefined4 *)(param_1 + 0x10) = 0;
      }
      *(undefined4 *)(param_1 + 4) = 0;
      *(undefined4 *)(param_1 + 8) = 0;
    }
    *(int *)(param_1 + 4) = iVar1;
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 0xc);
    *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
    *(undefined4 *)(param_1 + 0x10) = 1;
    iVar2 = 0;
    if (0 < *(int *)(param_2 + 0xc)) {
      do {
        if ((undefined1 *)(iVar2 + iVar1) != (undefined1 *)0x0) {
          *(undefined1 *)(iVar2 + iVar1) = *(undefined1 *)(iVar2 + *(int *)(param_2 + 4));
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < *(int *)(param_2 + 0xc));
    }
  }
  return;
}

// 00E625B0  FUN_00e625b0  size=43  [between]
void __fastcall FUN_00e625b0(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    if (*(int *)(param_1 + 0x10) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 4),0);
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}

// 00E625E0  FUN_00e625e0  size=61  [between]
undefined4 __thiscall FUN_00e625e0(int param_1,int param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 8) < param_2) {
    iVar1 = FUN_00e61780(param_2);
    if (iVar1 == 0) {
      FUN_00dd5650(&DAT_016cdba0);
      return 0;
    }
  }
  if (param_2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = param_2;
  }
  return 1;
}

// 00E62620  FUN_00e62620  size=211  [between]
void __thiscall FUN_00e62620(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  
  if (*(int *)(param_2 + 0xc) == 0) {
    if (*(int *)(param_1 + 4) != 0) {
      *(undefined4 *)(param_1 + 0xc) = 0;
      if (*(int *)(param_1 + 0x10) != 0) {
        FUN_00dd48d0(*(int *)(param_1 + 4),0);
        *(undefined4 *)(param_1 + 0x10) = 0;
      }
      *(undefined4 *)(param_1 + 4) = 0;
      *(undefined4 *)(param_1 + 8) = 0;
      return;
    }
  }
  else {
    puVar2 = (undefined4 *)FUN_00dd29b0(*(int *)(param_2 + 0xc) * 8,0x20,0,0);
    if (puVar2 == (undefined4 *)0x0) {
      FUN_00dd5650(&DAT_016ce844);
      return;
    }
    if (*(int *)(param_1 + 4) != 0) {
      *(undefined4 *)(param_1 + 0xc) = 0;
      if (*(int *)(param_1 + 0x10) != 0) {
        FUN_00dd48d0(*(int *)(param_1 + 4),0);
        *(undefined4 *)(param_1 + 0x10) = 0;
      }
      *(undefined4 *)(param_1 + 4) = 0;
      *(undefined4 *)(param_1 + 8) = 0;
    }
    *(undefined4 **)(param_1 + 4) = puVar2;
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 0xc);
    *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
    *(undefined4 *)(param_1 + 0x10) = 1;
    iVar3 = 0;
    if (0 < *(int *)(param_2 + 0xc)) {
      do {
        if (puVar2 != (undefined4 *)0x0) {
          iVar1 = *(int *)(param_2 + 4);
          *puVar2 = *(undefined4 *)(iVar1 + iVar3 * 8);
          puVar2[1] = *(undefined4 *)(iVar1 + 4 + iVar3 * 8);
        }
        iVar3 = iVar3 + 1;
        puVar2 = puVar2 + 2;
      } while (iVar3 < *(int *)(param_2 + 0xc));
    }
  }
  return;
}

// 00E62760  FUN_00e62760  size=43  [between]
void __fastcall FUN_00e62760(int param_1)

{
  if (*(int *)(param_1 + 0x10) != 0) {
    FUN_00dd4940(*(int *)(param_1 + 0x10));
    *(undefined4 *)(param_1 + 0x10) = 0;
    FUN_00dd7270();
  }
  FUN_00dd7270();
  return;
}

// 00E62890  FUN_00e62890  size=131  [between]
void __thiscall FUN_00e62890(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_c;
  
  iVar3 = param_2;
  if (*param_1 != 0) {
    iVar1 = param_1[4];
    local_c = 0;
    if (0 < iVar1) {
      param_2 = 0;
      do {
        *(int *)(iVar3 + 0x3c) = local_c;
        iVar5 = param_1[2] + param_2;
        *(uint *)(iVar3 + 0x44) = (uint)*(byte *)(iVar5 + 3);
        iVar2 = *(int *)(iVar5 + 0x18);
        iVar4 = 0;
        if (0 < iVar2) {
          do {
            *(int *)(iVar3 + 0x40) = iVar4;
            (**(code **)(**(int **)(*(int *)(iVar5 + 0x10) + iVar4 * 4) + 0x58))(iVar3);
            iVar4 = iVar4 + 1;
          } while (iVar4 < iVar2);
        }
        param_2 = param_2 + 0x44;
        local_c = local_c + 1;
      } while (local_c < iVar1);
    }
  }
  return;
}

// 00E62950  FUN_00e62950  size=43  [between]
void __fastcall FUN_00e62950(int param_1)

{
  if (*(int *)(param_1 + 0x10) != 0) {
    FUN_00dd4940(*(int *)(param_1 + 0x10));
    *(undefined4 *)(param_1 + 0x10) = 0;
    FUN_00dd7270();
  }
  FUN_00dd7270();
  return;
}

// 00E62A20  FUN_00e62a20  size=43  [between]
void __fastcall FUN_00e62a20(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    if (*(int *)(param_1 + 0x10) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 4),0);
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}

// 00E62A50  FUN_00e62a50  size=125  [between]
undefined4 __thiscall FUN_00e62a50(uint *param_1,uint param_2,undefined4 param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  
  if (param_1[4] != 0) {
    return 0;
  }
  if (param_2 < 0x10000) {
    puVar2 = (undefined4 *)
             FUN_00dd3580(-(uint)((int)((ulonglong)param_2 * 8 >> 0x20) != 0) |
                          (uint)((ulonglong)param_2 * 8),param_3);
    param_1[4] = (uint)puVar2;
    uVar1 = param_2;
    if (puVar2 != (undefined4 *)0x0) {
      for (; uVar1 != 0; uVar1 = uVar1 - 1) {
        *puVar2 = 0;
        puVar2[1] = 0;
        puVar2 = puVar2 + 2;
      }
      *param_1 = param_2;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
      FUN_00dd7240();
      return 1;
    }
  }
  return 0;
}

// 00E62AD0  FUN_00e62ad0  size=184  [between]
int __thiscall FUN_00e62ad0(uint *param_1,undefined4 param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 6);
  if (param_1[0xc] != 0) {
    EnterCriticalSection(lpCriticalSection);
  }
  uVar1 = *param_1;
  if (param_1[1] == uVar1) {
    if (param_1[0xc] != 0) {
      LeaveCriticalSection(lpCriticalSection);
    }
    return 0;
  }
  uVar4 = param_1[2];
  uVar5 = param_1[3];
  uVar2 = param_1[4];
  uVar6 = 0;
  if (uVar1 != 0) {
    do {
      if (uVar1 <= uVar4) {
        uVar5 = uVar5 + 1;
        uVar4 = 0;
        if (0xff < uVar5) {
          uVar5 = 0;
        }
      }
      if (*(int *)(uVar2 + uVar4 * 8) == 0) break;
      uVar6 = uVar6 + 1;
      uVar4 = uVar4 + 1;
    } while (uVar6 < uVar1);
  }
  while (iVar3 = (uVar5 << 0x10 | uVar4) << 8, iVar3 == 0) {
    uVar5 = uVar5 + 1;
    if (0xff < uVar5) {
      uVar5 = 0;
    }
  }
  *(int *)(uVar2 + uVar4 * 8) = iVar3;
  *(undefined4 *)(uVar2 + 4 + uVar4 * 8) = param_2;
  param_1[1] = param_1[1] + 1;
  param_1[2] = uVar4 + 1;
  param_1[3] = uVar5;
  if (param_1[0xc] != 0) {
    LeaveCriticalSection(lpCriticalSection);
  }
  return iVar3;
}

// 00E62B90  FUN_00e62b90  size=129  [between]
void __thiscall FUN_00e62b90(uint *param_1,uint param_2)

{
  uint *puVar1;
  uint uVar2;
  undefined *puVar3;
  
  if (param_1[0xc] != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 6));
  }
  if ((param_2 & 0xffffff00) != 0) {
    uVar2 = (int)param_2 >> 8 & 0xffff;
    if (uVar2 < *param_1) {
      puVar1 = (uint *)(param_1[4] + uVar2 * 8);
      if ((*puVar1 & 0xffffff00) == 0) {
        puVar3 = &DAT_01663f4c;
      }
      else {
        if ((*puVar1 & 0xffffff00) == (param_2 & 0xffffff00)) {
          *puVar1 = 0;
          puVar1[1] = 0;
          param_1[1] = param_1[1] - 1;
          goto LAB_00e62bff;
        }
        puVar3 = &DAT_01663f18;
      }
    }
    else {
      puVar3 = &DAT_01663f7c;
    }
    FUN_00dd5650(puVar3);
  }
LAB_00e62bff:
  if (param_1[0xc] != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 6));
  }
  return;
}

// 00E62C40  FUN_00e62c40  size=125  [between]
undefined4 __thiscall FUN_00e62c40(uint *param_1,uint param_2,undefined4 param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  
  if (param_1[4] != 0) {
    return 0;
  }
  if (param_2 < 0x10000) {
    puVar2 = (undefined4 *)
             FUN_00dd3580(-(uint)((int)((ulonglong)param_2 * 8 >> 0x20) != 0) |
                          (uint)((ulonglong)param_2 * 8),param_3);
    param_1[4] = (uint)puVar2;
    uVar1 = param_2;
    if (puVar2 != (undefined4 *)0x0) {
      for (; uVar1 != 0; uVar1 = uVar1 - 1) {
        *puVar2 = 0;
        puVar2[1] = 0;
        puVar2 = puVar2 + 2;
      }
      *param_1 = param_2;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
      FUN_00dd7240();
      return 1;
    }
  }
  return 0;
}

// 00E62CC0  FUN_00e62cc0  size=184  [between]
int __thiscall FUN_00e62cc0(uint *param_1,undefined4 param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 6);
  if (param_1[0xc] != 0) {
    EnterCriticalSection(lpCriticalSection);
  }
  uVar1 = *param_1;
  if (param_1[1] == uVar1) {
    if (param_1[0xc] != 0) {
      LeaveCriticalSection(lpCriticalSection);
    }
    return 0;
  }
  uVar4 = param_1[2];
  uVar5 = param_1[3];
  uVar2 = param_1[4];
  uVar6 = 0;
  if (uVar1 != 0) {
    do {
      if (uVar1 <= uVar4) {
        uVar5 = uVar5 + 1;
        uVar4 = 0;
        if (0xff < uVar5) {
          uVar5 = 0;
        }
      }
      if (*(int *)(uVar2 + uVar4 * 8) == 0) break;
      uVar6 = uVar6 + 1;
      uVar4 = uVar4 + 1;
    } while (uVar6 < uVar1);
  }
  while (iVar3 = (uVar5 << 0x10 | uVar4) << 8, iVar3 == 0) {
    uVar5 = uVar5 + 1;
    if (0xff < uVar5) {
      uVar5 = 0;
    }
  }
  *(int *)(uVar2 + uVar4 * 8) = iVar3;
  *(undefined4 *)(uVar2 + 4 + uVar4 * 8) = param_2;
  param_1[1] = param_1[1] + 1;
  param_1[2] = uVar4 + 1;
  param_1[3] = uVar5;
  if (param_1[0xc] != 0) {
    LeaveCriticalSection(lpCriticalSection);
  }
  return iVar3;
}

// 00E62D80  FUN_00e62d80  size=129  [between]
void __thiscall FUN_00e62d80(uint *param_1,uint param_2)

{
  uint *puVar1;
  uint uVar2;
  undefined *puVar3;
  
  if (param_1[0xc] != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 6));
  }
  if ((param_2 & 0xffffff00) != 0) {
    uVar2 = (int)param_2 >> 8 & 0xffff;
    if (uVar2 < *param_1) {
      puVar1 = (uint *)(param_1[4] + uVar2 * 8);
      if ((*puVar1 & 0xffffff00) == 0) {
        puVar3 = &DAT_01663f4c;
      }
      else {
        if ((*puVar1 & 0xffffff00) == (param_2 & 0xffffff00)) {
          *puVar1 = 0;
          puVar1[1] = 0;
          param_1[1] = param_1[1] - 1;
          goto LAB_00e62def;
        }
        puVar3 = &DAT_01663f18;
      }
    }
    else {
      puVar3 = &DAT_01663f7c;
    }
    FUN_00dd5650(puVar3);
  }
LAB_00e62def:
  if (param_1[0xc] != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 6));
  }
  return;
}

// 00E62E50  FUN_00e62e50  size=102  [between]
undefined4 * FUN_00e62e50(void)

{
  undefined4 *_Dst;
  
  _Dst = (undefined4 *)FUN_00dd2bc0();
  if (_Dst == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  _memset(_Dst,0,0x80);
  *_Dst = 0;
  _Dst[1] = 0;
  _Dst[2] = 0;
  _Dst[3] = 0;
  _Dst[4] = 0;
  _Dst[5] = 0;
  _Dst[6] = 0xffffffff;
  _Dst[7] = 0;
  _Dst[0x10] = 0;
  _Dst[0x11] = 0;
  _Dst[0x1d] = 0;
  _Dst[0x12] = 4;
  _Dst[0xc] = 0;
  _Dst[0xd] = 0;
  _Dst[0xe] = 0;
  _Dst[0xf] = 0x3f800000;
  return _Dst;
}

// 00E63080  FUN_00e63080  size=62  [between]
int __thiscall FUN_00e63080(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  FUN_00e60320(param_2);
  puVar2 = (undefined4 *)(param_2 + 0x120);
  puVar3 = (undefined4 *)(param_1 + 0x120);
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  FUN_00e62390(param_2 + 0x140);
  return param_1;
}

// 00E630C0  FUN_00e630c0  size=146  [between]
int __thiscall FUN_00e630c0(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  FUN_00e60320(param_2);
  puVar2 = (undefined4 *)(param_2 + 0x120);
  puVar3 = (undefined4 *)(param_1 + 0x120);
  for (iVar1 = 9; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  FUN_00e624e0(param_2 + 0x144);
  FUN_00e62620(param_2 + 0x158);
  FUN_00e624e0(param_2 + 0x16c);
  *(undefined4 *)(param_1 + 0x180) = *(undefined4 *)(param_2 + 0x180);
  *(undefined4 *)(param_1 + 0x184) = *(undefined4 *)(param_2 + 0x184);
  *(undefined4 *)(param_1 + 0x188) = *(undefined4 *)(param_2 + 0x188);
  *(undefined4 *)(param_1 + 0x18c) = *(undefined4 *)(param_2 + 0x18c);
  return param_1;
}

// 00E63160  FUN_00e63160  size=21  [between]
undefined4 * __fastcall FUN_00e63160(undefined4 *param_1)

{
  *param_1 = 0;
  Hw::cHeapFixed::cHeapFixed();
  return param_1;
}

// 00E631D0  FUN_00e631d0  size=89  [between]
void __thiscall FUN_00e631d0(int *param_1,int *param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = param_1[2];
  if (iVar1 <= param_1[3]) {
    if (iVar1 < 1) {
      iVar1 = 4;
    }
    else {
      iVar1 = iVar1 * 2;
    }
    iVar1 = FUN_00e61390(iVar1);
    if (iVar1 == 0) {
      *param_2 = *param_1;
      return;
    }
  }
  iVar1 = param_1[3];
  puVar2 = (undefined4 *)(param_1[1] + iVar1 * 4);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = *param_3;
  }
  param_1[3] = param_1[3] + 1;
  *param_2 = param_1[1] + iVar1 * 4;
  return;
}

// 00E63250  FUN_00e63250  size=258  [between]
void __thiscall FUN_00e63250(int param_1,int param_2,int param_3,int param_4)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *local_24;
  int local_20;
  int local_1c;
  int local_18;
  undefined1 auStack_14 [16];
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)&local_24;
  if (0 < *(int *)(param_1 + 0x10)) {
    local_24 = (int *)(*(int *)(param_1 + 8) + 0x18);
    local_20 = *(int *)(param_1 + 0x10);
    do {
      iVar5 = *local_24;
      local_1c = local_24[-2];
      iVar4 = 0;
      local_18 = iVar5;
      if (0 < iVar5) {
        do {
          piVar1 = *(int **)(local_1c + iVar4 * 4);
          piVar2 = (int *)(**(code **)(*piVar1 + 0x5c))();
          if ((*piVar2 == param_3) && (piVar2[1] == param_4)) {
            iVar5 = piVar2[2];
            FUN_00a7c800();
            piVar1[0x44] = param_2;
            iVar3 = FUN_00a12210(iVar5);
            piVar1[0x45] = iVar3;
            if (iVar3 == 0) {
              FUN_009f8ea0(auStack_14,0x10,*(undefined4 *)(param_2 + 0x24),0);
              FUN_00dd5650(&DAT_016ce4a0,auStack_14,iVar5);
            }
            else {
              D3DXMatrixInverse(piVar1 + 4,0,iVar3 + 0x10);
            }
            FUN_00e52160();
            iVar5 = local_18;
          }
          iVar4 = iVar4 + 1;
        } while (iVar4 < iVar5);
      }
      local_24 = local_24 + 0x28;
      local_20 = local_20 + -1;
    } while (local_20 != 0);
    local_20 = 0;
  }
  __security_check_cookie(local_4 ^ (uint)&local_24);
  return;
}

// 00E633D0  FUN_00e633d0  size=134  [between]
void __thiscall FUN_00e633d0(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_c;
  
  iVar3 = param_2;
  if (*param_1 != 0) {
    iVar1 = param_1[4];
    local_c = 0;
    if (0 < iVar1) {
      param_2 = 0;
      do {
        *(int *)(iVar3 + 0x3c) = local_c;
        iVar5 = param_1[2] + param_2;
        *(uint *)(iVar3 + 0x44) = (uint)*(byte *)(iVar5 + 3);
        iVar2 = *(int *)(iVar5 + 0x18);
        iVar4 = 0;
        if (0 < iVar2) {
          do {
            *(int *)(iVar3 + 0x40) = iVar4;
            (**(code **)(**(int **)(*(int *)(iVar5 + 0x10) + iVar4 * 4) + 0x58))(iVar3);
            iVar4 = iVar4 + 1;
          } while (iVar4 < iVar2);
        }
        param_2 = param_2 + 0xa0;
        local_c = local_c + 1;
      } while (local_c < iVar1);
    }
  }
  return;
}

// 00E63500  FUN_00e63500  size=43  [between]
void __fastcall FUN_00e63500(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    if (*(int *)(param_1 + 0x10) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 4),0);
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}

// 00E63530  FUN_00e63530  size=318  [between]
void __thiscall FUN_00e63530(int *param_1,int *param_2,int param_3,undefined4 *param_4)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = param_1[2];
  if (iVar1 <= param_1[3]) {
    if (iVar1 < 1) {
      iVar1 = 4;
    }
    else {
      iVar1 = iVar1 * 2;
    }
    iVar1 = FUN_00e614a0(iVar1);
    if (iVar1 == 0) {
      *param_2 = *param_1;
      return;
    }
  }
  param_1[3] = param_1[3] + 1;
  iVar1 = param_1[3] + -2;
  if (param_3 <= iVar1) {
    if (3 < (iVar1 - param_3) + 1) {
      iVar5 = ((iVar1 - param_3) - 3U >> 2) + 1;
      iVar4 = iVar1 * 0xc;
      iVar1 = iVar1 + iVar5 * -4;
      do {
        iVar2 = param_1[1] + iVar4;
        *(undefined4 *)(iVar2 + 0xc) = *(undefined4 *)(param_1[1] + iVar4);
        *(undefined4 *)(iVar2 + 0x10) = *(undefined4 *)(iVar2 + 4);
        *(undefined4 *)(iVar2 + 0x14) = *(undefined4 *)(iVar2 + 8);
        puVar3 = (undefined4 *)(param_1[1] + iVar4);
        *puVar3 = *(undefined4 *)(param_1[1] + -0xc + iVar4);
        iVar5 = iVar5 + -1;
        puVar3[1] = puVar3[-2];
        puVar3[2] = puVar3[-1];
        iVar2 = param_1[1];
        *(undefined4 *)(iVar4 + -0xc + iVar2) = *(undefined4 *)(iVar4 + -0x18 + iVar2);
        *(undefined4 *)(iVar4 + -8 + iVar2) = *(undefined4 *)(iVar4 + -0x14 + iVar2);
        *(undefined4 *)(iVar4 + -4 + iVar2) = *(undefined4 *)(iVar4 + -0x10 + iVar2);
        iVar2 = param_1[1];
        *(undefined4 *)(iVar4 + -0x18 + iVar2) = *(undefined4 *)(iVar4 + -0x24 + iVar2);
        *(undefined4 *)(iVar4 + -0x14 + iVar2) = *(undefined4 *)(iVar4 + -0x20 + iVar2);
        *(undefined4 *)(iVar4 + -0x10 + iVar2) = *(undefined4 *)(iVar4 + -0x1c + iVar2);
        iVar4 = iVar4 + -0x30;
      } while (iVar5 != 0);
    }
    if (param_3 <= iVar1) {
      iVar4 = iVar1 * 0xc;
      iVar1 = (iVar1 - param_3) + 1;
      do {
        iVar5 = param_1[1] + iVar4;
        *(undefined4 *)(iVar5 + 0xc) = *(undefined4 *)(param_1[1] + iVar4);
        iVar4 = iVar4 + -0xc;
        iVar1 = iVar1 + -1;
        *(undefined4 *)(iVar5 + 0x10) = *(undefined4 *)(iVar5 + 4);
        *(undefined4 *)(iVar5 + 0x14) = *(undefined4 *)(iVar5 + 8);
      } while (iVar1 != 0);
    }
  }
  iVar1 = param_1[1];
  param_3 = param_3 * 0xc;
  *(undefined4 *)(iVar1 + param_3) = *param_4;
  *(undefined4 *)(iVar1 + 4 + param_3) = param_4[1];
  *(undefined4 *)(iVar1 + 8 + param_3) = param_4[2];
  *param_2 = param_1[1] + param_3;
  return;
}

// 00E63670  FUN_00e63670  size=101  [between]
void __thiscall FUN_00e63670(int *param_1,int *param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = param_1[2];
  if (iVar1 <= param_1[3]) {
    if (iVar1 < 1) {
      iVar1 = 4;
    }
    else {
      iVar1 = iVar1 * 2;
    }
    iVar1 = FUN_00e614a0(iVar1);
    if (iVar1 == 0) {
      *param_2 = *param_1;
      return;
    }
  }
  iVar1 = param_1[3];
  puVar2 = (undefined4 *)(param_1[1] + iVar1 * 0xc);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = *param_3;
    puVar2[1] = param_3[1];
    puVar2[2] = param_3[2];
  }
  param_1[3] = param_1[3] + 1;
  *param_2 = param_1[1] + iVar1 * 0xc;
  return;
}

// 00E63700  FUN_00e63700  size=43  [between]
void __fastcall FUN_00e63700(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    if (*(int *)(param_1 + 0x10) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 4),0);
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}

// 00E63730  FUN_00e63730  size=108  [between]
void __thiscall FUN_00e63730(int *param_1,int *param_2,int param_3,undefined1 *param_4)

{
  int iVar1;
  
  iVar1 = param_1[2];
  if (iVar1 <= param_1[3]) {
    if (iVar1 < 1) {
      iVar1 = 4;
    }
    else {
      iVar1 = iVar1 * 2;
    }
    iVar1 = FUN_00e616b0(iVar1);
    if (iVar1 == 0) {
      *param_2 = *param_1;
      return;
    }
  }
  param_1[3] = param_1[3] + 1;
  for (iVar1 = param_1[3] + -2; param_3 <= iVar1; iVar1 = iVar1 + -1) {
    ((undefined1 *)(iVar1 + param_1[1]))[1] = *(undefined1 *)(iVar1 + param_1[1]);
  }
  *(undefined1 *)(param_3 + param_1[1]) = *param_4;
  *param_2 = param_1[1] + param_3;
  return;
}

// 00E637C0  FUN_00e637c0  size=43  [between]
void __fastcall FUN_00e637c0(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    if (*(int *)(param_1 + 0x10) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 4),0);
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}

// 00E63810  FUN_00e63810  size=43  [between]
void __fastcall FUN_00e63810(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    if (*(int *)(param_1 + 0x10) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 4),0);
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}

// 00E63840  FUN_00e63840  size=196  [between]
void __thiscall FUN_00e63840(int *param_1,int *param_2,int param_3,undefined4 *param_4)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_1[2];
  if (iVar2 <= param_1[3]) {
    if (iVar2 < 1) {
      iVar2 = 4;
    }
    else {
      iVar2 = iVar2 * 2;
    }
    iVar2 = FUN_00e61860(iVar2);
    if (iVar2 == 0) {
      *param_2 = *param_1;
      return;
    }
  }
  param_1[3] = param_1[3] + 1;
  iVar2 = param_1[3] + -2;
  if (param_3 <= iVar2) {
    if (3 < (iVar2 - param_3) + 1) {
      do {
        *(undefined4 *)(param_1[1] + iVar2 * 4 + 4) = *(undefined4 *)(param_1[1] + iVar2 * 4);
        *(undefined4 *)(param_1[1] + iVar2 * 4) = *(undefined4 *)(param_1[1] + -4 + iVar2 * 4);
        iVar1 = iVar2 * 4;
        iVar2 = iVar2 + -4;
        *(undefined4 *)(param_1[1] + 0xc + iVar2 * 4) = *(undefined4 *)(param_1[1] + -8 + iVar1);
        *(undefined4 *)(param_1[1] + 8 + iVar2 * 4) = *(undefined4 *)(param_1[1] + 4 + iVar2 * 4);
      } while (param_3 + 3 <= iVar2);
    }
    for (; param_3 <= iVar2; iVar2 = iVar2 + -1) {
      *(undefined4 *)(param_1[1] + iVar2 * 4 + 4) = *(undefined4 *)(param_1[1] + iVar2 * 4);
    }
  }
  *(undefined4 *)(param_3 * 4 + param_1[1]) = *param_4;
  *param_2 = param_1[1] + param_3 * 4;
  return;
}

// 00E63910  FUN_00e63910  size=89  [between]
void __thiscall FUN_00e63910(int *param_1,int *param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = param_1[2];
  if (iVar1 <= param_1[3]) {
    if (iVar1 < 1) {
      iVar1 = 4;
    }
    else {
      iVar1 = iVar1 * 2;
    }
    iVar1 = FUN_00e61860(iVar1);
    if (iVar1 == 0) {
      *param_2 = *param_1;
      return;
    }
  }
  iVar1 = param_1[3];
  puVar2 = (undefined4 *)(param_1[1] + iVar1 * 4);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = *param_3;
  }
  param_1[3] = param_1[3] + 1;
  *param_2 = param_1[1] + iVar1 * 4;
  return;
}

// 00E63970  FUN_00e63970  size=204  [between]
void __thiscall FUN_00e63970(int param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  if (*(int *)(param_2 + 0xc) == 0) {
    if (*(int *)(param_1 + 4) != 0) {
      *(undefined4 *)(param_1 + 0xc) = 0;
      if (*(int *)(param_1 + 0x10) != 0) {
        FUN_00dd48d0(*(int *)(param_1 + 4),0);
        *(undefined4 *)(param_1 + 0x10) = 0;
      }
      *(undefined4 *)(param_1 + 4) = 0;
      *(undefined4 *)(param_1 + 8) = 0;
      return;
    }
  }
  else {
    puVar1 = (undefined4 *)FUN_00dd29b0(*(int *)(param_2 + 0xc) * 4,0x20,0,0);
    if (puVar1 == (undefined4 *)0x0) {
      FUN_00dd5650(&DAT_016ce844);
      return;
    }
    if (*(int *)(param_1 + 4) != 0) {
      *(undefined4 *)(param_1 + 0xc) = 0;
      if (*(int *)(param_1 + 0x10) != 0) {
        FUN_00dd48d0(*(int *)(param_1 + 4),0);
        *(undefined4 *)(param_1 + 0x10) = 0;
      }
      *(undefined4 *)(param_1 + 4) = 0;
      *(undefined4 *)(param_1 + 8) = 0;
    }
    *(undefined4 **)(param_1 + 4) = puVar1;
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 0xc);
    *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
    *(undefined4 *)(param_1 + 0x10) = 1;
    iVar2 = 0;
    if (0 < *(int *)(param_2 + 0xc)) {
      do {
        if (puVar1 != (undefined4 *)0x0) {
          *puVar1 = *(undefined4 *)(*(int *)(param_2 + 4) + iVar2 * 4);
        }
        iVar2 = iVar2 + 1;
        puVar1 = puVar1 + 1;
      } while (iVar2 < *(int *)(param_2 + 0xc));
    }
  }
  return;
}

// 00E63A40  FUN_00e63a40  size=21  [between]
undefined4 * __fastcall FUN_00e63a40(undefined4 *param_1)

{
  *param_1 = 0;
  Hw::cHeapFixed::cHeapFixed();
  return param_1;
}

// 00E63B00  FUN_00e63b00  size=256  [between]
void __thiscall FUN_00e63b00(int param_1,int param_2,int param_3,int param_4)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *local_24;
  int local_20;
  int local_1c;
  int local_18;
  undefined1 auStack_14 [16];
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)&local_24;
  if (0 < *(int *)(param_1 + 0x10)) {
    local_24 = (int *)(*(int *)(param_1 + 8) + 0x18);
    local_20 = *(int *)(param_1 + 0x10);
    do {
      iVar5 = *local_24;
      local_1c = local_24[-2];
      iVar4 = 0;
      local_18 = iVar5;
      if (0 < iVar5) {
        do {
          piVar1 = *(int **)(local_1c + iVar4 * 4);
          piVar2 = (int *)(**(code **)(*piVar1 + 0x5c))();
          if ((*piVar2 == param_3) && (piVar2[1] == param_4)) {
            iVar5 = piVar2[2];
            FUN_00a7c800();
            piVar1[0x44] = param_2;
            iVar3 = FUN_00a12210(iVar5);
            piVar1[0x45] = iVar3;
            if (iVar3 == 0) {
              FUN_009f8ea0(auStack_14,0x10,*(undefined4 *)(param_2 + 0x24),0);
              FUN_00dd5650(&DAT_016ce4a0,auStack_14,iVar5);
            }
            else {
              D3DXMatrixInverse(piVar1 + 4,0,iVar3 + 0x10);
            }
            FUN_00e52160();
            iVar5 = local_18;
          }
          iVar4 = iVar4 + 1;
        } while (iVar4 < iVar5);
      }
      local_24 = local_24 + 0x11;
      local_20 = local_20 + -1;
    } while (local_20 != 0);
    local_20 = 0;
  }
  __security_check_cookie(local_4 ^ (uint)&local_24);
  return;
}

// 00E63D00  FUN_00e63d00  size=21  [between]
undefined4 * __fastcall FUN_00e63d00(undefined4 *param_1)

{
  *param_1 = 0;
  Hw::cHeapFixed::cHeapFixed();
  return param_1;
}

// 00E63D80  FUN_00e63d80  size=21  [between]
undefined4 * __fastcall FUN_00e63d80(undefined4 *param_1)

{
  *param_1 = 0;
  Hw::cHeapFixed::cHeapFixed();
  return param_1;
}

// 00E63E80  FUN_00e63e80  size=256  [between]
void __thiscall FUN_00e63e80(int param_1,int param_2,int param_3,int param_4)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *local_24;
  int local_20;
  int local_1c;
  int local_18;
  undefined1 auStack_14 [16];
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)&local_24;
  if (0 < *(int *)(param_1 + 0x10)) {
    local_24 = (int *)(*(int *)(param_1 + 8) + 0x18);
    local_20 = *(int *)(param_1 + 0x10);
    do {
      iVar5 = *local_24;
      local_1c = local_24[-2];
      iVar4 = 0;
      local_18 = iVar5;
      if (0 < iVar5) {
        do {
          piVar1 = *(int **)(local_1c + iVar4 * 4);
          piVar2 = (int *)(**(code **)(*piVar1 + 0x5c))();
          if ((*piVar2 == param_3) && (piVar2[1] == param_4)) {
            iVar5 = piVar2[2];
            FUN_00a7c800();
            piVar1[0x44] = param_2;
            iVar3 = FUN_00a12210(iVar5);
            piVar1[0x45] = iVar3;
            if (iVar3 == 0) {
              FUN_009f8ea0(auStack_14,0x10,*(undefined4 *)(param_2 + 0x24),0);
              FUN_00dd5650(&DAT_016ce4a0,auStack_14,iVar5);
            }
            else {
              D3DXMatrixInverse(piVar1 + 4,0,iVar3 + 0x10);
            }
            FUN_00e52160();
            iVar5 = local_18;
          }
          iVar4 = iVar4 + 1;
        } while (iVar4 < iVar5);
      }
      local_24 = local_24 + 0x20;
      local_20 = local_20 + -1;
    } while (local_20 != 0);
    local_20 = 0;
  }
  __security_check_cookie(local_4 ^ (uint)&local_24);
  return;
}

// 00E64080  FUN_00e64080  size=58  [between]
int __thiscall FUN_00e64080(int param_1,byte param_2)

{
  if ((*(byte *)(param_1 + 0x24) & 1) != 0) {
    if (*(int *)(param_1 + 4) != 0) {
      thunk_FUN_00df2950(*(int *)(param_1 + 4));
    }
    *(uint *)(param_1 + 0x24) = *(uint *)(param_1 + 0x24) & 0xfffffffe;
  }
  FUN_00e52740();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00E640C0  FUN_00e640c0  size=106  [between]
int __thiscall FUN_00e640c0(int param_1,byte param_2)

{
  if ((*(byte *)(param_1 + 0x24) & 1) != 0) {
    FUN_00df3b40(*(undefined4 *)(param_1 + 0x40),1);
    FUN_00df3b40(*(undefined4 *)(param_1 + 0x44),1);
    FUN_00df39f0(*(undefined4 *)(param_1 + 0x3c));
    *(undefined4 *)(param_1 + 0x3c) = 0;
    *(undefined4 *)(param_1 + 0x40) = 0;
    *(undefined4 *)(param_1 + 0x44) = 0;
    if (*(int *)(param_1 + 4) != 0) {
      thunk_FUN_00df2950(*(int *)(param_1 + 4));
    }
    *(uint *)(param_1 + 0x24) = *(uint *)(param_1 + 0x24) & 0xcffffffe;
  }
  FUN_00e52740();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00E64190  FUN_00e64190  size=59  [between]
void __fastcall FUN_00e64190(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = (**(code **)(*(int *)(param_1 + 8) + 0x1c))(0);
  while (iVar1 = iVar2, iVar1 != 0) {
    iVar2 = (**(code **)(*(int *)(param_1 + 8) + 0x1c))(iVar1);
    if (iVar1 != 0) {
      FUN_00dd4920(iVar1);
    }
  }
  return;
}

// 00E64210  FUN_00e64210  size=59  [between]
void __fastcall FUN_00e64210(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = (**(code **)(*(int *)(param_1 + 8) + 0x1c))(0);
  while (iVar1 = iVar2, iVar1 != 0) {
    iVar2 = (**(code **)(*(int *)(param_1 + 8) + 0x1c))(iVar1);
    if (iVar1 != 0) {
      FUN_00dd4920(iVar1);
    }
  }
  return;
}

// 00E642B0  FUN_00e642b0  size=59  [between]
void __fastcall FUN_00e642b0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = (**(code **)(*(int *)(param_1 + 8) + 0x1c))(0);
  while (iVar1 = iVar2, iVar1 != 0) {
    iVar2 = (**(code **)(*(int *)(param_1 + 8) + 0x1c))(iVar1);
    if (iVar1 != 0) {
      FUN_00dd4920(iVar1);
    }
  }
  return;
}

// 00E643A0  FUN_00e643a0  size=198  [between]
void __fastcall FUN_00e643a0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int local_8;
  int local_4;
  
  if ((*(int *)(param_1 + 0x10) != 0) && (local_4 = 0, 0 < *(int *)(param_1 + 0xc))) {
    local_8 = 0;
    do {
      iVar3 = *(int *)(param_1 + 4) + local_8;
      if ((*(byte *)(iVar3 + 0x24) & 1) != 0) {
        if (*(int *)(iVar3 + 4) != 0) {
          thunk_FUN_00df2950(*(int *)(iVar3 + 4));
        }
        *(uint *)(iVar3 + 0x24) = *(uint *)(iVar3 + 0x24) & 0xfffffffe;
      }
      iVar1 = *(int *)(iVar3 + 0x18);
      if (0 < iVar1) {
        iVar4 = 0;
        do {
          puVar2 = *(undefined4 **)(*(int *)(iVar3 + 0x10) + iVar4 * 4);
          if (puVar2 != (undefined4 *)0x0) {
            (**(code **)*puVar2)(1);
          }
          iVar4 = iVar4 + 1;
        } while (iVar4 < iVar1);
      }
      *(undefined4 *)(iVar3 + 0x18) = 0;
      if (*(int *)(iVar3 + 0x10) != 0) {
        *(undefined4 *)(iVar3 + 0x18) = 0;
        if (*(int *)(iVar3 + 0x1c) != 0) {
          FUN_00dd48d0(*(int *)(iVar3 + 0x10),0);
          *(undefined4 *)(iVar3 + 0x1c) = 0;
        }
        *(undefined4 *)(iVar3 + 0x10) = 0;
        *(undefined4 *)(iVar3 + 0x14) = 0;
      }
      local_8 = local_8 + 0x44;
      local_4 = local_4 + 1;
    } while (local_4 < *(int *)(param_1 + 0xc));
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}

// 00E64470  FUN_00e64470  size=237  [between]
void __fastcall FUN_00e64470(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 local_c;
  undefined4 local_4;
  
  if ((*(int *)(param_1 + 0x10) != 0) && (local_4 = 0, 0 < *(int *)(param_1 + 0xc))) {
    local_c = 0;
    do {
      iVar3 = *(int *)(param_1 + 4) + local_c;
      if ((*(byte *)(iVar3 + 0x24) & 1) != 0) {
        FUN_00df3b40(*(undefined4 *)(iVar3 + 0x40),1);
        FUN_00df3b40(*(undefined4 *)(iVar3 + 0x44),1);
        FUN_00df39f0(*(undefined4 *)(iVar3 + 0x3c));
        *(undefined4 *)(iVar3 + 0x3c) = 0;
        *(undefined4 *)(iVar3 + 0x40) = 0;
        *(undefined4 *)(iVar3 + 0x44) = 0;
        if (*(int *)(iVar3 + 4) != 0) {
          thunk_FUN_00df2950(*(int *)(iVar3 + 4));
        }
        *(uint *)(iVar3 + 0x24) = *(uint *)(iVar3 + 0x24) & 0xcffffffe;
      }
      iVar1 = *(int *)(iVar3 + 0x18);
      iVar4 = 0;
      if (0 < iVar1) {
        do {
          puVar2 = *(undefined4 **)(*(int *)(iVar3 + 0x10) + iVar4 * 4);
          if (puVar2 != (undefined4 *)0x0) {
            (**(code **)*puVar2)(1);
          }
          iVar4 = iVar4 + 1;
        } while (iVar4 < iVar1);
      }
      *(undefined4 *)(iVar3 + 0x18) = 0;
      if (*(int *)(iVar3 + 0x10) != 0) {
        *(undefined4 *)(iVar3 + 0x18) = 0;
        if (*(int *)(iVar3 + 0x1c) != 0) {
          FUN_00dd48d0(*(int *)(iVar3 + 0x10),0);
          *(undefined4 *)(iVar3 + 0x1c) = 0;
        }
        *(undefined4 *)(iVar3 + 0x10) = 0;
        *(undefined4 *)(iVar3 + 0x14) = 0;
      }
      local_c = local_c + 0x80;
      local_4 = local_4 + 1;
    } while (local_4 < *(int *)(param_1 + 0xc));
    *(undefined4 *)(param_1 + 0xc) = 0;
    return;
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}

// 00E64570  SoundArea::ShapeLine::ShapeLine  size=53  [class]
void __fastcall SoundArea::ShapeLine::ShapeLine(undefined4 *param_1)

{
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  *param_1 = vftable;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  return;
}

// 00E645B0  SoundArea::Shape::Shape_2  size=73  [class]
void __fastcall SoundArea::Shape::Shape_2(undefined4 *param_1)

{
  *param_1 = ShapeLine::vftable;
  if (param_1[0x51] != 0) {
    param_1[0x53] = 0;
    if (param_1[0x54] != 0) {
      FUN_00dd48d0(param_1[0x51],0);
      param_1[0x54] = 0;
    }
    param_1[0x51] = 0;
    param_1[0x52] = 0;
  }
  *param_1 = vftable;
  return;
}

// 00E64600  SoundArea::ShapeLine::vf00  size=93  [class]
undefined4 * __thiscall SoundArea::ShapeLine::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  if (param_1[0x51] != 0) {
    param_1[0x53] = 0;
    if (param_1[0x54] != 0) {
      FUN_00dd48d0(param_1[0x51],0);
      param_1[0x54] = 0;
    }
    param_1[0x51] = 0;
    param_1[0x52] = 0;
  }
  *param_1 = Shape::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00E64660  SoundArea::ShapePrism::ShapePrism  size=113  [class]
void __fastcall SoundArea::ShapePrism::ShapePrism(undefined4 *param_1)

{
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  *param_1 = vftable;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  param_1[0x5a] = 0;
  param_1[0x5b] = 0;
  param_1[0x5c] = 0;
  param_1[0x5d] = 0;
  param_1[0x5e] = 0;
  param_1[0x5f] = 0;
  return;
}

// 00E646E0  SoundArea::Shape::Shape_3  size=177  [class]
void __fastcall SoundArea::Shape::Shape_3(undefined4 *param_1)

{
  *param_1 = ShapePrism::vftable;
  if (param_1[0x5c] != 0) {
    param_1[0x5e] = 0;
    if (param_1[0x5f] != 0) {
      FUN_00dd48d0(param_1[0x5c],0);
      param_1[0x5f] = 0;
    }
    param_1[0x5c] = 0;
    param_1[0x5d] = 0;
  }
  if (param_1[0x57] != 0) {
    param_1[0x59] = 0;
    if (param_1[0x5a] != 0) {
      FUN_00dd48d0(param_1[0x57],0);
      param_1[0x5a] = 0;
    }
    param_1[0x57] = 0;
    param_1[0x58] = 0;
  }
  if (param_1[0x52] != 0) {
    param_1[0x54] = 0;
    if (param_1[0x55] != 0) {
      FUN_00dd48d0(param_1[0x52],0);
      param_1[0x55] = 0;
    }
    param_1[0x52] = 0;
    param_1[0x53] = 0;
  }
  *param_1 = vftable;
  return;
}

// 00E647A0  SoundArea::ShapePrism::vf00  size=30  [class]
undefined4 __thiscall SoundArea::ShapePrism::vf00(undefined4 param_1,byte param_2)

{
  Shape::Shape_3();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00E647C0  SoundArea::ShapeRail::ShapeRail  size=113  [class]
void __fastcall SoundArea::ShapeRail::ShapeRail(undefined4 *param_1)

{
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  *param_1 = vftable;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  param_1[0x5a] = 0;
  param_1[0x5b] = 0;
  return;
}

// 00E64840  SoundArea::Shape::Shape  size=177  [class]
void __fastcall SoundArea::Shape::Shape(undefined4 *param_1)

{
  *param_1 = ShapeRail::vftable;
  if (param_1[0x58] != 0) {
    param_1[0x5a] = 0;
    if (param_1[0x5b] != 0) {
      FUN_00dd48d0(param_1[0x58],0);
      param_1[0x5b] = 0;
    }
    param_1[0x58] = 0;
    param_1[0x59] = 0;
  }
  if (param_1[0x53] != 0) {
    param_1[0x55] = 0;
    if (param_1[0x56] != 0) {
      FUN_00dd48d0(param_1[0x53],0);
      param_1[0x56] = 0;
    }
    param_1[0x53] = 0;
    param_1[0x54] = 0;
  }
  if (param_1[0x4e] != 0) {
    param_1[0x50] = 0;
    if (param_1[0x51] != 0) {
      FUN_00dd48d0(param_1[0x4e],0);
      param_1[0x51] = 0;
    }
    param_1[0x4e] = 0;
    param_1[0x4f] = 0;
  }
  *param_1 = vftable;
  return;
}

// 00E64900  SoundArea::ShapeRail::vf00  size=30  [class]
undefined4 __thiscall SoundArea::ShapeRail::vf00(undefined4 param_1,byte param_2)

{
  Shape::Shape();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00E64920  FUN_00e64920  size=135  [callgraph]
int __thiscall FUN_00e64920(int param_1,int param_2)

{
  FUN_00e60320(param_2);
  *(undefined4 *)(param_1 + 0x120) = *(undefined4 *)(param_2 + 0x120);
  *(undefined4 *)(param_1 + 0x124) = *(undefined4 *)(param_2 + 0x124);
  *(undefined4 *)(param_1 + 0x128) = *(undefined4 *)(param_2 + 0x128);
  *(undefined4 *)(param_1 + 300) = *(undefined4 *)(param_2 + 300);
  *(undefined4 *)(param_1 + 0x130) = *(undefined4 *)(param_2 + 0x130);
  FUN_00e62390(param_2 + 0x134);
  FUN_00e62390(param_2 + 0x148);
  FUN_00e63970(param_2 + 0x15c);
  return param_1;
}

// 00E649B0  FUN_00e649b0  size=38  [callgraph]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00e649b0(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (iVar1 == 0) {
    iVar1 = (**(code **)(_DAT_00000000 + 0x1c))(0);
    *param_1 = iVar1;
    return;
  }
  iVar1 = (**(code **)(**(int **)(iVar1 + -4) + 0x1c))(iVar1);
  *param_1 = iVar1;
  return;
}

// 00E649E0  FUN_00e649e0  size=38  [callgraph]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00e649e0(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (iVar1 == 0) {
    iVar1 = (**(code **)(_DAT_00000000 + 0x1c))(0);
    *param_1 = iVar1;
    return;
  }
  iVar1 = (**(code **)(**(int **)(iVar1 + -4) + 0x1c))(iVar1);
  *param_1 = iVar1;
  return;
}

// 00E64A10  FUN_00e64a10  size=36  [callgraph]
void __fastcall FUN_00e64a10(int param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*(int *)(param_1 + 8) + 0xc))();
  if (iVar1 != 0) {
    FUN_00e64190();
  }
  Hw::cHeap::cHeap_3();
  return;
}

// 00E64A40  FUN_00e64a40  size=84  [callgraph]
int * FUN_00e64a40(void)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)FUN_00dd2bc0();
  if (piVar1 == (int *)0x0) {
    return (int *)0x0;
  }
  *piVar1 = 0;
  piVar1[1] = 0;
  iVar2 = FUN_00e62ad0(piVar1);
  if (iVar2 != 0) {
    if (*piVar1 == 0) {
      *piVar1 = iVar2;
      return piVar1;
    }
    FUN_00e62b90(iVar2);
  }
  FUN_00e62b90(*piVar1);
  FUN_00dd4920(piVar1);
  return (int *)0x0;
}

// 00E64B60  FUN_00e64b60  size=157  [callgraph]
void __thiscall FUN_00e64b60(int param_1,code *param_2,code *param_3)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  
  if (((uint)param_2 & 0xffffff00) == 0) {
    for (piVar1 = (int *)(**(code **)(*(int *)(param_1 + 8) + 0x1c))(0); piVar1 != (int *)0x0;
        piVar1 = (int *)(**(code **)(*piVar2 + 0x1c))(piVar1)) {
      if ((param_2 == (code *)0x1) || (param_2 == (code *)*piVar1)) {
        (*param_2)();
      }
      if (piVar1 == (int *)0x0) {
        piVar2 = (int *)0x0;
      }
      else {
        piVar2 = (int *)piVar1[-1];
      }
    }
  }
  else {
    uVar3 = (int)param_2 >> 8 & 0xffff;
    if (*(uint *)(param_1 + 0x68) <= uVar3) {
      FUN_00dd5650(&DAT_01663fb0);
      return;
    }
    if (((*(uint *)(*(int *)(param_1 + 0x78) + uVar3 * 8) & 0xffffff00) ==
         ((uint)param_2 & 0xffffff00)) && (*(int *)(*(int *)(param_1 + 0x78) + uVar3 * 8 + 4) != 0))
    {
      (*param_3)();
      return;
    }
  }
  return;
}

// 00E64C00  FUN_00e64c00  size=38  [callgraph]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00e64c00(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (iVar1 == 0) {
    iVar1 = (**(code **)(_DAT_00000000 + 0x1c))(0);
    *param_1 = iVar1;
    return;
  }
  iVar1 = (**(code **)(**(int **)(iVar1 + -4) + 0x1c))(iVar1);
  *param_1 = iVar1;
  return;
}

// 00E64C30  FUN_00e64c30  size=36  [callgraph]
void __fastcall FUN_00e64c30(int param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*(int *)(param_1 + 8) + 0xc))();
  if (iVar1 != 0) {
    FUN_00e64210();
  }
  Hw::cHeap::cHeap_3();
  return;
}

// 00E64C60  FUN_00e64c60  size=42  [callgraph]
void __fastcall FUN_00e64c60(int param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*(int *)(param_1 + 8) + 0xc))();
  if (iVar1 != 0) {
    FUN_00e64210();
                    /* WARNING: Could not recover jumptable at 0x00e64c85. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(int *)(param_1 + 8) + 8))();
    return;
  }
  return;
}

// 00E64C90  FUN_00e64c90  size=38  [callgraph]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00e64c90(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (iVar1 == 0) {
    iVar1 = (**(code **)(_DAT_00000000 + 0x1c))(0);
    *param_1 = iVar1;
    return;
  }
  iVar1 = (**(code **)(**(int **)(iVar1 + -4) + 0x1c))(iVar1);
  *param_1 = iVar1;
  return;
}

// 00E64CC0  FUN_00e64cc0  size=36  [callgraph]
void __fastcall FUN_00e64cc0(int param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*(int *)(param_1 + 8) + 0xc))();
  if (iVar1 != 0) {
    FUN_00e642b0();
  }
  Hw::cHeap::cHeap_3();
  return;
}

// 00E64CF0  FUN_00e64cf0  size=74  [callgraph]
int * FUN_00e64cf0(void)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)FUN_00e62e50();
  if (piVar1 != (int *)0x0) {
    iVar2 = FUN_00e62cc0(piVar1);
    if (iVar2 != 0) {
      if (*piVar1 == 0) {
        *piVar1 = iVar2;
        return piVar1;
      }
      FUN_00e62d80(iVar2);
    }
    FUN_00e62d80(*piVar1);
    FUN_00dd4920(piVar1);
  }
  return (int *)0x0;
}

// 00E64E00  FUN_00e64e00  size=173  [callgraph]
void __thiscall FUN_00e64e00(int param_1,code *param_2,code *param_3,undefined4 param_4)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  
  if (((uint)param_2 & 0xffffff00) == 0) {
    for (piVar1 = (int *)(**(code **)(*(int *)(param_1 + 8) + 0x1c))(0); piVar1 != (int *)0x0;
        piVar1 = (int *)(**(code **)(*piVar2 + 0x1c))(piVar1)) {
      if ((param_2 == (code *)0x1) || (param_2 == (code *)*piVar1)) {
        (*param_2)(param_3);
      }
      if (piVar1 == (int *)0x0) {
        piVar2 = (int *)0x0;
      }
      else {
        piVar2 = (int *)piVar1[-1];
      }
    }
  }
  else {
    uVar3 = (int)param_2 >> 8 & 0xffff;
    if (*(uint *)(param_1 + 0x68) <= uVar3) {
      FUN_00dd5650(&DAT_01663fb0);
      return;
    }
    if (((*(uint *)(*(int *)(param_1 + 0x78) + uVar3 * 8) & 0xffffff00) ==
         ((uint)param_2 & 0xffffff00)) && (*(int *)(*(int *)(param_1 + 0x78) + uVar3 * 8 + 4) != 0))
    {
      (*param_3)(param_4);
      return;
    }
  }
  return;
}

// 00E64EB0  FUN_00e64eb0  size=189  [callgraph]
void __thiscall
FUN_00e64eb0(int param_1,code *param_2,code *param_3,undefined4 param_4,undefined4 param_5)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  
  if (((uint)param_2 & 0xffffff00) == 0) {
    for (piVar1 = (int *)(**(code **)(*(int *)(param_1 + 8) + 0x1c))(0); piVar1 != (int *)0x0;
        piVar1 = (int *)(**(code **)(*piVar2 + 0x1c))(piVar1)) {
      if ((param_2 == (code *)0x1) || (param_2 == (code *)*piVar1)) {
        (*param_2)(param_3,param_4);
      }
      if (piVar1 == (int *)0x0) {
        piVar2 = (int *)0x0;
      }
      else {
        piVar2 = (int *)piVar1[-1];
      }
    }
  }
  else {
    uVar3 = (int)param_2 >> 8 & 0xffff;
    if (*(uint *)(param_1 + 0x68) <= uVar3) {
      FUN_00dd5650(&DAT_01663fb0);
      return;
    }
    if (((*(uint *)(*(int *)(param_1 + 0x78) + uVar3 * 8) & 0xffffff00) ==
         ((uint)param_2 & 0xffffff00)) && (*(int *)(*(int *)(param_1 + 0x78) + uVar3 * 8 + 4) != 0))
    {
      (*param_3)(param_4,param_5);
      return;
    }
  }
  return;
}

// 00E64F70  FUN_00e64f70  size=182  [callgraph]
void __thiscall
FUN_00e64f70(int param_1,code *param_2,code *param_3,undefined4 param_4,undefined4 param_5)

{
  uint *puVar1;
  int *piVar2;
  int *piVar3;
  uint uVar4;
  
  if (((uint)param_2 & 0xffffff00) == 0) {
    for (piVar2 = (int *)(**(code **)(*(int *)(param_1 + 8) + 0x1c))(0); piVar2 != (int *)0x0;
        piVar2 = (int *)(**(code **)(*piVar3 + 0x1c))(piVar2)) {
      if ((param_2 == (code *)0x1) || (param_2 == (code *)*piVar2)) {
        (*param_2)(param_3,param_4);
      }
      if (piVar2 == (int *)0x0) {
        piVar3 = (int *)0x0;
      }
      else {
        piVar3 = (int *)piVar2[-1];
      }
    }
  }
  else {
    uVar4 = (int)param_2 >> 8 & 0xffff;
    if (*(uint *)(param_1 + 0x68) <= uVar4) {
      FUN_00dd5650(&DAT_01663fb0);
      return;
    }
    puVar1 = (uint *)(*(int *)(param_1 + 0x78) + uVar4 * 8);
    if (((*puVar1 & 0xffffff00) == ((uint)param_2 & 0xffffff00)) && (puVar1[1] != 0)) {
      (*param_3)(param_4,param_5);
      return;
    }
  }
  return;
}

// 00E650E0  FUN_00e650e0  size=58  [callgraph]
int __thiscall FUN_00e650e0(int param_1,byte param_2)

{
  if ((*(byte *)(param_1 + 0x24) & 1) != 0) {
    if (*(int *)(param_1 + 4) != 0) {
      thunk_FUN_00df2950(*(int *)(param_1 + 4));
    }
    *(uint *)(param_1 + 0x24) = *(uint *)(param_1 + 0x24) & 0xfffffffe;
  }
  FUN_00e52740();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00E65160  FUN_00e65160  size=42  [callgraph]
void __fastcall FUN_00e65160(int param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*(int *)(param_1 + 8) + 0xc))();
  if (iVar1 != 0) {
    FUN_00e64190();
                    /* WARNING: Could not recover jumptable at 0x00e65185. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(int *)(param_1 + 8) + 8))();
    return;
  }
  return;
}

// 00E65190  FUN_00e65190  size=57  [callgraph]
void __fastcall FUN_00e65190(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    FUN_00e643a0();
    if (*(int *)(param_1 + 0x10) != 0) {
      FUN_00dd48d0(*(undefined4 *)(param_1 + 4),0);
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}

// 00E651D0  FUN_00e651d0  size=42  [callgraph]
void __fastcall FUN_00e651d0(int param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*(int *)(param_1 + 8) + 0xc))();
  if (iVar1 != 0) {
    FUN_00e642b0();
                    /* WARNING: Could not recover jumptable at 0x00e651f5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(int *)(param_1 + 8) + 8))();
    return;
  }
  return;
}

// 00E65200  FUN_00e65200  size=57  [callgraph]
void __fastcall FUN_00e65200(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    FUN_00e64470();
    if (*(int *)(param_1 + 0x10) != 0) {
      FUN_00dd48d0(*(undefined4 *)(param_1 + 4),0);
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}

// 00E65240  FUN_00e65240  size=201  [callgraph]
void __fastcall FUN_00e65240(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int local_8;
  int local_4;
  
  if ((*(int *)(param_1 + 0x10) != 0) && (local_4 = 0, 0 < *(int *)(param_1 + 0xc))) {
    local_8 = 0;
    do {
      iVar3 = *(int *)(param_1 + 4) + local_8;
      if ((*(byte *)(iVar3 + 0x24) & 1) != 0) {
        if (*(int *)(iVar3 + 4) != 0) {
          thunk_FUN_00df2950(*(int *)(iVar3 + 4));
        }
        *(uint *)(iVar3 + 0x24) = *(uint *)(iVar3 + 0x24) & 0xfffffffe;
      }
      iVar1 = *(int *)(iVar3 + 0x18);
      if (0 < iVar1) {
        iVar4 = 0;
        do {
          puVar2 = *(undefined4 **)(*(int *)(iVar3 + 0x10) + iVar4 * 4);
          if (puVar2 != (undefined4 *)0x0) {
            (**(code **)*puVar2)(1);
          }
          iVar4 = iVar4 + 1;
        } while (iVar4 < iVar1);
      }
      *(undefined4 *)(iVar3 + 0x18) = 0;
      if (*(int *)(iVar3 + 0x10) != 0) {
        *(undefined4 *)(iVar3 + 0x18) = 0;
        if (*(int *)(iVar3 + 0x1c) != 0) {
          FUN_00dd48d0(*(int *)(iVar3 + 0x10),0);
          *(undefined4 *)(iVar3 + 0x1c) = 0;
        }
        *(undefined4 *)(iVar3 + 0x10) = 0;
        *(undefined4 *)(iVar3 + 0x14) = 0;
      }
      local_8 = local_8 + 0xa0;
      local_4 = local_4 + 1;
    } while (local_4 < *(int *)(param_1 + 0xc));
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}

// 00E65310  FUN_00e65310  size=21  [callgraph]
undefined4 * __fastcall FUN_00e65310(undefined4 *param_1)

{
  *param_1 = 0;
  Hw::cHeapFixed::cHeapFixed();
  return param_1;
}

// 00E65330  FUN_00e65330  size=36  [callgraph]
void __fastcall FUN_00e65330(int param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*(int *)(param_1 + 8) + 0xc))();
  if (iVar1 != 0) {
    FUN_00e64190();
  }
  Hw::cHeap::cHeap_3();
  return;
}

// 00E65360  FUN_00e65360  size=21  [callgraph]
undefined4 * __fastcall FUN_00e65360(undefined4 *param_1)

{
  *param_1 = 0;
  Hw::cHeapFixed::cHeapFixed();
  return param_1;
}

// 00E65380  FUN_00e65380  size=36  [callgraph]
void __fastcall FUN_00e65380(int param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*(int *)(param_1 + 8) + 0xc))();
  if (iVar1 != 0) {
    FUN_00e64210();
  }
  Hw::cHeap::cHeap_3();
  return;
}

// 00E653E0  FUN_00e653e0  size=21  [callgraph]
undefined4 * __fastcall FUN_00e653e0(undefined4 *param_1)

{
  *param_1 = 0;
  Hw::cHeapFixed::cHeapFixed();
  return param_1;
}

// 00E65400  FUN_00e65400  size=36  [callgraph]
void __fastcall FUN_00e65400(int param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*(int *)(param_1 + 8) + 0xc))();
  if (iVar1 != 0) {
    FUN_00e642b0();
  }
  Hw::cHeap::cHeap_3();
  return;
}

// 00E65430  FUN_00e65430  size=74  [callgraph]
void __fastcall FUN_00e65430(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (**(code **)(*(int *)(param_1 + 8) + 0xc))();
  if (iVar1 != 0) {
    iVar1 = (**(code **)(*(int *)(param_1 + 8) + 0x1c))(0);
    while (iVar1 != 0) {
      iVar2 = (**(code **)(*(int *)(param_1 + 8) + 0x1c))(iVar1);
      FUN_00dd4920(iVar1);
      iVar1 = iVar2;
    }
  }
  Hw::cHeap::cHeap_3();
  return;
}

// 00E65480  FUN_00e65480  size=78  [callgraph]
void __fastcall FUN_00e65480(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  piVar1 = (int *)(param_1 + 8);
  iVar2 = (**(code **)(*(int *)(param_1 + 8) + 0xc))();
  if (iVar2 != 0) {
    iVar2 = (**(code **)(*piVar1 + 0x1c))(0);
    while (iVar2 != 0) {
      iVar3 = (**(code **)(*piVar1 + 0x1c))(iVar2);
      FUN_00dd4920(iVar2);
      iVar2 = iVar3;
    }
                    /* WARNING: Could not recover jumptable at 0x00e654ca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*piVar1 + 8))();
    return;
  }
  return;
}

// 00E654D0  FUN_00e654d0  size=76  [callgraph]
void __fastcall FUN_00e654d0(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x78) != 0) {
    FUN_00dd4940(*(int *)(param_1 + 0x78));
    *(undefined4 *)(param_1 + 0x78) = 0;
    FUN_00dd7270();
  }
  iVar1 = (**(code **)(*(int *)(param_1 + 8) + 0xc))();
  if (iVar1 != 0) {
    FUN_00e64190();
                    /* WARNING: Could not recover jumptable at 0x00e65517. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(int *)(param_1 + 8) + 8))();
    return;
  }
  return;
}

// 00E65520  FUN_00e65520  size=57  [callgraph]
void __fastcall FUN_00e65520(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    FUN_00e643a0();
    if (*(int *)(param_1 + 0x10) != 0) {
      FUN_00dd48d0(*(undefined4 *)(param_1 + 4),0);
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}

// 00E65560  FUN_00e65560  size=76  [callgraph]
void __fastcall FUN_00e65560(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x78) != 0) {
    FUN_00dd4940(*(int *)(param_1 + 0x78));
    *(undefined4 *)(param_1 + 0x78) = 0;
    FUN_00dd7270();
  }
  iVar1 = (**(code **)(*(int *)(param_1 + 8) + 0xc))();
  if (iVar1 != 0) {
    FUN_00e642b0();
                    /* WARNING: Could not recover jumptable at 0x00e655a7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(int *)(param_1 + 8) + 8))();
    return;
  }
  return;
}

// 00E655B0  FUN_00e655b0  size=57  [callgraph]
void __fastcall FUN_00e655b0(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    FUN_00e64470();
    if (*(int *)(param_1 + 0x10) != 0) {
      FUN_00dd48d0(*(undefined4 *)(param_1 + 4),0);
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}

// 00E655F0  FUN_00e655f0  size=57  [callgraph]
void __fastcall FUN_00e655f0(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    FUN_00e65240();
    if (*(int *)(param_1 + 0x10) != 0) {
      FUN_00dd48d0(*(undefined4 *)(param_1 + 4),0);
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}

// 00E65630  FUN_00e65630  size=21  [callgraph]
undefined4 * __fastcall FUN_00e65630(undefined4 *param_1)

{
  *param_1 = 0;
  Hw::cHeapFixed::cHeapFixed();
  return param_1;
}

// 00E65660  FUN_00e65660  size=38  [callgraph]
undefined4 * __fastcall FUN_00e65660(undefined4 *param_1)

{
  *param_1 = 0;
  Hw::cHeapFixed::cHeapFixed();
  param_1[0x1e] = 0;
  param_1[0x26] = 0;
  return param_1;
}

// 00E65690  FUN_00e65690  size=81  [callgraph]
void __fastcall FUN_00e65690(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x78) != 0) {
    FUN_00dd4940(*(int *)(param_1 + 0x78));
    *(undefined4 *)(param_1 + 0x78) = 0;
    FUN_00dd7270();
  }
  FUN_00dd7270();
  iVar1 = (**(code **)(*(int *)(param_1 + 8) + 0xc))();
  if (iVar1 != 0) {
    FUN_00e64190();
  }
  Hw::cHeap::cHeap_3();
  return;
}

// 00E65780  FUN_00e65780  size=38  [callgraph]
undefined4 * __fastcall FUN_00e65780(undefined4 *param_1)

{
  *param_1 = 0;
  Hw::cHeapFixed::cHeapFixed();
  param_1[0x1e] = 0;
  param_1[0x26] = 0;
  return param_1;
}

// 00E657B0  FUN_00e657b0  size=81  [callgraph]
void __fastcall FUN_00e657b0(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x78) != 0) {
    FUN_00dd4940(*(int *)(param_1 + 0x78));
    *(undefined4 *)(param_1 + 0x78) = 0;
    FUN_00dd7270();
  }
  FUN_00dd7270();
  iVar1 = (**(code **)(*(int *)(param_1 + 8) + 0xc))();
  if (iVar1 != 0) {
    FUN_00e642b0();
  }
  Hw::cHeap::cHeap_3();
  return;
}

// 00E65870  FUN_00e65870  size=57  [callgraph]
void __fastcall FUN_00e65870(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    FUN_00e65240();
    if (*(int *)(param_1 + 0x10) != 0) {
      FUN_00dd48d0(*(undefined4 *)(param_1 + 4),0);
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}

// 00E65930  FUN_00e65930  size=145  [callgraph]
int __thiscall FUN_00e65930(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  FUN_00e5a630(param_2);
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_2 + 0x24);
  puVar2 = (undefined4 *)(param_2 + 0x28);
  puVar3 = (undefined4 *)(param_1 + 0x28);
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_2 + 0x70);
  *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(param_2 + 0x74);
  *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_2 + 0x78);
  *(undefined4 *)(param_1 + 0x7c) = *(undefined4 *)(param_2 + 0x7c);
  *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(param_2 + 0x80);
  *(undefined4 *)(param_1 + 0x84) = *(undefined4 *)(param_2 + 0x84);
  *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(param_2 + 0x88);
  *(undefined4 *)(param_1 + 0x8c) = *(undefined4 *)(param_2 + 0x8c);
  *(undefined4 *)(param_1 + 0x90) = *(undefined4 *)(param_2 + 0x90);
  return param_1;
}

// 00E659D0  FUN_00e659d0  size=86  [callgraph]
int __thiscall FUN_00e659d0(int param_1,int param_2)

{
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  FUN_00e5a630(param_2);
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_2 + 0x24);
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
  *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_2 + 0x2c);
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
  *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_2 + 0x34);
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_2 + 0x3c);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
  return param_1;
}

// 00E65A30  FUN_00e65a30  size=152  [callgraph]
int __thiscall FUN_00e65a30(int param_1,int param_2)

{
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  FUN_00e5a630(param_2);
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_2 + 0x24);
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
  *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_2 + 0x2c);
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
  *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_2 + 0x34);
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_2 + 0x3c);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_2 + 0x44);
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_2 + 0x50);
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_2 + 0x54);
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_2 + 0x58);
  *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_2 + 0x5c);
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_2 + 0x60);
  *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_2 + 100);
  *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_2 + 0x68);
  *(undefined4 *)(param_1 + 0x6c) = *(undefined4 *)(param_2 + 0x6c);
  *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_2 + 0x70);
  *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(param_2 + 0x74);
  return param_1;
}

// 00E65AD0  FUN_00e65ad0  size=228  [callgraph]
void __thiscall FUN_00e65ad0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if (*(int *)(param_2 + 0xc) == 0) {
    if (*(int *)(param_1 + 4) != 0) {
      FUN_00e64470();
      if (*(int *)(param_1 + 0x10) != 0) {
        FUN_00dd48d0(*(undefined4 *)(param_1 + 4),0);
        *(undefined4 *)(param_1 + 0x10) = 0;
      }
      *(undefined4 *)(param_1 + 4) = 0;
      *(undefined4 *)(param_1 + 8) = 0;
      return;
    }
  }
  else {
    iVar1 = FUN_00dd29b0(*(int *)(param_2 + 0xc) << 7,0x20,0,0);
    if (iVar1 == 0) {
      FUN_00dd5650(&DAT_016ce844);
      return;
    }
    if (*(int *)(param_1 + 4) != 0) {
      FUN_00e64470();
      if (*(int *)(param_1 + 0x10) != 0) {
        FUN_00dd48d0(*(undefined4 *)(param_1 + 4),0);
        *(undefined4 *)(param_1 + 0x10) = 0;
      }
      *(undefined4 *)(param_1 + 4) = 0;
      *(undefined4 *)(param_1 + 8) = 0;
    }
    *(int *)(param_1 + 4) = iVar1;
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 0xc);
    *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
    *(undefined4 *)(param_1 + 0x10) = 1;
    if (0 < *(int *)(param_2 + 0xc)) {
      iVar2 = 0;
      do {
        if (iVar1 != 0) {
          FUN_00e65a30(*(int *)(param_2 + 4) + iVar3);
        }
        iVar2 = iVar2 + 1;
        iVar3 = iVar3 + 0x80;
        iVar1 = iVar1 + 0x80;
      } while (iVar2 < *(int *)(param_2 + 0xc));
    }
  }
  return;
}

// 00E65C20  FUN_00e65c20  size=21  [callgraph]
undefined4 * __fastcall FUN_00e65c20(undefined4 *param_1)

{
  *param_1 = 0;
  Hw::cHeapFixed::cHeapFixed();
  return param_1;
}

// 00E65C50  FUN_00e65c50  size=82  [callgraph]
int __thiscall FUN_00e65c50(int param_1,byte param_2)

{
  if (*(int *)(param_1 + 8) != 0) {
    FUN_00e643a0();
    if (*(int *)(param_1 + 0x14) != 0) {
      FUN_00dd48d0(*(undefined4 *)(param_1 + 8),0);
      *(undefined4 *)(param_1 + 0x14) = 0;
    }
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00E65CB0  FUN_00e65cb0  size=82  [callgraph]
int __thiscall FUN_00e65cb0(int param_1,byte param_2)

{
  if (*(int *)(param_1 + 8) != 0) {
    FUN_00e64470();
    if (*(int *)(param_1 + 0x14) != 0) {
      FUN_00dd48d0(*(undefined4 *)(param_1 + 8),0);
      *(undefined4 *)(param_1 + 0x14) = 0;
    }
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00E65D50  FUN_00e65d50  size=234  [callgraph]
void __thiscall FUN_00e65d50(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if (*(int *)(param_2 + 0xc) == 0) {
    if (*(int *)(param_1 + 4) != 0) {
      FUN_00e65240();
      if (*(int *)(param_1 + 0x10) != 0) {
        FUN_00dd48d0(*(undefined4 *)(param_1 + 4),0);
        *(undefined4 *)(param_1 + 0x10) = 0;
      }
      *(undefined4 *)(param_1 + 4) = 0;
      *(undefined4 *)(param_1 + 8) = 0;
      return;
    }
  }
  else {
    iVar1 = FUN_00dd29b0(*(int *)(param_2 + 0xc) * 0xa0,0x20,0,0);
    if (iVar1 == 0) {
      FUN_00dd5650(&DAT_016ce844);
      return;
    }
    if (*(int *)(param_1 + 4) != 0) {
      FUN_00e65240();
      if (*(int *)(param_1 + 0x10) != 0) {
        FUN_00dd48d0(*(undefined4 *)(param_1 + 4),0);
        *(undefined4 *)(param_1 + 0x10) = 0;
      }
      *(undefined4 *)(param_1 + 4) = 0;
      *(undefined4 *)(param_1 + 8) = 0;
    }
    *(int *)(param_1 + 4) = iVar1;
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 0xc);
    *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
    *(undefined4 *)(param_1 + 0x10) = 1;
    iVar2 = 0;
    if (0 < *(int *)(param_2 + 0xc)) {
      do {
        if (iVar1 != 0) {
          FUN_00e65930(*(int *)(param_2 + 4) + iVar3);
        }
        iVar2 = iVar2 + 1;
        iVar3 = iVar3 + 0xa0;
        iVar1 = iVar1 + 0xa0;
      } while (iVar2 < *(int *)(param_2 + 0xc));
    }
  }
  return;
}

// 00E65E40  FUN_00e65e40  size=309  [callgraph]
undefined4 __thiscall FUN_00e65e40(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (*(int *)(param_1 + 8) == param_2) {
    return 1;
  }
  iVar1 = FUN_00dd29b0(param_2 * 0xa0,0x20,0,0);
  if (iVar1 != 0) {
    if (*(int *)(param_1 + 0xc) < param_2) {
      iVar3 = 0;
      if (0 < *(int *)(param_1 + 0xc)) {
        iVar2 = 0;
        iVar4 = iVar1;
        do {
          if (iVar4 != 0) {
            FUN_00e65930(*(int *)(param_1 + 4) + iVar2);
          }
          iVar3 = iVar3 + 1;
          iVar2 = iVar2 + 0xa0;
          iVar4 = iVar4 + 0xa0;
        } while (iVar3 < *(int *)(param_1 + 0xc));
      }
    }
    else {
      if (0 < param_2) {
        iVar2 = 0;
        iVar3 = param_2;
        iVar4 = iVar1;
        do {
          if (iVar4 != 0) {
            FUN_00e65930(*(int *)(param_1 + 4) + iVar2);
          }
          iVar2 = iVar2 + 0xa0;
          iVar4 = iVar4 + 0xa0;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
      if ((*(int *)(param_1 + 0x10) != 0) && (iVar3 = 0, 0 < *(int *)(param_1 + 0xc))) {
        iVar4 = 0;
        do {
          iVar2 = *(int *)(param_1 + 4) + iVar4;
          if ((*(byte *)(iVar2 + 0x24) & 1) != 0) {
            if (*(int *)(iVar2 + 4) != 0) {
              thunk_FUN_00df2950(*(int *)(iVar2 + 4));
            }
            *(uint *)(iVar2 + 0x24) = *(uint *)(iVar2 + 0x24) & 0xfffffffe;
          }
          FUN_00e52740();
          iVar3 = iVar3 + 1;
          iVar4 = iVar4 + 0xa0;
        } while (iVar3 < *(int *)(param_1 + 0xc));
      }
      *(int *)(param_1 + 0xc) = param_2;
    }
    if (*(int *)(param_1 + 0x10) != 0) {
      FUN_00dd48d0(*(undefined4 *)(param_1 + 4),0);
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    *(int *)(param_1 + 8) = param_2;
    *(int *)(param_1 + 4) = iVar1;
    *(undefined4 *)(param_1 + 0x10) = 1;
    return 1;
  }
  FUN_00dd5650(&DAT_016cd660);
  return 0;
}

// 00E65F80  FUN_00e65f80  size=230  [callgraph]
void __thiscall FUN_00e65f80(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if (*(int *)(param_2 + 0xc) == 0) {
    if (*(int *)(param_1 + 4) != 0) {
      FUN_00e643a0();
      if (*(int *)(param_1 + 0x10) != 0) {
        FUN_00dd48d0(*(undefined4 *)(param_1 + 4),0);
        *(undefined4 *)(param_1 + 0x10) = 0;
      }
      *(undefined4 *)(param_1 + 4) = 0;
      *(undefined4 *)(param_1 + 8) = 0;
      return;
    }
  }
  else {
    iVar1 = FUN_00dd29b0(*(int *)(param_2 + 0xc) * 0x44,0x20,0,0);
    if (iVar1 == 0) {
      FUN_00dd5650(&DAT_016ce844);
      return;
    }
    if (*(int *)(param_1 + 4) != 0) {
      FUN_00e643a0();
      if (*(int *)(param_1 + 0x10) != 0) {
        FUN_00dd48d0(*(undefined4 *)(param_1 + 4),0);
        *(undefined4 *)(param_1 + 0x10) = 0;
      }
      *(undefined4 *)(param_1 + 4) = 0;
      *(undefined4 *)(param_1 + 8) = 0;
    }
    *(int *)(param_1 + 4) = iVar1;
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 0xc);
    *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
    *(undefined4 *)(param_1 + 0x10) = 1;
    iVar2 = 0;
    if (0 < *(int *)(param_2 + 0xc)) {
      do {
        if (iVar1 != 0) {
          FUN_00e659d0(*(int *)(param_2 + 4) + iVar3);
        }
        iVar2 = iVar2 + 1;
        iVar3 = iVar3 + 0x44;
        iVar1 = iVar1 + 0x44;
      } while (iVar2 < *(int *)(param_2 + 0xc));
    }
  }
  return;
}

// 00E66070  FUN_00e66070  size=315  [callgraph]
undefined4 __thiscall FUN_00e66070(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (*(int *)(param_1 + 8) == param_2) {
    return 1;
  }
  iVar1 = FUN_00dd29b0(param_2 * 0x44,0x20,0,0);
  if (iVar1 != 0) {
    if (*(int *)(param_1 + 0xc) < param_2) {
      iVar3 = 0;
      if (0 < *(int *)(param_1 + 0xc)) {
        iVar2 = 0;
        iVar4 = iVar1;
        do {
          if (iVar4 != 0) {
            FUN_00e659d0(*(int *)(param_1 + 4) + iVar2);
          }
          iVar3 = iVar3 + 1;
          iVar2 = iVar2 + 0x44;
          iVar4 = iVar4 + 0x44;
        } while (iVar3 < *(int *)(param_1 + 0xc));
      }
    }
    else {
      if (0 < param_2) {
        iVar2 = 0;
        iVar3 = param_2;
        iVar4 = iVar1;
        do {
          if (iVar4 != 0) {
            FUN_00e659d0(*(int *)(param_1 + 4) + iVar2);
          }
          iVar2 = iVar2 + 0x44;
          iVar4 = iVar4 + 0x44;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
      if ((*(int *)(param_1 + 0x10) != 0) && (iVar3 = 0, 0 < *(int *)(param_1 + 0xc))) {
        iVar4 = 0;
        do {
          iVar2 = *(int *)(param_1 + 4) + iVar4;
          if ((*(byte *)(iVar2 + 0x24) & 1) != 0) {
            if (*(int *)(iVar2 + 4) != 0) {
              thunk_FUN_00df2950(*(int *)(iVar2 + 4));
            }
            *(uint *)(iVar2 + 0x24) = *(uint *)(iVar2 + 0x24) & 0xfffffffe;
          }
          FUN_00e52740();
          iVar3 = iVar3 + 1;
          iVar4 = iVar4 + 0x44;
        } while (iVar3 < *(int *)(param_1 + 0xc));
      }
      *(int *)(param_1 + 0xc) = param_2;
    }
    if (*(int *)(param_1 + 0x10) != 0) {
      FUN_00dd48d0(*(undefined4 *)(param_1 + 4),0);
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    *(int *)(param_1 + 8) = param_2;
    *(int *)(param_1 + 4) = iVar1;
    *(undefined4 *)(param_1 + 0x10) = 1;
    return 1;
  }
  FUN_00dd5650(&DAT_016cd660);
  return 0;
}

// 00E661B0  FUN_00e661b0  size=108  [callgraph]
void __fastcall FUN_00e661b0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = 0;
  if (*(int *)(param_1 + 0x10) == 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    return;
  }
  iVar2 = 0;
  if (*(int *)(param_1 + 0xc) < 1) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    return;
  }
  do {
    iVar3 = *(int *)(param_1 + 4) + iVar1;
    if (*(int *)(iVar3 + 8) != 0) {
      FUN_00e643a0();
      if (*(int *)(iVar3 + 0x14) != 0) {
        FUN_00dd48d0(*(undefined4 *)(iVar3 + 8),0);
        *(undefined4 *)(iVar3 + 0x14) = 0;
      }
      *(undefined4 *)(iVar3 + 8) = 0;
      *(undefined4 *)(iVar3 + 0xc) = 0;
    }
    iVar2 = iVar2 + 1;
    iVar1 = iVar1 + 0x2c;
  } while (iVar2 < *(int *)(param_1 + 0xc));
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}

// 00E66220  FUN_00e66220  size=347  [callgraph]
undefined4 __thiscall FUN_00e66220(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (*(int *)(param_1 + 8) == param_2) {
    return 1;
  }
  iVar1 = FUN_00dd29b0(param_2 << 7,0x20,0,0);
  if (iVar1 != 0) {
    if (*(int *)(param_1 + 0xc) < param_2) {
      iVar3 = 0;
      if (0 < *(int *)(param_1 + 0xc)) {
        iVar2 = 0;
        iVar4 = iVar1;
        do {
          if (iVar4 != 0) {
            FUN_00e65a30(*(int *)(param_1 + 4) + iVar2);
          }
          iVar3 = iVar3 + 1;
          iVar2 = iVar2 + 0x80;
          iVar4 = iVar4 + 0x80;
        } while (iVar3 < *(int *)(param_1 + 0xc));
      }
    }
    else {
      if (0 < param_2) {
        iVar2 = 0;
        iVar3 = param_2;
        iVar4 = iVar1;
        do {
          if (iVar4 != 0) {
            FUN_00e65a30(*(int *)(param_1 + 4) + iVar2);
          }
          iVar2 = iVar2 + 0x80;
          iVar4 = iVar4 + 0x80;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
      if ((*(int *)(param_1 + 0x10) != 0) && (iVar3 = 0, 0 < *(int *)(param_1 + 0xc))) {
        iVar4 = 0;
        do {
          iVar2 = *(int *)(param_1 + 4) + iVar4;
          if ((*(byte *)(iVar2 + 0x24) & 1) != 0) {
            FUN_00df3b40(*(undefined4 *)(iVar2 + 0x40),1);
            FUN_00df3b40(*(undefined4 *)(iVar2 + 0x44),1);
            FUN_00df39f0(*(undefined4 *)(iVar2 + 0x3c));
            *(undefined4 *)(iVar2 + 0x3c) = 0;
            *(undefined4 *)(iVar2 + 0x40) = 0;
            *(undefined4 *)(iVar2 + 0x44) = 0;
            if (*(int *)(iVar2 + 4) != 0) {
              thunk_FUN_00df2950(*(int *)(iVar2 + 4));
            }
            *(uint *)(iVar2 + 0x24) = *(uint *)(iVar2 + 0x24) & 0xcffffffe;
          }
          FUN_00e52740();
          iVar3 = iVar3 + 1;
          iVar4 = iVar4 + 0x80;
        } while (iVar3 < *(int *)(param_1 + 0xc));
      }
      *(int *)(param_1 + 0xc) = param_2;
    }
    if (*(int *)(param_1 + 0x10) != 0) {
      FUN_00dd48d0(*(undefined4 *)(param_1 + 4),0);
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    *(int *)(param_1 + 8) = param_2;
    *(int *)(param_1 + 4) = iVar1;
    *(undefined4 *)(param_1 + 0x10) = 1;
    return 1;
  }
  FUN_00dd5650(&DAT_016cd660);
  return 0;
}

// 00E66380  FUN_00e66380  size=108  [callgraph]
void __fastcall FUN_00e66380(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = 0;
  if (*(int *)(param_1 + 0x10) == 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    return;
  }
  iVar2 = 0;
  if (*(int *)(param_1 + 0xc) < 1) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    return;
  }
  do {
    iVar3 = *(int *)(param_1 + 4) + iVar1;
    if (*(int *)(iVar3 + 8) != 0) {
      FUN_00e64470();
      if (*(int *)(iVar3 + 0x14) != 0) {
        FUN_00dd48d0(*(undefined4 *)(iVar3 + 8),0);
        *(undefined4 *)(iVar3 + 0x14) = 0;
      }
      *(undefined4 *)(iVar3 + 8) = 0;
      *(undefined4 *)(iVar3 + 0xc) = 0;
    }
    iVar2 = iVar2 + 1;
    iVar1 = iVar1 + 0x2c;
  } while (iVar2 < *(int *)(param_1 + 0xc));
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}

// 00E66480  FUN_00e66480  size=201  [callgraph]
int __thiscall FUN_00e66480(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if ((*(int *)(param_1 + 8) < param_2) && (iVar1 = FUN_00e65e40(param_2), iVar1 == 0)) {
    FUN_00dd5650(&DAT_016cdba0);
    return 0;
  }
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 != param_2) {
    if (iVar1 < param_2) {
      iVar2 = iVar1 * 0xa0;
      iVar1 = param_2 - iVar1;
      do {
        iVar3 = iVar1;
        iVar1 = *(int *)(param_1 + 4) + iVar2;
        if (iVar1 != 0) {
          *(undefined4 *)(iVar1 + 0xc) = 0;
          *(undefined4 *)(iVar1 + 0x10) = 0;
          *(undefined4 *)(iVar1 + 0x14) = 0;
          *(undefined4 *)(iVar1 + 0x18) = 0;
          *(undefined4 *)(iVar1 + 0x1c) = 0;
          *(undefined4 *)(iVar1 + 0x24) = 0;
        }
        iVar2 = iVar2 + 0xa0;
        iVar1 = iVar3 + -1;
      } while (iVar1 != 0);
      *(int *)(param_1 + 0xc) = param_2;
      return iVar3;
    }
    if ((*(int *)(param_1 + 0x10) != 0) && (param_2 < iVar1)) {
      iVar2 = param_2 * 0xa0;
      iVar1 = param_2;
      do {
        iVar3 = *(int *)(param_1 + 4) + iVar2;
        if ((*(byte *)(iVar3 + 0x24) & 1) != 0) {
          if (*(int *)(iVar3 + 4) != 0) {
            thunk_FUN_00df2950(*(int *)(iVar3 + 4));
          }
          *(uint *)(iVar3 + 0x24) = *(uint *)(iVar3 + 0x24) & 0xfffffffe;
        }
        FUN_00e52740();
        iVar1 = iVar1 + 1;
        iVar2 = iVar2 + 0xa0;
      } while (iVar1 < *(int *)(param_1 + 0xc));
    }
    *(int *)(param_1 + 0xc) = param_2;
  }
  return 1;
}

// 00E66550  FUN_00e66550  size=210  [callgraph]
int __thiscall FUN_00e66550(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if ((*(int *)(param_1 + 8) < param_2) && (iVar1 = FUN_00e66070(param_2), iVar1 == 0)) {
    FUN_00dd5650(&DAT_016cdba0);
    return 0;
  }
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 != param_2) {
    if (iVar1 < param_2) {
      iVar2 = iVar1 * 0x44;
      iVar1 = param_2 - iVar1;
      do {
        iVar3 = iVar1;
        iVar1 = *(int *)(param_1 + 4) + iVar2;
        if (iVar1 != 0) {
          *(undefined4 *)(iVar1 + 0xc) = 0;
          *(undefined4 *)(iVar1 + 0x10) = 0;
          *(undefined4 *)(iVar1 + 0x14) = 0;
          *(undefined4 *)(iVar1 + 0x18) = 0;
          *(undefined4 *)(iVar1 + 0x1c) = 0;
          *(undefined4 *)(iVar1 + 0x24) = 0;
          *(undefined4 *)(iVar1 + 0x40) = 0;
        }
        iVar2 = iVar2 + 0x44;
        iVar1 = iVar3 + -1;
      } while (iVar1 != 0);
      *(int *)(param_1 + 0xc) = param_2;
      return iVar3;
    }
    if ((*(int *)(param_1 + 0x10) != 0) && (param_2 < iVar1)) {
      iVar1 = param_2 * 0x44;
      iVar2 = param_2;
      do {
        iVar3 = *(int *)(param_1 + 4) + iVar1;
        if ((*(byte *)(iVar3 + 0x24) & 1) != 0) {
          if (*(int *)(iVar3 + 4) != 0) {
            thunk_FUN_00df2950(*(int *)(iVar3 + 4));
          }
          *(uint *)(iVar3 + 0x24) = *(uint *)(iVar3 + 0x24) & 0xfffffffe;
        }
        FUN_00e52740();
        iVar2 = iVar2 + 1;
        iVar1 = iVar1 + 0x44;
      } while (iVar2 < *(int *)(param_1 + 0xc));
    }
    *(int *)(param_1 + 0xc) = param_2;
  }
  return 1;
}

// 00E66630  FUN_00e66630  size=57  [callgraph]
void __fastcall FUN_00e66630(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    FUN_00e661b0();
    if (*(int *)(param_1 + 0x10) != 0) {
      FUN_00dd48d0(*(undefined4 *)(param_1 + 4),0);
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}

// 00E66670  FUN_00e66670  size=281  [callgraph]
int __thiscall FUN_00e66670(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int local_4;
  
  if ((*(int *)(param_1 + 8) < param_2) && (iVar1 = FUN_00e66220(param_2), iVar1 == 0)) {
    FUN_00dd5650(&DAT_016cdba0);
    return 0;
  }
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 != param_2) {
    if (iVar1 < param_2) {
      iVar2 = iVar1 << 7;
      iVar1 = param_2 - iVar1;
      do {
        iVar3 = iVar1;
        iVar1 = *(int *)(param_1 + 4) + iVar2;
        if (iVar1 != 0) {
          *(undefined4 *)(iVar1 + 0xc) = 0;
          *(undefined4 *)(iVar1 + 0x10) = 0;
          *(undefined4 *)(iVar1 + 0x14) = 0;
          *(undefined4 *)(iVar1 + 0x18) = 0;
          *(undefined4 *)(iVar1 + 0x1c) = 0;
          *(undefined4 *)(iVar1 + 0x3c) = 0;
          *(undefined4 *)(iVar1 + 0x40) = 0;
          *(undefined4 *)(iVar1 + 0x44) = 0;
          *(undefined4 *)(iVar1 + 0x24) = 0;
          *(undefined4 *)(iVar1 + 0x70) = 0;
          *(undefined4 *)(iVar1 + 0x74) = 4;
        }
        iVar2 = iVar2 + 0x80;
        iVar1 = iVar3 + -1;
      } while (iVar1 != 0);
      *(int *)(param_1 + 0xc) = param_2;
      return iVar3;
    }
    if ((*(int *)(param_1 + 0x10) != 0) && (local_4 = param_2, param_2 < iVar1)) {
      iVar1 = param_2 << 7;
      do {
        iVar2 = *(int *)(param_1 + 4) + iVar1;
        if ((*(byte *)(iVar2 + 0x24) & 1) != 0) {
          FUN_00df3b40(*(undefined4 *)(iVar2 + 0x40),1);
          FUN_00df3b40(*(undefined4 *)(iVar2 + 0x44),1);
          FUN_00df39f0(*(undefined4 *)(iVar2 + 0x3c));
          *(undefined4 *)(iVar2 + 0x3c) = 0;
          *(undefined4 *)(iVar2 + 0x40) = 0;
          *(undefined4 *)(iVar2 + 0x44) = 0;
          if (*(int *)(iVar2 + 4) != 0) {
            thunk_FUN_00df2950(*(int *)(iVar2 + 4));
          }
          *(uint *)(iVar2 + 0x24) = *(uint *)(iVar2 + 0x24) & 0xcffffffe;
        }
        FUN_00e52740();
        local_4 = local_4 + 1;
        iVar1 = iVar1 + 0x80;
      } while (local_4 < *(int *)(param_1 + 0xc));
    }
    *(int *)(param_1 + 0xc) = param_2;
  }
  return 1;
}

// 00E66790  FUN_00e66790  size=57  [callgraph]
void __fastcall FUN_00e66790(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    FUN_00e66380();
    if (*(int *)(param_1 + 0x10) != 0) {
      FUN_00dd48d0(*(undefined4 *)(param_1 + 4),0);
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}

// 00E667D0  FUN_00e667d0  size=82  [callgraph]
int __thiscall FUN_00e667d0(int param_1,byte param_2)

{
  if (*(int *)(param_1 + 8) != 0) {
    FUN_00e65240();
    if (*(int *)(param_1 + 0x14) != 0) {
      FUN_00dd48d0(*(undefined4 *)(param_1 + 8),0);
      *(undefined4 *)(param_1 + 0x14) = 0;
    }
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00E66870  FUN_00e66870  size=108  [callgraph]
void __fastcall FUN_00e66870(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = 0;
  if (*(int *)(param_1 + 0x10) == 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    return;
  }
  iVar2 = 0;
  if (*(int *)(param_1 + 0xc) < 1) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    return;
  }
  do {
    iVar3 = *(int *)(param_1 + 4) + iVar1;
    if (*(int *)(iVar3 + 8) != 0) {
      FUN_00e65240();
      if (*(int *)(iVar3 + 0x14) != 0) {
        FUN_00dd48d0(*(undefined4 *)(iVar3 + 8),0);
        *(undefined4 *)(iVar3 + 0x14) = 0;
      }
      *(undefined4 *)(iVar3 + 8) = 0;
      *(undefined4 *)(iVar3 + 0xc) = 0;
    }
    iVar2 = iVar2 + 1;
    iVar1 = iVar1 + 0x2c;
  } while (iVar2 < *(int *)(param_1 + 0xc));
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}

// 00E66970  FUN_00e66970  size=57  [callgraph]
void __fastcall FUN_00e66970(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    FUN_00e66870();
    if (*(int *)(param_1 + 0x10) != 0) {
      FUN_00dd48d0(*(undefined4 *)(param_1 + 4),0);
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}

// 00E669B0  FUN_00e669b0  size=57  [callgraph]
void __fastcall FUN_00e669b0(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    FUN_00e661b0();
    if (*(int *)(param_1 + 0x10) != 0) {
      FUN_00dd48d0(*(undefined4 *)(param_1 + 4),0);
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}

// 00E669F0  FUN_00e669f0  size=57  [callgraph]
void __fastcall FUN_00e669f0(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    FUN_00e66380();
    if (*(int *)(param_1 + 0x10) != 0) {
      FUN_00dd48d0(*(undefined4 *)(param_1 + 4),0);
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}

// 00E66C60  FUN_00e66c60  size=57  [callgraph]
void __fastcall FUN_00e66c60(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    FUN_00e66870();
    if (*(int *)(param_1 + 0x10) != 0) {
      FUN_00dd48d0(*(undefined4 *)(param_1 + 4),0);
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}

// 00E66CA0  FUN_00e66ca0  size=185  [callgraph]
int __thiscall FUN_00e66ca0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if (param_2 < *(int *)(param_1 + 0xc)) {
    if (param_2 < *(int *)(param_1 + 0xc) + -1) {
      iVar1 = param_2 * 0x2c;
      iVar2 = param_2;
      do {
        puVar3 = (undefined4 *)(*(int *)(param_1 + 4) + iVar1);
        *puVar3 = *(undefined4 *)(*(int *)(param_1 + 4) + 0x2c + iVar1);
        FUN_00e65d50(puVar3 + 0xc);
        puVar3[6] = puVar3[0x11];
        puVar3[7] = puVar3[0x12];
        puVar3[8] = puVar3[0x13];
        puVar3[9] = puVar3[0x14];
        puVar3[10] = puVar3[0x15];
        iVar2 = iVar2 + 1;
        iVar1 = iVar1 + 0x2c;
      } while (iVar2 < *(int *)(param_1 + 0xc) + -1);
    }
    if ((*(int *)(param_1 + 0x10) != 0) &&
       (iVar1 = *(int *)(param_1 + 0xc) * 0x2c, iVar2 = iVar1 + -0x2c + *(int *)(param_1 + 4),
       *(int *)(iVar1 + -0x24 + *(int *)(param_1 + 4)) != 0)) {
      FUN_00e65240();
      if (*(int *)(iVar2 + 0x14) != 0) {
        FUN_00dd48d0(*(undefined4 *)(iVar2 + 8),0);
        *(undefined4 *)(iVar2 + 0x14) = 0;
      }
      *(undefined4 *)(iVar2 + 8) = 0;
      *(undefined4 *)(iVar2 + 0xc) = 0;
    }
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -1;
    iVar2 = -1;
    if (param_2 < *(int *)(param_1 + 0xc)) {
      iVar2 = param_2;
    }
    return iVar2;
  }
  return -1;
}

// 00E66E20  FUN_00e66e20  size=492  [callgraph]
undefined4 __thiscall FUN_00e66e20(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int local_4;
  
  if (*(int *)(param_1 + 8) == param_2) {
    return 1;
  }
  iVar1 = FUN_00dd29b0(param_2 * 0x2c,0x20,0,0);
  if (iVar1 != 0) {
    if (*(int *)(param_1 + 0xc) < param_2) {
      local_4 = 0;
      if (0 < *(int *)(param_1 + 0xc)) {
        puVar2 = (undefined4 *)(iVar1 + 0xc);
        do {
          if (puVar2 != (undefined4 *)0xc) {
            iVar4 = *(int *)(param_1 + 4) + (-0xc - iVar1);
            puVar2[-3] = *(undefined4 *)(iVar4 + (int)puVar2);
            puVar2[-2] = 0;
            puVar2[-1] = 0;
            *puVar2 = 0;
            puVar2[1] = 0;
            puVar2[2] = 0;
            FUN_00e65d50((int)puVar2 + iVar4 + 4);
            puVar2[3] = *(undefined4 *)((int)puVar2 + iVar4 + 0x18);
            puVar2[4] = *(undefined4 *)((int)puVar2 + iVar4 + 0x1c);
            puVar2[5] = *(undefined4 *)((int)puVar2 + iVar4 + 0x20);
            puVar2[6] = *(undefined4 *)((int)puVar2 + iVar4 + 0x24);
            puVar2[7] = *(undefined4 *)((int)puVar2 + iVar4 + 0x28);
          }
          local_4 = local_4 + 1;
          puVar2 = puVar2 + 0xb;
        } while (local_4 < *(int *)(param_1 + 0xc));
      }
    }
    else {
      if (0 < param_2) {
        puVar2 = (undefined4 *)(iVar1 + 0xc);
        local_4 = param_2;
        do {
          if (puVar2 != (undefined4 *)0xc) {
            puVar5 = (undefined4 *)((int)puVar2 + (-0xc - iVar1) + *(int *)(param_1 + 4));
            puVar2[-3] = *puVar5;
            puVar2[-2] = 0;
            puVar2[-1] = 0;
            *puVar2 = 0;
            puVar2[1] = 0;
            puVar2[2] = 0;
            FUN_00e65d50(puVar5 + 1);
            puVar2[3] = puVar5[6];
            puVar2[4] = puVar5[7];
            puVar2[5] = puVar5[8];
            puVar2[6] = puVar5[9];
            puVar2[7] = puVar5[10];
          }
          puVar2 = puVar2 + 0xb;
          local_4 = local_4 + -1;
        } while (local_4 != 0);
      }
      if ((*(int *)(param_1 + 0x10) != 0) && (local_4 = 0, 0 < *(int *)(param_1 + 0xc))) {
        iVar4 = 0;
        do {
          iVar3 = *(int *)(param_1 + 4) + iVar4;
          if (*(int *)(iVar3 + 8) != 0) {
            FUN_00e65240();
            if (*(int *)(iVar3 + 0x14) != 0) {
              FUN_00dd48d0(*(undefined4 *)(iVar3 + 8),0);
              *(undefined4 *)(iVar3 + 0x14) = 0;
            }
            *(undefined4 *)(iVar3 + 8) = 0;
            *(undefined4 *)(iVar3 + 0xc) = 0;
          }
          local_4 = local_4 + 1;
          iVar4 = iVar4 + 0x2c;
        } while (local_4 < *(int *)(param_1 + 0xc));
      }
      *(int *)(param_1 + 0xc) = param_2;
    }
    if (*(int *)(param_1 + 0x10) != 0) {
      FUN_00dd48d0(*(undefined4 *)(param_1 + 4),0);
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    *(int *)(param_1 + 4) = iVar1;
    *(int *)(param_1 + 8) = param_2;
    *(undefined4 *)(param_1 + 0x10) = 1;
    return 1;
  }
  FUN_00dd5650(&DAT_016cd660);
  return 0;
}

// 00E67010  FUN_00e67010  size=492  [callgraph]
undefined4 __thiscall FUN_00e67010(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int local_4;
  
  if (*(int *)(param_1 + 8) == param_2) {
    return 1;
  }
  iVar1 = FUN_00dd29b0(param_2 * 0x2c,0x20,0,0);
  if (iVar1 != 0) {
    if (*(int *)(param_1 + 0xc) < param_2) {
      local_4 = 0;
      if (0 < *(int *)(param_1 + 0xc)) {
        puVar2 = (undefined4 *)(iVar1 + 0xc);
        do {
          if (puVar2 != (undefined4 *)0xc) {
            iVar4 = *(int *)(param_1 + 4) + (-0xc - iVar1);
            puVar2[-3] = *(undefined4 *)(iVar4 + (int)puVar2);
            puVar2[-2] = 0;
            puVar2[-1] = 0;
            *puVar2 = 0;
            puVar2[1] = 0;
            puVar2[2] = 0;
            FUN_00e65f80((int)puVar2 + iVar4 + 4);
            puVar2[3] = *(undefined4 *)((int)puVar2 + iVar4 + 0x18);
            puVar2[4] = *(undefined4 *)((int)puVar2 + iVar4 + 0x1c);
            puVar2[5] = *(undefined4 *)((int)puVar2 + iVar4 + 0x20);
            puVar2[6] = *(undefined4 *)((int)puVar2 + iVar4 + 0x24);
            puVar2[7] = *(undefined4 *)((int)puVar2 + iVar4 + 0x28);
          }
          local_4 = local_4 + 1;
          puVar2 = puVar2 + 0xb;
        } while (local_4 < *(int *)(param_1 + 0xc));
      }
    }
    else {
      if (0 < param_2) {
        puVar2 = (undefined4 *)(iVar1 + 0xc);
        local_4 = param_2;
        do {
          if (puVar2 != (undefined4 *)0xc) {
            puVar5 = (undefined4 *)((int)puVar2 + (-0xc - iVar1) + *(int *)(param_1 + 4));
            puVar2[-3] = *puVar5;
            puVar2[-2] = 0;
            puVar2[-1] = 0;
            *puVar2 = 0;
            puVar2[1] = 0;
            puVar2[2] = 0;
            FUN_00e65f80(puVar5 + 1);
            puVar2[3] = puVar5[6];
            puVar2[4] = puVar5[7];
            puVar2[5] = puVar5[8];
            puVar2[6] = puVar5[9];
            puVar2[7] = puVar5[10];
          }
          puVar2 = puVar2 + 0xb;
          local_4 = local_4 + -1;
        } while (local_4 != 0);
      }
      if ((*(int *)(param_1 + 0x10) != 0) && (local_4 = 0, 0 < *(int *)(param_1 + 0xc))) {
        iVar4 = 0;
        do {
          iVar3 = *(int *)(param_1 + 4) + iVar4;
          if (*(int *)(iVar3 + 8) != 0) {
            FUN_00e643a0();
            if (*(int *)(iVar3 + 0x14) != 0) {
              FUN_00dd48d0(*(undefined4 *)(iVar3 + 8),0);
              *(undefined4 *)(iVar3 + 0x14) = 0;
            }
            *(undefined4 *)(iVar3 + 8) = 0;
            *(undefined4 *)(iVar3 + 0xc) = 0;
          }
          local_4 = local_4 + 1;
          iVar4 = iVar4 + 0x2c;
        } while (local_4 < *(int *)(param_1 + 0xc));
      }
      *(int *)(param_1 + 0xc) = param_2;
    }
    if (*(int *)(param_1 + 0x10) != 0) {
      FUN_00dd48d0(*(undefined4 *)(param_1 + 4),0);
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    *(int *)(param_1 + 4) = iVar1;
    *(int *)(param_1 + 8) = param_2;
    *(undefined4 *)(param_1 + 0x10) = 1;
    return 1;
  }
  FUN_00dd5650(&DAT_016cd660);
  return 0;
}

// 00E67200  FUN_00e67200  size=492  [callgraph]
undefined4 __thiscall FUN_00e67200(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int local_4;
  
  if (*(int *)(param_1 + 8) == param_2) {
    return 1;
  }
  iVar1 = FUN_00dd29b0(param_2 * 0x2c,0x20,0,0);
  if (iVar1 != 0) {
    if (*(int *)(param_1 + 0xc) < param_2) {
      local_4 = 0;
      if (0 < *(int *)(param_1 + 0xc)) {
        puVar2 = (undefined4 *)(iVar1 + 0xc);
        do {
          if (puVar2 != (undefined4 *)0xc) {
            iVar4 = *(int *)(param_1 + 4) + (-0xc - iVar1);
            puVar2[-3] = *(undefined4 *)(iVar4 + (int)puVar2);
            puVar2[-2] = 0;
            puVar2[-1] = 0;
            *puVar2 = 0;
            puVar2[1] = 0;
            puVar2[2] = 0;
            FUN_00e65ad0((int)puVar2 + iVar4 + 4);
            puVar2[3] = *(undefined4 *)((int)puVar2 + iVar4 + 0x18);
            puVar2[4] = *(undefined4 *)((int)puVar2 + iVar4 + 0x1c);
            puVar2[5] = *(undefined4 *)((int)puVar2 + iVar4 + 0x20);
            puVar2[6] = *(undefined4 *)((int)puVar2 + iVar4 + 0x24);
            puVar2[7] = *(undefined4 *)((int)puVar2 + iVar4 + 0x28);
          }
          local_4 = local_4 + 1;
          puVar2 = puVar2 + 0xb;
        } while (local_4 < *(int *)(param_1 + 0xc));
      }
    }
    else {
      if (0 < param_2) {
        puVar2 = (undefined4 *)(iVar1 + 0xc);
        local_4 = param_2;
        do {
          if (puVar2 != (undefined4 *)0xc) {
            puVar5 = (undefined4 *)((int)puVar2 + (-0xc - iVar1) + *(int *)(param_1 + 4));
            puVar2[-3] = *puVar5;
            puVar2[-2] = 0;
            puVar2[-1] = 0;
            *puVar2 = 0;
            puVar2[1] = 0;
            puVar2[2] = 0;
            FUN_00e65ad0(puVar5 + 1);
            puVar2[3] = puVar5[6];
            puVar2[4] = puVar5[7];
            puVar2[5] = puVar5[8];
            puVar2[6] = puVar5[9];
            puVar2[7] = puVar5[10];
          }
          puVar2 = puVar2 + 0xb;
          local_4 = local_4 + -1;
        } while (local_4 != 0);
      }
      if ((*(int *)(param_1 + 0x10) != 0) && (local_4 = 0, 0 < *(int *)(param_1 + 0xc))) {
        iVar4 = 0;
        do {
          iVar3 = *(int *)(param_1 + 4) + iVar4;
          if (*(int *)(iVar3 + 8) != 0) {
            FUN_00e64470();
            if (*(int *)(iVar3 + 0x14) != 0) {
              FUN_00dd48d0(*(undefined4 *)(iVar3 + 8),0);
              *(undefined4 *)(iVar3 + 0x14) = 0;
            }
            *(undefined4 *)(iVar3 + 8) = 0;
            *(undefined4 *)(iVar3 + 0xc) = 0;
          }
          local_4 = local_4 + 1;
          iVar4 = iVar4 + 0x2c;
        } while (local_4 < *(int *)(param_1 + 0xc));
      }
      *(int *)(param_1 + 0xc) = param_2;
    }
    if (*(int *)(param_1 + 0x10) != 0) {
      FUN_00dd48d0(*(undefined4 *)(param_1 + 4),0);
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    *(int *)(param_1 + 4) = iVar1;
    *(int *)(param_1 + 8) = param_2;
    *(undefined4 *)(param_1 + 0x10) = 1;
    return 1;
  }
  FUN_00dd5650(&DAT_016cd660);
  return 0;
}

// 00E67450  FUN_00e67450  size=82  [callgraph]
int __thiscall FUN_00e67450(int param_1,byte param_2)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_00e661b0();
    if (*(int *)(param_1 + 0x18) != 0) {
      FUN_00dd48d0(*(undefined4 *)(param_1 + 0xc),0);
      *(undefined4 *)(param_1 + 0x18) = 0;
    }
    *(undefined4 *)(param_1 + 0xc) = 0;
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00E674B0  FUN_00e674b0  size=82  [callgraph]
int __thiscall FUN_00e674b0(int param_1,byte param_2)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_00e66380();
    if (*(int *)(param_1 + 0x18) != 0) {
      FUN_00dd48d0(*(undefined4 *)(param_1 + 0xc),0);
      *(undefined4 *)(param_1 + 0x18) = 0;
    }
    *(undefined4 *)(param_1 + 0xc) = 0;
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00E67510  FUN_00e67510  size=226  [callgraph]
int __thiscall FUN_00e67510(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  
  if ((*(int *)(param_1 + 8) < param_2) && (iVar1 = FUN_00e66e20(param_2), iVar1 == 0)) {
    FUN_00dd5650(&DAT_016cdba0);
    return 0;
  }
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 != param_2) {
    if (iVar1 < param_2) {
      iVar3 = iVar1 * 0x2c;
      iVar1 = param_2 - iVar1;
      do {
        iVar4 = iVar1;
        puVar2 = (undefined4 *)(*(int *)(param_1 + 4) + iVar3);
        if (puVar2 != (undefined4 *)0x0) {
          *puVar2 = 1;
          puVar2[1] = 0;
          puVar2[2] = 0;
          puVar2[3] = 0;
          puVar2[4] = 0;
          puVar2[5] = 0;
          puVar2[10] = 1;
        }
        iVar3 = iVar3 + 0x2c;
        iVar1 = iVar4 + -1;
      } while (iVar1 != 0);
      *(int *)(param_1 + 0xc) = param_2;
      return iVar4;
    }
    if ((*(int *)(param_1 + 0x10) != 0) && (param_2 < iVar1)) {
      iVar3 = param_2 * 0x2c;
      iVar1 = param_2;
      do {
        iVar4 = *(int *)(param_1 + 4) + iVar3;
        if (*(int *)(iVar4 + 8) != 0) {
          FUN_00e65240();
          if (*(int *)(iVar4 + 0x14) != 0) {
            FUN_00dd48d0(*(undefined4 *)(iVar4 + 8),0);
            *(undefined4 *)(iVar4 + 0x14) = 0;
          }
          *(undefined4 *)(iVar4 + 8) = 0;
          *(undefined4 *)(iVar4 + 0xc) = 0;
        }
        iVar1 = iVar1 + 1;
        iVar3 = iVar3 + 0x2c;
      } while (iVar1 < *(int *)(param_1 + 0xc));
    }
    *(int *)(param_1 + 0xc) = param_2;
  }
  return 1;
}

// 00E67600  FUN_00e67600  size=226  [callgraph]
int __thiscall FUN_00e67600(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  
  if ((*(int *)(param_1 + 8) < param_2) && (iVar1 = FUN_00e67010(param_2), iVar1 == 0)) {
    FUN_00dd5650(&DAT_016cdba0);
    return 0;
  }
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 != param_2) {
    if (iVar1 < param_2) {
      iVar3 = iVar1 * 0x2c;
      iVar1 = param_2 - iVar1;
      do {
        iVar4 = iVar1;
        puVar2 = (undefined4 *)(*(int *)(param_1 + 4) + iVar3);
        if (puVar2 != (undefined4 *)0x0) {
          *puVar2 = 1;
          puVar2[1] = 0;
          puVar2[2] = 0;
          puVar2[3] = 0;
          puVar2[4] = 0;
          puVar2[5] = 0;
          puVar2[10] = 1;
        }
        iVar3 = iVar3 + 0x2c;
        iVar1 = iVar4 + -1;
      } while (iVar1 != 0);
      *(int *)(param_1 + 0xc) = param_2;
      return iVar4;
    }
    if ((*(int *)(param_1 + 0x10) != 0) && (param_2 < iVar1)) {
      iVar3 = param_2 * 0x2c;
      iVar1 = param_2;
      do {
        iVar4 = *(int *)(param_1 + 4) + iVar3;
        if (*(int *)(iVar4 + 8) != 0) {
          FUN_00e643a0();
          if (*(int *)(iVar4 + 0x14) != 0) {
            FUN_00dd48d0(*(undefined4 *)(iVar4 + 8),0);
            *(undefined4 *)(iVar4 + 0x14) = 0;
          }
          *(undefined4 *)(iVar4 + 8) = 0;
          *(undefined4 *)(iVar4 + 0xc) = 0;
        }
        iVar1 = iVar1 + 1;
        iVar3 = iVar3 + 0x2c;
      } while (iVar1 < *(int *)(param_1 + 0xc));
    }
    *(int *)(param_1 + 0xc) = param_2;
  }
  return 1;
}

// 00E676F0  FUN_00e676f0  size=226  [callgraph]
int __thiscall FUN_00e676f0(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  
  if ((*(int *)(param_1 + 8) < param_2) && (iVar1 = FUN_00e67200(param_2), iVar1 == 0)) {
    FUN_00dd5650(&DAT_016cdba0);
    return 0;
  }
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 != param_2) {
    if (iVar1 < param_2) {
      iVar3 = iVar1 * 0x2c;
      iVar1 = param_2 - iVar1;
      do {
        iVar4 = iVar1;
        puVar2 = (undefined4 *)(*(int *)(param_1 + 4) + iVar3);
        if (puVar2 != (undefined4 *)0x0) {
          *puVar2 = 1;
          puVar2[1] = 0;
          puVar2[2] = 0;
          puVar2[3] = 0;
          puVar2[4] = 0;
          puVar2[5] = 0;
          puVar2[10] = 1;
        }
        iVar3 = iVar3 + 0x2c;
        iVar1 = iVar4 + -1;
      } while (iVar1 != 0);
      *(int *)(param_1 + 0xc) = param_2;
      return iVar4;
    }
    if ((*(int *)(param_1 + 0x10) != 0) && (param_2 < iVar1)) {
      iVar3 = param_2 * 0x2c;
      iVar1 = param_2;
      do {
        iVar4 = *(int *)(param_1 + 4) + iVar3;
        if (*(int *)(iVar4 + 8) != 0) {
          FUN_00e64470();
          if (*(int *)(iVar4 + 0x14) != 0) {
            FUN_00dd48d0(*(undefined4 *)(iVar4 + 8),0);
            *(undefined4 *)(iVar4 + 0x14) = 0;
          }
          *(undefined4 *)(iVar4 + 8) = 0;
          *(undefined4 *)(iVar4 + 0xc) = 0;
        }
        iVar1 = iVar1 + 1;
        iVar3 = iVar3 + 0x2c;
      } while (iVar1 < *(int *)(param_1 + 0xc));
    }
    *(int *)(param_1 + 0xc) = param_2;
  }
  return 1;
}

