// src/event/cEventCutWork.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00D7EAE0..015F0760, 21 functions

#include "mgrr.h"
#include "cEventCutWork.h"

// 00D7EAE0  FUN_00d7eae0  size=59  [callgraph]
void __fastcall FUN_00d7eae0(int param_1)

{
  if ((*(uint *)(param_1 + 0x40) & 0x80000000) == 0) {
    DAT_01bea070 = DAT_01bea070 & 0xffdfffff;
  }
  else {
    DAT_01bea070 = DAT_01bea070 | 0x200000;
  }
  if ((*(uint *)(param_1 + 0x40) & 0x20000000) != 0) {
    DAT_01bea070 = DAT_01bea070 | 0x20000000;
    return;
  }
  DAT_01bea070 = DAT_01bea070 & 0xdfffffff;
  return;
}

// 00D7EB60  FUN_00d7eb60  size=33  [callgraph]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00d7eb60(undefined4 param_1)

{
  DAT_01dc5338 = param_1;
  _DAT_01dc5334 = 0;
  FUN_00d7e970(100,param_1);
  return;
}

// 00D7EB90  FUN_00d7eb90  size=20  [callgraph]
void FUN_00d7eb90(undefined4 param_1)

{
  DAT_01dc5348 = param_1;
  DAT_01dc5344 = 1;
  return;
}

// 00D7EBB0  cEventCutWork::vf00  size=76  [class]
undefined4 __thiscall cEventCutWork::vf00(int param_1,undefined4 param_2)

{
  FUN_00d7e880(100,param_2);
  *(undefined4 *)(param_1 + 0x44) = param_2;
  *(undefined4 *)(param_1 + 0x48) = 0x1e;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  return 1;
}

// 00D7EC50  FUN_00d7ec50  size=273  [between]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00d7ec50(void)

{
  DAT_01bea060 = DAT_01bea060 & 0xf7ffffff;
  _DAT_01dc5340 = 0;
  _DAT_018bbb40 = 0;
  _DAT_018bbb44 = 0;
  _DAT_018bbb48 = 0;
  _DAT_018bbb4c = 0;
  _DAT_018bbb50 = 0;
  DAT_01dc534c = 0;
  _DAT_018bbb54 = 0;
  DAT_01dc5344 = 0;
  _DAT_018bbb58 = 0;
  _DAT_018bbb60 = 0;
  _DAT_018bbb5c = 0;
  _DAT_018bbb64 = 0;
  _DAT_018bbb68 = 0;
  _DAT_018bbb70 = 0xf0000000;
  DAT_01dc5348 = 0;
  _DAT_018bbb6c = 0x3f5f66f3;
  DAT_01dc533c = 0;
  DAT_01dc5330 = 0;
  _DAT_01dc5370 = 0;
  _DAT_01dc5374 = 0;
  _DAT_01dc5378 = 0;
  _DAT_01dc537c = 0;
  FUN_00d7e880(100,&DAT_01b7bd48);
  _DAT_018bbb1c = 0;
  _DAT_018bbae0 = 0;
  _DAT_018bbb20 = 0;
  _DAT_018bbae4 = 0;
  _DAT_018bbb24 = 0;
  _DAT_018bbae8 = 0;
  _DAT_018bbaec = 0;
  _DAT_018bbb14 = &DAT_01b7bd48;
  _DAT_018bbaf0 = 0;
  _DAT_018bbb18 = 0x1e;
  _DAT_018bbaf4 = 0;
  _DAT_018bbaf8 = 0;
  _DAT_018bbafc = 0;
  return 1;
}

// 00D7EDB0  FUN_00d7edb0  size=503  [between]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00d7edb0(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  fVar6 = _DAT_01bea3c4;
  fVar5 = DAT_01bea39c;
  fVar4 = DAT_01bea398;
  fVar3 = DAT_01bea394;
  fVar2 = DAT_01bea390;
  _DAT_018bbb40 = 0.0;
  _DAT_018bbb60 = 0;
  _DAT_018bbb64 = 0;
  _DAT_018bbb70 = 0xf0000000;
  _DAT_018bbb68 = 0;
  _DAT_018bbb50 = DAT_01bea380;
  _DAT_018bbb54 = DAT_01bea384;
  _DAT_018bbb58 = DAT_01bea388;
  _DAT_018bbb5c = DAT_01bea38c;
  _DAT_018bbb6c = _DAT_01bea264;
  local_20 = DAT_01bea390 - DAT_01bea380;
  local_1c = DAT_01bea394 - DAT_01bea384;
  local_18 = DAT_01bea398 - DAT_01bea388;
  local_14 = DAT_01bea39c - DAT_01bea38c;
  if (((local_20 == 0.0) && (local_1c == 0.0)) && (local_18 == 0.0)) {
    _DAT_018bbb40 = DAT_01bea390;
    _DAT_018bbb44 = DAT_01bea394;
    _DAT_018bbb48 = DAT_01bea398;
    _DAT_018bbb4c = DAT_01bea39c;
    return;
  }
  fVar1 = local_18 * local_18 + local_20 * local_20 + local_1c * local_1c;
  _DAT_018bbb44 = _DAT_018bbb40;
  _DAT_018bbb48 = _DAT_018bbb40;
  _DAT_018bbb4c = _DAT_018bbb40;
  _DAT_018bbb68 = _DAT_018bbb40;
  if (fVar1 < 0.0 == (fVar1 == 0.0)) {
    FUN_00ddf460(&local_20,&local_20);
  }
  else {
    FUN_00dd5650(&DAT_0163d0ac);
    local_18 = 0.0;
    local_20 = 0.0;
    local_1c = 1.0;
  }
  _DAT_018bbb40 = fVar2 + local_20 * fVar6;
  _DAT_018bbb44 = fVar3 + local_1c * fVar6;
  _DAT_018bbb48 = fVar4 + local_18 * fVar6;
  _DAT_018bbb4c = fVar6 * local_14 + fVar5;
  return;
}

// 00D7EFC0  FUN_00d7efc0  size=665  [between]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00d7efc0(float *param_1)

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
  float10 fVar10;
  float10 fVar11;
  float10 fVar12;
  float10 fVar13;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  fVar8 = _DAT_018bbb5c;
  fVar7 = _DAT_018bbb58;
  fVar6 = _DAT_018bbb54;
  fVar5 = _DAT_018bbb50;
  if (DAT_01dc534c == 0) {
    return;
  }
  fVar1 = 0.0;
  if ((*(uint *)(DAT_01dc534c + 0x40) & 0x8000000) == 0) {
    fVar4 = fVar1;
    fVar3 = fVar1;
    fVar2 = fVar1;
    switch(*(undefined4 *)(DAT_01dc534c + 0x30)) {
    case 0:
      fVar2 = *(float *)(DAT_01dc534c + 0x20);
      fVar3 = *(float *)(DAT_01dc534c + 0x24);
      fVar4 = *(float *)(DAT_01dc534c + 0x28);
      fVar1 = *(float *)(DAT_01dc534c + 0x2c);
    default:
      *param_1 = fVar2;
      param_1[1] = fVar3;
      param_1[2] = fVar4;
      param_1[3] = fVar1;
      return;
    case 1:
      fVar1 = *(float *)(DAT_01dc534c + 0x20);
      fVar2 = *(float *)(DAT_01dc534c + 0x24);
      fVar3 = *(float *)(DAT_01dc534c + 0x28);
      fVar4 = *(float *)(DAT_01dc534c + 0x2c);
      fVar13 = (float10)FUN_00d7e590();
      fVar9 = (float10)fVar5;
      fVar10 = (float10)fVar6;
      fVar11 = (float10)fVar7;
      fVar12 = (float10)fVar8;
      *param_1 = (float)(((float10)fVar1 - fVar9) * fVar13 + fVar9);
      param_1[1] = (float)(((float10)fVar2 - fVar10) * fVar13 + fVar10);
      param_1[2] = (float)(((float10)fVar3 - fVar11) * fVar13 + fVar11);
      param_1[3] = (float)(fVar12 + ((float10)fVar4 - fVar12) * fVar13);
      return;
    case 2:
      local_20 = *(float *)(DAT_01dc534c + 0x20);
      local_1c = *(float *)(DAT_01dc534c + 0x24);
      local_18 = *(float *)(DAT_01dc534c + 0x28);
      local_14 = *(float *)(DAT_01dc534c + 0x2c);
      fVar13 = (float10)FUN_00d7e590(*(undefined4 *)(DAT_01dc534c + 0x38));
      fVar13 = (float10)FUN_00d7e5d0((float)fVar13);
      break;
    case 3:
      local_20 = *(float *)(DAT_01dc534c + 0x20);
      local_1c = *(float *)(DAT_01dc534c + 0x24);
      local_18 = *(float *)(DAT_01dc534c + 0x28);
      local_14 = *(float *)(DAT_01dc534c + 0x2c);
      fVar13 = (float10)FUN_00d7e590(*(undefined4 *)(DAT_01dc534c + 0x38));
      fVar13 = (float10)FUN_00d7e630((float)fVar13);
      break;
    case 4:
      local_20 = *(float *)(DAT_01dc534c + 0x20);
      local_1c = *(float *)(DAT_01dc534c + 0x24);
      local_18 = *(float *)(DAT_01dc534c + 0x28);
      local_14 = *(float *)(DAT_01dc534c + 0x2c);
      fVar13 = (float10)FUN_00d7e590(*(undefined4 *)(DAT_01dc534c + 0x38));
      fVar13 = (float10)FUN_00d7e680((float)fVar13);
    }
    fVar9 = (float10)fVar5;
    fVar10 = (float10)fVar6;
    fVar11 = (float10)fVar7;
    fVar12 = (float10)fVar8;
    *param_1 = (float)(((float10)local_20 - fVar9) * fVar13 + fVar9);
    param_1[1] = (float)(((float10)local_1c - fVar10) * fVar13 + fVar10);
    param_1[2] = (float)(((float10)local_18 - fVar11) * fVar13 + fVar11);
    param_1[3] = (float)(fVar12 + ((float10)local_14 - fVar12) * fVar13);
    return;
  }
  *param_1 = 0.0;
  param_1[1] = 0.0;
  param_1[2] = 0.0;
  param_1[3] = 0.0;
  return;
}

// 00D7F270  FUN_00d7f270  size=638  [between]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00d7f270(float *param_1)

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
  float10 fVar10;
  float10 fVar11;
  float10 fVar12;
  float10 fVar13;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  fVar8 = _DAT_018bbb4c;
  fVar7 = _DAT_018bbb48;
  fVar6 = _DAT_018bbb44;
  fVar5 = _DAT_018bbb40;
  if (DAT_01dc534c == 0) {
    return;
  }
  fVar1 = 0.0;
  fVar3 = fVar1;
  fVar2 = fVar1;
  fVar4 = fVar1;
  switch(*(undefined4 *)(DAT_01dc534c + 0x30)) {
  case 0:
    fVar1 = *(float *)(DAT_01dc534c + 0x10);
    fVar2 = *(float *)(DAT_01dc534c + 0x14);
    fVar3 = *(float *)(DAT_01dc534c + 0x18);
    fVar4 = *(float *)(DAT_01dc534c + 0x1c);
  default:
    *param_1 = fVar1;
    param_1[1] = fVar2;
    param_1[2] = fVar3;
    param_1[3] = fVar4;
    return;
  case 1:
    fVar1 = *(float *)(DAT_01dc534c + 0x10);
    fVar2 = *(float *)(DAT_01dc534c + 0x14);
    fVar3 = *(float *)(DAT_01dc534c + 0x18);
    fVar4 = *(float *)(DAT_01dc534c + 0x1c);
    fVar13 = (float10)FUN_00d7e590();
    fVar9 = (float10)fVar5;
    fVar10 = (float10)fVar6;
    fVar11 = (float10)fVar7;
    fVar12 = (float10)fVar8;
    *param_1 = (float)(((float10)fVar1 - fVar9) * fVar13 + fVar9);
    param_1[1] = (float)(((float10)fVar2 - fVar10) * fVar13 + fVar10);
    param_1[2] = (float)(((float10)fVar3 - fVar11) * fVar13 + fVar11);
    param_1[3] = (float)(fVar12 + ((float10)fVar4 - fVar12) * fVar13);
    return;
  case 2:
    local_20 = *(float *)(DAT_01dc534c + 0x10);
    local_1c = *(float *)(DAT_01dc534c + 0x14);
    local_18 = *(float *)(DAT_01dc534c + 0x18);
    local_14 = *(float *)(DAT_01dc534c + 0x1c);
    fVar13 = (float10)FUN_00d7e590(*(undefined4 *)(DAT_01dc534c + 0x38));
    fVar13 = (float10)FUN_00d7e5d0((float)fVar13);
    break;
  case 3:
    local_20 = *(float *)(DAT_01dc534c + 0x10);
    local_1c = *(float *)(DAT_01dc534c + 0x14);
    local_18 = *(float *)(DAT_01dc534c + 0x18);
    local_14 = *(float *)(DAT_01dc534c + 0x1c);
    fVar13 = (float10)FUN_00d7e590(*(undefined4 *)(DAT_01dc534c + 0x38));
    fVar13 = (float10)FUN_00d7e630((float)fVar13);
    break;
  case 4:
    local_20 = *(float *)(DAT_01dc534c + 0x10);
    local_1c = *(float *)(DAT_01dc534c + 0x14);
    local_18 = *(float *)(DAT_01dc534c + 0x18);
    local_14 = *(float *)(DAT_01dc534c + 0x1c);
    fVar13 = (float10)FUN_00d7e590(*(undefined4 *)(DAT_01dc534c + 0x38));
    fVar13 = (float10)FUN_00d7e680((float)fVar13);
  }
  fVar9 = (float10)fVar5;
  fVar10 = (float10)fVar6;
  fVar11 = (float10)fVar7;
  fVar12 = (float10)fVar8;
  *param_1 = (float)(((float10)local_20 - fVar9) * fVar13 + fVar9);
  param_1[1] = (float)(((float10)local_1c - fVar10) * fVar13 + fVar10);
  param_1[2] = (float)(((float10)local_18 - fVar11) * fVar13 + fVar11);
  param_1[3] = (float)(fVar12 + ((float10)local_14 - fVar12) * fVar13);
  return;
}

// 00D7F510  FUN_00d7f510  size=43  [between]
void __fastcall FUN_00d7f510(int param_1)

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

// 00D7F540  FUN_00d7f540  size=43  [between]
void __fastcall FUN_00d7f540(int param_1)

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

// 00D7F610  cEventCutWork::vf04  size=50  [class]
void __fastcall cEventCutWork::vf04(int *param_1)

{
  (**(code **)(*param_1 + 8))();
  if (param_1[0xd] != 0) {
    param_1[0xf] = 0;
    if (param_1[0x10] != 0) {
      FUN_00dd48d0(param_1[0xd],0);
      param_1[0x10] = 0;
    }
    param_1[0xd] = 0;
    param_1[0xe] = 0;
  }
  return;
}

// 00D7F650  FUN_00d7f650  size=92  [between]
void FUN_00d7f650(void)

{
  uint extraout_EDX;
  
  if (DAT_01dc533c != 0) {
    if ((int)DAT_01dc533c < 0) {
      DAT_01bea060 = DAT_01bea060 | 0x8000000;
    }
    if ((DAT_01dc533c & 0x40000000) != 0) {
      DAT_01bea060 = DAT_01bea060 & 0xf7ffffff;
    }
    if (((DAT_01dc533c & 0x10000000) != 0) && (DAT_01dc534c != 0)) {
      FUN_00d7eae0();
      DAT_01dc533c = extraout_EDX;
    }
    if ((DAT_01dc533c & 0x20000000) != 0) {
      DAT_01bea070 = DAT_01bea070 & 0xdfdfffff;
    }
    DAT_01dc533c = 0;
  }
  return;
}

// 00D7F6B0  FUN_00d7f6b0  size=231  [between]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00d7f6b0(void)

{
  _DAT_01dc5340 = 0;
  DAT_01bea060 = DAT_01bea060 & 0xf7ffffff;
  _DAT_018bbb40 = 0;
  _DAT_018bbb44 = 0;
  _DAT_018bbb48 = 0;
  _DAT_018bbb4c = 0;
  _DAT_018bbb50 = 0;
  DAT_01dc534c = 0;
  _DAT_018bbb54 = 0;
  DAT_01dc5344 = 0;
  _DAT_018bbb58 = 0;
  _DAT_018bbb60 = 0;
  _DAT_018bbb5c = 0;
  _DAT_018bbb64 = 0;
  _DAT_018bbb68 = 0;
  _DAT_018bbb70 = 0xf0000000;
  DAT_01dc5348 = 0;
  _DAT_018bbb6c = 0x3f5f66f3;
  DAT_01dc533c = 0;
  DAT_01dc5330 = 0;
  _DAT_01dc5370 = 0;
  _DAT_01dc5374 = 0;
  _DAT_01dc5378 = 0;
  _DAT_01dc537c = 0;
  (**(code **)(PTR_vftable_018bbad0 + 8))();
  if (DAT_018bbb04 != 0) {
    DAT_018bbb0c = 0;
    if (DAT_018bbb10 != 0) {
      FUN_00dd48d0(DAT_018bbb04,0);
      DAT_018bbb10 = 0;
    }
    DAT_018bbb04 = 0;
    _DAT_018bbb08 = 0;
  }
  return;
}

// 00D7F7A0  FUN_00d7f7a0  size=226  [between]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00d7f7a0(void)

{
  int iVar1;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  iVar1 = DAT_01dc534c;
  if (DAT_01dc534c != 0) {
    local_40 = 0;
    local_3c = 0;
    local_38 = 0;
    local_30 = 0;
    local_2c = 0;
    local_28 = 0;
    local_20 = 0;
    local_1c = 0x3f800000;
    local_18 = 0;
    local_44 = 0;
    FUN_00d7efc0(&local_40);
    FUN_00d7f270(&local_30);
    FUN_00d7e770(&local_44);
    if ((*(uint *)(iVar1 + 0x40) & 0x2000000) != 0) {
      local_1c = 0xbf800000;
    }
    FUN_00da3910();
    FUN_00da8840(&local_40,&local_30);
    FUN_00de5f20(&local_40);
    FUN_00de5fc0(&local_30);
    _DAT_01bea264 = local_44;
    _DAT_01bea678 = local_44;
    FUN_00de6060(&local_20);
    FUN_00db8090();
  }
  return;
}

// 00D7F8B0  FUN_00d7f8b0  size=43  [between]
void __fastcall FUN_00d7f8b0(int param_1)

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

// 00D7F970  FUN_00d7f970  size=43  [between]
void __fastcall FUN_00d7f970(int param_1)

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

// 00D7FA10  cEventCutWork::cEventCutWork_2  size=49  [class]
void __fastcall cEventCutWork::cEventCutWork_2(undefined4 *param_1)

{
  *param_1 = vftable;
  if (param_1[0xd] != 0) {
    param_1[0xf] = 0;
    if (param_1[0x10] != 0) {
      FUN_00dd48d0(param_1[0xd],0);
      param_1[0x10] = 0;
    }
    param_1[0xd] = 0;
    param_1[0xe] = 0;
  }
  return;
}

// 00D7FA50  cEventCutWork::cEventCutWork  size=69  [class]
undefined4 * __thiscall cEventCutWork::cEventCutWork(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  if (param_1[0xd] != 0) {
    param_1[0xf] = 0;
    if (param_1[0x10] != 0) {
      FUN_00dd48d0(param_1[0xd],0);
      param_1[0x10] = 0;
    }
    param_1[0xd] = 0;
    param_1[0xe] = 0;
  }
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00D7FAC0  FUN_00d7fac0  size=87  [between]
void FUN_00d7fac0(void)

{
  int *piVar1;
  
  piVar1 = DAT_01dc5354;
  if (DAT_01dc5354 != DAT_01dc5354 + DAT_01dc535c) {
    do {
      if ((int *)*piVar1 != (int *)0x0) {
        (**(code **)(*(int *)*piVar1 + 4))();
        if ((int *)*piVar1 != (int *)0x0) {
          (**(code **)(*(int *)*piVar1 + 0xc))(1);
        }
      }
      *piVar1 = 0;
      piVar1 = piVar1 + 1;
    } while (piVar1 != DAT_01dc5354 + DAT_01dc535c);
  }
  DAT_01dc535c = 0;
  return;
}

// 00D7FBD0  cEventCutWork::vf08  size=111  [class]
void __fastcall cEventCutWork::vf08(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x34);
  if (piVar1 != piVar1 + *(int *)(param_1 + 0x3c)) {
    do {
      if ((int *)*piVar1 != (int *)0x0) {
        (**(code **)(*(int *)*piVar1 + 4))(1);
      }
      *piVar1 = 0;
      piVar1 = piVar1 + 1;
    } while (piVar1 != (int *)(*(int *)(param_1 + 0x34) + *(int *)(param_1 + 0x3c) * 4));
  }
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0x1e;
  return;
}

// 015F0760  cEventCutWork::cEventCutWork_3  size=66  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cEventCutWork::cEventCutWork_3(void)

{
  PTR_vftable_018bbad0 = (undefined *)vftable;
  if (DAT_018bbb04 != 0) {
    DAT_018bbb0c = 0;
    if (DAT_018bbb10 != 0) {
      FUN_00dd48d0(DAT_018bbb04,0);
      DAT_018bbb10 = 0;
    }
    DAT_018bbb04 = 0;
    _DAT_018bbb08 = 0;
  }
  return;
}

