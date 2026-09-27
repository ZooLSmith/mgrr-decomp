// src/misc/DebrisLeaveSignalContext.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00808850..00B016A0, 74 functions

#include "mgrr.h"
#include "DebrisLeaveSignalContext.h"

// 00808850  DebrisLeaveSignalContext::vf00  size=6  [class]
undefined * DebrisLeaveSignalContext::vf00(void)

{
  return &DAT_01b35310;
}

// 00808870  DebrisLeaveSignalContext::vf04  size=31  [class]
undefined4 * __thiscall DebrisLeaveSignalContext::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = SignalContext::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 0080C300  DebrisLeaveSignalContext::DebrisLeaveSignalContext_7  size=42  [class]
void __fastcall DebrisLeaveSignalContext::DebrisLeaveSignalContext_7(int param_1)

{
  undefined **local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_4 = *(undefined4 *)(param_1 + 0x4f0);
  local_8 = 0;
  local_c = vftable;
  FUN_00d89e90(0x20,&local_c);
  return;
}

// 0080C330  FUN_0080c330  size=175  [between]
void __fastcall FUN_0080c330(int param_1)

{
  float fVar1;
  
  if (*(int *)(param_1 + 0x1ddc) == 0) {
    *(float *)(param_1 + 0x1de0) =
         -*(float *)(param_1 + 0x1de0) * 0.06 + *(float *)(param_1 + 0x1de0);
    if (*(float *)(param_1 + 0xa8c) <= 1600.0) {
      *(undefined4 *)(param_1 + 0x1ddc) = 1;
    }
  }
  else {
    *(float *)(param_1 + 0x1de0) =
         (1.0 - *(float *)(param_1 + 0x1de0)) * 0.1 + *(float *)(param_1 + 0x1de0);
    fVar1 = *(float *)(param_1 + 0xa8c);
    if (!NAN(fVar1) && 2209.0 < fVar1 != (fVar1 == 2209.0)) {
      *(undefined4 *)(param_1 + 0x1ddc) = 0;
    }
  }
  if (*(int *)(param_1 + 0x4a0) == 1) {
    *(undefined4 *)(param_1 + 0x1de0) = 0;
    *(undefined4 *)(param_1 + 0x1ddc) = 0;
  }
  FUN_00a947e0(0,0,0,*(undefined4 *)(param_1 + 0x1de0));
  return;
}

// 0080C3E0  FUN_0080c3e0  size=580  [between]
void __fastcall FUN_0080c3e0(int param_1)

{
  int iVar1;
  
  FUN_00a82840(0x3dd67750,0xbe32b8c2,0x3dcccccd,0x393702d3,0x3c0efa35);
  FUN_00a82840(0x3e32b8c2,0xbe32b8c2,0x3dcccccd,0x393702d3,0x3c0efa35);
  FUN_00a82840(0x3e32b8c2,0xbe32b8c2,0x3dcccccd,0x393702d3,0x3c0efa35);
  FUN_00a82870(0x3dd67750,0xbdd67750,0x3dcccccd,0x393702d3,0x3c0efa35);
  FUN_00a82870(0x3e32b8c2,0xbe32b8c2,0x3dcccccd,0x393702d3,0x3c0efa35);
  FUN_00a82870(0x3e32b8c2,0xbe32b8c2,0x3dcccccd,0x393702d3,0x3c0efa35);
  FUN_008092d0();
  FUN_00a94bc0(5,0x3e888889);
  FUN_00eaa6e0(0x41200000,0);
  (**(code **)(*(int *)(param_1 + 0x1660) + 8))(0x42700000,0,0);
  if (*(int *)(param_1 + 0x1610) != 0) {
    FUN_00ad0a90();
  }
  *(undefined4 *)(param_1 + 0x1610) = 0;
  *(undefined4 *)(param_1 + 0x1df0) = 0;
  if ((*(int **)(param_1 + 0x798) != (int *)0x0) &&
     (iVar1 = (**(code **)(**(int **)(param_1 + 0x798) + 4))(9), iVar1 != 0)) {
    if (*(int **)(param_1 + 0x798) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0x798) + 4))(9);
    }
    FUN_00eaa6e0(0x41200000,0);
  }
  return;
}

// 0080C630  FUN_0080c630  size=496  [between]
void __fastcall FUN_0080c630(int param_1)

{
  FUN_00a82840(0x3dd67750,0xbe32b8c2,0x3dcccccd,0x393702d3,0x3c0efa35);
  FUN_00a82840(0x3e32b8c2,0xbe32b8c2,0x3dcccccd,0x393702d3,0x3c0efa35);
  FUN_00a82840(0x3e32b8c2,0xbe32b8c2,0x3dcccccd,0x393702d3,0x3c0efa35);
  FUN_00a82870(0x3dd67750,0xbdd67750,0x3dcccccd,0x393702d3,0x3c0efa35);
  FUN_00a82870(0x3e32b8c2,0xbe32b8c2,0x3dcccccd,0x393702d3,0x3c0efa35);
  FUN_00a82870(0x3e32b8c2,0xbe32b8c2,0x3dcccccd,0x393702d3,0x3c0efa35);
  FUN_008092d0();
  FUN_00eaa6e0(0x41200000,0);
  (**(code **)(*(int *)(param_1 + 0x1660) + 8))(0x42700000,0,0);
  if (*(int *)(param_1 + 0x1610) != 0) {
    FUN_00ad0a90();
  }
  *(undefined4 *)(param_1 + 0x1610) = 0;
  *(undefined4 *)(param_1 + 0x1df0) = 0;
  FUN_00a8d280();
  return;
}

// 0080C820  FUN_0080c820  size=1492  [between]
float * __thiscall FUN_0080c820(int param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_28;
  float local_24;
  float local_18;
  
  iVar7 = FUN_00a12210(6);
  fVar1 = *(float *)(iVar7 + 0x40);
  fVar2 = *(float *)(iVar7 + 0x44);
  fVar3 = *(float *)(iVar7 + 0x48);
  iVar7 = *(int *)(param_1 + 0xa84);
  *param_2 = *(float *)(param_1 + 0x40);
  param_2[2] = *(float *)(param_1 + 0x48);
  param_2[3] = *(float *)(param_1 + 0x4c);
  param_2[1] = fVar2;
  fVar1 = fVar1 - *(float *)(iVar7 + 0x40);
  fVar3 = fVar3 - *(float *)(iVar7 + 0x48);
  fVar1 = SQRT(fVar3 * fVar3 + fVar1 * fVar1);
  fVar2 = *(float *)(param_1 + 0x40) - *(float *)(iVar7 + 0x40);
  fVar3 = *(float *)(param_1 + 0x48) - *(float *)(iVar7 + 0x48);
  fVar2 = SQRT(fVar3 * fVar3 + fVar2 * fVar2);
  if ((fVar2 < 15.0) &&
     (fVar3 = *(float *)(param_1 + 0xaa0), !NAN(fVar3) && 0.7853982 < fVar3 != (fVar3 == 0.7853982))
     ) {
    param_2[1] = *(float *)(iVar7 + 0x44) + 1.0;
  }
  if ((fVar2 < 12.0) && (*(float *)(param_1 + 0xaa0) < 0.7853982)) {
    param_2[1] = *(float *)(iVar7 + 0x44) + 1.0;
  }
  if (35.0 < fVar2) {
    fVar2 = param_2[1] - (fVar2 - 5.25);
    param_2[1] = fVar2;
    fVar3 = *(float *)(iVar7 + 0x44) + 5.0;
    if (fVar2 <= fVar3) {
      param_2[1] = fVar3;
    }
  }
  iVar7 = FUN_00a12210(0x20);
  if (((iVar7 != 0) &&
      (iVar4 = *(int *)(param_1 + 0xa84),
      fVar2 = *(float *)(iVar7 + 0x40) - *(float *)(iVar4 + 0x40),
      fVar3 = *(float *)(iVar7 + 0x48) - *(float *)(iVar4 + 0x48),
      SQRT(fVar3 * fVar3 + fVar2 * fVar2) < 9.0)) && (!NAN(fVar1) && 5.0 < fVar1 != (fVar1 == 5.0)))
  {
    *param_2 = *(float *)(iVar7 + 0x40);
    param_2[2] = *(float *)(iVar7 + 0x48);
    param_2[3] = *(float *)(iVar7 + 0x4c);
    fVar2 = *(float *)(iVar7 + 0x44) - 1.5;
    param_2[1] = fVar2;
    fVar3 = *(float *)(iVar4 + 0x44) + 1.0;
    if (fVar2 <= fVar3) {
      param_2[1] = fVar3;
    }
  }
  iVar7 = FUN_00a12210(0x2b);
  if (((iVar7 != 0) &&
      (iVar4 = *(int *)(param_1 + 0xa84),
      fVar2 = *(float *)(iVar7 + 0x40) - *(float *)(iVar4 + 0x40),
      fVar3 = *(float *)(iVar7 + 0x48) - *(float *)(iVar4 + 0x48),
      SQRT(fVar3 * fVar3 + fVar2 * fVar2) < 9.0)) && (!NAN(fVar1) && 5.0 < fVar1 != (fVar1 == 5.0)))
  {
    *param_2 = *(float *)(iVar7 + 0x40);
    param_2[2] = *(float *)(iVar7 + 0x48);
    param_2[3] = *(float *)(iVar7 + 0x4c);
    fVar1 = *(float *)(iVar7 + 0x44) - 1.5;
    param_2[1] = fVar1;
    fVar2 = *(float *)(iVar4 + 0x44) + 1.0;
    if (fVar1 <= fVar2) {
      param_2[1] = fVar2;
    }
  }
  iVar7 = FUN_00a8cab0();
  if (((iVar7 == 0x1b) || (iVar7 = FUN_00a8cab0(), iVar7 == 0x1c)) &&
     (iVar7 = FUN_00a12210(0x36), iVar7 != 0)) {
    *param_2 = *(float *)(iVar7 + 0x40);
    param_2[2] = *(float *)(iVar7 + 0x48);
    param_2[3] = *(float *)(iVar7 + 0x4c);
    param_2[1] = *(float *)(iVar7 + 0x44) - 2.0;
  }
  iVar7 = FUN_00a8cab0();
  if ((iVar7 == 0x12) && (iVar7 = FUN_00a12210(0x2b), iVar7 != 0)) {
    local_40 = *(float *)(iVar7 + 0x40);
    iVar4 = *(int *)(param_1 + 0xa84);
    *param_2 = local_40;
    param_2[1] = *(float *)(iVar7 + 0x44);
    local_38 = *(float *)(iVar7 + 0x48);
    param_2[2] = local_38;
    local_34 = *(float *)(iVar7 + 0x4c);
    param_2[3] = local_34;
    local_40 = local_40 - *(float *)(iVar4 + 0x40);
    local_38 = local_38 - *(float *)(iVar4 + 0x48);
    local_34 = local_34 - *(float *)(iVar4 + 0x4c);
    local_3c = 0.0;
    fVar1 = local_40 * local_40 + local_38 * local_38;
    if (fVar1 < 0.0 == (fVar1 == 0.0)) {
      FUN_00ddf460(&local_40,&local_40);
    }
    else {
      FUN_00dd5650(&DAT_0163d0ac);
      local_40 = 0.0;
      local_3c = 1.0;
      local_38 = 0.0;
    }
    fVar2 = local_40 * 2.0;
    fVar3 = local_3c * 2.0;
    local_28 = local_38 * 2.0;
    local_24 = local_34 * 2.0;
    fVar1 = *(float *)(iVar7 + 0x40) - *(float *)(*(int *)(param_1 + 0xa84) + 0x40);
    fVar6 = *(float *)(iVar7 + 0x48) - *(float *)(*(int *)(param_1 + 0xa84) + 0x48);
    fVar6 = SQRT(fVar6 * fVar6 + fVar1 * fVar1);
    fVar1 = local_28;
    if ((fVar6 < 9.0) && (0 < *(int *)(param_1 + 0x61c))) {
      fVar2 = local_40 * 6.0;
      fVar3 = local_3c * 6.0;
      local_18 = local_38 * 6.0;
      local_24 = local_34 * 6.0;
      fVar1 = local_18;
    }
    fVar5 = local_24;
    if ((fVar6 < 4.5) && (0 < *(int *)(param_1 + 0x61c))) {
      fVar2 = local_40 * 8.0;
      fVar3 = local_3c * 8.0;
      fVar1 = local_38 * 8.0;
      fVar5 = local_34 * 8.0;
    }
    *param_2 = fVar2 + *param_2;
    param_2[1] = fVar3 + param_2[1];
    param_2[2] = fVar1 + param_2[2];
    param_2[3] = fVar5 + param_2[3];
  }
  iVar7 = FUN_00a8cab0();
  if ((iVar7 == 0x13) && (iVar7 = FUN_00a12210(0x20), iVar7 != 0)) {
    local_40 = *(float *)(iVar7 + 0x40);
    iVar4 = *(int *)(param_1 + 0xa84);
    *param_2 = local_40;
    param_2[1] = *(float *)(iVar7 + 0x44);
    local_38 = *(float *)(iVar7 + 0x48);
    param_2[2] = local_38;
    local_34 = *(float *)(iVar7 + 0x4c);
    param_2[3] = local_34;
    local_40 = local_40 - *(float *)(iVar4 + 0x40);
    local_38 = local_38 - *(float *)(iVar4 + 0x48);
    local_34 = local_34 - *(float *)(iVar4 + 0x4c);
    local_3c = 0.0;
    fVar1 = local_40 * local_40 + local_38 * local_38;
    if (fVar1 < 0.0 == (fVar1 == 0.0)) {
      FUN_00ddf460(&local_40,&local_40);
    }
    else {
      FUN_00dd5650(&DAT_0163d0ac);
      local_38 = 0.0;
      local_40 = 0.0;
      local_3c = 1.0;
    }
    fVar2 = local_40 * 2.0;
    fVar3 = local_3c * 2.0;
    fVar1 = local_38 * 2.0;
    local_24 = local_34 * 2.0;
    fVar6 = *(float *)(iVar7 + 0x40) - *(float *)(*(int *)(param_1 + 0xa84) + 0x40);
    fVar5 = *(float *)(iVar7 + 0x48) - *(float *)(*(int *)(param_1 + 0xa84) + 0x48);
    fVar6 = SQRT(fVar5 * fVar5 + fVar6 * fVar6);
    if ((fVar6 < 9.0) && (0 < *(int *)(param_1 + 0x61c))) {
      fVar2 = local_40 * 6.0;
      fVar3 = local_3c * 6.0;
      fVar1 = local_38 * 6.0;
      local_24 = local_34 * 6.0;
    }
    if ((fVar6 < 4.5) && (0 < *(int *)(param_1 + 0x61c))) {
      fVar2 = local_40 * 8.0;
      fVar3 = local_3c * 8.0;
      fVar1 = local_38 * 8.0;
      local_24 = local_34 * 8.0;
    }
    *param_2 = fVar2 + *param_2;
    param_2[1] = param_2[1] + fVar3;
    param_2[2] = fVar1 + param_2[2];
    param_2[3] = local_24 + param_2[3];
  }
  return param_2;
}

// 0080CE00  FUN_0080ce00  size=409  [between]
undefined4 __thiscall FUN_0080ce00(int param_1,undefined4 param_2)

{
  float fVar1;
  float fVar2;
  int *piVar3;
  int iVar4;
  float unaff_ESI;
  float unaff_EDI;
  float *pfVar5;
  float fVar6;
  float fVar7;
  float fStack_a8;
  float fStack_a4;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  float fStack_84;
  float local_80;
  float local_7c;
  float local_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  uint uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined *puStack_48;
  undefined4 uStack_44;
  undefined1 auStack_38 [52];
  
  fVar1 = *(float *)(param_1 + 0x40);
  fVar6 = (float)(param_1 + 0x10);
  local_9c = *(float *)(param_1 + 0x44);
  pfVar5 = &local_80;
  local_98 = *(float *)(param_1 + 0x48);
  local_94 = *(float *)(param_1 + 0x4c);
  local_80 = 0.0;
  local_7c = 8.0;
  local_8c = 8.0;
  local_78 = 0.0;
  local_90 = 0.0;
  local_88 = (float)param_2;
  fVar7 = fVar6;
  D3DXVec3TransformNormal(pfVar5,pfVar5,fVar6);
  D3DXVec3TransformNormal(&local_9c,&local_9c,fVar6);
  local_88 = local_98 + (float)pfVar5;
  fStack_84 = local_94 + fVar7;
  local_80 = local_90 + unaff_EDI;
  local_7c = local_8c + unaff_ESI;
  fVar6 = fStack_a8 + (float)pfVar5;
  fVar7 = fVar7 + fStack_a4;
  fVar2 = unaff_ESI + local_9c;
  piVar3 = (int *)FUN_009f8b60();
  local_78 = local_88;
  fStack_74 = fStack_84;
  fStack_70 = local_80;
  fStack_6c = local_7c;
  uStack_58 = *piVar3 << 0x10 | 0x19;
  uStack_54 = 0x1000000;
  uStack_50 = 0;
  uStack_4c = 0;
  puStack_48 = &DAT_016484f0;
  uStack_44 = 0;
  fStack_68 = fVar6;
  fStack_64 = fVar7;
  fStack_60 = unaff_EDI + fVar1;
  fStack_5c = fVar2;
  iVar4 = RayCastSingleHitWork::RayCastSingleHitWork_2(auStack_38,0,0,0,&local_78);
  if (iVar4 != 0) {
    return 1;
  }
  return 0;
}

// 0080CFA0  FUN_0080cfa0  size=215  [between]
void __fastcall FUN_0080cfa0(int param_1)

{
  int iVar1;
  uint uVar2;
  short sVar3;
  short local_20 [16];
  
  uVar2 = *(uint *)(param_1 + 0x20fc) & 0x80000007;
  local_20[0] = 0x17;
  local_20[1] = 0x16;
  local_20[2] = 3;
  local_20[3] = 0x14;
  local_20[4] = 0x16;
  local_20[5] = 0x14;
  local_20[6] = 0x17;
  local_20[7] = 3;
  local_20[8] = 0x18;
  local_20[9] = 0x1a;
  local_20[10] = 0xb;
  local_20[0xb] = 0x14;
  local_20[0xc] = 0xb;
  local_20[0xd] = 0x1a;
  local_20[0xe] = 0x18;
  local_20[0xf] = 0xb;
  if ((int)uVar2 < 0) {
    uVar2 = (uVar2 - 1 | 0xfffffff8) + 1;
  }
  sVar3 = local_20[uVar2];
  if (sVar3 == 3) {
    iVar1 = FUN_0080ce00(0xc2200000);
    if (iVar1 == 0) {
      FUN_00a8caf0(4,0,0,0);
    }
  }
  if (*(int *)(param_1 + 0x31b0) != 0) {
    uVar2 = *(uint *)(param_1 + 0x20fc) & 0x80000007;
    if ((int)uVar2 < 0) {
      uVar2 = (uVar2 - 1 | 0xfffffff8) + 1;
    }
    sVar3 = local_20[uVar2 + 8];
  }
  FUN_00a8caf0((int)sVar3,0,0,0);
  *(int *)(param_1 + 0x20fc) = *(int *)(param_1 + 0x20fc) + 1;
  if (7 < *(int *)(param_1 + 0x20fc)) {
    *(undefined4 *)(param_1 + 0x20fc) = 0;
  }
  return;
}

// 0080D080  FUN_0080d080  size=820  [between]
void __fastcall FUN_0080d080(int param_1)

{
  float fVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  if (*(int *)(param_1 + 0x307c) != 0) {
    return;
  }
  iVar3 = *(int *)(param_1 + 0x2130);
  iVar4 = 0;
  if (((((iVar3 == 0xc) || (iVar3 == 0x12)) || (iVar3 == 0x13)) || (iVar3 == 0x2b)) &&
     ((*(float *)(param_1 + 0x2138) < 0.0 &&
      (fVar1 = *(float *)(param_1 + 0x2134), !NAN(fVar1) && 0.0 < fVar1 != (fVar1 == 0.0))))) {
    uVar2 = *(ushort *)(param_1 + 0xe94);
    if ((uVar2 & 0x100) == 0) {
      local_90 = 0;
      local_8c = 0;
      uVar6 = 0x2b;
      local_88 = 0;
      puVar5 = &local_90;
    }
    else if ((uVar2 & 4) == 0) {
      local_50 = 0;
      local_4c = 0;
      uVar6 = 0x13;
      local_48 = 0;
      puVar5 = &local_50;
    }
    else if ((uVar2 & 2) == 0) {
      local_70 = 0;
      local_6c = 0;
      uVar6 = 0x12;
      local_68 = 0;
      puVar5 = &local_70;
    }
    else {
      if ((uVar2 & 1) != 0) goto LAB_0080d1ac;
      local_30 = 0;
      local_2c = 0;
      uVar6 = 0xc;
      local_28 = 0;
      puVar5 = &local_30;
    }
    iVar4 = FUN_00c593a0(*(undefined4 *)(param_1 + 0x4f0),0xffffffff,puVar5,0x43480000,0x42c80000,
                         uVar6,4);
  }
LAB_0080d1ac:
  if (((*(int *)(param_1 + 0x2130) == 0x10) || (*(int *)(param_1 + 0x2130) == 0x11)) &&
     ((*(float *)(param_1 + 0x2138) < 0.0 &&
      (0.0 < *(float *)(param_1 + 0x2134) != (*(float *)(param_1 + 0x2134) == 0.0))))) {
    if ((*(ushort *)(param_1 + 0xe94) & 0x40) == 0) {
      local_a0 = 0;
      local_9c = 0;
      uVar6 = 0x10;
      local_98 = 0;
      puVar5 = &local_a0;
    }
    else {
      if ((char)*(ushort *)(param_1 + 0xe94) < '\0') goto LAB_0080d25c;
      local_80 = 0;
      local_7c = 0;
      uVar6 = 0x11;
      local_78 = 0;
      puVar5 = &local_80;
    }
    iVar4 = FUN_00c593a0(*(undefined4 *)(param_1 + 0x4f0),0xffffffff,puVar5,0x43480000,0x42c80000,
                         uVar6,4);
  }
LAB_0080d25c:
  if ((((*(int *)(param_1 + 0x2130) == 0xe) || (*(int *)(param_1 + 0x2130) == 0xf)) &&
      (*(float *)(param_1 + 0x2138) < 0.0)) &&
     (0.0 < *(float *)(param_1 + 0x2134) != (*(float *)(param_1 + 0x2134) == 0.0))) {
    if ((*(ushort *)(param_1 + 0xe94) & 0x10) == 0) {
      local_60 = 0;
      local_5c = 0;
      uVar6 = 0xe;
      local_58 = 0;
      puVar5 = &local_60;
    }
    else {
      if ((*(ushort *)(param_1 + 0xe94) & 0x20) != 0) goto LAB_0080d316;
      local_40 = 0;
      local_3c = 0;
      uVar6 = 0xf;
      local_38 = 0;
      puVar5 = &local_40;
    }
    iVar4 = FUN_00c593a0(*(undefined4 *)(param_1 + 0x4f0),0xffffffff,puVar5,0x43480000,0x42c80000,
                         uVar6,4);
  }
LAB_0080d316:
  if (((*(int *)(param_1 + 0x2130) == 0xd) && (*(float *)(param_1 + 0x2138) < 0.0)) &&
     ((0.0 < *(float *)(param_1 + 0x2134) != (*(float *)(param_1 + 0x2134) == 0.0) &&
      ((*(byte *)(param_1 + 0xe94) & 8) == 0)))) {
    local_20 = 0;
    local_1c = 0;
    local_18 = 0;
    iVar4 = FUN_00c593a0(*(undefined4 *)(param_1 + 0x4f0),0xffffffff,&local_20,0x43480000,0x42c80000
                         ,0xd,4);
  }
  if (iVar4 != 0) {
    *(undefined4 *)(iVar4 + 0x48) = 0;
    *(undefined4 *)(iVar4 + 0x40) = 0x3f99999a;
    *(undefined4 *)(iVar4 + 0x44) = 0x3e99999a;
  }
  return;
}

// 0080D3C0  FUN_0080d3c0  size=457  [between]
void __fastcall FUN_0080d3c0(int param_1)

{
  float fVar1;
  ushort uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  if (*(int *)(param_1 + 0x3078) != 0) {
    *(undefined4 *)(param_1 + 0x307c) = 1;
    fVar1 = *(float *)(param_1 + 0x2134);
    if (!NAN(fVar1) && 0.0 < fVar1 != (fVar1 == 0.0)) {
      uVar2 = *(ushort *)(param_1 + 0xe94);
      if ((uVar2 & 0x100) == 0) {
        local_90 = 0;
        local_8c = 0;
        uVar5 = 0x2b;
        local_88 = 0;
        puVar4 = &local_90;
      }
      else if ((uVar2 & 1) == 0) {
        local_80 = 0;
        local_7c = 0;
        uVar5 = 0xc;
        local_78 = 0;
        puVar4 = &local_80;
      }
      else if ((uVar2 & 0x40) == 0) {
        local_70 = 0;
        local_6c = 0;
        uVar5 = 0x10;
        local_68 = 0;
        puVar4 = &local_70;
      }
      else if ((uVar2 & 0x10) == 0) {
        local_60 = 0;
        local_5c = 0;
        uVar5 = 0xe;
        local_58 = 0;
        puVar4 = &local_60;
      }
      else if ((uVar2 & 4) == 0) {
        local_50 = 0;
        local_4c = 0;
        uVar5 = 0x13;
        local_48 = 0;
        puVar4 = &local_50;
      }
      else if ((uVar2 & 2) == 0) {
        local_40 = 0;
        local_3c = 0;
        uVar5 = 0x12;
        local_38 = 0;
        puVar4 = &local_40;
      }
      else if ((char)uVar2 < '\0') {
        if ((uVar2 & 0x20) != 0) {
          return;
        }
        local_20 = 0;
        local_1c = 0;
        uVar5 = 0xf;
        local_18 = 0;
        puVar4 = &local_20;
      }
      else {
        local_30 = 0;
        local_2c = 0;
        uVar5 = 0x11;
        local_28 = 0;
        puVar4 = &local_30;
      }
      iVar3 = FUN_00c593a0(*(undefined4 *)(param_1 + 0x4f0),0xffffffff,puVar4,0x43480000,0x42c80000,
                           uVar5,4);
      if (iVar3 != 0) {
        *(undefined4 *)(iVar3 + 0x48) = 0;
        *(undefined4 *)(iVar3 + 0x40) = 0x3f99999a;
        *(undefined4 *)(iVar3 + 0x44) = 0x3e99999a;
        return;
      }
    }
  }
  return;
}

// 0080D590  FUN_0080d590  size=306  [between]
void __fastcall FUN_0080d590(int param_1)

{
  float fVar1;
  
  FUN_00a8caf0(3,0,0,0);
  fVar1 = *(float *)(param_1 + 0xa90);
  if (((!NAN(fVar1) && 81.0 < fVar1 != (fVar1 == 81.0)) && (*(float *)(param_1 + 0xa90) <= 529.0))
     && (*(float *)(param_1 + 0xaa0) < 1.0471976)) {
    FUN_00a8caf0(0x1d,0,0,0);
  }
  if (((529.0 < *(float *)(param_1 + 0xa90)) && (*(float *)(param_1 + 0xa90) < 1225.0)) &&
     (*(float *)(param_1 + 0xaa0) < 1.0471976)) {
    FUN_00a8caf0(0x16,0,0,0);
  }
  if (((*(float *)(param_1 + 0xa90) <= 625.0) && (1.0471976 < *(float *)(param_1 + 0xa9c))) &&
     (*(float *)(param_1 + 0xa9c) < 2.6179938)) {
    FUN_00a8caf0(0x13,0,0,0);
  }
  if (((*(float *)(param_1 + 0xa90) <= 625.0) && (*(float *)(param_1 + 0xa9c) < -1.0471976)) &&
     (*(float *)(param_1 + 0xa9c) < -2.6179938)) {
    FUN_00a8caf0(0x12,0,0,0);
  }
  return;
}

// 0080D6D0  FUN_0080d6d0  size=151  [between]
undefined4 __fastcall FUN_0080d6d0(int param_1)

{
  int iVar1;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  uint local_30 [11];
  
  iVar1 = *(int *)(param_1 + 0xa84);
  if (iVar1 != 0) {
    local_40 = *(undefined4 *)(iVar1 + 0x40);
    local_3c = *(undefined4 *)(iVar1 + 0x44);
    local_38 = *(undefined4 *)(iVar1 + 0x48);
    local_34 = *(undefined4 *)(iVar1 + 0x4c);
    local_30[0] = local_30[0] | 0x80000000;
    local_30[1] = 0;
    local_30[2] = 0;
    local_30[3] = 0;
    local_30[4] = 0;
    local_30[5] = 0;
    local_30[6] = 0;
    local_30[7] = 0;
    iVar1 = FUN_00c3d9d0(&local_40,local_30);
    if ((iVar1 != 0) && ((local_30[2] & 0x20000000) != 0)) {
      return 1;
    }
  }
  return 0;
}

// 0080D770  FUN_0080d770  size=967  [between]
void __fastcall FUN_0080d770(int *param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  float unaff_EBX;
  float unaff_ESI;
  int *piVar4;
  float10 fVar5;
  undefined4 uVar6;
  undefined *puVar7;
  int *piStack_34;
  int aiStack_30 [4];
  undefined1 auStack_20 [4];
  float fStack_1c;
  
  (**(code **)(*param_1 + 0x318))();
  param_1[0x764] = 1;
  param_1[0x588] = 1;
  param_1[0x589] = 1;
  param_1[0x587] = 1;
  param_1[0x3ab] = 1;
  param_1[0x3ac] = 1;
  piVar4 = (int *)0x0;
  iVar3 = FUN_00a81330();
  if ((iVar3 != 0) && (piStack_34 = (int *)FUN_00a7c8a0(), piStack_34 != (int *)0x0)) {
    puVar7 = &DAT_01b35b20;
    (**(code **)(*piStack_34 + 4))(&DAT_01b35b20);
    iVar3 = FUN_00dd6d80(puVar7);
    piVar4 = (int *)(-(uint)(iVar3 != 0) & (uint)piStack_34);
  }
  param_1[0x3a8] = 1;
  switch(param_1[0x187]) {
  case 0:
    FUN_00a94bc0(6,0);
    FUN_0080c630();
    FUN_0080c3e0();
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00aa4080(0x143,0,0,0x3f800000,0x8000000,0,0x3f800000);
    if (param_1[0x1d9] != 0) {
      FUN_008e3c10();
    }
    FUN_00c4d1a0(param_1[0x13c],0);
    param_1[0x21c] = 0;
    param_1[0x139] = 1;
    FUN_00eaa6e0(0x3f800000,0);
    FUN_00eaa6e0(0x3f800000,0);
    (**(code **)(*param_1 + 0x344))(0xb,param_1[0x810],1);
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
    }
    break;
  case 2:
    uVar6 = 0x144;
    goto LAB_0080d931;
  case 3:
  case 5:
    goto switchD_0080d807_caseD_3;
  case 4:
    uVar6 = 0x145;
LAB_0080d931:
    FUN_00aa4080(uVar6,0,0,0x3f800000,0x8000000,0,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
switchD_0080d807_caseD_3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 == 0) {
      iVar3 = FUN_00a8c760(10);
      if (iVar3 != 0) {
        (**(code **)(*param_1 + 0x20))();
        FUN_0080af30();
      }
    }
    else {
      param_1[0x187] = param_1[0x187] + 1;
    }
    break;
  case 6:
    FUN_00aa4080(0x146,0,0,0x3f800000,0x8000000,0,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  case 7:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 == 0) {
      iVar3 = FUN_00a8cab0();
      if (iVar3 != 0x10007e) {
        param_1[0x187] = param_1[0x187] + 1;
      }
    }
    else {
      E3_EnemyBoardDebrisSokushi::vf4C();
    }
    break;
  case 8:
    param_1[0x187] = 9;
    param_1[0x248] = 0x41700000;
    goto LAB_0080da48;
  case 9:
LAB_0080da48:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    fVar1 = (float)param_1[0x248];
    param_1[0x248] = (int)(fVar1 - (float)param_1[0x244]);
    if (fVar1 - (float)param_1[0x244] < 0.0) {
      param_1[0x187] = param_1[0x187] + 1;
      E3_EnemyBoardDebrisSokushi::vf4C();
    }
  }
  switchD_0080dbae::default();
  if (((piVar4 != (int *)0x0) && (iVar3 = (**(code **)(*piVar4 + 0x32c))(), iVar3 == 0)) &&
     (iVar3 = FUN_00a8cab0(), iVar3 == 0x10007e)) {
    FUN_00a8ce90(aiStack_30,auStack_20);
    fVar5 = (float10)FUN_00ddba30((float)param_1[0x25] + fStack_1c);
    piVar4[0x25] = (int)(float)fVar5;
    D3DXVec3TransformNormal(aiStack_30,aiStack_30,param_1 + 4);
    fVar1 = (float)param_1[0x10];
    fVar2 = (float)param_1[0x11];
    piVar4[0x16] = (int)((float)param_1[0x12] + (float)piStack_34);
    piVar4[0x14] = (int)(fVar1 + unaff_ESI);
    piVar4[0x15] = (int)(fVar2 + unaff_EBX);
    piVar4[0x17] = aiStack_30[0];
    switchD_0080dbae::default();
  }
  return;
}

// 0080DB60  FUN_0080db60  size=707  [between]
void __fastcall FUN_0080db60(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  (**(code **)(*param_1 + 0x318))();
  param_1[0x764] = 1;
  param_1[0x588] = 1;
  param_1[0x589] = 1;
  param_1[0x587] = 1;
  param_1[0x3ab] = 1;
  param_1[0x3ac] = 1;
  param_1[0x3a8] = 1;
  switch(param_1[0x187]) {
  case 0:
    FUN_00a94bc0(6,0);
    FUN_0080c630();
    FUN_0080c3e0();
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00aa4080(0x14e,0,0,0x3f800000,0x8000000,0,0x3f800000);
    if (param_1[0x1d9] != 0) {
      FUN_008e3c10();
    }
    FUN_00c4d1a0(param_1[0x13c],0);
    FUN_00a93090(7);
    FUN_00eaa6e0(0x3f800000,0);
    FUN_00eaa6e0(0x3f800000,0);
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    FUN_00a94ce0(0);
    switchD_0080dbae::default();
    return;
  case 2:
    param_1[0x187] = 3;
    FUN_00aa4080(0x14f,0,0,0x3f800000,0x8000000,0,0x3f800000);
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
      switchD_0080dbae::default();
      return;
    }
    goto LAB_0080de1a;
  case 4:
    param_1[0x187] = 5;
    uVar2 = 0x150;
    break;
  case 5:
  case 7:
    goto switchD_0080dbae_caseD_5;
  case 6:
    param_1[0x187] = 7;
    uVar2 = 0x151;
    break;
  case 8:
    param_1[0x187] = 9;
    FUN_00aa4080(0x152,0,0,0x3f800000,0x8000000,0,0x3f800000);
  case 9:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      E3_EnemyBoardDebrisSokushi::vf4C();
    }
    goto LAB_0080dd54;
  default:
    goto LAB_0080de1a;
  }
  FUN_00aa4080(uVar2,0,0,0x3f800000,0x8000000,0,0x3f800000);
switchD_0080dbae_caseD_5:
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    param_1[0x187] = param_1[0x187] + 1;
  }
LAB_0080dd54:
  iVar1 = FUN_00a8c760(10);
  if (iVar1 != 0) {
    (**(code **)(*param_1 + 0x20))();
    FUN_0080af30();
    switchD_0080dbae::default();
    return;
  }
LAB_0080de1a:
  switchD_0080dbae::default();
  return;
}

// 0080DE50  FUN_0080de50  size=96  [between]
void __fastcall FUN_0080de50(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x618);
  if (iVar1 == 0) {
    if ((*(int *)(param_1 + 0x61c) == 0) && (600.0 < *(float *)(param_1 + 0x878))) {
      FUN_00a8cb50(2);
      FUN_00a8cb60(0);
    }
  }
  else {
    if (iVar1 == 1) {
      FUN_0080b0a0();
      return;
    }
    if ((iVar1 == 2) && (*(int *)(param_1 + 0x61c) == 0)) {
      *(undefined4 *)(param_1 + 0x61c) = 1;
      E3_EnemyBoardDebrisSokushi::vf4C();
      return;
    }
  }
  return;
}

// 0080DF20  FUN_0080df20  size=538  [between]
void __fastcall FUN_0080df20(int param_1)

{
  float fVar1;
  int iVar2;
  
  if ((900.0 < *(float *)(param_1 + 0xa8c)) && (*(float *)(param_1 + 0x20cc) <= 0.0)) {
    iVar2 = FUN_00a81330();
    if ((iVar2 != 0) &&
       ((iVar2 = FUN_00a7c8a0(), iVar2 != 0 && (iVar2 = FUN_00a7c8a0(), iVar2 != 0)))) {
      *(undefined4 *)(iVar2 + 0xd90) = 1;
    }
    iVar2 = FUN_00a81330();
    if (((iVar2 != 0) && (iVar2 = FUN_00a7c8a0(), iVar2 != 0)) &&
       (iVar2 = FUN_00a7c8a0(), iVar2 != 0)) {
      *(undefined4 *)(iVar2 + 0xd90) = 1;
    }
    iVar2 = FUN_00a81330();
    if (((iVar2 != 0) && (iVar2 = FUN_00a7c8a0(), iVar2 != 0)) &&
       (iVar2 = FUN_00a7c8a0(), iVar2 != 0)) {
      *(undefined4 *)(iVar2 + 0xd90) = 1;
    }
    iVar2 = FUN_00a81330();
    if (((iVar2 != 0) && (iVar2 = FUN_00a7c8a0(), iVar2 != 0)) &&
       (iVar2 = FUN_00a7c8a0(), iVar2 != 0)) {
      *(undefined4 *)(iVar2 + 0xd90) = 1;
    }
  }
  if (*(int *)(param_1 + 0x61c) == 0) {
    if (*(int *)(param_1 + 0x3070) == 0) {
      FUN_00a9f4c0(&DAT_016484fc,0x3e888889,0,0);
      FUN_00a9f600(0xffffffff,0,0,0,0,5,0x3e888889,0);
      FUN_00a9f600(0xffffffff,0,0,0,1,6,0x3e888889,0);
    }
    else {
      FUN_00aa4080(0xdc,0,0x3e888889,0x3f800000,0,0xbf800000,0x3f800000);
    }
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    *(undefined4 *)(param_1 + 0x920) = 0x41200000;
    *(undefined4 *)(param_1 + 0x924) = 0;
    *(undefined4 *)(param_1 + 0x940) = 0;
    FUN_00eaa6e0(0x41200000,0);
    *(undefined4 *)(param_1 + 0xe98) = 0;
  }
  else if (*(int *)(param_1 + 0x61c) != 1) goto LAB_0080e116;
  FUN_0080c330();
  FUN_00ac80a0(0x3f800000,0x3f800000);
LAB_0080e116:
  fVar1 = *(float *)(param_1 + 0x920);
  if (!NAN(fVar1) && 0.0 < fVar1 != (fVar1 == 0.0)) {
    *(float *)(param_1 + 0x920) = *(float *)(param_1 + 0x920) - *(float *)(param_1 + 0x910);
  }
  return;
}

// 0080E140  FUN_0080e140  size=1138  [between]
void __fastcall FUN_0080e140(int *param_1)

{
  short sVar1;
  int iVar2;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  if ((900.0 < (float)param_1[0x2a3]) && ((float)param_1[0x833] <= 0.0)) {
    iVar2 = FUN_00a81330();
    if ((iVar2 != 0) &&
       ((iVar2 = FUN_00a7c8a0(), iVar2 != 0 && (iVar2 = FUN_00a7c8a0(), iVar2 != 0)))) {
      *(undefined4 *)(iVar2 + 0xd90) = 1;
    }
    iVar2 = FUN_00a81330();
    if (((iVar2 != 0) && (iVar2 = FUN_00a7c8a0(), iVar2 != 0)) &&
       (iVar2 = FUN_00a7c8a0(), iVar2 != 0)) {
      *(undefined4 *)(iVar2 + 0xd90) = 1;
    }
    iVar2 = FUN_00a81330();
    if (((iVar2 != 0) && (iVar2 = FUN_00a7c8a0(), iVar2 != 0)) &&
       (iVar2 = FUN_00a7c8a0(), iVar2 != 0)) {
      *(undefined4 *)(iVar2 + 0xd90) = 1;
    }
    iVar2 = FUN_00a81330();
    if (((iVar2 != 0) && (iVar2 = FUN_00a7c8a0(), iVar2 != 0)) &&
       (iVar2 = FUN_00a7c8a0(), iVar2 != 0)) {
      *(undefined4 *)(iVar2 + 0xd90) = 1;
    }
  }
  switch(param_1[0x187]) {
  case 0:
    FUN_00a9f4c0(&DAT_01648504,0x3e888889,0x8000000,0);
    FUN_00a9f600(0xffffffff,0,0,0,0,0x10,0x3e888889,0x8000000);
    FUN_00a9f600(0xffffffff,0,0,0,1,0x1f,0x3e888889,0x8000000);
    sVar1 = FUN_00dde2d0(1,5);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x250] = 0;
    param_1[0x248] = (int)((float)(int)sVar1 * 60.0);
    if ((param_1[0x2a1] != 0) && (iVar2 = FUN_00a979d0(), iVar2 == 0)) {
      FUN_00a8d330(param_1 + 0x10,param_1[0x2a1] + 0x40);
    }
    param_1[0x848] = 0;
    FUN_00eaa6e0(0x41200000,0);
  case 1:
    FUN_0080c330();
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
    }
    break;
  case 2:
    FUN_00a9f4c0(&DAT_01648504,0x3c888889,0,0);
    FUN_00a9f600(0xffffffff,0,0,0,0,0x11,0x3c888889,0);
    FUN_00a9f600(0xffffffff,0,0,0,1,0x20,0x3c888889,0);
    param_1[0x187] = param_1[0x187] + 1;
  case 3:
    FUN_0080c330();
    iVar2 = FUN_00a94ce0(0);
    if ((iVar2 != 0) && (param_1[0x250] = param_1[0x250] + 1, 4 < param_1[0x250])) {
      param_1[0x187] = param_1[0x187] + 1;
    }
    break;
  case 4:
    FUN_00a9f4c0(&DAT_01648504,0x3f000000,0x8000000,0);
    FUN_00a9f600(0xffffffff,0,0,0,0,0x12,0x3f000000,0x8000000);
    FUN_00a9f600(0xffffffff,0,0,0,1,0x21,0x3f000000,0x8000000);
    param_1[0x187] = param_1[0x187] + 1;
  case 5:
    FUN_0080c330();
    iVar2 = FUN_00a94ce0(0);
    if ((iVar2 != 0) && (FUN_00a8caf0(0,0,0,0), param_1[0x848] != 0)) {
      FUN_00a8caf0(0xc,0,0,0);
      param_1[0x833] = 0;
    }
    break;
  default:
    goto switchD_0080e240_default;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
switchD_0080e240_default:
  iVar2 = param_1[0x2a1];
  if ((iVar2 != 0) && (param_1[0x187] < 4)) {
    local_20 = *(undefined4 *)(iVar2 + 0x50);
    local_1c = *(undefined4 *)(iVar2 + 0x54);
    local_18 = *(undefined4 *)(iVar2 + 0x58);
    local_14 = *(undefined4 *)(iVar2 + 0x5c);
    if (param_1[0x81d] == 0) {
      iVar2 = FUN_00a979d0();
      if (iVar2 != 0) {
        FUN_00aa09c0(param_1[0x2a1] + 0x40,0x41200000,1);
        FUN_00a979f0(&local_2c);
        local_20 = local_2c;
        local_1c = local_28;
        local_18 = local_24;
        local_14 = 0x3f800000;
        FUN_00a8e880(&local_20);
        (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x393702d3,0x3c2b92a6,0);
      }
      if (param_1[0x81d] == 0) {
        return;
      }
    }
    FUN_00a8e880(&local_20);
    (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x393702d3,0x3b64c388,0);
  }
  return;
}

// 0080E5D0  DebrisLeaveSignalContext::DebrisLeaveSignalContext_5  size=1776  [class]
void __fastcall DebrisLeaveSignalContext::DebrisLeaveSignalContext_5(int *param_1)

{
  float fVar1;
  float fVar2;
  short sVar3;
  int iVar4;
  undefined4 uVar5;
  float10 fVar6;
  float10 fVar7;
  undefined **local_380;
  float local_37c;
  float local_378;
  int iStack_374;
  undefined4 uStack_368;
  float local_364;
  float local_360 [8];
  undefined4 local_340;
  undefined4 local_33c;
  undefined4 local_338;
  undefined4 local_334;
  uint local_330 [5];
  undefined4 local_31c;
  float local_318;
  float local_314;
  undefined1 local_310;
  int iStack_30c;
  undefined4 local_220;
  undefined4 local_21c;
  undefined4 local_1c0;
  undefined2 uStack_1b6;
  undefined4 uStack_50;
  
  if ((900.0 < (float)param_1[0x2a3]) && ((float)param_1[0x833] <= 0.0)) {
    iVar4 = FUN_00a81330();
    if ((iVar4 != 0) &&
       ((iVar4 = FUN_00a7c8a0(), iVar4 != 0 && (iVar4 = FUN_00a7c8a0(), iVar4 != 0)))) {
      *(undefined4 *)(iVar4 + 0xd90) = 1;
    }
    iVar4 = FUN_00a81330();
    if (((iVar4 != 0) && (iVar4 = FUN_00a7c8a0(), iVar4 != 0)) &&
       (iVar4 = FUN_00a7c8a0(), iVar4 != 0)) {
      *(undefined4 *)(iVar4 + 0xd90) = 1;
    }
    iVar4 = FUN_00a81330();
    if (((iVar4 != 0) && (iVar4 = FUN_00a7c8a0(), iVar4 != 0)) &&
       (iVar4 = FUN_00a7c8a0(), iVar4 != 0)) {
      *(undefined4 *)(iVar4 + 0xd90) = 1;
    }
    iVar4 = FUN_00a81330();
    if (((iVar4 != 0) && (iVar4 = FUN_00a7c8a0(), iVar4 != 0)) &&
       (iVar4 = FUN_00a7c8a0(), iVar4 != 0)) {
      *(undefined4 *)(iVar4 + 0xd90) = 1;
    }
  }
  local_360[0] = 2.86986e-42;
  local_360[1] = 2.87126e-42;
  local_360[2] = 2.87266e-42;
  local_360[3] = 2.87406e-42;
  local_360[4] = 2.87546e-42;
  local_360[5] = 2.87687e-42;
  if (param_1[0x187] == 0) {
    local_378 = (float)param_1[0x13c];
    local_37c = 0.0;
    local_380 = vftable;
    FUN_00d89e90(0x20,&local_380);
    FUN_00aa4080(0x1d,0,0x3e888889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x249] = 0;
    param_1[0x250] = 0;
    param_1[0x251] = 0;
    param_1[600] = param_1[0x10];
    param_1[0x259] = param_1[0x11];
    param_1[0x25a] = param_1[0x12];
    param_1[0x25b] = param_1[0x13];
    param_1[0x843] = 0;
  }
  else if (param_1[0x187] != 1) goto LAB_0080ec72;
  param_1[0x249] = (int)((float)param_1[0x249] - (float)param_1[0x244]);
  iVar4 = FUN_00a959f0(0);
  if (((15.0 <= (float)iVar4) && ((float)param_1[0x249] < 0.0)) && (param_1[0x251] < 2)) {
    iVar4 = FUN_00a12210(local_360[param_1[0x250]]);
    local_380 = (undefined **)
                SQRT(*(float *)(iVar4 + 0x14) * *(float *)(iVar4 + 0x14) +
                     *(float *)(iVar4 + 0x10) * *(float *)(iVar4 + 0x10) +
                     *(float *)(iVar4 + 0x18) * *(float *)(iVar4 + 0x18));
    local_37c = SQRT(*(float *)(iVar4 + 0x20) * *(float *)(iVar4 + 0x20) +
                     *(float *)(iVar4 + 0x24) * *(float *)(iVar4 + 0x24) +
                     *(float *)(iVar4 + 0x28) * *(float *)(iVar4 + 0x28));
    fVar1 = SQRT(*(float *)(iVar4 + 0x38) * *(float *)(iVar4 + 0x38) +
                 *(float *)(iVar4 + 0x34) * *(float *)(iVar4 + 0x34) +
                 *(float *)(iVar4 + 0x30) * *(float *)(iVar4 + 0x30));
    local_364 = *(float *)(iVar4 + 0x28) / fVar1;
    fVar2 = *(float *)(iVar4 + 0x38) / fVar1;
    fVar6 = (float10)FUN_00ddbaa0(-(*(float *)(iVar4 + 0x18) / fVar1));
    fVar7 = (float10)fpatan((float10)local_364,(float10)fVar2);
    local_360[0] = (float)fVar7;
    local_360[1] = (float)fVar6;
    fVar6 = (float10)fpatan((float10)*(float *)(iVar4 + 0x14) / (float10)local_37c,
                            (float10)*(float *)(iVar4 + 0x10) / (float10)(float)local_380);
    local_360[2] = (float)fVar6;
    local_340 = *(undefined4 *)(iVar4 + 0x40);
    local_33c = *(undefined4 *)(iVar4 + 0x44);
    local_338 = *(undefined4 *)(iVar4 + 0x48);
    local_334 = *(undefined4 *)(iVar4 + 0x4c);
    FUN_004105d0();
    FUN_00410710();
    FUN_0041cf30();
    local_21c = 7;
    local_330[1] = 0x3b002;
    local_1c0 = FUN_009f8b40();
    local_220 = 0x16;
    local_31c = 0x1e;
    local_314 = 4.2039e-44;
    local_310 = 0;
    local_318 = 2.10195e-43;
    uVar5 = FUN_00ac84d0(0x14);
    uStack_368 = (**(code **)(*(int *)param_1[0x1d5] + 0xc))(0x14);
    (**(code **)(*(int *)param_1[0x1d5] + 0x14))(0x14);
    local_310 = (**(code **)(*(int *)param_1[0x1d5] + 0x1c))(0x14);
    local_314 = local_364;
    iStack_30c = param_1[0x13c];
    local_31c = uVar5;
    local_318 = fVar2;
    uVar5 = FUN_00a7c7f0();
    FUN_00a7c960(uVar5);
    local_380 = (undefined **)param_1[600];
    local_330[0] = local_330[0] | 4;
    local_37c = (float)param_1[0x259];
    uStack_1b6 = *(undefined2 *)(iVar4 + 0xa0);
    local_378 = (float)param_1[0x25a];
    iStack_374 = param_1[0x25b];
    fVar6 = (float10)FUN_00dde300(0xc0a00000,0x40a00000);
    local_380 = (undefined **)(float)(fVar6 + (float10)(float)local_380);
    fVar6 = (float10)FUN_00dde300(0xc0a00000,0x40a00000);
    local_378 = (float)(fVar6 + (float10)local_378);
    if ((*(byte *)(param_1 + 0x251) & 1) != 0) {
      iVar4 = param_1[0x2a1];
      local_380 = *(undefined ***)(iVar4 + 0x40);
      local_37c = *(float *)(iVar4 + 0x44);
      local_378 = *(float *)(iVar4 + 0x48);
      iStack_374 = *(int *)(iVar4 + 0x4c);
      fVar6 = (float10)FUN_00dde300(0xbf800000,0x3f800000);
      local_380 = (undefined **)(float)(fVar6 + (float10)(float)local_380);
      fVar6 = (float10)FUN_00dde300(0xbf800000,0x3f800000);
      local_378 = (float)(fVar6 + (float10)local_378);
      sVar3 = FUN_00dde2d0(0,3);
      if (sVar3 != 0) {
        fVar6 = (float10)FUN_00dde300(0xc0a00000,0x40a00000);
        local_380 = (undefined **)(float)(fVar6 + (float10)(float)local_380);
        fVar6 = (float10)FUN_00dde300(0xc0a00000,0x40a00000);
        local_378 = (float)(fVar6 + (float10)local_378);
      }
    }
    uStack_50 = 1;
    FUN_00416e30(&local_340,&local_380,local_360,0x3f800000,0x44480000);
    FUN_00ad3be0(param_1[0x13c],local_330);
    param_1[0x250] = param_1[0x250] + 1;
    param_1[0x249] = 0x40a00000;
    if (5 < (uint)param_1[0x250]) {
      param_1[0x251] = param_1[0x251] + 1;
      param_1[0x250] = 0;
    }
  }
  iVar4 = FUN_00a94ce0(0);
  if (((iVar4 != 0) && (FUN_00a8caf0(0,0,0,0), (float)param_1[0x3aa] < 0.0)) &&
     ((fVar1 = (float)param_1[0x2a4], !NAN(fVar1) && 1600.0 < fVar1 != (fVar1 == 1600.0) &&
      ((float)param_1[0x2a8] < 0.87266463)))) {
    if (param_1[0x775] == 0) {
      FUN_00a8caf0(0x1b,0,0,0);
    }
    sVar3 = FUN_00dde2d0(0,3);
    if (sVar3 == 1) {
      FUN_00a8caf0(3,0,0,0);
    }
    sVar3 = FUN_00dde2d0(0,2);
    if (sVar3 == 1) {
      FUN_00a8caf0(0x14,0,0,0);
    }
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
LAB_0080ec72:
  if (param_1[0x2a1] != 0) {
    FUN_00a8e880(param_1[0x2a1] + 0x50);
    (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x393702d3,0x3b64c388,0);
  }
  return;
}

// 0080ECC0  DebrisLeaveSignalContext::DebrisLeaveSignalContext_3  size=479  [class]
void __fastcall DebrisLeaveSignalContext::DebrisLeaveSignalContext_3(int param_1)

{
  int iVar1;
  undefined **local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  if ((900.0 < *(float *)(param_1 + 0xa8c)) && (*(float *)(param_1 + 0x20cc) <= 0.0)) {
    iVar1 = FUN_00a81330();
    if ((iVar1 != 0) &&
       ((iVar1 = FUN_00a7c8a0(), iVar1 != 0 && (iVar1 = FUN_00a7c8a0(), iVar1 != 0)))) {
      *(undefined4 *)(iVar1 + 0xd90) = 1;
    }
    iVar1 = FUN_00a81330();
    if (((iVar1 != 0) && (iVar1 = FUN_00a7c8a0(), iVar1 != 0)) &&
       (iVar1 = FUN_00a7c8a0(), iVar1 != 0)) {
      *(undefined4 *)(iVar1 + 0xd90) = 1;
    }
    iVar1 = FUN_00a81330();
    if (((iVar1 != 0) && (iVar1 = FUN_00a7c8a0(), iVar1 != 0)) &&
       (iVar1 = FUN_00a7c8a0(), iVar1 != 0)) {
      *(undefined4 *)(iVar1 + 0xd90) = 1;
    }
    iVar1 = FUN_00a81330();
    if (((iVar1 != 0) && (iVar1 = FUN_00a7c8a0(), iVar1 != 0)) &&
       (iVar1 = FUN_00a7c8a0(), iVar1 != 0)) {
      *(undefined4 *)(iVar1 + 0xd90) = 1;
    }
  }
  *(undefined4 *)(param_1 + 0x1d90) = 1;
  if (*(int *)(param_1 + 0x61c) == 0) {
    local_4 = *(undefined4 *)(param_1 + 0x4f0);
    local_8 = 0;
    local_c = vftable;
    FUN_00d89e90(0x20,&local_c);
    FUN_00aa4080(0x1e,0,0x3e2aaaab,0x3f800000,0x8000000,0,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    *(undefined4 *)(param_1 + 0x924) = 0;
    *(undefined4 *)(param_1 + 0x940) = 0;
    *(undefined4 *)(param_1 + 0x944) = 0;
    *(undefined4 *)(param_1 + 0x960) = *(undefined4 *)(param_1 + 0x40);
    *(undefined4 *)(param_1 + 0x964) = *(undefined4 *)(param_1 + 0x44);
    *(undefined4 *)(param_1 + 0x968) = *(undefined4 *)(param_1 + 0x48);
    *(undefined4 *)(param_1 + 0x96c) = *(undefined4 *)(param_1 + 0x4c);
    *(undefined4 *)(param_1 + 0x210c) = 0;
  }
  else if (*(int *)(param_1 + 0x61c) != 1) {
    return;
  }
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    FUN_00a8caf0(0,0,0,0);
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  return;
}

// 0080EEA0  DebrisLeaveSignalContext::DebrisLeaveSignalContext_4  size=733  [class]
void __fastcall DebrisLeaveSignalContext::DebrisLeaveSignalContext_4(int param_1)

{
  int iVar1;
  float unaff_ESI;
  float unaff_EDI;
  float10 fVar2;
  float fVar3;
  float afStack_68 [2];
  undefined **local_60;
  undefined4 local_5c;
  float local_58 [2];
  float local_50;
  float local_4c;
  float local_48;
  
  if ((900.0 < *(float *)(param_1 + 0xa8c)) && (*(float *)(param_1 + 0x20cc) <= 0.0)) {
    iVar1 = FUN_00a81330();
    if ((iVar1 != 0) &&
       ((iVar1 = FUN_00a7c8a0(), iVar1 != 0 && (iVar1 = FUN_00a7c8a0(), iVar1 != 0)))) {
      *(undefined4 *)(iVar1 + 0xd90) = 1;
    }
    iVar1 = FUN_00a81330();
    if (((iVar1 != 0) && (iVar1 = FUN_00a7c8a0(), iVar1 != 0)) &&
       (iVar1 = FUN_00a7c8a0(), iVar1 != 0)) {
      *(undefined4 *)(iVar1 + 0xd90) = 1;
    }
    iVar1 = FUN_00a81330();
    if (((iVar1 != 0) && (iVar1 = FUN_00a7c8a0(), iVar1 != 0)) &&
       (iVar1 = FUN_00a7c8a0(), iVar1 != 0)) {
      *(undefined4 *)(iVar1 + 0xd90) = 1;
    }
    iVar1 = FUN_00a81330();
    if (((iVar1 != 0) && (iVar1 = FUN_00a7c8a0(), iVar1 != 0)) &&
       (iVar1 = FUN_00a7c8a0(), iVar1 != 0)) {
      *(undefined4 *)(iVar1 + 0xd90) = 1;
    }
  }
  *(undefined4 *)(param_1 + 0x1d90) = 1;
  if (*(int *)(param_1 + 0x61c) == 0) {
    local_58[0] = *(float *)(param_1 + 0x4f0);
    local_5c = 0;
    local_60 = vftable;
    FUN_00d89e90(0x20,&local_60);
    FUN_00aa4080(0x1e,0,0x3e2aaaab,0x3f800000,0x8000000,0,0x3fa66666);
    iVar1 = FUN_00a92f90();
    *(uint *)(iVar1 + 0x90) = *(uint *)(iVar1 + 0x90) | 1;
    fVar2 = (float10)FUN_00ddba30(*(float *)(param_1 + 0x94) + 3.1415927);
    *(float *)(param_1 + 0x920) = (float)fVar2;
    *(undefined4 *)(param_1 + 0x940) = 0;
    *(undefined4 *)(param_1 + 0x944) = 0;
    *(undefined4 *)(param_1 + 0x924) = 0;
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    *(undefined4 *)(param_1 + 0x960) = *(undefined4 *)(param_1 + 0x40);
    *(undefined4 *)(param_1 + 0x964) = *(undefined4 *)(param_1 + 0x44);
    *(undefined4 *)(param_1 + 0x968) = *(undefined4 *)(param_1 + 0x48);
    *(undefined4 *)(param_1 + 0x96c) = *(undefined4 *)(param_1 + 0x4c);
    *(undefined4 *)(param_1 + 0x210c) = 0;
  }
  else if (*(int *)(param_1 + 0x61c) != 1) goto LAB_0080f0cf;
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    FUN_00a8caf0(0x1d,0,0,0);
    FUN_00a8caf0(0,0,0,0);
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
LAB_0080f0cf:
  iVar1 = FUN_00a92f90();
  FUN_00e332b0(&local_50,*(undefined4 *)(iVar1 + 0xa0));
  local_60 = (undefined **)0x0;
  local_5c = 0;
  local_58[0] = SQRT(local_48 * local_48 + local_50 * local_50 + local_4c * local_4c);
  fVar3 = *(float *)(param_1 + 0x920);
  D3DXMatrixRotationY(&local_50);
  D3DXVec3TransformNormal(afStack_68,afStack_68,local_58);
  *(float *)(param_1 + 0x50) = *(float *)(param_1 + 0x50) + fVar3 * 0.5;
  *(float *)(param_1 + 0x54) = unaff_EDI * 0.5 + *(float *)(param_1 + 0x54);
  *(float *)(param_1 + 0x58) = *(float *)(param_1 + 0x58) + unaff_ESI * 0.5;
  *(float *)(param_1 + 0x5c) = afStack_68[0] * 0.5 + *(float *)(param_1 + 0x5c);
  return;
}

// 0080F180  FUN_0080f180  size=597  [callgraph]
void __fastcall FUN_0080f180(int *param_1)

{
  float fVar1;
  short sVar2;
  int iVar3;
  
  if ((float)param_1[0x833] <= 0.0) {
    iVar3 = FUN_00a81330();
    if (((iVar3 != 0) && (iVar3 = FUN_00a7c8a0(), iVar3 != 0)) &&
       (iVar3 = FUN_00a7c8a0(), iVar3 != 0)) {
      *(undefined4 *)(iVar3 + 0xd90) = 1;
    }
    iVar3 = FUN_00a81330();
    if (((iVar3 != 0) && (iVar3 = FUN_00a7c8a0(), iVar3 != 0)) &&
       (iVar3 = FUN_00a7c8a0(), iVar3 != 0)) {
      *(undefined4 *)(iVar3 + 0xd90) = 1;
    }
    iVar3 = FUN_00a81330();
    if (((iVar3 != 0) && (iVar3 = FUN_00a7c8a0(), iVar3 != 0)) &&
       (iVar3 = FUN_00a7c8a0(), iVar3 != 0)) {
      *(undefined4 *)(iVar3 + 0xd90) = 1;
    }
    iVar3 = FUN_00a81330();
    if (((iVar3 != 0) && (iVar3 = FUN_00a7c8a0(), iVar3 != 0)) &&
       (iVar3 = FUN_00a7c8a0(), iVar3 != 0)) {
      *(undefined4 *)(iVar3 + 0xd90) = 1;
    }
  }
  if (param_1[0x187] == 0) {
    param_1[0x249] = 0x3f666666;
    sVar2 = FUN_00dde2d0(0,2);
    if (sVar2 == 1) {
      param_1[0x249] = 0x3f99999a;
    }
    FUN_00a9f4c0(&DAT_0164850c,0x3e888889,0x8000000,0);
    FUN_00a9f600(0xffffffff,0,0,0,0,0x2b,0x3e888889,0x8000000);
    FUN_00a9f600(0xffffffff,0,0,0,1,0x30,0x3e888889,0x8000000);
    FUN_00a96030(0,param_1[0x249]);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x248] = 0x3fc00000;
    if (param_1[0x777] == 1) {
      param_1[0x248] = 0x3f800000;
    }
  }
  else if (param_1[0x187] != 1) goto LAB_0080f366;
  FUN_0080c330();
  FUN_00ac80a0(param_1[0x248],0x3f800000);
  iVar3 = FUN_00a94ce0(0);
  if (iVar3 != 0) {
    FUN_00a8caf0(0,0,0,0);
  }
LAB_0080f366:
  if (((param_1[0x2a1] != 0) && (iVar3 = FUN_00a8c760(0), iVar3 != 0)) &&
     (fVar1 = (float)param_1[0x2a4], !NAN(fVar1) && 400.0 < fVar1 != (fVar1 == 400.0))) {
    FUN_00a8e880(param_1[0x2a1] + 0x40);
    (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x393702d3,0x3c8efa35,0);
  }
  return;
}

// 0080F3E0  FUN_0080f3e0  size=597  [callgraph]
void __fastcall FUN_0080f3e0(int *param_1)

{
  float fVar1;
  short sVar2;
  int iVar3;
  
  if ((float)param_1[0x833] <= 0.0) {
    iVar3 = FUN_00a81330();
    if (((iVar3 != 0) && (iVar3 = FUN_00a7c8a0(), iVar3 != 0)) &&
       (iVar3 = FUN_00a7c8a0(), iVar3 != 0)) {
      *(undefined4 *)(iVar3 + 0xd90) = 1;
    }
    iVar3 = FUN_00a81330();
    if (((iVar3 != 0) && (iVar3 = FUN_00a7c8a0(), iVar3 != 0)) &&
       (iVar3 = FUN_00a7c8a0(), iVar3 != 0)) {
      *(undefined4 *)(iVar3 + 0xd90) = 1;
    }
    iVar3 = FUN_00a81330();
    if (((iVar3 != 0) && (iVar3 = FUN_00a7c8a0(), iVar3 != 0)) &&
       (iVar3 = FUN_00a7c8a0(), iVar3 != 0)) {
      *(undefined4 *)(iVar3 + 0xd90) = 1;
    }
    iVar3 = FUN_00a81330();
    if (((iVar3 != 0) && (iVar3 = FUN_00a7c8a0(), iVar3 != 0)) &&
       (iVar3 = FUN_00a7c8a0(), iVar3 != 0)) {
      *(undefined4 *)(iVar3 + 0xd90) = 1;
    }
  }
  if (param_1[0x187] == 0) {
    param_1[0x249] = 0x3f666666;
    sVar2 = FUN_00dde2d0(0,2);
    if (sVar2 == 1) {
      param_1[0x249] = 0x3f99999a;
    }
    FUN_00a9f4c0(&DAT_0164850c,0x3e888889,0x8000000,0);
    FUN_00a9f600(0xffffffff,0,0,0,0,0x2d,0x3e888889,0x8000000);
    FUN_00a9f600(0xffffffff,0,0,0,1,0x32,0x3e888889,0x8000000);
    FUN_00a96030(0,param_1[0x249]);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x248] = 0x3fc00000;
    if (param_1[0x777] == 1) {
      param_1[0x248] = 0x3f800000;
    }
  }
  else if (param_1[0x187] != 1) goto LAB_0080f5c6;
  FUN_0080c330();
  FUN_00ac80a0(param_1[0x248],0x3f800000);
  iVar3 = FUN_00a94ce0(0);
  if (iVar3 != 0) {
    FUN_00a8caf0(0,0,0,0);
  }
LAB_0080f5c6:
  if (((param_1[0x2a1] != 0) && (iVar3 = FUN_00a8c760(0), iVar3 != 0)) &&
     (fVar1 = (float)param_1[0x2a4], !NAN(fVar1) && 400.0 < fVar1 != (fVar1 == 400.0))) {
    FUN_00a8e880(param_1[0x2a1] + 0x40);
    (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x393702d3,0x3c8efa35,0);
  }
  return;
}

// 0080F640  FUN_0080f640  size=597  [callgraph]
void __fastcall FUN_0080f640(int *param_1)

{
  float fVar1;
  short sVar2;
  int iVar3;
  
  if ((float)param_1[0x833] <= 0.0) {
    iVar3 = FUN_00a81330();
    if (((iVar3 != 0) && (iVar3 = FUN_00a7c8a0(), iVar3 != 0)) &&
       (iVar3 = FUN_00a7c8a0(), iVar3 != 0)) {
      *(undefined4 *)(iVar3 + 0xd90) = 1;
    }
    iVar3 = FUN_00a81330();
    if (((iVar3 != 0) && (iVar3 = FUN_00a7c8a0(), iVar3 != 0)) &&
       (iVar3 = FUN_00a7c8a0(), iVar3 != 0)) {
      *(undefined4 *)(iVar3 + 0xd90) = 1;
    }
    iVar3 = FUN_00a81330();
    if (((iVar3 != 0) && (iVar3 = FUN_00a7c8a0(), iVar3 != 0)) &&
       (iVar3 = FUN_00a7c8a0(), iVar3 != 0)) {
      *(undefined4 *)(iVar3 + 0xd90) = 1;
    }
    iVar3 = FUN_00a81330();
    if (((iVar3 != 0) && (iVar3 = FUN_00a7c8a0(), iVar3 != 0)) &&
       (iVar3 = FUN_00a7c8a0(), iVar3 != 0)) {
      *(undefined4 *)(iVar3 + 0xd90) = 1;
    }
  }
  if (param_1[0x187] == 0) {
    param_1[0x249] = 0x3f666666;
    sVar2 = FUN_00dde2d0(0,2);
    if (sVar2 == 1) {
      param_1[0x249] = 0x3f99999a;
    }
    FUN_00a9f4c0(&DAT_0164850c,0x3e888889,0x8000000,0);
    FUN_00a9f600(0xffffffff,0,0,0,0,0x2c,0x3e888889,0x8000000);
    FUN_00a9f600(0xffffffff,0,0,0,1,0x31,0x3e888889,0x8000000);
    FUN_00a96030(0,param_1[0x249]);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x248] = 0x3fc00000;
    if (param_1[0x777] == 1) {
      param_1[0x248] = 0x3f800000;
    }
  }
  else if (param_1[0x187] != 1) goto LAB_0080f826;
  FUN_0080c330();
  FUN_00ac80a0(param_1[0x248],0x3f800000);
  iVar3 = FUN_00a94ce0(0);
  if (iVar3 != 0) {
    FUN_00a8caf0(0,0,0,0);
  }
LAB_0080f826:
  if (((param_1[0x2a1] != 0) && (iVar3 = FUN_00a8c760(0), iVar3 != 0)) &&
     (fVar1 = (float)param_1[0x2a4], !NAN(fVar1) && 400.0 < fVar1 != (fVar1 == 400.0))) {
    FUN_00a8e880(param_1[0x2a1] + 0x40);
    (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x393702d3,0x3c8efa35,0);
  }
  return;
}

// 0080F8A0  FUN_0080f8a0  size=597  [callgraph]
void __fastcall FUN_0080f8a0(int *param_1)

{
  float fVar1;
  short sVar2;
  int iVar3;
  
  if ((float)param_1[0x833] <= 0.0) {
    iVar3 = FUN_00a81330();
    if (((iVar3 != 0) && (iVar3 = FUN_00a7c8a0(), iVar3 != 0)) &&
       (iVar3 = FUN_00a7c8a0(), iVar3 != 0)) {
      *(undefined4 *)(iVar3 + 0xd90) = 1;
    }
    iVar3 = FUN_00a81330();
    if (((iVar3 != 0) && (iVar3 = FUN_00a7c8a0(), iVar3 != 0)) &&
       (iVar3 = FUN_00a7c8a0(), iVar3 != 0)) {
      *(undefined4 *)(iVar3 + 0xd90) = 1;
    }
    iVar3 = FUN_00a81330();
    if (((iVar3 != 0) && (iVar3 = FUN_00a7c8a0(), iVar3 != 0)) &&
       (iVar3 = FUN_00a7c8a0(), iVar3 != 0)) {
      *(undefined4 *)(iVar3 + 0xd90) = 1;
    }
    iVar3 = FUN_00a81330();
    if (((iVar3 != 0) && (iVar3 = FUN_00a7c8a0(), iVar3 != 0)) &&
       (iVar3 = FUN_00a7c8a0(), iVar3 != 0)) {
      *(undefined4 *)(iVar3 + 0xd90) = 1;
    }
  }
  if (param_1[0x187] == 0) {
    param_1[0x249] = 0x3f666666;
    sVar2 = FUN_00dde2d0(0,2);
    if (sVar2 == 1) {
      param_1[0x249] = 0x3f99999a;
    }
    FUN_00a9f4c0(&DAT_0164850c,0x3e888889,0x8000000,0);
    FUN_00a9f600(0xffffffff,0,0,0,0,0x2e,0x3e888889,0x8000000);
    FUN_00a9f600(0xffffffff,0,0,0,1,0x33,0x3e888889,0x8000000);
    FUN_00a96030(0,param_1[0x249]);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x248] = 0x3fc00000;
    if (param_1[0x777] == 1) {
      param_1[0x248] = 0x3f800000;
    }
  }
  else if (param_1[0x187] != 1) goto LAB_0080fa86;
  FUN_0080c330();
  FUN_00ac80a0(param_1[0x248],0x3f800000);
  iVar3 = FUN_00a94ce0(0);
  if (iVar3 != 0) {
    FUN_00a8caf0(0,0,0,0);
  }
LAB_0080fa86:
  if (((param_1[0x2a1] != 0) && (iVar3 = FUN_00a8c760(0), iVar3 != 0)) &&
     (fVar1 = (float)param_1[0x2a4], !NAN(fVar1) && 400.0 < fVar1 != (fVar1 == 400.0))) {
    FUN_00a8e880(param_1[0x2a1] + 0x40);
    (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x393702d3,0x3c8efa35,0);
  }
  return;
}

// 0080FB00  FUN_0080fb00  size=195  [callgraph]
void __fastcall FUN_0080fb00(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x61c) == 0) {
    FUN_00a9f4c0(&DAT_016484fc,0x3e888889,0x8000000,0);
    FUN_00a9f600(0xffffffff,0,0,0,0,7,0x3e888889,0x8000000);
    FUN_00a9f600(0xffffffff,0,0,0,1,8,0x3e888889,0x8000000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    FUN_0080c630();
  }
  else if (*(int *)(param_1 + 0x61c) != 1) {
    return;
  }
  FUN_0080c330();
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    FUN_00a8caf0(0,0,0,0);
    *(undefined4 *)(param_1 + 0xea4) = 0x45610000;
  }
  return;
}

// 0080FBD0  FUN_0080fbd0  size=143  [callgraph]
void __fastcall FUN_0080fbd0(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x61c) == 0) {
    FUN_00aa4080(8,0,0x3e888889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    FUN_0080c630();
  }
  else if (*(int *)(param_1 + 0x61c) != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    FUN_00a8caf0(0,0,0,0);
    *(undefined4 *)(param_1 + 0xea4) = 0x45610000;
  }
  return;
}

// 0080FC60  FUN_0080fc60  size=191  [callgraph]
void __fastcall FUN_0080fc60(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x61c) == 0) {
    FUN_00aa4080(0x49,0,0x3e888889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    FUN_0080c630();
  }
  else if (*(int *)(param_1 + 0x61c) != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    FUN_00a8caf0(0,0,0,0);
    *(undefined4 *)(param_1 + 0xea8) = 0x41f00000;
    iVar1 = FUN_00ac4780();
    if (iVar1 == 2) {
      *(undefined4 *)(param_1 + 0xea8) = 0x41f00000;
    }
    iVar1 = FUN_00ac4780();
    if (2 < iVar1) {
      *(undefined4 *)(param_1 + 0xea8) = 0x40c00000;
    }
  }
  return;
}

// 0080FD20  FUN_0080fd20  size=191  [callgraph]
void __fastcall FUN_0080fd20(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x61c) == 0) {
    FUN_00aa4080(0x6f,0,0x3e888889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    FUN_0080c630();
  }
  else if (*(int *)(param_1 + 0x61c) != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    FUN_00a8caf0(0,0,0,0);
    *(undefined4 *)(param_1 + 0xea8) = 0x41f00000;
    iVar1 = FUN_00ac4780();
    if (iVar1 == 2) {
      *(undefined4 *)(param_1 + 0xea8) = 0x41f00000;
    }
    iVar1 = FUN_00ac4780();
    if (2 < iVar1) {
      *(undefined4 *)(param_1 + 0xea8) = 0x40c00000;
    }
  }
  return;
}

// 0080FDE0  FUN_0080fde0  size=232  [callgraph]
void __fastcall FUN_0080fde0(int param_1)

{
  float fVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (*(int *)(param_1 + 0x61c) != 0) {
    iVar2 = FUN_00ac4780();
    if (1 < iVar2) {
      iVar2 = FUN_00a8c760(4);
      if ((((iVar2 != 0) && (*(int *)(param_1 + 0x1df0) == 0)) &&
          (*(float *)(param_1 + 0xa90) <= 1225.0)) &&
         ((fVar1 = *(float *)(param_1 + 0xa90), !NAN(fVar1) && 25.0 < fVar1 != (fVar1 == 25.0) &&
          (*(float *)(param_1 + 0xaa0) < 2.6179938)))) {
        if ((*(byte *)(param_1 + 0x2110) & 1) == 0) {
          uVar3 = 0x1d;
        }
        else {
          uVar3 = 4;
        }
        FUN_00a8caf0(uVar3,0,0,0);
        *(int *)(param_1 + 0x2110) = *(int *)(param_1 + 0x2110) + 1;
      }
      iVar2 = FUN_00a8c760(4);
      if (((iVar2 != 0) && (*(int *)(param_1 + 0x1df0) == 0)) &&
         ((*(float *)(param_1 + 0xa90) <= 1225.0 &&
          ((fVar1 = *(float *)(param_1 + 0xa90), !NAN(fVar1) && 400.0 < fVar1 != (fVar1 == 400.0) &&
           (*(float *)(param_1 + 0xaa0) < 2.6179938)))))) {
        FUN_0080cfa0();
        return;
      }
    }
  }
  return;
}

// 0080FED0  FUN_0080fed0  size=232  [callgraph]
void __fastcall FUN_0080fed0(int param_1)

{
  float fVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (*(int *)(param_1 + 0x61c) != 0) {
    iVar2 = FUN_00ac4780();
    if (1 < iVar2) {
      iVar2 = FUN_00a8c760(4);
      if ((((iVar2 != 0) && (*(int *)(param_1 + 0x1df0) == 0)) &&
          (*(float *)(param_1 + 0xa90) <= 1225.0)) &&
         ((fVar1 = *(float *)(param_1 + 0xa90), !NAN(fVar1) && 25.0 < fVar1 != (fVar1 == 25.0) &&
          (*(float *)(param_1 + 0xaa0) < 2.6179938)))) {
        if ((*(byte *)(param_1 + 0x2110) & 1) == 0) {
          uVar3 = 0x1d;
        }
        else {
          uVar3 = 4;
        }
        FUN_00a8caf0(uVar3,0,0,0);
        *(int *)(param_1 + 0x2110) = *(int *)(param_1 + 0x2110) + 1;
      }
      iVar2 = FUN_00a8c760(4);
      if (((iVar2 != 0) && (*(int *)(param_1 + 0x1df0) == 0)) &&
         ((*(float *)(param_1 + 0xa90) <= 1225.0 &&
          ((fVar1 = *(float *)(param_1 + 0xa90), !NAN(fVar1) && 400.0 < fVar1 != (fVar1 == 400.0) &&
           (*(float *)(param_1 + 0xaa0) < 2.6179938)))))) {
        FUN_0080cfa0();
        return;
      }
    }
  }
  return;
}

// 0080FFD0  FUN_0080ffd0  size=418  [callgraph]
void __fastcall FUN_0080ffd0(int param_1)

{
  float fVar1;
  int iVar2;
  
  switch(*(undefined4 *)(param_1 + 0x61c)) {
  case 0:
    FUN_00aa4080(0x6c,0,0x3e888889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    FUN_0080c630();
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
      return;
    }
    break;
  case 2:
    FUN_00aa4080(0x6d,0,0,0x3f800000,0,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    *(undefined4 *)(param_1 + 0x920) = 0x44960000;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    fVar1 = *(float *)(param_1 + 0x920) - *(float *)(param_1 + 0x910);
    *(float *)(param_1 + 0x920) = fVar1;
    if (fVar1 < 0.0) {
      *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
      return;
    }
    break;
  case 4:
    FUN_00aa4080(0x6e,0,0x3daaaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  case 5:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      FUN_00a8caf0(0,0,0,0);
      *(undefined4 *)(param_1 + 0xea8) = 0x41f00000;
      iVar2 = FUN_00ac4780();
      if (iVar2 == 2) {
        *(undefined4 *)(param_1 + 0xea8) = 0x41f00000;
      }
      iVar2 = FUN_00ac4780();
      if (2 < iVar2) {
        *(undefined4 *)(param_1 + 0xea8) = 0x40c00000;
        return;
      }
    }
  }
  return;
}

// 00810190  FUN_00810190  size=1454  [callgraph]
void __fastcall FUN_00810190(int *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  if (((0 < param_1[0x187]) && (param_1[0x187] < 6)) && (param_1[0x81f] != 0)) {
    param_1[0x82a] = 0;
    FUN_00a8caf0(0x2a,0,0,0);
    return;
  }
  param_1[0x588] = 1;
  FUN_00a12210(0xf00);
  switch(param_1[0x187]) {
  case 0:
    FUN_00aa4080(0x74,0,0x3daaaaab,0x3f800000,0x8000000,0,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x249] = 0x3f800000;
    FUN_00a8d280();
    FUN_00a828a0(0x3dcccccd,0x3ae4c388,0x3d567750);
    param_1[0x77c] = 0;
    FUN_0080c630();
    param_1[0x81f] = 0;
    break;
  case 1:
  case 3:
    break;
  case 2:
    FUN_00aa4080(0x75,0,0,0x3f800000,0x8000000,0,0x40000000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00a8d280();
    break;
  case 4:
    FUN_00aa4080(0x76,0,0x3daaaaab,0x3f800000,0x8000000,0,0x3fb33333);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00a8d280();
    goto LAB_0081033d;
  case 5:
LAB_0081033d:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar5 = FUN_00a94ce0(0);
    if (iVar5 != 0) {
      FUN_00a8caf0(0,0,0,0);
      param_1[0x3aa] = 0x41f00000;
      iVar5 = FUN_00ac4780();
      if (iVar5 == 2) {
        param_1[0x3aa] = 0x41f00000;
      }
      iVar5 = FUN_00ac4780();
      if (2 < iVar5) {
        param_1[0x3aa] = 0x40c00000;
      }
    }
  default:
    goto switchD_008101fa_default;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar5 = FUN_00a94ce0(0);
  if (iVar5 != 0) {
    param_1[0x187] = param_1[0x187] + 1;
  }
switchD_008101fa_default:
  if (((param_1[0x81d] != 0) && (param_1[0x2a1] != 0)) && (iVar5 = FUN_00a8c760(10), iVar5 != 0)) {
    iVar5 = param_1[0x2a1];
    param_1[0x764] = 1;
    local_20 = (float)param_1[0x10] - *(float *)(iVar5 + 0x40);
    local_18 = (float)param_1[0x12] - *(float *)(iVar5 + 0x48);
    local_14 = (float)param_1[0x13] - *(float *)(iVar5 + 0x4c);
    local_1c = 0.0;
    if (((param_1[0x187] == 1) &&
        (fVar1 = local_20 * local_20 + local_18 * local_18, fVar1 < 1600.0)) && (400.0 < fVar1)) {
      fVar2 = 32.0 - SQRT(fVar1);
      if (fVar1 < 0.0 == (fVar1 == 0.0)) {
        FUN_00ddf460(&local_20,&local_20);
      }
      else {
        FUN_00dd5650(&DAT_0163d0ac);
        local_18 = 0.0;
        local_20 = 0.0;
        local_1c = 1.0;
      }
      local_20 = local_20 * fVar2 * 0.1;
      local_1c = fVar2 * local_1c * 0.1;
      local_18 = local_18 * fVar2 * 0.1;
      local_14 = fVar2 * local_14 * 0.1;
      param_1[0x14] = (int)(local_20 + (float)param_1[0x14]);
      param_1[0x15] = (int)(local_1c + (float)param_1[0x15]);
      param_1[0x16] = (int)(local_18 + (float)param_1[0x16]);
      param_1[0x17] = (int)(local_14 + (float)param_1[0x17]);
    }
    if (((param_1[0x187] == 5) &&
        (fVar1 = local_18 * local_18 + local_1c * local_1c + local_20 * local_20, fVar1 < 2025.0))
       && (400.0 < fVar1)) {
      fVar2 = 35.0 - SQRT(fVar1);
      if (fVar1 < 0.0 == (fVar1 == 0.0)) {
        FUN_00ddf460(&local_20,&local_20);
        fVar1 = local_18;
        fVar3 = local_1c;
        fVar4 = local_20;
      }
      else {
        FUN_00dd5650(&DAT_0163d0ac);
        fVar1 = 0.0;
        fVar4 = 0.0;
        fVar3 = 1.0;
      }
      param_1[0x14] = (int)(fVar4 * fVar2 * 0.1 + (float)param_1[0x14]);
      param_1[0x15] = (int)(fVar2 * fVar3 * 0.1 + (float)param_1[0x15]);
      param_1[0x16] = (int)(fVar1 * fVar2 * 0.1 + (float)param_1[0x16]);
      param_1[0x17] = (int)(fVar2 * local_14 * 0.1 + (float)param_1[0x17]);
    }
  }
  iVar5 = param_1[0x2a1];
  fVar1 = (float)param_1[0x10] - *(float *)(iVar5 + 0x40);
  fVar2 = (float)param_1[0x12] - *(float *)(iVar5 + 0x48);
  if (((15.0 <= SQRT(fVar2 * fVar2 + fVar1 * fVar1)) && (param_1[0x81d] != 0)) &&
     ((iVar5 != 0 && (iVar5 = FUN_00a8c760(0), iVar5 != 0)))) {
    FUN_00a8e880(param_1[0x2a1] + 0x50);
    fVar1 = (float)param_1[0x2a8];
    if (!NAN(fVar1) && 0.08726646 < fVar1 != (fVar1 == 0.08726646)) {
      (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x393702d3,0x3db2b8c2,0);
    }
  }
  iVar5 = param_1[0x2a1];
  if (iVar5 != 0) {
    fVar1 = (float)param_1[0x10] - *(float *)(iVar5 + 0x40);
    fVar2 = (float)param_1[0x12] - *(float *)(iVar5 + 0x48);
    fVar2 = SQRT(fVar2 * fVar2 + fVar1 * fVar1);
    fVar1 = (float)param_1[0x249];
    if (fVar2 < 16.65) {
      fVar1 = 0.0;
    }
    if ((16.65 < fVar2 != (fVar2 == 16.65)) && (fVar2 < 31.62)) {
      fVar1 = (fVar2 - 16.65) * 0.06680026;
    }
    param_1[0x249] = (int)((fVar1 - (float)param_1[0x249]) * 0.1 + (float)param_1[0x249]);
  }
  return;
}

// 00810760  FUN_00810760  size=1208  [callgraph]
void __fastcall FUN_00810760(int *param_1)

{
  float fVar1;
  float fVar2;
  short sVar3;
  int iVar4;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  if (((0 < param_1[0x187]) && (param_1[0x187] < 6)) && (param_1[0x81f] != 0)) {
    param_1[0x82a] = 0;
    FUN_00a8caf0(0x2a,0,0,0);
    return;
  }
  param_1[0x588] = 1;
  FUN_00a12210(0xf00);
  switch(param_1[0x187]) {
  case 0:
    param_1[0x187] = 1;
    sVar3 = FUN_00dde2d0(0,1);
    param_1[0x250] = sVar3 + 1;
    param_1[0x81f] = 0;
    FUN_00c81b30(0x15);
  case 1:
    FUN_00aa4080(0x98,0,0x3e888889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x249] = 0x3f800000;
    FUN_00a8d280();
    FUN_00a828a0(0x3dcccccd,0x3ae4c388,0x3d567750);
    param_1[0x77c] = 0;
    FUN_0080c630();
  case 2:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar4 = FUN_00a94ce0(0);
    if (iVar4 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
    }
    break;
  case 3:
    FUN_00aa4080(0x9a,0,0x3c888889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00a8d280();
    FUN_008f0450("sword",0x10000,0);
  case 4:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar4 = FUN_00a94ce0(0);
    if (iVar4 != 0) {
      FUN_00a8caf0(0,0,0,0);
      param_1[0x3aa] = 0x41f00000;
      iVar4 = FUN_00ac4780();
      if (iVar4 == 2) {
        param_1[0x3aa] = 0x41f00000;
      }
      iVar4 = FUN_00ac4780();
      if (2 < iVar4) {
        param_1[0x3aa] = 0x40c00000;
      }
    }
  }
  if (((param_1[0x81d] == 0) || (param_1[0x2a1] == 0)) ||
     ((iVar4 = FUN_00a8c760(0), iVar4 == 0 ||
      (fVar1 = (float)param_1[0x2a4], NAN(fVar1) || 400.0 < fVar1 == (fVar1 == 400.0))))) {
    if ((float)param_1[0x833] <= 0.0) {
      iVar4 = FUN_00a81330();
      if (((iVar4 != 0) && (iVar4 = FUN_00a7c8a0(), iVar4 != 0)) &&
         (iVar4 = FUN_00a7c8a0(), iVar4 != 0)) {
        *(undefined4 *)(iVar4 + 0xd90) = 1;
      }
      iVar4 = FUN_00a81330();
      if (((iVar4 != 0) && (iVar4 = FUN_00a7c8a0(), iVar4 != 0)) &&
         (iVar4 = FUN_00a7c8a0(), iVar4 != 0)) {
        *(undefined4 *)(iVar4 + 0xd90) = 1;
      }
      iVar4 = FUN_00a81330();
      if (((iVar4 != 0) && (iVar4 = FUN_00a7c8a0(), iVar4 != 0)) &&
         (iVar4 = FUN_00a7c8a0(), iVar4 != 0)) {
        *(undefined4 *)(iVar4 + 0xd90) = 1;
      }
      iVar4 = FUN_00a81330();
      if (((iVar4 != 0) && (iVar4 = FUN_00a7c8a0(), iVar4 != 0)) &&
         (iVar4 = FUN_00a7c8a0(), iVar4 != 0)) {
        *(undefined4 *)(iVar4 + 0xd90) = 1;
      }
    }
  }
  else {
    FUN_00a8e880(param_1[0x2a1] + 0x50);
    (**(code **)(*param_1 + 0x308))(0x3e99999a,0x393702d3,0x3e0efa35,0);
  }
  if ((param_1[0x2a1] != 0) && (iVar4 = FUN_00a8c760(0), iVar4 != 0)) {
    iVar4 = param_1[0x2a1];
    param_1[0x764] = 1;
    fStack_20 = (float)param_1[0x10] - *(float *)(iVar4 + 0x40);
    fStack_18 = (float)param_1[0x12] - *(float *)(iVar4 + 0x48);
    fStack_14 = (float)param_1[0x13] - *(float *)(iVar4 + 0x4c);
    fStack_1c = 0.0;
    fVar1 = fStack_20 * fStack_20 + fStack_18 * fStack_18;
    if ((fVar1 < 1600.0) && (400.0 < fVar1)) {
      fVar2 = 32.0 - SQRT(fVar1);
      if (fVar1 < 0.0 == (fVar1 == 0.0)) {
        FUN_00ddf460(&fStack_20,&fStack_20);
      }
      else {
        FUN_00dd5650(&DAT_0163d0ac);
        fStack_18 = 0.0;
        fStack_20 = 0.0;
        fStack_1c = 1.0;
      }
      param_1[0x14] = (int)((float)param_1[0x14] + fStack_20 * fVar2 * 0.1);
      param_1[0x15] = (int)((float)param_1[0x15] + fVar2 * fStack_1c * 0.1);
      param_1[0x16] = (int)((float)param_1[0x16] + fStack_18 * fVar2 * 0.1);
      param_1[0x17] = (int)(fVar2 * fStack_14 * 0.1 + (float)param_1[0x17]);
      return;
    }
  }
  return;
}

// 00810C50  FUN_00810c50  size=4428  [callgraph]
void __fastcall FUN_00810c50(int *param_1)

{
  float *pfVar1;
  float fVar2;
  code *pcVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  uint uVar9;
  undefined4 uVar10;
  float10 fVar11;
  float10 fVar12;
  float10 fVar13;
  float10 fVar14;
  float local_370;
  float local_36c;
  float local_368;
  float local_364;
  float local_360;
  float local_35c;
  float local_358;
  float local_354;
  float local_350;
  float local_34c;
  float local_348;
  float local_344;
  float local_340;
  float local_33c;
  float local_338;
  float local_334;
  undefined1 auStack_330 [8];
  undefined4 uStack_328;
  undefined4 uStack_324;
  undefined4 uStack_320;
  uint uStack_31c;
  undefined4 uStack_314;
  undefined1 uStack_310;
  undefined1 uStack_30f;
  int iStack_30c;
  uint uStack_294;
  undefined4 uStack_22c;
  undefined4 uStack_1cc;
  
  if ((float)param_1[0x833] <= 0.0) {
    iVar8 = FUN_00a81330();
    if (((iVar8 != 0) && (iVar8 = FUN_00a7c8a0(), iVar8 != 0)) &&
       (iVar8 = FUN_00a7c8a0(), iVar8 != 0)) {
      *(undefined4 *)(iVar8 + 0xd90) = 1;
    }
    iVar8 = FUN_00a81330();
    if (((iVar8 != 0) && (iVar8 = FUN_00a7c8a0(), iVar8 != 0)) &&
       (iVar8 = FUN_00a7c8a0(), iVar8 != 0)) {
      *(undefined4 *)(iVar8 + 0xd90) = 1;
    }
    iVar8 = FUN_00a81330();
    if (((iVar8 != 0) && (iVar8 = FUN_00a7c8a0(), iVar8 != 0)) &&
       (iVar8 = FUN_00a7c8a0(), iVar8 != 0)) {
      *(undefined4 *)(iVar8 + 0xd90) = 1;
    }
    iVar8 = FUN_00a81330();
    if (((iVar8 != 0) && (iVar8 = FUN_00a7c8a0(), iVar8 != 0)) &&
       (iVar8 = FUN_00a7c8a0(), iVar8 != 0)) {
      *(undefined4 *)(iVar8 + 0xd90) = 1;
    }
  }
  switch(param_1[0x187]) {
  case 0:
    FUN_00aa4080(0x7c,0,0x3e888889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    if (param_1[0x584] != 0) {
      FUN_00ad0a90();
    }
    param_1[0x584] = 0;
    FUN_0080c630();
    param_1[0x252] = 2;
    FUN_00a82840(0x3e20d97c,0xbe32b8c2,0x3dcccccd,0x393702d3,0x3c8efa35);
    FUN_00a82840(0x3edf66f3,0xbe32b8c2,0x3dcccccd,0x393702d3,0x3c8efa35);
    FUN_00a82840(0x3edf66f3,0xbe32b8c2,0x3dcccccd,0x393702d3,0x3c8efa35);
    FUN_00a82870(0x3dd67750,0xbdd67750,0x3dcccccd,0x393702d3,0x3c8efa35);
    FUN_00a82870(0x3edf66f3,0xbedf66f3,0x3dcccccd,0x393702d3,0x3c8efa35);
    FUN_00a82870(0x3edf66f3,0xbedf66f3,0x3dcccccd,0x393702d3,0x3c8efa35);
    param_1[0xc68] = 1;
    break;
  case 1:
    break;
  case 2:
    FUN_00aa4080(0x7d,0,0x3e888889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    iVar8 = param_1[0x2a1];
    param_1[0x248] = 0x41700000;
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x250] = 0;
    if (iVar8 != 0) {
      param_1[0x590] = *(int *)(iVar8 + 0x40);
      param_1[0x591] = *(int *)(iVar8 + 0x44);
      param_1[0x592] = *(int *)(iVar8 + 0x48);
      param_1[0x593] = *(int *)(iVar8 + 0x4c);
    }
    goto LAB_00811069;
  case 3:
LAB_00811069:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    FUN_00a94ce0(0);
    fVar2 = (float)param_1[0x248];
    param_1[0x248] = (int)(fVar2 - (float)param_1[0x244]);
    if (fVar2 - (float)param_1[0x244] < 0.0) {
      param_1[0x187] = param_1[0x187] + 1;
    }
    param_1[0x58d] = 0x40000000;
    local_360 = (float)param_1[0x10];
    local_35c = (float)param_1[0x11];
    local_358 = (float)param_1[0x12];
    local_354 = (float)param_1[0x13];
    iVar8 = FUN_00ac45b0();
    fVar2 = local_360;
    fVar5 = local_358;
    fVar6 = local_354;
    fVar4 = local_35c;
    if ((iVar8 != 0) &&
       (iVar8 = FUN_00a7c8a0(), fVar2 = local_360, fVar5 = local_358, fVar6 = local_354,
       fVar4 = local_35c, iVar8 != 0)) {
      if (param_1[0xc6c] == 0) {
        local_340 = *(float *)(iVar8 + 0x40) - local_360;
        local_338 = *(float *)(iVar8 + 0x48) - local_358;
        local_334 = *(float *)(iVar8 + 0x4c) - local_354;
        local_33c = 0.0;
        fVar2 = local_338 * local_338 + local_340 * local_340;
        if (fVar2 < 0.0 == (fVar2 == 0.0)) {
          FUN_00ddf460(&local_340,&local_340);
          fVar4 = local_33c;
          fVar2 = local_340;
          fVar5 = local_338;
        }
        else {
          FUN_00dd5650(&DAT_0163d0ac);
          fVar5 = 0.0;
          fVar2 = 0.0;
          fVar4 = 1.0;
        }
        fVar2 = fVar2 * 10.0 + local_360;
        fVar5 = fVar5 * 10.0 + local_358;
        fVar6 = local_354 + local_334 * 10.0;
        fVar4 = fVar4 * 10.0 + local_35c;
      }
      else {
        fVar2 = *(float *)(iVar8 + 0x40);
        fVar5 = *(float *)(iVar8 + 0x48);
        fVar6 = *(float *)(iVar8 + 0x4c);
        fVar4 = (float)param_1[0x11];
      }
    }
    fVar2 = (fVar2 - (float)param_1[0x590]) * 0.1;
    fVar4 = (fVar4 - (float)param_1[0x591]) * 0.1;
    fVar5 = (fVar5 - (float)param_1[0x592]) * 0.1;
    fVar6 = (fVar6 - (float)param_1[0x593]) * 0.1;
    fVar7 = fVar5 * fVar5 + fVar4 * fVar4 + fVar2 * fVar2;
    local_370 = fVar2;
    local_36c = fVar4;
    local_368 = fVar5;
    local_364 = fVar6;
    if (9.0 < fVar7) {
      if (fVar7 <= 0.0) {
        FUN_00dd5650(&DAT_0163d0ac);
        fVar5 = 0.0;
        fVar2 = 0.0;
        fVar4 = 1.0;
      }
      else {
        FUN_00ddf460(&local_370,&local_370);
        fVar5 = local_368;
        fVar2 = local_370;
        fVar4 = local_36c;
      }
      fVar2 = fVar2 * 3.0;
      fVar4 = fVar4 * 3.0;
      fVar5 = fVar5 * 3.0;
      fVar6 = local_364 * 3.0;
    }
    param_1[0x590] = (int)(fVar2 + (float)param_1[0x590]);
    param_1[0x591] = (int)(fVar4 + (float)param_1[0x591]);
    param_1[0x592] = (int)(fVar5 + (float)param_1[0x592]);
    param_1[0x593] = (int)(fVar6 + (float)param_1[0x593]);
    if (param_1[0x250] != 0) {
      return;
    }
    if ((int *)param_1[0x2a1] == (int *)0x0) {
      return;
    }
    iVar8 = (**(code **)(*(int *)param_1[0x2a1] + 0x1fc))();
    if (iVar8 == 0) {
      return;
    }
    param_1[0x250] = 1;
    return;
  case 4:
    FUN_00aa4080(0x7e,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    pcVar3 = *(code **)(param_1[0x598] + 8);
    param_1[0x187] = param_1[0x187] + 1;
    (*pcVar3)(0x41f00000,0,0);
    if (param_1[0x584] != 0) {
      FUN_00ad0a90();
    }
    FUN_0041fee0();
    uStack_22c = 0x35;
    uStack_1cc = FUN_009f8b40();
    uStack_328 = 300;
    uStack_320 = 300;
    uStack_31c = uStack_31c & 0xffffff00;
    uStack_324 = 0x96;
    uVar9 = FUN_00ac84d0(0x16);
    uVar10 = (**(code **)(*(int *)param_1[0x1d5] + 0xc))(0x16);
    (**(code **)(*(int *)param_1[0x1d5] + 0x14))(0x16);
    uStack_310 = (**(code **)(*(int *)param_1[0x1d5] + 0x1c))(0x16);
    iStack_30c = param_1[0x13c];
    uStack_30f = 10;
    uStack_31c = uVar9;
    uStack_314 = uVar10;
    uVar10 = FUN_00a7c7f0();
    FUN_00a7c960(uVar10);
    uStack_294 = uStack_294 | 0x8000000;
    uStack_320 = 0xba;
    iVar8 = FUN_00ad09e0(param_1[0x13c],6,auStack_330);
    param_1[0x584] = iVar8;
    iVar8 = FUN_00c81c60(0x30);
    if (iVar8 != 0) {
      FUN_00c81b30(0x31);
    }
    FUN_00c81b30(0x30);
    goto LAB_0081149e;
  case 5:
LAB_0081149e:
    param_1[0x58d] = 0x40000000;
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar8 = FUN_00a94ce0(0);
    if (iVar8 == 0) {
      return;
    }
    param_1[0x187] = param_1[0x187] + 1;
    return;
  case 6:
    FUN_00aa4080(0x7f,0,0,0,0,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x248] = 0x43340000;
    param_1[0x250] = 0;
    local_370 = (float)param_1[0x10];
    local_36c = (float)param_1[0x11];
    local_368 = (float)param_1[0x12];
    local_364 = (float)param_1[0x13];
    iVar8 = FUN_00ac45b0();
    fVar2 = local_370;
    fVar5 = local_36c;
    fVar6 = local_368;
    fVar4 = local_364;
    if ((iVar8 != 0) &&
       (iVar8 = FUN_00a7c8a0(), fVar2 = local_370, fVar5 = local_36c, fVar6 = local_368,
       fVar4 = local_364, iVar8 != 0)) {
      fVar2 = *(float *)(iVar8 + 0x40);
      fVar5 = *(float *)(iVar8 + 0x44);
      fVar6 = *(float *)(iVar8 + 0x48);
      fVar4 = *(float *)(iVar8 + 0x4c);
    }
    pfVar1 = (float *)(param_1 + 0x8b4);
    *pfVar1 = fVar2 - (float)param_1[0x590];
    param_1[0x8b5] = (int)(fVar5 - (float)param_1[0x591]);
    param_1[0x8b6] = (int)(fVar6 - (float)param_1[0x592]);
    param_1[0x8b7] = (int)(fVar4 - (float)param_1[0x593]);
    fVar2 = (float)param_1[0x8b5] * (float)param_1[0x8b5] + *pfVar1 * *pfVar1 +
            (float)param_1[0x8b6] * (float)param_1[0x8b6];
    if (fVar2 < 0.0 == (fVar2 == 0.0)) {
      FUN_00ddf460(pfVar1,pfVar1);
    }
    else {
      FUN_00dd5650(&DAT_0163d0ac);
      *pfVar1 = 0.0;
      param_1[0x8b5] = 0x3f800000;
      param_1[0x8b6] = 0;
    }
    *pfVar1 = *pfVar1 * 0.2;
    param_1[0x8b5] = (int)((float)param_1[0x8b5] * 0.2);
    param_1[0x8b6] = (int)((float)param_1[0x8b6] * 0.2);
    param_1[0x8b7] = (int)((float)param_1[0x8b7] * 0.2);
    param_1[0x249] = 0;
    goto LAB_00811670;
  case 7:
LAB_00811670:
    param_1[0x58d] = 0x41200000;
    param_1[0x590] = (int)((float)param_1[0x244] * (float)param_1[0x8b4] + (float)param_1[0x590]);
    param_1[0x592] = (int)((float)param_1[0x8b6] * (float)param_1[0x244] + (float)param_1[0x592]);
    if (param_1[0xc6c] != 0) {
      param_1[0x591] = (int)((float)param_1[0x8b5] * (float)param_1[0x244] + (float)param_1[0x591]);
    }
    fVar11 = (float10)FUN_00fdc1f0();
    param_1[0x8b4] = (int)(float)(fVar11 * (float10)(float)param_1[0x8b4]);
    param_1[0x8b5] = (int)(float)(fVar11 * (float10)(float)param_1[0x8b5]);
    param_1[0x8b6] = (int)(float)(fVar11 * (float10)(float)param_1[0x8b6]);
    param_1[0x8b7] = (int)(float)(fVar11 * (float10)(float)param_1[0x8b7]);
    local_370 = (float)param_1[0x10];
    local_368 = (float)param_1[0x12];
    local_364 = (float)param_1[0x13];
    iVar8 = FUN_00ac45b0();
    local_360 = local_370;
    local_358 = local_368;
    local_354 = local_364;
    if ((iVar8 != 0) &&
       (iVar8 = FUN_00a7c8a0(), local_360 = local_370, local_358 = local_368, local_354 = local_364,
       iVar8 != 0)) {
      local_360 = *(float *)(iVar8 + 0x40);
      local_358 = *(float *)(iVar8 + 0x48);
      local_354 = *(float *)(iVar8 + 0x4c);
    }
    local_360 = local_360 - (float)param_1[0x10];
    local_358 = local_358 - (float)param_1[0x12];
    local_354 = local_354 - (float)param_1[0x13];
    local_35c = 0.0;
    fVar2 = local_360 * local_360 + local_358 * local_358;
    if (fVar2 < 0.0 == (fVar2 == 0.0)) {
      FUN_00ddf460(&local_360,&local_360);
      fVar11 = (float10)local_35c;
      fVar12 = (float10)local_360;
      fVar14 = (float10)local_358;
    }
    else {
      FUN_00dd5650(&DAT_0163d0ac);
      fVar12 = (float10)0;
      fVar11 = (float10)1;
      fVar14 = fVar12;
    }
    fVar13 = (float10)fcos((float10)(float)param_1[0x249]);
    fVar13 = fVar13 * (float10)0.8;
    local_360 = (float)(fVar13 * fVar14);
    local_35c = (float)(fVar13 * fVar11);
    local_358 = (float)(fVar12 * (float10)-1.0 * fVar13);
    local_354 = (float)(fVar13 * (float10)local_354);
    fVar11 = (float10)FUN_00ddba30((float)param_1[0x244] * 0.034906585 + (float)param_1[0x249]);
    param_1[0x249] = (int)(float)fVar11;
    local_370 = (float)param_1[0x10];
    local_36c = (float)param_1[0x11];
    local_368 = (float)param_1[0x12];
    local_364 = (float)param_1[0x13];
    iVar8 = FUN_00ac45b0();
    local_350 = local_370;
    local_348 = local_368;
    local_34c = local_36c;
    local_344 = local_364;
    if ((iVar8 != 0) &&
       (iVar8 = FUN_00a7c8a0(), local_350 = local_370, local_348 = local_368, local_34c = local_36c,
       local_344 = local_364, iVar8 != 0)) {
      local_350 = *(float *)(iVar8 + 0x40);
      local_348 = *(float *)(iVar8 + 0x48);
      local_34c = *(float *)(iVar8 + 0x44);
      local_344 = *(float *)(iVar8 + 0x4c);
      if (param_1[0xc6c] != 0) {
        local_34c = *(float *)(iVar8 + 0x44) + 2.0;
      }
    }
    local_350 = local_350 - (float)param_1[0x590];
    local_34c = local_34c - (float)param_1[0x591];
    local_348 = local_348 - (float)param_1[0x592];
    local_344 = local_344 - (float)param_1[0x593];
    fVar2 = local_348 * local_348 + local_350 * local_350 + local_34c * local_34c;
    if (param_1[0xc6c] == 0) {
      if (fVar2 < 0.0 == (fVar2 == 0.0)) {
        FUN_00ddf460(&local_350,&local_350);
        fVar5 = local_34c;
        fVar6 = local_350;
        fVar2 = local_348;
      }
      else {
        FUN_00dd5650(&DAT_0163d0ac);
        fVar2 = 0.0;
        fVar6 = 0.0;
        fVar5 = 1.0;
      }
      fVar4 = 0.03;
    }
    else if (fVar2 < 0.0 == (fVar2 == 0.0)) {
      FUN_00ddf460(&local_350,&local_350);
      fVar4 = 0.35;
      fVar2 = local_348;
      fVar5 = local_34c;
      fVar6 = local_350;
    }
    else {
      FUN_00dd5650(&DAT_0163d0ac);
      fVar2 = 0.0;
      fVar5 = 1.0;
      fVar6 = 0.0;
      fVar4 = 0.35;
    }
    param_1[0x590] = (int)(fVar6 * fVar4 * (float)param_1[0x244] + (float)param_1[0x590]);
    param_1[0x592] = (int)((float)param_1[0x244] * fVar4 * fVar2 + (float)param_1[0x592]);
    if (param_1[0xc6c] != 0) {
      param_1[0x591] = (int)(fVar5 * fVar4 * (float)param_1[0x244] + (float)param_1[0x591]);
    }
    FUN_00ac80a0(0x3f800000,0x3f800000);
    fVar2 = (float)param_1[0x248];
    param_1[0x248] = (int)(fVar2 - (float)param_1[0x244]);
    if (0.0 <= fVar2 - (float)param_1[0x244]) {
      return;
    }
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x252] = param_1[0x252] + -1;
    if (param_1[0x252] < 1) {
      param_1[0x187] = 10;
    }
    if ((float)param_1[0x2a4] <= 625.0) {
      param_1[0x187] = 10;
    }
    if (param_1[0xc1c] == 0) {
      return;
    }
    param_1[0x187] = 8;
    return;
  case 8:
    FUN_00aa4080(0x7d,0,0x3daaaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x248] = 0x41f00000;
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x250] = 0;
    if (param_1[0x584] != 0) {
      FUN_00ad0a90();
    }
    param_1[0x584] = 0;
    goto LAB_00811b06;
  case 9:
LAB_00811b06:
    param_1[0x58d] = 0x40000000;
    FUN_00ac80a0(0x3f800000,0x3f800000);
    fVar2 = (float)param_1[0x248];
    param_1[0x248] = (int)(fVar2 - (float)param_1[0x244]);
    if (0.0 <= fVar2 - (float)param_1[0x244]) {
      return;
    }
    param_1[0x187] = 2;
    return;
  case 10:
    FUN_00aa4080(0x80,0,0x3daaaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    if (param_1[0x584] != 0) {
      FUN_00ad0a90();
    }
    param_1[0x584] = 0;
    goto LAB_00811baa;
  case 0xb:
LAB_00811baa:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar8 = FUN_00a94ce0(0);
    if (iVar8 != 0) {
      FUN_00a8caf0(0,0,0,0);
      param_1[0x3aa] = 0x41f00000;
      iVar8 = FUN_00ac4780();
      if (iVar8 == 2) {
        param_1[0x3aa] = 0x41f00000;
      }
      iVar8 = FUN_00ac4780();
      if (2 < iVar8) {
        param_1[0x3aa] = 0x40c00000;
      }
      FUN_00a82840(0x3dd67750,0xbe32b8c2,0x3dcccccd,0x393702d3,0x3c0efa35);
      FUN_00a82840(0x3e32b8c2,0xbe32b8c2,0x3dcccccd,0x393702d3,0x3c0efa35);
      FUN_00a82840(0x3e32b8c2,0xbe32b8c2,0x3dcccccd,0x393702d3,0x3c0efa35);
      FUN_00a82870(0x3dd67750,0xbdd67750,0x3dcccccd,0x393702d3,0x3c0efa35);
      FUN_00a82870(0x3e32b8c2,0xbe32b8c2,0x3dcccccd,0x393702d3,0x3c0efa35);
      FUN_00a82870(0x3e32b8c2,0xbe32b8c2,0x3dcccccd,0x393702d3,0x3c0efa35);
      return;
    }
  default:
    goto switchD_00810d59_default;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar8 = FUN_00a94ce0(0);
  if (iVar8 != 0) {
    param_1[0x187] = param_1[0x187] + 1;
  }
  if (((param_1[0x81d] != 0) && (param_1[0x2a1] != 0)) &&
     (fVar2 = (float)param_1[0x2a4], !NAN(fVar2) && 400.0 < fVar2 != (fVar2 == 400.0))) {
    FUN_00a8e880(param_1[0x2a1] + 0x50);
    (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x393702d3,0x3d567750,0);
    return;
  }
switchD_00810d59_default:
  return;
}

// 00811DD0  FUN_00811dd0  size=1482  [callgraph]
void __fastcall FUN_00811dd0(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  short sVar4;
  undefined4 uVar5;
  int iVar6;
  float10 fVar7;
  float10 fVar8;
  float local_3a0;
  float local_39c;
  undefined4 local_398;
  undefined4 local_394;
  float local_390;
  float local_38c;
  float local_388;
  undefined4 local_380;
  undefined4 local_37c;
  undefined4 local_378;
  undefined4 local_374;
  uint local_370 [17];
  undefined4 local_32c;
  undefined4 local_31c;
  float local_318;
  float local_314;
  undefined1 local_310;
  undefined1 uStack_30f;
  undefined4 uStack_30c;
  undefined4 local_220;
  undefined4 local_21c;
  undefined4 local_1c0;
  undefined2 uStack_1b6;
  undefined4 uStack_50;
  
  local_370[0] = 0x806;
  local_370[1] = 0x807;
  local_370[2] = 0x808;
  local_370[3] = 0x809;
  local_370[4] = 0x80a;
  local_370[5] = 0x80b;
  local_370[6] = 0x80c;
  local_370[7] = 0x80d;
  local_370[8] = 0x80e;
  local_370[9] = 0x80f;
  local_370[10] = 0x810;
  local_370[0xb] = 0x811;
  local_370[0xc] = 0x812;
  local_370[0xd] = 0x813;
  local_370[0xe] = 0x814;
  local_370[0xf] = 0x815;
  switch(*(undefined4 *)(param_1 + 0x61c)) {
  case 0:
    FUN_00aa4080(0x82,0,0x3e888889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    if (*(int *)(param_1 + 0x1610) != 0) {
      FUN_00ad0a90();
    }
    *(undefined4 *)(param_1 + 0x1610) = 0;
    FUN_0080c630();
    break;
  case 1:
    break;
  case 2:
    FUN_00aa4080(0x83,0,0,0x3f800000,0,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    *(undefined4 *)(param_1 + 0x920) = 0x44070000;
    *(undefined4 *)(param_1 + 0x940) = 0;
    *(undefined4 *)(param_1 + 0x924) = 0;
    *(undefined4 *)(param_1 + 0x944) = 0;
    goto LAB_00811f71;
  case 3:
LAB_00811f71:
    fVar1 = *(float *)(param_1 + 0x924) - *(float *)(param_1 + 0x910);
    *(float *)(param_1 + 0x924) = fVar1;
    if ((fVar1 < 0.0) && (*(int *)(param_1 + 0x944) == 0)) {
      FUN_00c81b30(0x3b);
      iVar6 = FUN_00a12210(local_370[*(int *)(param_1 + 0x940)]);
      local_3a0 = SQRT(*(float *)(iVar6 + 0x14) * *(float *)(iVar6 + 0x14) +
                       *(float *)(iVar6 + 0x10) * *(float *)(iVar6 + 0x10) +
                       *(float *)(iVar6 + 0x18) * *(float *)(iVar6 + 0x18));
      local_39c = SQRT(*(float *)(iVar6 + 0x20) * *(float *)(iVar6 + 0x20) +
                       *(float *)(iVar6 + 0x24) * *(float *)(iVar6 + 0x24) +
                       *(float *)(iVar6 + 0x28) * *(float *)(iVar6 + 0x28));
      fVar1 = SQRT(*(float *)(iVar6 + 0x38) * *(float *)(iVar6 + 0x38) +
                   *(float *)(iVar6 + 0x34) * *(float *)(iVar6 + 0x34) +
                   *(float *)(iVar6 + 0x30) * *(float *)(iVar6 + 0x30));
      fVar2 = *(float *)(iVar6 + 0x28) / fVar1;
      fVar3 = *(float *)(iVar6 + 0x38) / fVar1;
      fVar7 = (float10)FUN_00ddbaa0(-(*(float *)(iVar6 + 0x18) / fVar1));
      fVar8 = (float10)fpatan((float10)fVar2,(float10)fVar3);
      local_390 = (float)fVar8;
      local_38c = (float)fVar7;
      fVar7 = (float10)fpatan((float10)*(float *)(iVar6 + 0x14) / (float10)local_39c,
                              (float10)*(float *)(iVar6 + 0x10) / (float10)local_3a0);
      local_388 = (float)fVar7;
      local_380 = *(undefined4 *)(iVar6 + 0x40);
      local_37c = *(undefined4 *)(iVar6 + 0x44);
      local_378 = *(undefined4 *)(iVar6 + 0x48);
      local_374 = *(undefined4 *)(iVar6 + 0x4c);
      local_3a0 = *(float *)(iVar6 + 0x40);
      local_39c = *(float *)(iVar6 + 0x44);
      local_398 = *(undefined4 *)(iVar6 + 0x48);
      local_394 = *(undefined4 *)(iVar6 + 0x4c);
      FUN_0041fee0();
      local_21c = 4;
      local_32c = 0x3b003;
      local_220 = 0x13;
      local_1c0 = FUN_009f8b40();
      local_39c = local_39c + 50.0;
      local_31c = 0x1e;
      local_314 = 4.2039e-44;
      local_310 = 0;
      local_318 = 2.10195e-43;
      uVar5 = FUN_00ac84d0(0x13);
      (**(code **)(**(int **)(param_1 + 0x754) + 0xc))(0x13);
      (**(code **)(**(int **)(param_1 + 0x754) + 0x14))(0x13);
      local_310 = (**(code **)(**(int **)(param_1 + 0x754) + 0x1c))(0x13);
      uStack_30c = *(undefined4 *)(param_1 + 0x4f0);
      uStack_30f = 10;
      local_31c = uVar5;
      local_318 = fVar3;
      local_314 = fVar2;
      uVar5 = FUN_00a7c7f0();
      FUN_00a7c960(uVar5);
      local_370[0x10] = local_370[0x10] | 4;
      uStack_1b6 = *(undefined2 *)(iVar6 + 0xa0);
      sVar4 = FUN_00dde2d0(0,3);
      if (sVar4 == 2) {
        uStack_50 = 1;
      }
      FUN_00416e30(&local_380,&local_3a0,&local_390,0x40000000,0x44480000);
      uVar5 = FUN_00ac45b0();
      local_390 = 0.0;
      local_38c = 0.0;
      local_388 = 0.0;
      FUN_0043fed0(uVar5,0,&local_390);
      FUN_00ad3be0(*(undefined4 *)(param_1 + 0x4f0),local_370 + 0x10);
      *(int *)(param_1 + 0x940) = *(int *)(param_1 + 0x940) + 1;
      *(undefined4 *)(param_1 + 0x924) = 0x41700000;
      if (*(int *)(param_1 + 0x4a0) == 0) {
        *(undefined4 *)(param_1 + 0x924) = 0x41a00000;
      }
      if (0xf < *(uint *)(param_1 + 0x940)) {
        *(undefined4 *)(param_1 + 0x940) = 0;
      }
    }
    FUN_00ac80a0(0x3f800000,0x3f800000);
    fVar1 = *(float *)(param_1 + 0x920) - *(float *)(param_1 + 0x910);
    *(float *)(param_1 + 0x920) = fVar1;
    if (0.0 <= fVar1) {
      return;
    }
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    return;
  case 4:
    FUN_00aa4080(0x85,0,0x3daaaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    if (*(int *)(param_1 + 0x1610) != 0) {
      FUN_00ad0a90();
    }
    *(undefined4 *)(param_1 + 0x1610) = 0;
    goto LAB_00812323;
  case 5:
LAB_00812323:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar6 = FUN_00a94ce0(0);
    if (iVar6 != 0) {
      FUN_00a8caf0(0,0,0,0);
      *(undefined4 *)(param_1 + 0xea8) = 0x41f00000;
      iVar6 = FUN_00ac4780();
      if (iVar6 == 2) {
        *(undefined4 *)(param_1 + 0xea8) = 0x41f00000;
      }
      iVar6 = FUN_00ac4780();
      if (2 < iVar6) {
        *(undefined4 *)(param_1 + 0xea8) = 0x40c00000;
        return;
      }
    }
  default:
    goto switchD_00811e80_default;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar6 = FUN_00a94ce0(0);
  if (iVar6 != 0) {
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    return;
  }
switchD_00811e80_default:
  return;
}

// 008123C0  FUN_008123c0  size=1320  [callgraph]
void __fastcall FUN_008123c0(int *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  short sVar4;
  undefined4 uVar5;
  int iVar6;
  float10 fVar7;
  float10 fVar8;
  float local_3a0;
  float local_39c;
  undefined4 local_398;
  undefined4 local_394;
  float local_390;
  float local_38c;
  float local_388;
  undefined4 local_380;
  undefined4 local_37c;
  undefined4 local_378;
  undefined4 local_374;
  uint local_370 [17];
  undefined4 local_32c;
  undefined4 local_31c;
  float local_318;
  float local_314;
  undefined1 local_310;
  undefined1 uStack_30f;
  int iStack_30c;
  undefined4 local_220;
  undefined4 local_21c;
  undefined4 local_1c0;
  undefined2 uStack_1b6;
  undefined4 uStack_50;
  
  local_370[0] = 0x806;
  local_370[1] = 0x807;
  local_370[2] = 0x808;
  local_370[3] = 0x809;
  local_370[4] = 0x80a;
  local_370[5] = 0x80b;
  local_370[6] = 0x80c;
  local_370[7] = 0x80d;
  local_370[8] = 0x80e;
  local_370[9] = 0x80f;
  local_370[10] = 0x810;
  local_370[0xb] = 0x811;
  local_370[0xc] = 0x812;
  local_370[0xd] = 0x813;
  local_370[0xe] = 0x814;
  local_370[0xf] = 0x815;
  if (param_1[0x187] == 0) {
    FUN_00aa4080(0x86,0,0x3e888889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    if (param_1[0x584] != 0) {
      FUN_00ad0a90();
    }
    param_1[0x584] = 0;
    FUN_0080c630();
    param_1[0x249] = 0;
    param_1[0x250] = 0;
    param_1[0x251] = 0;
  }
  else if (param_1[0x187] != 1) goto LAB_00812882;
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar6 = FUN_00a94ce0(0);
  if (iVar6 != 0) {
    FUN_00a8caf0(0,0,0,0);
    param_1[0x3aa] = 0x41f00000;
    iVar6 = FUN_00ac4780();
    if (iVar6 == 2) {
      param_1[0x3aa] = 0x41f00000;
    }
    iVar6 = FUN_00ac4780();
    if (2 < iVar6) {
      param_1[0x3aa] = 0x40c00000;
    }
  }
  iVar6 = FUN_00a94ee0(0,100,0x104);
  if (iVar6 != 0) {
    FUN_00c81b30(0x3b);
    fVar1 = (float)param_1[0x249];
    param_1[0x249] = (int)(fVar1 - (float)param_1[0x244]);
    if ((fVar1 - (float)param_1[0x244] < 0.0) && (param_1[0x251] == 0)) {
      iVar6 = FUN_00a12210(local_370[param_1[0x250]]);
      local_3a0 = SQRT(*(float *)(iVar6 + 0x14) * *(float *)(iVar6 + 0x14) +
                       *(float *)(iVar6 + 0x10) * *(float *)(iVar6 + 0x10) +
                       *(float *)(iVar6 + 0x18) * *(float *)(iVar6 + 0x18));
      local_39c = SQRT(*(float *)(iVar6 + 0x20) * *(float *)(iVar6 + 0x20) +
                       *(float *)(iVar6 + 0x24) * *(float *)(iVar6 + 0x24) +
                       *(float *)(iVar6 + 0x28) * *(float *)(iVar6 + 0x28));
      fVar1 = SQRT(*(float *)(iVar6 + 0x38) * *(float *)(iVar6 + 0x38) +
                   *(float *)(iVar6 + 0x34) * *(float *)(iVar6 + 0x34) +
                   *(float *)(iVar6 + 0x30) * *(float *)(iVar6 + 0x30));
      fVar2 = *(float *)(iVar6 + 0x28) / fVar1;
      fVar3 = *(float *)(iVar6 + 0x38) / fVar1;
      fVar7 = (float10)FUN_00ddbaa0(-(*(float *)(iVar6 + 0x18) / fVar1));
      fVar8 = (float10)fpatan((float10)fVar2,(float10)fVar3);
      local_390 = (float)fVar8;
      local_38c = (float)fVar7;
      fVar7 = (float10)fpatan((float10)*(float *)(iVar6 + 0x14) / (float10)local_39c,
                              (float10)*(float *)(iVar6 + 0x10) / (float10)local_3a0);
      local_388 = (float)fVar7;
      local_380 = *(undefined4 *)(iVar6 + 0x40);
      local_37c = *(undefined4 *)(iVar6 + 0x44);
      local_378 = *(undefined4 *)(iVar6 + 0x48);
      local_374 = *(undefined4 *)(iVar6 + 0x4c);
      local_3a0 = *(float *)(iVar6 + 0x40);
      local_39c = *(float *)(iVar6 + 0x44);
      local_398 = *(undefined4 *)(iVar6 + 0x48);
      local_394 = *(undefined4 *)(iVar6 + 0x4c);
      FUN_004105d0();
      FUN_00410710();
      FUN_0041cf30();
      local_21c = 2;
      if (param_1[0x128] == 3) {
        local_21c = 3;
      }
      local_32c = 0x3b003;
      local_220 = 0x13;
      local_1c0 = FUN_009f8b40();
      local_39c = local_39c + 50.0;
      local_31c = 0x1e;
      local_314 = 4.2039e-44;
      local_310 = 0;
      local_318 = 2.10195e-43;
      uVar5 = FUN_00ac84d0(0x13);
      (**(code **)(*(int *)param_1[0x1d5] + 0xc))(0x13);
      (**(code **)(*(int *)param_1[0x1d5] + 0x14))(0x13);
      local_310 = (**(code **)(*(int *)param_1[0x1d5] + 0x1c))(0x13);
      iStack_30c = param_1[0x13c];
      uStack_30f = 10;
      local_31c = uVar5;
      local_318 = fVar3;
      local_314 = fVar2;
      uVar5 = FUN_00a7c7f0();
      FUN_00a7c960(uVar5);
      local_370[0x10] = local_370[0x10] | 4;
      uStack_1b6 = *(undefined2 *)(iVar6 + 0xa0);
      FUN_00416e30(&local_380,&local_3a0,&local_390,0x40000000,0x44480000);
      uVar5 = FUN_00ac45b0();
      sVar4 = FUN_00dde2d0(0,3);
      if (sVar4 == 2) {
        uStack_50 = 1;
      }
      local_390 = 0.0;
      local_38c = 0.0;
      local_388 = 0.0;
      FUN_0043fed0(uVar5,0,&local_390);
      FUN_00ad3be0(param_1[0x13c],local_370 + 0x10);
      param_1[0x250] = param_1[0x250] + 1;
      param_1[0x249] = 0x40e00000;
      if (0xf < (uint)param_1[0x250]) {
        param_1[0x251] = 1;
      }
    }
  }
LAB_00812882:
  if ((param_1[0x2a1] != 0) && (iVar6 = FUN_00a8c760(0), iVar6 != 0)) {
    FUN_00a8e880(param_1[0x2a1] + 0x50);
    (**(code **)(*param_1 + 0x308))(0x3d75c28f,0x393702d3,(float)param_1[0x244] * 0.06981317,0);
  }
  return;
}

// 008128F0  FUN_008128f0  size=215  [callgraph]
void __fastcall FUN_008128f0(int param_1)

{
  float fVar1;
  short sVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x61c) != 0) {
    iVar3 = FUN_00ac4780();
    if (1 < iVar3) {
      iVar3 = FUN_00a8c760(4);
      if ((((iVar3 != 0) && (*(float *)(param_1 + 0xa90) <= 40000.0)) &&
          (fVar1 = *(float *)(param_1 + 0xa90), !NAN(fVar1) && 2500.0 < fVar1 != (fVar1 == 2500.0)))
         && (*(float *)(param_1 + 0xaa0) < 1.5707964)) {
        FUN_0080d590();
      }
      if (*(int *)(param_1 + 0x1dd0) == 0) {
        sVar2 = FUN_00dde2d0(0,2);
        if (sVar2 == 0) {
          iVar3 = FUN_00a8c760(4);
          if (((iVar3 != 0) && (*(float *)(param_1 + 0xa90) <= 40000.0)) &&
             ((fVar1 = *(float *)(param_1 + 0xa90),
              !NAN(fVar1) && 2500.0 < fVar1 != (fVar1 == 2500.0) &&
              (*(float *)(param_1 + 0xaa0) < 1.5707964)))) {
            FUN_00809650();
            return;
          }
        }
      }
    }
  }
  return;
}

// 008129D0  FUN_008129d0  size=1360  [callgraph]
void __fastcall FUN_008129d0(int *param_1)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  float10 fVar4;
  
  if ((param_1[0x187] == 0) || (param_1[0x81f] == 0)) {
    param_1[0x764] = 1;
    switch(param_1[0x187]) {
    case 0:
      uVar1 = 0x89;
      if (param_1[0x186] == 0x1c) {
        uVar1 = 0x8a;
      }
      FUN_00aa4080(uVar1,0,0x3e888889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      param_1[0x187] = param_1[0x187] + 1;
      if (param_1[0x584] != 0) {
        FUN_00ad0a90();
      }
      param_1[0x584] = 0;
      FUN_0080c630();
      iVar3 = FUN_00a92f90();
      iVar2 = FUN_00e26e90();
      if (iVar2 != 0) {
        *(uint *)(iVar3 + 0x280) = *(uint *)(iVar3 + 0x280) | 2;
      }
      iVar3 = FUN_00a92f90();
      iVar2 = FUN_00e26e90();
      if (iVar2 != 0) {
        *(uint *)(iVar3 + 0x280) = *(uint *)(iVar3 + 0x280) & 0xfffffffb;
      }
      iVar3 = FUN_00a92f90();
      iVar2 = FUN_00e26e90();
      if (iVar2 != 0) {
        *(uint *)(iVar3 + 0x280) = *(uint *)(iVar3 + 0x280) & 0xfffffff7;
      }
      if (param_1[0x775] == 0) {
        if (param_1[0x776] != 0) {
          iVar3 = FUN_00a92f90();
          iVar2 = FUN_00e26e90();
          if (iVar2 != 0) {
            *(uint *)(iVar3 + 0x280) = *(uint *)(iVar3 + 0x280) & 0xfffffffd;
          }
          iVar3 = FUN_00a92f90();
          iVar2 = FUN_00e26e90();
          if (iVar2 != 0) {
            *(uint *)(iVar3 + 0x280) = *(uint *)(iVar3 + 0x280) | 4;
          }
          iVar3 = FUN_00a92f90();
          iVar2 = FUN_00e26e90();
          if (iVar2 != 0) {
            *(uint *)(iVar3 + 0x280) = *(uint *)(iVar3 + 0x280) & 0xfffffff7;
          }
        }
      }
      else if (param_1[0x776] != 0) {
        iVar3 = FUN_00a92f90();
        iVar2 = FUN_00e26e90();
        if (iVar2 != 0) {
          *(uint *)(iVar3 + 0x280) = *(uint *)(iVar3 + 0x280) & 0xfffffffd;
        }
        iVar3 = FUN_00a92f90();
        iVar2 = FUN_00e26e90();
        if (iVar2 != 0) {
          *(uint *)(iVar3 + 0x280) = *(uint *)(iVar3 + 0x280) & 0xfffffffb;
        }
        iVar3 = FUN_00a92f90();
        iVar2 = FUN_00e26e90();
        if (iVar2 != 0) {
          *(uint *)(iVar3 + 0x280) = *(uint *)(iVar3 + 0x280) | 8;
        }
      }
      param_1[0x81f] = 0;
      FUN_008087c0();
    case 1:
      FUN_00ac80a0(0x3f800000,0x3f800000);
      iVar3 = FUN_00a94ce0(0);
      if ((iVar3 != 0) && (param_1[0x187] = param_1[0x187] + 1, (float)param_1[0x2a4] <= 900.0)) {
        FUN_00a8caf0(0,0,0,0);
        param_1[0x3aa] = 0x41f00000;
        iVar3 = FUN_00ac4780();
        if (iVar3 == 2) {
          param_1[0x3aa] = 0x41f00000;
        }
        iVar3 = FUN_00ac4780();
        if (2 < iVar3) {
          param_1[0x3aa] = 0x40c00000;
        }
        iVar3 = FUN_0080ce00(0xc2200000);
        if (iVar3 == 0) {
          FUN_00a8caf0(4,0,0,0);
        }
        else {
          FUN_0080d590();
        }
      }
      break;
    case 2:
      uVar1 = 0x89;
      if (param_1[0x186] == 0x1b) {
        uVar1 = 0x8a;
      }
      FUN_00aa4080(uVar1,0,0x3e888889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      param_1[0x187] = param_1[0x187] + 1;
      if (param_1[0x584] != 0) {
        FUN_00ad0a90();
      }
      param_1[0x584] = 0;
      FUN_0080c630();
      iVar3 = FUN_00a92f90();
      iVar2 = FUN_00e26e90();
      if (iVar2 != 0) {
        *(uint *)(iVar3 + 0x280) = *(uint *)(iVar3 + 0x280) | 2;
      }
      iVar3 = FUN_00a92f90();
      iVar2 = FUN_00e26e90();
      if (iVar2 != 0) {
        *(uint *)(iVar3 + 0x280) = *(uint *)(iVar3 + 0x280) & 0xfffffffb;
      }
      iVar3 = FUN_00a92f90();
      iVar2 = FUN_00e26e90();
      if (iVar2 != 0) {
        *(uint *)(iVar3 + 0x280) = *(uint *)(iVar3 + 0x280) & 0xfffffff7;
      }
      if (param_1[0x775] == 0) {
        if (param_1[0x776] != 0) {
          iVar3 = FUN_00a92f90();
          iVar2 = FUN_00e26e90();
          if (iVar2 != 0) {
            *(uint *)(iVar3 + 0x280) = *(uint *)(iVar3 + 0x280) & 0xfffffffd;
          }
          iVar3 = FUN_00a92f90();
          iVar2 = FUN_00e26e90();
          if (iVar2 != 0) {
            *(uint *)(iVar3 + 0x280) = *(uint *)(iVar3 + 0x280) | 4;
          }
          iVar3 = FUN_00a92f90();
          iVar2 = FUN_00e26e90();
          if (iVar2 != 0) {
            *(uint *)(iVar3 + 0x280) = *(uint *)(iVar3 + 0x280) & 0xfffffff7;
          }
        }
      }
      else if (param_1[0x776] != 0) {
        iVar3 = FUN_00a92f90();
        iVar2 = FUN_00e26e90();
        if (iVar2 != 0) {
          *(uint *)(iVar3 + 0x280) = *(uint *)(iVar3 + 0x280) & 0xfffffffd;
        }
        iVar3 = FUN_00a92f90();
        iVar2 = FUN_00e26e90();
        if (iVar2 != 0) {
          *(uint *)(iVar3 + 0x280) = *(uint *)(iVar3 + 0x280) & 0xfffffffb;
        }
        iVar3 = FUN_00a92f90();
        iVar2 = FUN_00e26e90();
        if (iVar2 != 0) {
          *(uint *)(iVar3 + 0x280) = *(uint *)(iVar3 + 0x280) | 8;
        }
      }
    case 3:
      FUN_00ac80a0(0x3f800000,0x3f800000);
      iVar3 = FUN_00a94ce0(0);
      if (iVar3 != 0) {
        FUN_00a8caf0(0,0,0,0);
        param_1[0x3aa] = 0x41f00000;
        iVar3 = FUN_00ac4780();
        if (iVar3 == 2) {
          param_1[0x3aa] = 0x41f00000;
        }
        iVar3 = FUN_00ac4780();
        if (2 < iVar3) {
          param_1[0x3aa] = 0x40c00000;
        }
      }
    }
    if ((param_1[0x81d] != 0) && (iVar3 = FUN_00a8c760(0), iVar3 != 0)) {
      FUN_00a8e880(param_1[0x2a1] + 0x50);
      (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x393702d3,0x3e32b8c2,0);
    }
  }
  else {
    FUN_00a8caf0(0x26,0,0,0);
    param_1[0x82a] = 0;
    fVar4 = (float10)FUN_00ddba30((float)param_1[0x25] + 3.1415927);
    param_1[0x25] = (int)(float)fVar4;
    param_1[0x84c] = -1;
    if ((*(byte *)(param_1 + 0x3a5) & 8) == 0) {
      param_1[0x84e] = 0x41200000;
      param_1[0x84c] = 0xd;
      param_1[0x84d] = 0x42700000;
      FUN_00c81b30(0x2d);
      return;
    }
  }
  return;
}

// 00812F30  FUN_00812f30  size=70  [callgraph]
void __fastcall FUN_00812f30(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00ac4780();
  if ((iVar1 < 2) && (*(int *)(param_1 + 0x1df0) != 0)) {
    iVar1 = FUN_00a8c760(4);
    if (iVar1 != 0) {
      iVar1 = FUN_0080ce00(0xc2200000);
      if (iVar1 == 0) {
        FUN_00a8caf0(6,0,0,0);
      }
    }
  }
  return;
}

// 00812F80  FUN_00812f80  size=3805  [callgraph]
void __fastcall FUN_00812f80(int *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  short sVar6;
  int iVar7;
  undefined2 uVar8;
  undefined4 uVar9;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_1c;
  
  iVar7 = param_1[0x187];
  if (((5 < iVar7) && (iVar7 < 9)) && (param_1[0x81f] != 0)) {
    FUN_00a8caf0(0x1f,0,0,0);
    return;
  }
  param_1[0x3ab] = 1;
  uVar8 = 0x8f;
  switch(iVar7) {
  case 0:
    param_1[0x187] = 1;
    sVar6 = FUN_00dde2d0(0,2);
    param_1[0x250] = sVar6 + 3;
    FUN_008087c0();
    iVar7 = FUN_00ac4780();
    if (iVar7 == 0) {
      sVar6 = FUN_00dde2d0(0,1);
      param_1[0x250] = sVar6 + 2;
    }
    iVar7 = FUN_00ac4780();
    if (1 < iVar7) {
      sVar6 = FUN_00dde2d0(0,3);
      param_1[0x250] = sVar6 + 3;
    }
    param_1[0x251] = 0;
    param_1[0x252] = 0;
    param_1[0x253] = 10;
    param_1[0x81f] = 0;
    param_1[0x77c] = 0;
    param_1[0x77d] = 0;
    iVar7 = FUN_00ac4780();
    if ((iVar7 == 1) && (sVar6 = FUN_00dde2d0(0,2), sVar6 == 0)) {
      param_1[0x252] = 1;
      sVar6 = FUN_00dde2d0(0,1);
      param_1[0x253] = sVar6 + 2;
    }
    iVar7 = FUN_00ac4780();
    if ((iVar7 == 2) && (sVar6 = FUN_00dde2d0(0,2), sVar6 == 0)) {
      param_1[0x252] = 1;
      sVar6 = FUN_00dde2d0(0,2);
      param_1[0x253] = sVar6 + 2;
    }
    iVar7 = FUN_00ac4780();
    if ((2 < iVar7) && (sVar6 = FUN_00dde2d0(0,2), sVar6 == 0)) {
      param_1[0x252] = 1;
      sVar6 = FUN_00dde2d0(0,1);
      param_1[0x253] = sVar6 + 1;
    }
    goto LAB_00813137;
  case 1:
LAB_00813137:
    if ((1 < param_1[0x829]) && (sVar6 = FUN_00dde2d0(0,2), sVar6 != 0)) {
      uVar8 = 0x8c;
    }
    iVar7 = FUN_00ac4780();
    if (iVar7 == 0) {
      uVar8 = 0x8f;
    }
    FUN_00aa4080(uVar8,0,0x3e888889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    if (param_1[0x584] != 0) {
      FUN_00ad0a90();
    }
    param_1[0x584] = 0;
    FUN_0080c630();
    param_1[0x250] = param_1[0x250] + -1;
    param_1[0x81f] = 0;
    param_1[0x77c] = 0;
    param_1[0x77d] = 0;
switchD_00812fd3_caseD_2:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar7 = FUN_00a94e10(0,0x425c0000,0x42a00000);
    if (iVar7 != 0) {
      param_1[0x58a] = 1;
      param_1[0x58b] = 1;
    }
    goto LAB_0081321a;
  case 2:
    goto switchD_00812fd3_caseD_2;
  case 3:
    uVar8 = 0x90;
    if (((1 < param_1[0x829]) || (iVar7 = FUN_00ac4780(), 1 < iVar7)) &&
       (sVar6 = FUN_00dde2d0(0,2), sVar6 != 0)) {
      uVar8 = 0x8d;
    }
    iVar7 = FUN_00ac4780();
    if (iVar7 == 0) {
      uVar8 = 0x90;
    }
    FUN_00aa4080(uVar8,0,0x3e888889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    if (param_1[0x584] != 0) {
      FUN_00ad0a90();
    }
    param_1[0x584] = 0;
    param_1[0x81f] = 0;
    param_1[0x77c] = 0;
    param_1[0x77d] = 0;
  case 4:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    if (((0 < param_1[0x250]) && (iVar7 = FUN_00a8c760(4), iVar7 != 0)) &&
       (((float)param_1[0x2a8] < 2.0943952 && ((float)param_1[0x2a3] <= 900.0)))) {
      FUN_00a8caf0(0x1d,1,0,0);
      if (param_1[0x77d] != 0) {
        param_1[0x251] = param_1[0x251] + 1;
      }
      iVar7 = FUN_00ac4780();
      if (((0 < iVar7) && (param_1[0x77d] != 0)) &&
         ((param_1[0x253] <= param_1[0x251] && (param_1[0x252] != 0)))) {
        iVar7 = FUN_0080ce00(0xc1f00000);
        if (iVar7 == 0) {
          uVar9 = 6;
        }
        else {
          iVar7 = FUN_00ac4780();
          if (iVar7 < 3) goto LAB_008133b0;
          uVar9 = 2;
        }
        FUN_00a8caf0(uVar9,0,0,0);
      }
LAB_008133b0:
      if (param_1[0x250] < 2) {
        FUN_00a8caf0(0x1d,5,0,0);
      }
    }
    if ((((param_1[0x250] < 1) || (iVar7 = FUN_00a8c760(4), iVar7 == 0)) ||
        (1.0471976 <= (float)param_1[0x2a8])) || (1444.0 < (float)param_1[0x2a3])) {
LAB_0081342d:
      if (((param_1[0x250] < 2) && (iVar7 = FUN_00a8c760(4), iVar7 != 0)) &&
         (((float)param_1[0x2a8] < 0.6981317 && (625.0 < (float)param_1[0x2a3])))) {
        FUN_00a8caf0(0x1d,5,0,0);
      }
    }
    else if (param_1[0x250] < 2) {
      sVar6 = FUN_00dde2d0(0,1);
      if (sVar6 != 0) {
        FUN_00a8caf0(0x1d,5,0,0);
      }
      goto LAB_0081342d;
    }
    if (((param_1[0x187] == 5) && (iVar7 = FUN_00ac4780(), iVar7 == 1)) &&
       (((float)param_1[0x2a3] <= 25.0 ||
        (fVar1 = (float)param_1[0x2a8], !NAN(fVar1) && 2.0943952 < fVar1 != (fVar1 == 2.0943952)))))
    {
      iVar7 = FUN_0080ce00(0xc1f00000);
      if (iVar7 == 0) {
        uVar9 = 6;
      }
      else {
        FUN_00a8caf0(3,0,0,0);
        sVar6 = FUN_00dde2d0(0,2);
        if (sVar6 == 0) goto LAB_008134f2;
        uVar9 = 2;
      }
      FUN_00a8caf0(uVar9,0,0,0);
    }
LAB_008134f2:
    iVar7 = FUN_00a94e10(0,0x425c0000,0x42a00000);
    if (iVar7 != 0) {
      param_1[0x58a] = 1;
      param_1[0x58b] = 1;
    }
    iVar7 = FUN_00a94ce0(0);
    if (iVar7 != 0) {
      FUN_00a8caf0(0,0,0,0);
      param_1[0x3aa] = 0x41f00000;
      iVar7 = FUN_00ac4780();
      if (iVar7 == 2) {
        param_1[0x3aa] = 0x41f00000;
      }
      iVar7 = FUN_00ac4780();
      if (2 < iVar7) {
        param_1[0x3aa] = 0x40c00000;
      }
    }
    goto switchD_00812fd3_default;
  case 5:
    FUN_00aa4080(0x92,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x81f] = 0;
    param_1[0x77c] = 0;
    param_1[0x77d] = 0;
    FUN_0080c630();
    break;
  case 6:
  case 8:
    break;
  case 7:
    FUN_00aa4080(0x93,0,0x3d088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    break;
  case 9:
    FUN_00aa4080(0x94,0,0x3d888889,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x248] = 0x43700000;
    iVar7 = FUN_00ac4780();
    if (iVar7 == 0) {
      param_1[0x248] = 0x44160000;
    }
    iVar7 = FUN_00ac4780();
    if (iVar7 == 2) {
      param_1[0x248] = 0x42700000;
    }
    iVar7 = FUN_00ac4780();
    if (2 < iVar7) {
      param_1[0x248] = 0;
    }
  case 10:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    fVar1 = (float)param_1[0x248];
    param_1[0x248] = (int)(fVar1 - (float)param_1[0x244]);
    if (fVar1 - (float)param_1[0x244] < 0.0) {
      param_1[0x187] = param_1[0x187] + 1;
    }
    goto switchD_00812fd3_default;
  case 0xb:
    FUN_00aa4080(0x95,0,0x3d888889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  case 0xc:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar7 = FUN_00a94ce0(0);
    if (iVar7 != 0) {
      param_1[0x3aa] = 0x41f00000;
      iVar7 = FUN_00ac4780();
      if (iVar7 == 2) {
        param_1[0x3aa] = 0x41f00000;
      }
      iVar7 = FUN_00ac4780();
      if (2 < iVar7) {
        param_1[0x3aa] = 0x40c00000;
      }
      FUN_00a8caf0(0,0,0,0);
      if (((float)param_1[0x2a3] <= 225.0) ||
         (fVar1 = (float)param_1[0x2a8], !NAN(fVar1) && 2.0943952 < fVar1 != (fVar1 == 2.0943952)))
      {
        iVar7 = FUN_0080ce00(0xc1f00000);
        if (iVar7 == 0) {
          uVar9 = 6;
        }
        else {
          FUN_00a8caf0(3,0,0,0);
          sVar6 = FUN_00dde2d0(0,2);
          if (sVar6 == 0) goto LAB_008137e8;
          uVar9 = 2;
        }
        FUN_00a8caf0(uVar9,0,0,0);
      }
LAB_008137e8:
      sVar6 = FUN_00dde2d0(0,1);
      if (((sVar6 != 0) &&
          (fVar1 = (float)param_1[0x2a3], !NAN(fVar1) && 1.0 < fVar1 != (fVar1 == 1.0))) &&
         ((float)param_1[0x2a3] <= 484.0)) {
        fVar1 = (float)param_1[0x2a7];
        if ((!NAN(fVar1) && 0.0 < fVar1 != (fVar1 == 0.0)) && ((float)param_1[0x2a7] <= 2.0943952))
        {
          param_1[0x77f] = 0;
          FUN_00a8caf0(0x13,0,0,0);
        }
        if (((float)param_1[0x2a7] <= 0.0) &&
           (fVar1 = (float)param_1[0x2a7],
           !NAN(fVar1) && -2.0943952 < fVar1 != (fVar1 == -2.0943952))) {
          param_1[0x77f] = 0;
          FUN_00a8caf0(0x12,0,0,0);
        }
      }
    }
  default:
    goto switchD_00812fd3_default;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
LAB_0081321a:
  iVar7 = FUN_00a94ce0(0);
  if (iVar7 != 0) {
    param_1[0x187] = param_1[0x187] + 1;
  }
switchD_00812fd3_default:
  if (param_1[0x81d] == 0) {
    return;
  }
  if ((param_1[0x2a1] == 0) || (iVar7 = FUN_00a8c760(0x19), iVar7 == 0)) goto LAB_00813dec;
  iVar7 = param_1[0x2a1];
  param_1[0x764] = 1;
  local_30 = (float)param_1[0x10] - *(float *)(iVar7 + 0x40);
  local_28 = (float)param_1[0x12] - *(float *)(iVar7 + 0x48);
  local_24 = (float)param_1[0x13] - *(float *)(iVar7 + 0x4c);
  local_2c = 0.0;
  if ((param_1[0x187] == 2) || (param_1[0x187] == 4)) {
    fVar1 = local_30 * local_30 + local_28 * local_28;
    if (fVar1 <= 121.0) {
      if (fVar1 <= 64.0) goto LAB_00813c05;
      fVar3 = 8.0 - SQRT(fVar1);
      if (NAN(fVar1) || fVar1 < 0.0 == (fVar1 == 0.0)) {
        FUN_00ddf460(&local_30,&local_30);
      }
      else {
        FUN_00dd5650(&DAT_0163d0ac);
        local_28 = 0.0;
        local_2c = 1.0;
        local_30 = 0.0;
      }
      local_30 = local_30 * fVar3 * 0.2;
      local_2c = fVar3 * local_2c * 0.2;
      local_28 = local_28 * fVar3 * 0.2;
      local_24 = fVar3 * local_24 * 0.2;
      fVar1 = local_28 * local_28 + local_2c * local_2c + local_30 * local_30;
      if (0.25 < fVar1) {
        if (fVar1 < 0.0 != (fVar1 == 0.0)) goto LAB_00813b70;
        goto LAB_00813b58;
      }
    }
    else {
      fVar3 = 11.0 - SQRT(fVar1);
      if (fVar1 < 0.0 == (fVar1 == 0.0)) {
        FUN_00ddf460(&local_30,&local_30);
      }
      else {
        FUN_00dd5650(&DAT_0163d0ac);
        local_28 = 0.0;
        local_2c = 1.0;
        local_30 = 0.0;
      }
      local_30 = local_30 * fVar3 * 0.4;
      local_2c = fVar3 * local_2c * 0.4;
      local_28 = local_28 * fVar3 * 0.4;
      local_24 = fVar3 * local_24 * 0.4;
      fVar1 = local_28 * local_28 + local_2c * local_2c + local_30 * local_30;
      if (0.25 < fVar1) {
        if (fVar1 < 0.0 == (fVar1 == 0.0)) {
LAB_00813b58:
          FUN_00ddf460(&local_30,&local_30);
        }
        else {
LAB_00813b70:
          FUN_00dd5650(&DAT_0163d0ac);
          local_28 = 0.0;
          local_2c = 1.0;
          local_30 = 0.0;
        }
        local_30 = local_30 * 0.5;
        local_2c = local_2c * 0.5;
        local_28 = local_28 * 0.5;
        local_24 = local_24 * 0.5;
      }
    }
    fVar1 = (float)param_1[0x244];
    local_1c = fVar1 * local_2c;
    param_1[0x14] = (int)(local_30 * fVar1 + (float)param_1[0x14]);
    param_1[0x15] = (int)((float)param_1[0x15] + local_1c);
    param_1[0x16] = (int)((float)param_1[0x16] + local_28 * fVar1);
    param_1[0x17] = (int)(local_24 * fVar1 + (float)param_1[0x17]);
  }
LAB_00813c05:
  if (((param_1[0x187] == 6) || (param_1[0x187] == 8)) &&
     (fVar1 = local_28 * local_28 + local_2c * local_2c + local_30 * local_30, 100.0 < fVar1)) {
    fVar3 = 10.0 - SQRT(fVar1);
    if (fVar1 < 0.0 == (fVar1 == 0.0)) {
      FUN_00ddf460(&local_30,&local_30);
    }
    else {
      FUN_00dd5650(&DAT_0163d0ac);
      local_28 = 0.0;
      local_2c = 1.0;
      local_30 = 0.0;
    }
    fVar4 = local_30 * fVar3 * 0.4;
    fVar5 = fVar3 * local_2c * 0.4;
    fVar1 = local_28 * fVar3 * 0.4;
    fVar3 = fVar3 * local_24 * 0.4;
    fVar2 = fVar1 * fVar1 + fVar5 * fVar5 + fVar4 * fVar4;
    local_30 = fVar4;
    local_2c = fVar5;
    local_28 = fVar1;
    local_24 = fVar3;
    if (0.25 < fVar2) {
      if (fVar2 < 0.0 == (fVar2 == 0.0)) {
        FUN_00ddf460(&local_30,&local_30);
        fVar1 = local_28;
        fVar4 = local_30;
        fVar5 = local_2c;
      }
      else {
        FUN_00dd5650(&DAT_0163d0ac);
        fVar1 = 0.0;
        fVar4 = 0.0;
        fVar5 = 1.0;
      }
      fVar4 = fVar4 * 0.5;
      fVar5 = fVar5 * 0.5;
      fVar1 = fVar1 * 0.5;
      fVar3 = local_24 * 0.5;
    }
    fVar2 = (float)param_1[0x244];
    param_1[0x14] = (int)((float)param_1[0x14] + fVar2 * fVar4);
    param_1[0x15] = (int)((float)param_1[0x15] + fVar2 * fVar5);
    param_1[0x16] = (int)((float)param_1[0x16] + fVar1 * fVar2);
    param_1[0x17] = (int)(fVar2 * fVar3 + (float)param_1[0x17]);
  }
LAB_00813dec:
  if (((param_1[0x81d] != 0) && (iVar7 = FUN_00a8c760(0), iVar7 != 0)) &&
     (fVar1 = (float)param_1[0x2a3], !NAN(fVar1) && 121.0 < fVar1 != (fVar1 == 121.0))) {
    FUN_00a8e880(param_1[0x2a1] + 0x50);
    (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x393702d3,0x3d0efa35,0);
  }
  return;
}

// 00813EA0  FUN_00813ea0  size=995  [callgraph]
void __fastcall FUN_00813ea0(int *param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  float10 fVar4;
  float10 fVar5;
  unkbyte10 Var6;
  
  param_1[0x764] = 1;
  param_1[0x58a] = 1;
  param_1[0x58b] = 1;
  param_1[0x588] = 1;
  param_1[0x3ab] = 1;
  if (param_1[0x187] == 0) {
    FUN_00aa4080(0x96,0,0x3d888889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    if (param_1[0x584] != 0) {
      FUN_00ad0a90();
    }
    param_1[0x584] = 0;
    FUN_0080c630();
    param_1[0x250] = param_1[0x250] + -1;
    param_1[0x248] = 0;
    param_1[0x81f] = 0;
  }
  else if (param_1[0x187] != 1) goto LAB_00814226;
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar3 = FUN_00a94e10(0,0x42100000,0x42780000);
  if (iVar3 != 0) {
    FUN_00a8de10((float)param_1[0x244] * (float)param_1[0x248],param_1[0x25],0);
    fVar1 = (float)param_1[0x248] - (float)param_1[0x244] * 0.1;
    param_1[0x248] = (int)fVar1;
    if (fVar1 < 0.0) {
      param_1[0x248] = -0x41000000;
    }
  }
  iVar3 = FUN_00a94e10(0,0x42780000,0x42980000);
  if (iVar3 != 0) {
    FUN_00a8de10((float)param_1[0x244] * (float)param_1[0x248],param_1[0x25],0);
    fVar4 = (float10)FUN_00fdc1f0();
    param_1[0x248] = (int)(float)(fVar4 * (float10)(float)param_1[0x248]);
    FUN_00a8e880(param_1[0x2a1] + 0x50);
    (**(code **)(*param_1 + 0x308))(0x3e4ccccd,0x393702d3,0x3d8efa35,0);
  }
  iVar3 = FUN_00a94e10(0,0x42980000,0x42bc0000);
  if (iVar3 != 0) {
    iVar3 = FUN_00a12210(0);
    fVar1 = *(float *)(iVar3 + 0x44);
    fVar2 = *(float *)(param_1[0x2a1] + 0x54);
    iVar3 = FUN_00a12210(0);
    fVar4 = (float10)*(float *)(iVar3 + 0x40) - (float10)*(float *)(param_1[0x2a1] + 0x50);
    fVar5 = (float10)*(float *)(iVar3 + 0x48) - (float10)*(float *)(param_1[0x2a1] + 0x58);
    Var6 = fpatan(SQRT(fVar5 * fVar5 + fVar4 * fVar4),(float10)(fVar1 - fVar2));
    fVar4 = (float10)fcos(Var6);
    FUN_00a8de10((float)(((float10)(float)param_1[0x248] / fVar4) * (float10)(float)param_1[0x244]),
                 param_1[0x25],0);
    fVar4 = (float10)FUN_00fdc1f0();
    fVar4 = ((float10)(float)param_1[0x244] * (float10)0.2 + (float10)(float)param_1[0x248]) * fVar4
    ;
    param_1[0x248] = (int)(float)fVar4;
    if ((float10)1 < fVar4) {
      param_1[0x248] = (int)(float)(float10)1;
    }
  }
  iVar3 = FUN_00a94e10(0,0x42bc0000,0x430c0000);
  if (iVar3 != 0) {
    FUN_00a8de10((float)param_1[0x244] * (float)param_1[0x248],param_1[0x25],0);
    fVar4 = (float10)FUN_00fdc1f0();
    param_1[0x248] = (int)(float)(fVar4 * (float10)(float)param_1[0x248]);
  }
  iVar3 = FUN_00a94ce0(0);
  if (iVar3 != 0) {
    FUN_00a8caf0(0,0,0,0);
    param_1[0x3aa] = 0x41f00000;
    iVar3 = FUN_00ac4780();
    if (iVar3 == 2) {
      param_1[0x3aa] = 0x41f00000;
    }
    iVar3 = FUN_00ac4780();
    if (2 < iVar3) {
      param_1[0x3aa] = 0x40c00000;
    }
  }
LAB_00814226:
  if ((param_1[0x81d] != 0) && (iVar3 = FUN_00a8c760(0), iVar3 != 0)) {
    FUN_00a8e880(param_1[0x2a1] + 0x50);
    (**(code **)(*param_1 + 0x308))(0x3e4ccccd,0x393702d3,0x3d0efa35,0);
  }
  return;
}

// 00814290  FUN_00814290  size=189  [callgraph]
void __fastcall FUN_00814290(int param_1)

{
  int iVar1;
  
  FUN_0080d080();
  *(undefined4 *)(param_1 + 0x1d90) = 1;
  *(undefined4 *)(param_1 + 0x1620) = 1;
  *(undefined4 *)(param_1 + 0x1624) = 1;
  *(undefined4 *)(param_1 + 0x161c) = 1;
  if (*(int *)(param_1 + 0x61c) == 0) {
    FUN_00aa4080(0xa7,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    FUN_0080c630();
    FUN_00a94bc0(5,0x3e2aaaab);
  }
  else if (*(int *)(param_1 + 0x61c) != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    FUN_00a8caf0(0xc,0,0,0);
  }
  return;
}

// 00814350  FUN_00814350  size=396  [callgraph]
void __fastcall FUN_00814350(int *param_1)

{
  short sVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  FUN_0080d080();
  (**(code **)(*param_1 + 0x314))();
  param_1[0x769] = param_1[0x76a];
  if (param_1[0x187] == 0) {
    FUN_00aa4080(0xb0,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_0080c630();
    FUN_00a94bc0(5,0x3e2aaaab);
    param_1[0x829] = param_1[0x829] + 1;
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 != 0) {
    param_1[0x3a6] = 0;
    iVar2 = FUN_00a92f90();
    iVar3 = FUN_00e26e90();
    if (iVar3 != 0) {
      *(uint *)(iVar2 + 0x280) = *(uint *)(iVar2 + 0x280) & 0xfffffffb;
    }
    FUN_00a8caf0(0xc,0,0,0);
    FUN_00a8caf0(3,0,0,0);
    iVar2 = FUN_0080ce00(0xc2200000);
    if (iVar2 == 0) {
      uVar4 = 4;
    }
    else {
      uVar4 = 2;
    }
    FUN_00a8caf0(uVar4,0,0,0);
    sVar1 = FUN_00dde2d0(0,2);
    if (((sVar1 == 1) && ((float)param_1[0x2a8] < 1.0471976)) && ((float)param_1[0x2a3] <= 1225.0))
    {
      FUN_00a8caf0(0x1d,0,0,0);
      sVar1 = FUN_00dde2d0(0,2);
      if (sVar1 == 1) {
        FUN_00a8caf0(0x16,0,0,0);
      }
    }
  }
  return;
}

// 008144E0  FUN_008144e0  size=403  [callgraph]
void __fastcall FUN_008144e0(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined2 uVar3;
  
  FUN_0080d080();
  (**(code **)(*param_1 + 0x314))();
  param_1[0x769] = param_1[0x76a];
  uVar3 = 0xb2;
  if (param_1[0x187] == 0) {
    if (param_1[0x186] == 0x29) {
      uVar3 = 0xb3;
    }
    FUN_00aa4080(uVar3,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_0080c630();
    FUN_00a94bc0(5,0x3e2aaaab);
    param_1[0x829] = param_1[0x829] + 1;
    if (param_1[0x128] == 0) {
      iVar1 = FUN_00a92f90();
      iVar2 = FUN_00e26e90();
      if (iVar2 != 0) {
        *(uint *)(iVar1 + 0x280) = *(uint *)(iVar1 + 0x280) | 4;
      }
    }
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    param_1[0x3a6] = 0;
    iVar1 = FUN_00a92f90();
    iVar2 = FUN_00e26e90();
    if (iVar2 != 0) {
      *(uint *)(iVar1 + 0x280) = *(uint *)(iVar1 + 0x280) & 0xfffffffb;
    }
    FUN_00a8caf0(0,0,0,0);
    param_1[0x3aa] = 0x41f00000;
    iVar1 = FUN_00ac4780();
    if (iVar1 == 2) {
      param_1[0x3aa] = 0x41f00000;
    }
    iVar1 = FUN_00ac4780();
    if (2 < iVar1) {
      param_1[0x3aa] = 0x40c00000;
    }
    iVar1 = FUN_0080ce00(0xc2200000);
    if (iVar1 != 0) {
      FUN_00a8caf0(2,0,0,0);
      return;
    }
    FUN_00a8caf0(4,0,0,0);
  }
  return;
}

// 00814680  FUN_00814680  size=747  [callgraph]
void __fastcall FUN_00814680(int *param_1)

{
  float fVar1;
  int iVar2;
  
  param_1[0x769] = param_1[0x76a];
  (**(code **)(*param_1 + 0x314))();
  switch(param_1[0x187]) {
  case 0:
    FUN_00aa4080(0xb1,0,0x3d088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_0080c630();
    FUN_00a94bc0(5,0x3e2aaaab);
    param_1[0x829] = param_1[0x829] + 1;
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      FUN_00a8caf0(0,0,0,0);
      param_1[0x3aa] = 0x41f00000;
      iVar2 = FUN_00ac4780();
      if (iVar2 == 2) {
        param_1[0x3aa] = 0x41f00000;
      }
      iVar2 = FUN_00ac4780();
      if (2 < iVar2) {
        param_1[0x3aa] = 0x40c00000;
        return;
      }
    }
    break;
  case 2:
    FUN_00aa4080(0x99,0,0x3c888889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00a8d280();
    param_1[0x248] = 0x43f00000;
    param_1[0x251] = 0;
    FUN_008f0450("sword",0x10000,1);
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    if (((param_1[0x251] == 0) && (param_1[0x2a1] != 0)) && (iVar2 = FUN_00a8d9d0(), iVar2 != 0)) {
      param_1[0x251] = 1;
      param_1[0x248] = (int)((float)param_1[0x248] + 600.0);
    }
    fVar1 = (float)param_1[0x248];
    param_1[0x248] = (int)(fVar1 - (float)param_1[0x244]);
    if (fVar1 - (float)param_1[0x244] < 0.0) {
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    break;
  case 4:
    FUN_00aa4080(0x9a,0,0x3c888889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00a8d280();
    FUN_008f0450("sword",0x10000,0);
  case 5:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      param_1[0x3a6] = 0;
      FUN_00a8caf0(0,0,0,0);
      param_1[0x3aa] = 0;
      iVar2 = FUN_00ac4780();
      if (iVar2 == 2) {
        param_1[0x3aa] = 0x41f00000;
      }
      iVar2 = FUN_00ac4780();
      if (2 < iVar2) {
        param_1[0x3aa] = 0x40c00000;
      }
      iVar2 = FUN_0080ce00(0xc2200000);
      if (iVar2 == 0) {
        FUN_00a8caf0(4,0,0,0);
        return;
      }
      FUN_00a8caf0(2,0,0,0);
      return;
    }
  }
  return;
}

// 00814990  FUN_00814990  size=382  [callgraph]
void __fastcall FUN_00814990(int param_1)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = *(int *)(param_1 + 0x61c);
  if (iVar4 == 0) {
    FUN_00aa4080(0xaa,0,0x3e888889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    FUN_0080c630();
    FUN_00a937e0();
    if ((*(int *)(param_1 + 0x1dd8) == 0) && (iVar4 = 0, 0 < *(short *)(param_1 + 0x324))) {
      iVar5 = 0;
      do {
        iVar2 = *(int *)(param_1 + 800);
        iVar3 = *(int *)(*(int *)(iVar2 + 0x60 + iVar5) + 0x40);
        if ((iVar3 != 0) && (iVar3 = FUN_00fdbbd0(iVar3,"btdes"), iVar3 != 0)) {
          puVar1 = (uint *)(iVar2 + 0x38 + iVar5);
          *puVar1 = *puVar1 | 1;
        }
        iVar4 = iVar4 + 1;
        iVar5 = iVar5 + 0x70;
      } while (iVar4 < *(short *)(param_1 + 0x324));
    }
    if ((*(int *)(param_1 + 0x1dd4) == 0) && (iVar4 = 0, 0 < *(short *)(param_1 + 0x324))) {
      iVar5 = 0;
      do {
        iVar2 = *(int *)(param_1 + 800);
        iVar3 = *(int *)(*(int *)(iVar2 + 0x60 + iVar5) + 0x40);
        if ((iVar3 != 0) && (iVar3 = FUN_00fdbbd0(iVar3,"ftdes"), iVar3 != 0)) {
          puVar1 = (uint *)(iVar2 + 0x38 + iVar5);
          *puVar1 = *puVar1 | 1;
        }
        iVar4 = iVar4 + 1;
        iVar5 = iVar5 + 0x70;
      } while (iVar4 < *(short *)(param_1 + 0x324));
    }
    FUN_00c4d1a0(*(undefined4 *)(param_1 + 0x4f0),0);
  }
  else if (iVar4 != 1) {
    if (iVar4 != 2) {
      return;
    }
    *(undefined4 *)(param_1 + 0x61c) = 3;
    E3_EnemyBoardDebrisSokushi::vf4C();
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar4 = FUN_00a94ce0(0);
  if (iVar4 != 0) {
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    *(undefined4 *)(param_1 + 0x6bc) = 1;
    if (DAT_018b9174 == 0xc30) {
      FUN_00d5ea40("PC30_RAY_END",1,0);
    }
  }
  return;
}

// 00AECFB0  DebrisLeaveSignalContext::DebrisLeaveSignalContext_6  size=42  [class]
void __fastcall DebrisLeaveSignalContext::DebrisLeaveSignalContext_6(int param_1)

{
  undefined **local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_4 = *(undefined4 *)(param_1 + 0x4f0);
  local_8 = 0;
  local_c = vftable;
  FUN_00d89e90(0x20,&local_c);
  return;
}

// 00AECFE0  FUN_00aecfe0  size=175  [callgraph]
void __fastcall FUN_00aecfe0(int param_1)

{
  float fVar1;
  
  if (*(int *)(param_1 + 0x1d0c) == 0) {
    *(float *)(param_1 + 0x1d10) =
         -*(float *)(param_1 + 0x1d10) * 0.06 + *(float *)(param_1 + 0x1d10);
    if (*(float *)(param_1 + 0xa8c) <= 1600.0) {
      *(undefined4 *)(param_1 + 0x1d0c) = 1;
    }
  }
  else {
    *(float *)(param_1 + 0x1d10) =
         (1.0 - *(float *)(param_1 + 0x1d10)) * 0.1 + *(float *)(param_1 + 0x1d10);
    fVar1 = *(float *)(param_1 + 0xa8c);
    if (!NAN(fVar1) && 2209.0 < fVar1 != (fVar1 == 2209.0)) {
      *(undefined4 *)(param_1 + 0x1d0c) = 0;
    }
  }
  if (*(int *)(param_1 + 0x4a0) == 1) {
    *(undefined4 *)(param_1 + 0x1d10) = 0;
    *(undefined4 *)(param_1 + 0x1d0c) = 0;
  }
  FUN_00a947e0(0,0,0,*(undefined4 *)(param_1 + 0x1d10));
  return;
}

// 00AED090  FUN_00aed090  size=182  [callgraph]
void __fastcall FUN_00aed090(int param_1)

{
  int iVar1;
  
  FUN_00ae97a0();
  FUN_00eaa6e0(0x41200000,0);
  (**(code **)(*(int *)(param_1 + 0x1590) + 8))(0x42700000,0,0);
  if (*(int *)(param_1 + 0x1540) != 0) {
    FUN_00ad0a90();
  }
  *(undefined4 *)(param_1 + 0x1540) = 0;
  *(undefined4 *)(param_1 + 0x1d20) = 0;
  if ((*(int **)(param_1 + 0x798) != (int *)0x0) &&
     (iVar1 = (**(code **)(**(int **)(param_1 + 0x798) + 4))(9), iVar1 != 0)) {
    if (*(int **)(param_1 + 0x798) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0x798) + 4))(9);
    }
    FUN_00eaa6e0(0x41200000,0);
  }
  return;
}

// 00AED150  FUN_00aed150  size=117  [callgraph]
void __fastcall FUN_00aed150(int param_1)

{
  FUN_00ae97a0();
  FUN_00eaa6e0(0x41200000,0);
  (**(code **)(*(int *)(param_1 + 0x1590) + 8))(0x42700000,0,0);
  if (*(int *)(param_1 + 0x1540) != 0) {
    FUN_00ad0a90();
  }
  *(undefined4 *)(param_1 + 0x1540) = 0;
  *(undefined4 *)(param_1 + 0x1d20) = 0;
  FUN_00a8d280();
  return;
}

// 00AED1D0  FUN_00aed1d0  size=1542  [callgraph]
float * __thiscall FUN_00aed1d0(int param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_28;
  float local_24;
  float local_18;
  
  iVar7 = FUN_00a12210(6);
  fVar1 = *(float *)(iVar7 + 0x40);
  fVar2 = *(float *)(iVar7 + 0x44);
  fVar3 = *(float *)(iVar7 + 0x48);
  iVar7 = *(int *)(param_1 + 0xa84);
  *param_2 = *(float *)(param_1 + 0x40);
  param_2[2] = *(float *)(param_1 + 0x48);
  param_2[3] = *(float *)(param_1 + 0x4c);
  param_2[1] = fVar2;
  fVar1 = fVar1 - *(float *)(iVar7 + 0x40);
  fVar3 = fVar3 - *(float *)(iVar7 + 0x48);
  fVar1 = SQRT(fVar3 * fVar3 + fVar1 * fVar1);
  fVar2 = *(float *)(param_1 + 0x40) - *(float *)(iVar7 + 0x40);
  fVar3 = *(float *)(param_1 + 0x48) - *(float *)(iVar7 + 0x48);
  fVar2 = SQRT(fVar3 * fVar3 + fVar2 * fVar2);
  if ((fVar2 < 15.0) &&
     (fVar3 = *(float *)(param_1 + 0xaa0), !NAN(fVar3) && 0.7853982 < fVar3 != (fVar3 == 0.7853982))
     ) {
    param_2[1] = *(float *)(iVar7 + 0x44) + 1.0;
  }
  if ((fVar2 < 12.0) && (*(float *)(param_1 + 0xaa0) < 0.7853982)) {
    param_2[1] = *(float *)(iVar7 + 0x44) + 1.0;
  }
  if (35.0 < fVar2) {
    fVar2 = param_2[1] - (fVar2 - 5.25);
    param_2[1] = fVar2;
    fVar3 = *(float *)(iVar7 + 0x44) + 5.0;
    if (fVar2 <= fVar3) {
      param_2[1] = fVar3;
    }
  }
  iVar7 = FUN_00a12210(0x20);
  if (((iVar7 != 0) &&
      (iVar4 = *(int *)(param_1 + 0xa84),
      fVar2 = *(float *)(iVar7 + 0x40) - *(float *)(iVar4 + 0x40),
      fVar3 = *(float *)(iVar7 + 0x48) - *(float *)(iVar4 + 0x48),
      SQRT(fVar3 * fVar3 + fVar2 * fVar2) < 9.0)) && (!NAN(fVar1) && 5.0 < fVar1 != (fVar1 == 5.0)))
  {
    *param_2 = *(float *)(iVar7 + 0x40);
    param_2[2] = *(float *)(iVar7 + 0x48);
    param_2[3] = *(float *)(iVar7 + 0x4c);
    fVar2 = *(float *)(iVar7 + 0x44) - 1.5;
    param_2[1] = fVar2;
    fVar3 = *(float *)(iVar4 + 0x44) + 1.0;
    if (fVar2 <= fVar3) {
      param_2[1] = fVar3;
    }
  }
  iVar7 = FUN_00a12210(0x2b);
  if (((iVar7 != 0) &&
      (iVar4 = *(int *)(param_1 + 0xa84),
      fVar2 = *(float *)(iVar7 + 0x40) - *(float *)(iVar4 + 0x40),
      fVar3 = *(float *)(iVar7 + 0x48) - *(float *)(iVar4 + 0x48),
      SQRT(fVar3 * fVar3 + fVar2 * fVar2) < 9.0)) && (!NAN(fVar1) && 5.0 < fVar1 != (fVar1 == 5.0)))
  {
    *param_2 = *(float *)(iVar7 + 0x40);
    param_2[2] = *(float *)(iVar7 + 0x48);
    param_2[3] = *(float *)(iVar7 + 0x4c);
    fVar1 = *(float *)(iVar7 + 0x44) - 1.5;
    param_2[1] = fVar1;
    fVar2 = *(float *)(iVar4 + 0x44) + 1.0;
    if (fVar1 <= fVar2) {
      param_2[1] = fVar2;
    }
  }
  iVar7 = FUN_00a8cab0();
  if (((iVar7 == 0x1b) || (iVar7 = FUN_00a8cab0(), iVar7 == 0x1c)) &&
     (iVar7 = FUN_00a12210(0x36), iVar7 != 0)) {
    *param_2 = *(float *)(iVar7 + 0x40);
    param_2[2] = *(float *)(iVar7 + 0x48);
    param_2[3] = *(float *)(iVar7 + 0x4c);
    param_2[1] = *(float *)(iVar7 + 0x44) - 2.0;
  }
  iVar7 = FUN_00a8cab0();
  if ((iVar7 == 0x12) && (iVar7 = FUN_00a12210(0x2b), iVar7 != 0)) {
    local_40 = *(float *)(iVar7 + 0x40);
    iVar4 = *(int *)(param_1 + 0xa84);
    *param_2 = local_40;
    param_2[1] = *(float *)(iVar7 + 0x44);
    local_38 = *(float *)(iVar7 + 0x48);
    param_2[2] = local_38;
    local_34 = *(float *)(iVar7 + 0x4c);
    param_2[3] = local_34;
    local_40 = local_40 - *(float *)(iVar4 + 0x40);
    local_38 = local_38 - *(float *)(iVar4 + 0x48);
    local_34 = local_34 - *(float *)(iVar4 + 0x4c);
    local_3c = 0.0;
    fVar1 = local_40 * local_40 + local_38 * local_38;
    if (fVar1 < 0.0 == (fVar1 == 0.0)) {
      FUN_00ddf460(&local_40,&local_40);
    }
    else {
      FUN_00dd5650(&DAT_0163d0ac);
      local_40 = 0.0;
      local_3c = 1.0;
      local_38 = 0.0;
    }
    fVar2 = local_40 * 2.0;
    fVar3 = local_3c * 2.0;
    local_28 = local_38 * 2.0;
    local_24 = local_34 * 2.0;
    fVar1 = *(float *)(iVar7 + 0x40) - *(float *)(*(int *)(param_1 + 0xa84) + 0x40);
    fVar6 = *(float *)(iVar7 + 0x48) - *(float *)(*(int *)(param_1 + 0xa84) + 0x48);
    fVar6 = SQRT(fVar6 * fVar6 + fVar1 * fVar1);
    fVar1 = local_28;
    if ((fVar6 < 9.0) && (0 < *(int *)(param_1 + 0x61c))) {
      fVar2 = local_40 * 6.0;
      fVar3 = local_3c * 6.0;
      local_18 = local_38 * 6.0;
      local_24 = local_34 * 6.0;
      fVar1 = local_18;
    }
    fVar5 = local_24;
    if ((fVar6 < 4.5) && (0 < *(int *)(param_1 + 0x61c))) {
      fVar2 = local_40 * 8.0;
      fVar3 = local_3c * 8.0;
      fVar1 = local_38 * 8.0;
      fVar5 = local_34 * 8.0;
    }
    *param_2 = fVar2 + *param_2;
    param_2[1] = fVar3 + param_2[1];
    param_2[2] = fVar1 + param_2[2];
    param_2[3] = fVar5 + param_2[3];
  }
  iVar7 = FUN_00a8cab0();
  if ((iVar7 == 0x13) && (iVar7 = FUN_00a12210(0x20), iVar7 != 0)) {
    local_40 = *(float *)(iVar7 + 0x40);
    iVar4 = *(int *)(param_1 + 0xa84);
    *param_2 = local_40;
    param_2[1] = *(float *)(iVar7 + 0x44);
    local_38 = *(float *)(iVar7 + 0x48);
    param_2[2] = local_38;
    local_34 = *(float *)(iVar7 + 0x4c);
    param_2[3] = local_34;
    local_40 = local_40 - *(float *)(iVar4 + 0x40);
    local_38 = local_38 - *(float *)(iVar4 + 0x48);
    local_34 = local_34 - *(float *)(iVar4 + 0x4c);
    local_3c = 0.0;
    fVar1 = local_40 * local_40 + local_38 * local_38;
    if (fVar1 < 0.0 == (fVar1 == 0.0)) {
      FUN_00ddf460(&local_40,&local_40);
    }
    else {
      FUN_00dd5650(&DAT_0163d0ac);
      local_40 = 0.0;
      local_3c = 1.0;
      local_38 = 0.0;
    }
    fVar2 = local_40 * 2.0;
    fVar3 = local_3c * 2.0;
    local_28 = local_38 * 2.0;
    local_24 = local_34 * 2.0;
    fVar1 = *(float *)(iVar7 + 0x40) - *(float *)(*(int *)(param_1 + 0xa84) + 0x40);
    fVar6 = *(float *)(iVar7 + 0x48) - *(float *)(*(int *)(param_1 + 0xa84) + 0x48);
    fVar6 = SQRT(fVar6 * fVar6 + fVar1 * fVar1);
    fVar1 = local_28;
    if ((fVar6 < 9.0) && (0 < *(int *)(param_1 + 0x61c))) {
      fVar2 = local_40 * 6.0;
      fVar3 = local_3c * 6.0;
      local_18 = local_38 * 6.0;
      local_24 = local_34 * 6.0;
      fVar1 = local_18;
    }
    fVar5 = local_24;
    if ((fVar6 < 4.5) && (0 < *(int *)(param_1 + 0x61c))) {
      fVar2 = local_40 * 8.0;
      fVar3 = local_3c * 8.0;
      fVar1 = local_38 * 8.0;
      fVar5 = local_34 * 8.0;
    }
    *param_2 = fVar2 + *param_2;
    param_2[1] = param_2[1] + fVar3;
    param_2[2] = fVar1 + param_2[2];
    param_2[3] = fVar5 + param_2[3];
  }
  iVar7 = FUN_00a8cab0();
  if (iVar7 == 0x17) {
    iVar7 = FUN_00a12210(6);
    *param_2 = *(float *)(iVar7 + 0x40);
    param_2[2] = *(float *)(iVar7 + 0x48);
    param_2[3] = *(float *)(iVar7 + 0x4c);
    param_2[1] = *(float *)(iVar7 + 0x44) + 5.0;
  }
  return param_2;
}

// 00AED900  FUN_00aed900  size=409  [callgraph]
undefined4 __thiscall FUN_00aed900(int param_1,undefined4 param_2)

{
  float fVar1;
  float fVar2;
  int *piVar3;
  int iVar4;
  float unaff_ESI;
  float unaff_EDI;
  float *pfVar5;
  float fVar6;
  float fVar7;
  float fStack_a8;
  float fStack_a4;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  float fStack_84;
  float local_80;
  float local_7c;
  float local_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  uint uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined *puStack_48;
  undefined4 uStack_44;
  undefined1 auStack_38 [52];
  
  fVar1 = *(float *)(param_1 + 0x40);
  fVar6 = (float)(param_1 + 0x10);
  local_9c = *(float *)(param_1 + 0x44);
  pfVar5 = &local_80;
  local_98 = *(float *)(param_1 + 0x48);
  local_94 = *(float *)(param_1 + 0x4c);
  local_80 = 0.0;
  local_7c = 8.0;
  local_8c = 8.0;
  local_78 = 0.0;
  local_90 = 0.0;
  local_88 = (float)param_2;
  fVar7 = fVar6;
  D3DXVec3TransformNormal(pfVar5,pfVar5,fVar6);
  D3DXVec3TransformNormal(&local_9c,&local_9c,fVar6);
  local_88 = local_98 + (float)pfVar5;
  fStack_84 = local_94 + fVar7;
  local_80 = local_90 + unaff_EDI;
  local_7c = local_8c + unaff_ESI;
  fVar6 = fStack_a8 + (float)pfVar5;
  fVar7 = fVar7 + fStack_a4;
  fVar2 = unaff_ESI + local_9c;
  piVar3 = (int *)FUN_009f8b60();
  local_78 = local_88;
  fStack_74 = fStack_84;
  fStack_70 = local_80;
  fStack_6c = local_7c;
  uStack_58 = *piVar3 << 0x10 | 0x19;
  uStack_54 = 0x1000000;
  uStack_50 = 0;
  uStack_4c = 0;
  puStack_48 = &DAT_016484f0;
  uStack_44 = 0;
  fStack_68 = fVar6;
  fStack_64 = fVar7;
  fStack_60 = unaff_EDI + fVar1;
  fStack_5c = fVar2;
  iVar4 = RayCastSingleHitWork::RayCastSingleHitWork_2(auStack_38,0,0,0,&local_78);
  if (iVar4 != 0) {
    return 1;
  }
  return 0;
}

// 00AEDAA0  FUN_00aedaa0  size=761  [callgraph]
void __fastcall FUN_00aedaa0(int param_1)

{
  float fVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  iVar3 = *(int *)(param_1 + 0x204c);
  iVar4 = 0;
  if ((((iVar3 == 0xc) || (iVar3 == 0x12)) || (iVar3 == 0x13)) &&
     ((*(float *)(param_1 + 0x2054) < 0.0 &&
      (fVar1 = *(float *)(param_1 + 0x2050), !NAN(fVar1) && 0.0 < fVar1 != (fVar1 == 0.0))))) {
    uVar2 = *(ushort *)(param_1 + 0xdc4);
    if ((uVar2 & 1) == 0) {
      local_90 = 0;
      local_8c = 0;
      uVar6 = 0xc;
      local_88 = 0;
      puVar5 = &local_90;
    }
    else if ((uVar2 & 4) == 0) {
      local_80 = 0;
      local_7c = 0;
      uVar6 = 0x13;
      local_78 = 0;
      puVar5 = &local_80;
    }
    else {
      if ((uVar2 & 2) != 0) goto LAB_00aedb91;
      local_70 = 0;
      local_6c = 0;
      uVar6 = 0x12;
      local_68 = 0;
      puVar5 = &local_70;
    }
    iVar4 = FUN_00c593a0(*(undefined4 *)(param_1 + 0x4f0),0xffffffff,puVar5,0x43480000,0x42c80000,
                         uVar6,4);
  }
LAB_00aedb91:
  if (((*(int *)(param_1 + 0x204c) == 0x10) || (*(int *)(param_1 + 0x204c) == 0x11)) &&
     ((*(float *)(param_1 + 0x2054) < 0.0 &&
      (0.0 < *(float *)(param_1 + 0x2050) != (*(float *)(param_1 + 0x2050) == 0.0))))) {
    if ((*(ushort *)(param_1 + 0xdc4) & 0x40) == 0) {
      local_60 = 0;
      local_5c = 0;
      uVar6 = 0x10;
      local_58 = 0;
      puVar5 = &local_60;
    }
    else {
      if ((char)*(ushort *)(param_1 + 0xdc4) < '\0') goto LAB_00aedc41;
      local_50 = 0;
      local_4c = 0;
      uVar6 = 0x11;
      local_48 = 0;
      puVar5 = &local_50;
    }
    iVar4 = FUN_00c593a0(*(undefined4 *)(param_1 + 0x4f0),0xffffffff,puVar5,0x43480000,0x42c80000,
                         uVar6,4);
  }
LAB_00aedc41:
  if ((((*(int *)(param_1 + 0x204c) == 0xe) || (*(int *)(param_1 + 0x204c) == 0xf)) &&
      (*(float *)(param_1 + 0x2054) < 0.0)) &&
     (0.0 < *(float *)(param_1 + 0x2050) != (*(float *)(param_1 + 0x2050) == 0.0))) {
    if ((*(ushort *)(param_1 + 0xdc4) & 0x10) == 0) {
      local_40 = 0;
      local_3c = 0;
      uVar6 = 0xe;
      local_38 = 0;
      puVar5 = &local_40;
    }
    else {
      if ((*(ushort *)(param_1 + 0xdc4) & 0x20) != 0) goto LAB_00aedcfb;
      local_30 = 0;
      local_2c = 0;
      uVar6 = 0xf;
      local_28 = 0;
      puVar5 = &local_30;
    }
    iVar4 = FUN_00c593a0(*(undefined4 *)(param_1 + 0x4f0),0xffffffff,puVar5,0x43480000,0x42c80000,
                         uVar6,4);
  }
LAB_00aedcfb:
  if (((*(int *)(param_1 + 0x204c) == 0xd) && (*(float *)(param_1 + 0x2054) < 0.0)) &&
     ((0.0 < *(float *)(param_1 + 0x2050) != (*(float *)(param_1 + 0x2050) == 0.0) &&
      ((*(byte *)(param_1 + 0xdc4) & 8) == 0)))) {
    local_20 = 0;
    local_1c = 0;
    local_18 = 0;
    iVar4 = FUN_00c593a0(*(undefined4 *)(param_1 + 0x4f0),0xffffffff,&local_20,0x43480000,0x42c80000
                         ,0xd,4);
  }
  if (iVar4 != 0) {
    *(undefined4 *)(iVar4 + 0x48) = 0;
    *(undefined4 *)(iVar4 + 0x40) = 0x3f99999a;
    *(undefined4 *)(iVar4 + 0x44) = 0x3e99999a;
  }
  return;
}

// 00AF0630  FUN_00af0630  size=1138  [callgraph]
void __fastcall FUN_00af0630(int *param_1)

{
  short sVar1;
  int iVar2;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  if ((900.0 < (float)param_1[0x2a3]) && ((float)param_1[0x7fa] <= 0.0)) {
    iVar2 = FUN_00a81330();
    if ((iVar2 != 0) &&
       ((iVar2 = FUN_00a7c8a0(), iVar2 != 0 && (iVar2 = FUN_00a7c8a0(), iVar2 != 0)))) {
      *(undefined4 *)(iVar2 + 0xd90) = 1;
    }
    iVar2 = FUN_00a81330();
    if (((iVar2 != 0) && (iVar2 = FUN_00a7c8a0(), iVar2 != 0)) &&
       (iVar2 = FUN_00a7c8a0(), iVar2 != 0)) {
      *(undefined4 *)(iVar2 + 0xd90) = 1;
    }
    iVar2 = FUN_00a81330();
    if (((iVar2 != 0) && (iVar2 = FUN_00a7c8a0(), iVar2 != 0)) &&
       (iVar2 = FUN_00a7c8a0(), iVar2 != 0)) {
      *(undefined4 *)(iVar2 + 0xd90) = 1;
    }
    iVar2 = FUN_00a81330();
    if (((iVar2 != 0) && (iVar2 = FUN_00a7c8a0(), iVar2 != 0)) &&
       (iVar2 = FUN_00a7c8a0(), iVar2 != 0)) {
      *(undefined4 *)(iVar2 + 0xd90) = 1;
    }
  }
  switch(param_1[0x187]) {
  case 0:
    FUN_00a9f4c0(&DAT_01648504,0x3e888889,0x8000000,0);
    FUN_00a9f600(0xffffffff,0,0,0,0,0x10,0x3e888889,0x8000000);
    FUN_00a9f600(0xffffffff,0,0,0,1,0x1f,0x3e888889,0x8000000);
    sVar1 = FUN_00dde2d0(1,5);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x250] = 0;
    param_1[0x248] = (int)((float)(int)sVar1 * 60.0);
    if ((param_1[0x2a1] != 0) && (iVar2 = FUN_00a979d0(), iVar2 == 0)) {
      FUN_00a8d330(param_1 + 0x10,param_1[0x2a1] + 0x40);
    }
    param_1[0x80f] = 0;
    FUN_00eaa6e0(0x41200000,0);
  case 1:
    FUN_00aecfe0();
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
    }
    break;
  case 2:
    FUN_00a9f4c0(&DAT_01648504,0x3c888889,0,0);
    FUN_00a9f600(0xffffffff,0,0,0,0,0x11,0x3c888889,0);
    FUN_00a9f600(0xffffffff,0,0,0,1,0x20,0x3c888889,0);
    param_1[0x187] = param_1[0x187] + 1;
  case 3:
    FUN_00aecfe0();
    iVar2 = FUN_00a94ce0(0);
    if ((iVar2 != 0) && (param_1[0x250] = param_1[0x250] + 1, 4 < param_1[0x250])) {
      param_1[0x187] = param_1[0x187] + 1;
    }
    break;
  case 4:
    FUN_00a9f4c0(&DAT_01648504,0x3f000000,0x8000000,0);
    FUN_00a9f600(0xffffffff,0,0,0,0,0x12,0x3f000000,0x8000000);
    FUN_00a9f600(0xffffffff,0,0,0,1,0x21,0x3f000000,0x8000000);
    param_1[0x187] = param_1[0x187] + 1;
  case 5:
    FUN_00aecfe0();
    iVar2 = FUN_00a94ce0(0);
    if ((iVar2 != 0) && (FUN_00a8caf0(0,0,0,0), param_1[0x80f] != 0)) {
      FUN_00a8caf0(0xc,0,0,0);
      param_1[0x7fa] = 0;
    }
    break;
  default:
    goto switchD_00af0730_default;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
switchD_00af0730_default:
  iVar2 = param_1[0x2a1];
  if ((iVar2 != 0) && (param_1[0x187] < 4)) {
    local_20 = *(undefined4 *)(iVar2 + 0x50);
    local_1c = *(undefined4 *)(iVar2 + 0x54);
    local_18 = *(undefined4 *)(iVar2 + 0x58);
    local_14 = *(undefined4 *)(iVar2 + 0x5c);
    if (param_1[0x7e4] == 0) {
      iVar2 = FUN_00a979d0();
      if (iVar2 != 0) {
        FUN_00aa09c0(param_1[0x2a1] + 0x40,0x41200000,1);
        FUN_00a979f0(&local_2c);
        local_20 = local_2c;
        local_1c = local_28;
        local_18 = local_24;
        local_14 = 0x3f800000;
        FUN_00a8e880(&local_20);
        (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x393702d3,0x3c2b92a6,0);
      }
      if (param_1[0x7e4] == 0) {
        return;
      }
    }
    FUN_00a8e880(&local_20);
    (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x393702d3,0x3b64c388,0);
  }
  return;
}

// 00AF0AC0  DebrisLeaveSignalContext::DebrisLeaveSignalContext_2  size=1776  [class]
void __fastcall DebrisLeaveSignalContext::DebrisLeaveSignalContext_2(int *param_1)

{
  float fVar1;
  float fVar2;
  short sVar3;
  int iVar4;
  undefined4 uVar5;
  float10 fVar6;
  float10 fVar7;
  undefined **local_380;
  float local_37c;
  float local_378;
  int iStack_374;
  undefined4 uStack_368;
  float local_364;
  float local_360 [8];
  undefined4 local_340;
  undefined4 local_33c;
  undefined4 local_338;
  undefined4 local_334;
  uint local_330 [5];
  undefined4 local_31c;
  float local_318;
  float local_314;
  undefined1 local_310;
  int iStack_30c;
  undefined4 local_220;
  undefined4 local_21c;
  undefined4 local_1c0;
  undefined2 uStack_1b6;
  undefined4 uStack_50;
  
  if ((900.0 < (float)param_1[0x2a3]) && ((float)param_1[0x7fa] <= 0.0)) {
    iVar4 = FUN_00a81330();
    if ((iVar4 != 0) &&
       ((iVar4 = FUN_00a7c8a0(), iVar4 != 0 && (iVar4 = FUN_00a7c8a0(), iVar4 != 0)))) {
      *(undefined4 *)(iVar4 + 0xd90) = 1;
    }
    iVar4 = FUN_00a81330();
    if (((iVar4 != 0) && (iVar4 = FUN_00a7c8a0(), iVar4 != 0)) &&
       (iVar4 = FUN_00a7c8a0(), iVar4 != 0)) {
      *(undefined4 *)(iVar4 + 0xd90) = 1;
    }
    iVar4 = FUN_00a81330();
    if (((iVar4 != 0) && (iVar4 = FUN_00a7c8a0(), iVar4 != 0)) &&
       (iVar4 = FUN_00a7c8a0(), iVar4 != 0)) {
      *(undefined4 *)(iVar4 + 0xd90) = 1;
    }
    iVar4 = FUN_00a81330();
    if (((iVar4 != 0) && (iVar4 = FUN_00a7c8a0(), iVar4 != 0)) &&
       (iVar4 = FUN_00a7c8a0(), iVar4 != 0)) {
      *(undefined4 *)(iVar4 + 0xd90) = 1;
    }
  }
  local_360[0] = 2.86986e-42;
  local_360[1] = 2.87126e-42;
  local_360[2] = 2.87266e-42;
  local_360[3] = 2.87406e-42;
  local_360[4] = 2.87546e-42;
  local_360[5] = 2.87687e-42;
  if (param_1[0x187] == 0) {
    local_378 = (float)param_1[0x13c];
    local_37c = 0.0;
    local_380 = vftable;
    FUN_00d89e90(0x20,&local_380);
    FUN_00aa4080(0x1d,0,0x3e888889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x249] = 0;
    param_1[0x250] = 0;
    param_1[0x251] = 0;
    param_1[600] = param_1[0x10];
    param_1[0x259] = param_1[0x11];
    param_1[0x25a] = param_1[0x12];
    param_1[0x25b] = param_1[0x13];
    param_1[0x80a] = 0;
  }
  else if (param_1[0x187] != 1) goto LAB_00af1162;
  param_1[0x249] = (int)((float)param_1[0x249] - (float)param_1[0x244]);
  iVar4 = FUN_00a959f0(0);
  if (((15.0 <= (float)iVar4) && ((float)param_1[0x249] < 0.0)) && (param_1[0x251] < 2)) {
    iVar4 = FUN_00a12210(local_360[param_1[0x250]]);
    local_380 = (undefined **)
                SQRT(*(float *)(iVar4 + 0x14) * *(float *)(iVar4 + 0x14) +
                     *(float *)(iVar4 + 0x10) * *(float *)(iVar4 + 0x10) +
                     *(float *)(iVar4 + 0x18) * *(float *)(iVar4 + 0x18));
    local_37c = SQRT(*(float *)(iVar4 + 0x20) * *(float *)(iVar4 + 0x20) +
                     *(float *)(iVar4 + 0x24) * *(float *)(iVar4 + 0x24) +
                     *(float *)(iVar4 + 0x28) * *(float *)(iVar4 + 0x28));
    fVar1 = SQRT(*(float *)(iVar4 + 0x38) * *(float *)(iVar4 + 0x38) +
                 *(float *)(iVar4 + 0x34) * *(float *)(iVar4 + 0x34) +
                 *(float *)(iVar4 + 0x30) * *(float *)(iVar4 + 0x30));
    local_364 = *(float *)(iVar4 + 0x28) / fVar1;
    fVar2 = *(float *)(iVar4 + 0x38) / fVar1;
    fVar6 = (float10)FUN_00ddbaa0(-(*(float *)(iVar4 + 0x18) / fVar1));
    fVar7 = (float10)fpatan((float10)local_364,(float10)fVar2);
    local_360[0] = (float)fVar7;
    local_360[1] = (float)fVar6;
    fVar6 = (float10)fpatan((float10)*(float *)(iVar4 + 0x14) / (float10)local_37c,
                            (float10)*(float *)(iVar4 + 0x10) / (float10)(float)local_380);
    local_360[2] = (float)fVar6;
    local_340 = *(undefined4 *)(iVar4 + 0x40);
    local_33c = *(undefined4 *)(iVar4 + 0x44);
    local_338 = *(undefined4 *)(iVar4 + 0x48);
    local_334 = *(undefined4 *)(iVar4 + 0x4c);
    FUN_004105d0();
    FUN_00410710();
    FUN_0041cf30();
    local_21c = 6;
    local_330[1] = 0x3b002;
    local_1c0 = FUN_009f8b40();
    local_220 = 0x16;
    local_31c = 0x1e;
    local_314 = 4.2039e-44;
    local_310 = 0;
    local_318 = 2.10195e-43;
    uVar5 = FUN_00ac84d0(0x14);
    uStack_368 = (**(code **)(*(int *)param_1[0x1d5] + 0xc))(0x14);
    (**(code **)(*(int *)param_1[0x1d5] + 0x14))(0x14);
    local_310 = (**(code **)(*(int *)param_1[0x1d5] + 0x1c))(0x14);
    local_314 = local_364;
    iStack_30c = param_1[0x13c];
    local_31c = uVar5;
    local_318 = fVar2;
    uVar5 = FUN_00a7c7f0();
    FUN_00a7c960(uVar5);
    local_380 = (undefined **)param_1[600];
    local_330[0] = local_330[0] | 4;
    local_37c = (float)param_1[0x259];
    uStack_1b6 = *(undefined2 *)(iVar4 + 0xa0);
    local_378 = (float)param_1[0x25a];
    iStack_374 = param_1[0x25b];
    fVar6 = (float10)FUN_00dde300(0xc0a00000,0x40a00000);
    local_380 = (undefined **)(float)(fVar6 + (float10)(float)local_380);
    fVar6 = (float10)FUN_00dde300(0xc0a00000,0x40a00000);
    local_378 = (float)(fVar6 + (float10)local_378);
    if ((*(byte *)(param_1 + 0x251) & 1) != 0) {
      iVar4 = param_1[0x2a1];
      local_380 = *(undefined ***)(iVar4 + 0x40);
      local_37c = *(float *)(iVar4 + 0x44);
      local_378 = *(float *)(iVar4 + 0x48);
      iStack_374 = *(int *)(iVar4 + 0x4c);
      fVar6 = (float10)FUN_00dde300(0xbf800000,0x3f800000);
      local_380 = (undefined **)(float)(fVar6 + (float10)(float)local_380);
      fVar6 = (float10)FUN_00dde300(0xbf800000,0x3f800000);
      local_378 = (float)(fVar6 + (float10)local_378);
      sVar3 = FUN_00dde2d0(0,3);
      if (sVar3 != 0) {
        fVar6 = (float10)FUN_00dde300(0xc0a00000,0x40a00000);
        local_380 = (undefined **)(float)(fVar6 + (float10)(float)local_380);
        fVar6 = (float10)FUN_00dde300(0xc0a00000,0x40a00000);
        local_378 = (float)(fVar6 + (float10)local_378);
      }
    }
    uStack_50 = 1;
    FUN_00416e30(&local_340,&local_380,local_360,0x3f800000,0x44480000);
    FUN_00ad3be0(param_1[0x13c],local_330);
    param_1[0x250] = param_1[0x250] + 1;
    param_1[0x249] = 0x40a00000;
    if (5 < (uint)param_1[0x250]) {
      param_1[0x251] = param_1[0x251] + 1;
      param_1[0x250] = 0;
    }
  }
  iVar4 = FUN_00a94ce0(0);
  if (((iVar4 != 0) && (FUN_00a8caf0(0,0,0,0), (float)param_1[0x376] < 0.0)) &&
     ((fVar1 = (float)param_1[0x2a4], !NAN(fVar1) && 1600.0 < fVar1 != (fVar1 == 1600.0) &&
      ((float)param_1[0x2a8] < 0.87266463)))) {
    if (param_1[0x741] == 0) {
      FUN_00a8caf0(0x1b,0,0,0);
    }
    sVar3 = FUN_00dde2d0(0,2);
    if (sVar3 == 1) {
      FUN_00a8caf0(3,0,0,0);
    }
    sVar3 = FUN_00dde2d0(0,2);
    if (sVar3 == 1) {
      FUN_00a8caf0(0x14,0,0,0);
    }
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
LAB_00af1162:
  if (param_1[0x2a1] != 0) {
    FUN_00a8e880(param_1[0x2a1] + 0x50);
    (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x393702d3,0x3b64c388,0);
  }
  return;
}

// 00AF1390  DebrisLeaveSignalContext::DebrisLeaveSignalContext  size=733  [class]
void __fastcall DebrisLeaveSignalContext::DebrisLeaveSignalContext(int param_1)

{
  int iVar1;
  float unaff_ESI;
  float unaff_EDI;
  float10 fVar2;
  float fVar3;
  float afStack_68 [2];
  undefined **local_60;
  undefined4 local_5c;
  float local_58 [2];
  float local_50;
  float local_4c;
  float local_48;
  
  if ((900.0 < *(float *)(param_1 + 0xa8c)) && (*(float *)(param_1 + 0x1fe8) <= 0.0)) {
    iVar1 = FUN_00a81330();
    if ((iVar1 != 0) &&
       ((iVar1 = FUN_00a7c8a0(), iVar1 != 0 && (iVar1 = FUN_00a7c8a0(), iVar1 != 0)))) {
      *(undefined4 *)(iVar1 + 0xd90) = 1;
    }
    iVar1 = FUN_00a81330();
    if (((iVar1 != 0) && (iVar1 = FUN_00a7c8a0(), iVar1 != 0)) &&
       (iVar1 = FUN_00a7c8a0(), iVar1 != 0)) {
      *(undefined4 *)(iVar1 + 0xd90) = 1;
    }
    iVar1 = FUN_00a81330();
    if (((iVar1 != 0) && (iVar1 = FUN_00a7c8a0(), iVar1 != 0)) &&
       (iVar1 = FUN_00a7c8a0(), iVar1 != 0)) {
      *(undefined4 *)(iVar1 + 0xd90) = 1;
    }
    iVar1 = FUN_00a81330();
    if (((iVar1 != 0) && (iVar1 = FUN_00a7c8a0(), iVar1 != 0)) &&
       (iVar1 = FUN_00a7c8a0(), iVar1 != 0)) {
      *(undefined4 *)(iVar1 + 0xd90) = 1;
    }
  }
  *(undefined4 *)(param_1 + 0x1cc0) = 1;
  if (*(int *)(param_1 + 0x61c) == 0) {
    local_58[0] = *(float *)(param_1 + 0x4f0);
    local_5c = 0;
    local_60 = vftable;
    FUN_00d89e90(0x20,&local_60);
    FUN_00aa4080(0x1e,0,0x3e2aaaab,0x3f800000,0x8000000,0,0x3fa66666);
    iVar1 = FUN_00a92f90();
    *(uint *)(iVar1 + 0x90) = *(uint *)(iVar1 + 0x90) | 1;
    fVar2 = (float10)FUN_00ddba30(*(float *)(param_1 + 0x94) + 3.1415927);
    *(float *)(param_1 + 0x920) = (float)fVar2;
    *(undefined4 *)(param_1 + 0x940) = 0;
    *(undefined4 *)(param_1 + 0x944) = 0;
    *(undefined4 *)(param_1 + 0x924) = 0;
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    *(undefined4 *)(param_1 + 0x960) = *(undefined4 *)(param_1 + 0x40);
    *(undefined4 *)(param_1 + 0x964) = *(undefined4 *)(param_1 + 0x44);
    *(undefined4 *)(param_1 + 0x968) = *(undefined4 *)(param_1 + 0x48);
    *(undefined4 *)(param_1 + 0x96c) = *(undefined4 *)(param_1 + 0x4c);
    *(undefined4 *)(param_1 + 0x2028) = 0;
  }
  else if (*(int *)(param_1 + 0x61c) != 1) goto LAB_00af15bf;
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    FUN_00a8caf0(0x1d,0,0,0);
    FUN_00a8caf0(0,0,0,0);
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
LAB_00af15bf:
  iVar1 = FUN_00a92f90();
  FUN_00e332b0(&local_50,*(undefined4 *)(iVar1 + 0xa0));
  local_60 = (undefined **)0x0;
  local_5c = 0;
  local_58[0] = SQRT(local_48 * local_48 + local_50 * local_50 + local_4c * local_4c);
  fVar3 = *(float *)(param_1 + 0x920);
  D3DXMatrixRotationY(&local_50);
  D3DXVec3TransformNormal(afStack_68,afStack_68,local_58);
  *(float *)(param_1 + 0x50) = *(float *)(param_1 + 0x50) + fVar3 * 0.5;
  *(float *)(param_1 + 0x54) = unaff_EDI * 0.5 + *(float *)(param_1 + 0x54);
  *(float *)(param_1 + 0x58) = *(float *)(param_1 + 0x58) + unaff_ESI * 0.5;
  *(float *)(param_1 + 0x5c) = afStack_68[0] * 0.5 + *(float *)(param_1 + 0x5c);
  return;
}

// 00AF1FF0  FUN_00af1ff0  size=186  [callgraph]
void __fastcall FUN_00af1ff0(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x61c) == 0) {
    FUN_00a9f4c0(&DAT_016484fc,0x3e888889,0,0);
    FUN_00a9f600(0xffffffff,0,0,0,0,7,0x3e888889,0);
    FUN_00a9f600(0xffffffff,0,0,0,1,8,0x3e888889,0);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    FUN_00aed150();
  }
  else if (*(int *)(param_1 + 0x61c) != 1) {
    return;
  }
  FUN_00aecfe0();
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    FUN_00a8caf0(0,0,0,0);
    *(undefined4 *)(param_1 + 0xdd4) = 0x45610000;
  }
  return;
}

// 00AF22C0  FUN_00af22c0  size=418  [callgraph]
void __fastcall FUN_00af22c0(int param_1)

{
  float fVar1;
  int iVar2;
  
  switch(*(undefined4 *)(param_1 + 0x61c)) {
  case 0:
    FUN_00aa4080(0x6c,0,0x3e888889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    FUN_00aed150();
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
      return;
    }
    break;
  case 2:
    FUN_00aa4080(0x6d,0,0,0x3f800000,0,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    *(undefined4 *)(param_1 + 0x920) = 0x44960000;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    fVar1 = *(float *)(param_1 + 0x920) - *(float *)(param_1 + 0x910);
    *(float *)(param_1 + 0x920) = fVar1;
    if (fVar1 < 0.0) {
      *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
      return;
    }
    break;
  case 4:
    FUN_00aa4080(0x6e,0,0x3daaaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  case 5:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      FUN_00a8caf0(0,0,0,0);
      *(undefined4 *)(param_1 + 0xdd8) = 0x42700000;
      iVar2 = FUN_00ac4780();
      if (iVar2 == 2) {
        *(undefined4 *)(param_1 + 0xdd8) = 0x41f00000;
      }
      iVar2 = FUN_00ac4780();
      if (2 < iVar2) {
        *(undefined4 *)(param_1 + 0xdd8) = 0x40c00000;
        return;
      }
    }
  }
  return;
}

// 00AF2480  FUN_00af2480  size=1679  [callgraph]
void __fastcall FUN_00af2480(int *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  if (((0 < param_1[0x187]) && (param_1[0x187] < 6)) && (param_1[0x7e6] != 0)) {
    param_1[0x7f1] = 0;
    FUN_00a8caf0(0x2a,0,0,0);
    return;
  }
  param_1[0x554] = 1;
  FUN_00a12210(0xf00);
  switch(param_1[0x187]) {
  case 0:
    FUN_00aa4080(0x74,0,0x3daaaaab,0x3f800000,0x8000000,0,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x249] = 0x3f800000;
    FUN_00a8d280();
    FUN_00a828a0(0x3dcccccd,0x3ae4c388,0x3d567750);
    param_1[0x748] = 0;
    FUN_00aed150();
    param_1[0x7e6] = 0;
    break;
  case 1:
  case 3:
    break;
  case 2:
    FUN_00aa4080(0x75,0,0,0x3f800000,0x8000000,0,0x40000000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00a8d280();
    break;
  case 4:
    FUN_00aa4080(0x76,0,0x3daaaaab,0x3f800000,0x8000000,0,0x3fb33333);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00a8d280();
    goto LAB_00af262d;
  case 5:
LAB_00af262d:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar5 = FUN_00a94ce0(0);
    if (iVar5 != 0) {
      FUN_00a8caf0(0,0,0,0);
      param_1[0x376] = 0x42700000;
      iVar5 = FUN_00ac4780();
      if (iVar5 == 2) {
        param_1[0x376] = 0x41f00000;
      }
      iVar5 = FUN_00ac4780();
      if (2 < iVar5) {
        param_1[0x376] = 0x40c00000;
      }
    }
  default:
    goto switchD_00af24ea_default;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar5 = FUN_00a94ce0(0);
  if (iVar5 != 0) {
    param_1[0x187] = param_1[0x187] + 1;
  }
switchD_00af24ea_default:
  if (((param_1[0x7e4] != 0) && (param_1[0x2a1] != 0)) && (iVar5 = FUN_00a8c760(10), iVar5 != 0)) {
    iVar5 = param_1[0x2a1];
    param_1[0x730] = 1;
    local_20 = (float)param_1[0x10] - *(float *)(iVar5 + 0x40);
    local_18 = (float)param_1[0x12] - *(float *)(iVar5 + 0x48);
    local_14 = (float)param_1[0x13] - *(float *)(iVar5 + 0x4c);
    local_1c = 0.0;
    if ((param_1[0x187] == 1) && (fVar1 = local_20 * local_20 + local_18 * local_18, 900.0 < fVar1))
    {
      fVar2 = 30.0 - SQRT(fVar1);
      if (fVar1 < 0.0 == (fVar1 == 0.0)) {
        FUN_00ddf460(&local_20,&local_20);
      }
      else {
        FUN_00dd5650(&DAT_0163d0ac);
        local_18 = 0.0;
        local_20 = 0.0;
        local_1c = 1.0;
      }
      local_20 = local_20 * fVar2 * 0.01;
      local_1c = fVar2 * local_1c * 0.01;
      local_18 = local_18 * fVar2 * 0.01;
      local_14 = fVar2 * local_14 * 0.01;
      param_1[0x14] = (int)((float)param_1[0x14] + local_20);
      param_1[0x15] = (int)((float)param_1[0x15] + local_1c);
      param_1[0x16] = (int)(local_18 + (float)param_1[0x16]);
      param_1[0x17] = (int)(local_14 + (float)param_1[0x17]);
    }
    if (param_1[0x187] == 5) {
      fVar1 = local_18 * local_18 + local_1c * local_1c + local_20 * local_20;
      if (1225.0 < fVar1) {
        fVar2 = 35.0 - SQRT(fVar1);
        if (fVar1 < 0.0 == (fVar1 == 0.0)) {
          FUN_00ddf460(&local_20,&local_20);
        }
        else {
          FUN_00dd5650(&DAT_0163d0ac);
          local_18 = 0.0;
          local_20 = 0.0;
          local_1c = 1.0;
        }
        local_20 = local_20 * fVar2 * 0.001;
        local_1c = fVar2 * local_1c * 0.001;
        local_18 = local_18 * fVar2 * 0.001;
        local_14 = fVar2 * local_14 * 0.001;
        param_1[0x14] = (int)((float)param_1[0x14] + local_20);
        param_1[0x15] = (int)((float)param_1[0x15] + local_1c);
        param_1[0x16] = (int)(local_18 + (float)param_1[0x16]);
        param_1[0x17] = (int)(local_14 + (float)param_1[0x17]);
      }
      fVar1 = local_18 * local_18 + local_1c * local_1c + local_20 * local_20;
      if (fVar1 < 1089.0) {
        fVar2 = 33.0 - SQRT(fVar1);
        if (fVar1 < 0.0 == (fVar1 == 0.0)) {
          FUN_00ddf460(&local_20,&local_20);
          fVar1 = local_18;
          fVar3 = local_1c;
          fVar4 = local_20;
        }
        else {
          FUN_00dd5650(&DAT_0163d0ac);
          fVar1 = 0.0;
          fVar4 = 0.0;
          fVar3 = 1.0;
        }
        param_1[0x14] = (int)((float)param_1[0x14] + fVar4 * fVar2 * 0.01);
        param_1[0x15] = (int)((float)param_1[0x15] + fVar2 * fVar3 * 0.01);
        param_1[0x16] = (int)(fVar1 * fVar2 * 0.01 + (float)param_1[0x16]);
        param_1[0x17] = (int)(fVar2 * local_14 * 0.01 + (float)param_1[0x17]);
      }
    }
  }
  iVar5 = param_1[0x2a1];
  fVar1 = (float)param_1[0x10] - *(float *)(iVar5 + 0x40);
  fVar2 = (float)param_1[0x12] - *(float *)(iVar5 + 0x48);
  if ((((15.0 <= SQRT(fVar2 * fVar2 + fVar1 * fVar1)) && (param_1[0x7e4] != 0)) && (iVar5 != 0)) &&
     (iVar5 = FUN_00a8c760(0), iVar5 != 0)) {
    FUN_00a8e880(param_1[0x2a1] + 0x50);
    fVar1 = (float)param_1[0x2a8];
    if (!NAN(fVar1) && 0.08726646 < fVar1 != (fVar1 == 0.08726646)) {
      (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x393702d3,0x3db2b8c2,0);
    }
  }
  iVar5 = param_1[0x2a1];
  if (iVar5 != 0) {
    fVar1 = (float)param_1[0x10] - *(float *)(iVar5 + 0x40);
    fVar2 = (float)param_1[0x12] - *(float *)(iVar5 + 0x48);
    fVar2 = SQRT(fVar2 * fVar2 + fVar1 * fVar1);
    fVar1 = (float)param_1[0x249];
    if (fVar2 < 16.65) {
      fVar1 = 0.0;
    }
    if ((16.65 < fVar2 != (fVar2 == 16.65)) && (fVar2 < 31.62)) {
      fVar1 = (fVar2 - 16.65) * 0.06680026;
    }
    param_1[0x249] = (int)((fVar1 - (float)param_1[0x249]) * 0.1 + (float)param_1[0x249]);
  }
  return;
}

// 00AF2B30  FUN_00af2b30  size=1435  [callgraph]
void __fastcall FUN_00af2b30(int *param_1)

{
  float fVar1;
  float fVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  float local_30;
  float local_2c;
  float local_28;
  float fStack_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  param_1[0x554] = 1;
  iVar4 = FUN_00a12210(0xf00);
  switch(param_1[0x187]) {
  case 0:
    param_1[0x187] = 1;
    sVar3 = FUN_00dde2d0(0,1);
    param_1[0x250] = sVar3 + 1;
    param_1[0x7e6] = 0;
    FUN_00c81b30(0x15);
  case 1:
    FUN_00aa4080(0x98,0,0x3e888889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x249] = 0x3f800000;
    FUN_00a8d280();
    FUN_00a828a0(0x3dcccccd,0x3ae4c388,0x3d567750);
    param_1[0x748] = 0;
    FUN_00aed150();
  case 2:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    if ((param_1[0x128] != 3) && (iVar5 = FUN_00a8c760(0x19), iVar5 != 0)) {
      local_20 = 0;
      local_1c = 0;
      local_18 = 0x410b3333;
      iVar5 = FUN_00c593a0(param_1[0x13c],0xf00,&local_20,0x41600000,0x40200000,0x14,9);
      if (iVar5 != 0) {
        *(undefined4 *)(iVar5 + 0x48) = 0;
        *(undefined4 *)(iVar5 + 0x40) = 0x3f99999a;
        *(undefined4 *)(iVar5 + 0x44) = 0x3e99999a;
      }
    }
    iVar5 = FUN_00a8c760(10);
    if ((iVar5 != 0) && (param_1[0x2a1] != 0)) {
      local_30 = 0.0;
      local_2c = 0.0;
      local_28 = 8.7;
      D3DXVec3TransformNormal(&local_30,&local_30,iVar4 + 0x10);
      local_30 = local_30 + *(float *)(iVar4 + 0x40);
      local_2c = *(float *)(iVar4 + 0x44) + local_2c;
      local_28 = *(float *)(iVar4 + 0x48) + local_28;
      fVar1 = local_30 - *(float *)(param_1[0x2a1] + 0x40);
      fVar2 = local_28 - *(float *)(param_1[0x2a1] + 0x48);
      if (SQRT(fVar2 * fVar2 + fVar1 * fVar1) < 16.0) {
        FUN_00b7ab80(0x42700000,0x3c23d70a);
      }
    }
    iVar4 = FUN_00a94ce0(0);
    if ((iVar4 != 0) && (param_1[0x187] = param_1[0x187] + 1, param_1[0x128] == 3)) {
      param_1[0x187] = 5;
      FUN_00c81b30(0x13);
    }
    break;
  case 3:
    FUN_00aa4080(0x9a,0,0x3c888889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00a8d280();
    FUN_008f0450("sword",0x10000,0);
  case 4:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar4 = FUN_00a94ce0(0);
    if (iVar4 != 0) {
      FUN_00a8caf0(0,0,0,0);
      param_1[0x376] = 0x42700000;
      iVar4 = FUN_00ac4780();
      if (iVar4 == 2) {
        param_1[0x376] = 0x41f00000;
      }
      iVar4 = FUN_00ac4780();
      if (2 < iVar4) {
        param_1[0x376] = 0x40c00000;
      }
    }
    break;
  case 5:
    DAT_01bea060 = DAT_01bea060 | 0x2000000;
    FUN_00b8a040(0,0,0);
    (**(code **)(*(int *)param_1[0x2a1] + 0x150))(0x10,param_1[0x13c]);
    (**(code **)(*param_1 + 0x150))(0x10,*(undefined4 *)(param_1[0x2a1] + 0x4f0));
    param_1[0x187] = param_1[0x187] + 1;
  }
  if ((param_1[0x2a1] != 0) && (iVar4 = FUN_00a8c760(0), iVar4 != 0)) {
    param_1[0x730] = 1;
    iVar4 = FUN_00a12210(0xf00);
    if (iVar4 != 0) {
      iVar5 = param_1[0x2a1];
      local_30 = (*(float *)(iVar5 + 0x40) - *(float *)(iVar4 + 0x40)) * 0.1;
      local_2c = 0.0;
      local_28 = (*(float *)(iVar5 + 0x48) - *(float *)(iVar4 + 0x48)) * 0.1;
      fStack_24 = (*(float *)(iVar5 + 0x4c) - *(float *)(iVar4 + 0x4c)) * 0.1;
      fVar1 = local_30 * local_30 + local_28 * local_28;
      if (0.010000001 < fVar1) {
        if (fVar1 < 0.0 == (fVar1 == 0.0)) {
          FUN_00ddf460(&local_30,&local_30);
        }
        else {
          FUN_00dd5650(&DAT_0163d0ac);
          local_28 = 0.0;
          local_30 = 0.0;
          local_2c = 1.0;
        }
        local_30 = local_30 * 0.1;
        local_2c = local_2c * 0.1;
        local_28 = local_28 * 0.1;
        fStack_24 = fStack_24 * 0.1;
      }
      param_1[0x14] = (int)((float)param_1[0x14] + local_30);
      param_1[0x16] = (int)(local_28 + (float)param_1[0x16]);
      FUN_00a8e880(param_1[0x2a1] + 0x50);
      (**(code **)(*param_1 + 0x308))(0x3e99999a,0x393702d3,0x3e8efa35,0);
    }
  }
  iVar4 = param_1[0x2a1];
  if (iVar4 != 0) {
    fVar1 = (float)param_1[0x10] - *(float *)(iVar4 + 0x40);
    fVar2 = (float)param_1[0x12] - *(float *)(iVar4 + 0x48);
    fVar2 = SQRT(fVar2 * fVar2 + fVar1 * fVar1);
    fVar1 = (float)param_1[0x249];
    if (fVar2 < 16.65) {
      fVar1 = 0.0;
    }
    if ((16.65 < fVar2 != (fVar2 == 16.65)) && (fVar2 < 31.62)) {
      fVar1 = (fVar2 - 16.65) * 0.06680026;
    }
    param_1[0x249] = (int)((fVar1 - (float)param_1[0x249]) * 0.1 + (float)param_1[0x249]);
  }
  return;
}

// 00AF3100  FUN_00af3100  size=4184  [callgraph]
void __fastcall FUN_00af3100(int *param_1)

{
  float *pfVar1;
  float fVar2;
  code *pcVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  uint uVar9;
  undefined4 uVar10;
  float10 fVar11;
  float10 fVar12;
  float10 fVar13;
  float10 fVar14;
  float local_370;
  float local_36c;
  float local_368;
  float local_364;
  float local_360;
  float local_35c;
  float local_358;
  float local_354;
  float local_350;
  float local_34c;
  float local_348;
  float local_344;
  float local_340;
  float local_33c;
  float local_338;
  float local_334;
  undefined1 auStack_330 [8];
  undefined4 uStack_328;
  undefined4 uStack_324;
  undefined4 uStack_320;
  uint uStack_31c;
  undefined4 uStack_314;
  undefined1 uStack_310;
  undefined1 uStack_30f;
  int iStack_30c;
  uint uStack_294;
  undefined4 uStack_22c;
  undefined4 uStack_1cc;
  
  if ((float)param_1[0x7fa] <= 0.0) {
    iVar8 = FUN_00a81330();
    if (((iVar8 != 0) && (iVar8 = FUN_00a7c8a0(), iVar8 != 0)) &&
       (iVar8 = FUN_00a7c8a0(), iVar8 != 0)) {
      *(undefined4 *)(iVar8 + 0xd90) = 1;
    }
    iVar8 = FUN_00a81330();
    if (((iVar8 != 0) && (iVar8 = FUN_00a7c8a0(), iVar8 != 0)) &&
       (iVar8 = FUN_00a7c8a0(), iVar8 != 0)) {
      *(undefined4 *)(iVar8 + 0xd90) = 1;
    }
    iVar8 = FUN_00a81330();
    if (((iVar8 != 0) && (iVar8 = FUN_00a7c8a0(), iVar8 != 0)) &&
       (iVar8 = FUN_00a7c8a0(), iVar8 != 0)) {
      *(undefined4 *)(iVar8 + 0xd90) = 1;
    }
    iVar8 = FUN_00a81330();
    if (((iVar8 != 0) && (iVar8 = FUN_00a7c8a0(), iVar8 != 0)) &&
       (iVar8 = FUN_00a7c8a0(), iVar8 != 0)) {
      *(undefined4 *)(iVar8 + 0xd90) = 1;
    }
  }
  switch(param_1[0x187]) {
  case 0:
    FUN_00aa4080(0x7c,0,0x3e888889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    if (param_1[0x550] != 0) {
      FUN_00ad0a90();
    }
    param_1[0x550] = 0;
    FUN_00aed150();
    param_1[0x252] = 2;
    FUN_00a82840(0x3e20d97c,0xbe32b8c2,0x3dcccccd,0x393702d3,0x3c8efa35);
    FUN_00a82840(0x3edf66f3,0xbe32b8c2,0x3dcccccd,0x393702d3,0x3c8efa35);
    FUN_00a82840(0x3edf66f3,0xbe32b8c2,0x3dcccccd,0x393702d3,0x3c8efa35);
    FUN_00a82870(0x3dd67750,0xbdd67750,0x3dcccccd,0x393702d3,0x3c8efa35);
    FUN_00a82870(0x3edf66f3,0xbedf66f3,0x3dcccccd,0x393702d3,0x3c8efa35);
    FUN_00a82870(0x3edf66f3,0xbedf66f3,0x3dcccccd,0x393702d3,0x3c8efa35);
    param_1[0xc30] = 1;
    break;
  case 1:
    break;
  case 2:
    FUN_00aa4080(0x7d,0,0x3e888889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    iVar8 = param_1[0x2a1];
    param_1[0x248] = 0x41700000;
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x250] = 0;
    if (iVar8 != 0) {
      param_1[0x55c] = *(int *)(iVar8 + 0x40);
      param_1[0x55d] = *(int *)(iVar8 + 0x44);
      param_1[0x55e] = *(int *)(iVar8 + 0x48);
      param_1[0x55f] = *(int *)(iVar8 + 0x4c);
    }
    goto LAB_00af3519;
  case 3:
LAB_00af3519:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    FUN_00a94ce0(0);
    fVar2 = (float)param_1[0x248];
    param_1[0x248] = (int)(fVar2 - (float)param_1[0x244]);
    if (fVar2 - (float)param_1[0x244] < 0.0) {
      param_1[0x187] = param_1[0x187] + 1;
    }
    param_1[0x559] = 0x40000000;
    local_360 = (float)param_1[0x10];
    local_35c = (float)param_1[0x11];
    local_358 = (float)param_1[0x12];
    local_354 = (float)param_1[0x13];
    iVar8 = FUN_00ac45b0();
    fVar2 = local_358;
    fVar6 = local_354;
    fVar4 = local_360;
    fVar5 = local_35c;
    if ((iVar8 != 0) &&
       (iVar8 = FUN_00a7c8a0(), fVar2 = local_358, fVar6 = local_354, fVar4 = local_360,
       fVar5 = local_35c, iVar8 != 0)) {
      local_350 = *(float *)(iVar8 + 0x40) - local_360;
      local_348 = *(float *)(iVar8 + 0x48) - local_358;
      local_344 = *(float *)(iVar8 + 0x4c) - local_354;
      local_34c = 0.0;
      fVar2 = local_350 * local_350 + local_348 * local_348;
      if (fVar2 < 0.0 == (fVar2 == 0.0)) {
        FUN_00ddf460(&local_350,&local_350);
        fVar2 = local_348;
        fVar4 = local_350;
        fVar5 = local_34c;
      }
      else {
        FUN_00dd5650(&DAT_0163d0ac);
        fVar2 = 0.0;
        fVar4 = 0.0;
        fVar5 = 1.0;
      }
      fVar2 = fVar2 * 10.0 + local_358;
      fVar6 = local_354 + local_344 * 10.0;
      fVar4 = fVar4 * 10.0 + local_360;
      fVar5 = local_35c + fVar5 * 10.0;
    }
    fVar4 = (fVar4 - (float)param_1[0x55c]) * 0.1;
    fVar5 = (fVar5 - (float)param_1[0x55d]) * 0.1;
    fVar2 = (fVar2 - (float)param_1[0x55e]) * 0.1;
    fVar6 = (fVar6 - (float)param_1[0x55f]) * 0.1;
    fVar7 = fVar2 * fVar2 + fVar5 * fVar5 + fVar4 * fVar4;
    local_370 = fVar4;
    local_36c = fVar5;
    local_368 = fVar2;
    local_364 = fVar6;
    if (9.0 < fVar7) {
      if (fVar7 <= 0.0) {
        FUN_00dd5650(&DAT_0163d0ac);
        fVar2 = 0.0;
        fVar4 = 0.0;
        fVar5 = 1.0;
      }
      else {
        FUN_00ddf460(&local_370,&local_370);
        fVar5 = local_36c;
        fVar4 = local_370;
        fVar2 = local_368;
      }
      fVar4 = fVar4 * 3.0;
      fVar5 = fVar5 * 3.0;
      fVar2 = fVar2 * 3.0;
      fVar6 = local_364 * 3.0;
    }
    param_1[0x55c] = (int)((float)param_1[0x55c] + fVar4);
    param_1[0x55d] = (int)(fVar5 + (float)param_1[0x55d]);
    param_1[0x55e] = (int)(fVar2 + (float)param_1[0x55e]);
    param_1[0x55f] = (int)(fVar6 + (float)param_1[0x55f]);
    if (param_1[0x250] != 0) {
      return;
    }
    if ((int *)param_1[0x2a1] == (int *)0x0) {
      return;
    }
    iVar8 = (**(code **)(*(int *)param_1[0x2a1] + 0x1fc))();
    if (iVar8 == 0) {
      return;
    }
    param_1[0x250] = 1;
    return;
  case 4:
    FUN_00aa4080(0x7e,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    pcVar3 = *(code **)(param_1[0x564] + 8);
    param_1[0x187] = param_1[0x187] + 1;
    (*pcVar3)(0x41f00000,0,0);
    if (param_1[0x550] != 0) {
      FUN_00ad0a90();
    }
    FUN_0041fee0();
    uStack_22c = 0x35;
    uStack_1cc = FUN_009f8b40();
    uStack_328 = 300;
    uStack_320 = 300;
    uStack_31c = uStack_31c & 0xffffff00;
    uStack_324 = 0x96;
    uVar9 = FUN_00ac84d0(0x16);
    uVar10 = (**(code **)(*(int *)param_1[0x1d5] + 0xc))(0x16);
    (**(code **)(*(int *)param_1[0x1d5] + 0x14))(0x16);
    uStack_310 = (**(code **)(*(int *)param_1[0x1d5] + 0x1c))(0x16);
    iStack_30c = param_1[0x13c];
    uStack_30f = 10;
    uStack_31c = uVar9;
    uStack_314 = uVar10;
    uVar10 = FUN_00a7c7f0();
    FUN_00a7c960(uVar10);
    uStack_294 = uStack_294 | 0x8000000;
    uStack_320 = 0xba;
    iVar8 = FUN_00ad09e0(param_1[0x13c],6,auStack_330);
    param_1[0x550] = iVar8;
    iVar8 = FUN_00c81c60(0x30);
    if (iVar8 != 0) {
      FUN_00c81b30(0x31);
    }
    FUN_00c81b30(0x30);
    goto LAB_00af3936;
  case 5:
LAB_00af3936:
    param_1[0x559] = 0x40000000;
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar8 = FUN_00a94ce0(0);
    if (iVar8 == 0) {
      return;
    }
    param_1[0x187] = param_1[0x187] + 1;
    return;
  case 6:
    FUN_00aa4080(0x7f,0,0,0,0,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x248] = 0x43340000;
    param_1[0x250] = 0;
    local_370 = (float)param_1[0x10];
    local_36c = (float)param_1[0x11];
    local_368 = (float)param_1[0x12];
    local_364 = (float)param_1[0x13];
    iVar8 = FUN_00ac45b0();
    fVar2 = local_370;
    fVar6 = local_36c;
    fVar4 = local_368;
    fVar5 = local_364;
    if ((iVar8 != 0) &&
       (iVar8 = FUN_00a7c8a0(), fVar2 = local_370, fVar6 = local_36c, fVar4 = local_368,
       fVar5 = local_364, iVar8 != 0)) {
      fVar2 = *(float *)(iVar8 + 0x40);
      fVar6 = *(float *)(iVar8 + 0x44);
      fVar4 = *(float *)(iVar8 + 0x48);
      fVar5 = *(float *)(iVar8 + 0x4c);
    }
    pfVar1 = (float *)(param_1 + 0x87c);
    *pfVar1 = fVar2 - (float)param_1[0x55c];
    param_1[0x87d] = (int)(fVar6 - (float)param_1[0x55d]);
    param_1[0x87e] = (int)(fVar4 - (float)param_1[0x55e]);
    param_1[0x87f] = (int)(fVar5 - (float)param_1[0x55f]);
    fVar2 = (float)param_1[0x87e] * (float)param_1[0x87e] +
            *pfVar1 * *pfVar1 + (float)param_1[0x87d] * (float)param_1[0x87d];
    if (fVar2 < 0.0 == (fVar2 == 0.0)) {
      FUN_00ddf460(pfVar1,pfVar1);
    }
    else {
      FUN_00dd5650(&DAT_0163d0ac);
      *pfVar1 = 0.0;
      param_1[0x87d] = 0x3f800000;
      param_1[0x87e] = 0;
    }
    *pfVar1 = *pfVar1 * 0.2;
    param_1[0x87d] = (int)((float)param_1[0x87d] * 0.2);
    param_1[0x87e] = (int)((float)param_1[0x87e] * 0.2);
    param_1[0x87f] = (int)((float)param_1[0x87f] * 0.2);
    param_1[0x249] = 0;
    goto LAB_00af3b06;
  case 7:
LAB_00af3b06:
    param_1[0x559] = 0x41200000;
    param_1[0x55c] = (int)((float)param_1[0x87c] * (float)param_1[0x244] + (float)param_1[0x55c]);
    param_1[0x55e] = (int)((float)param_1[0x87e] * (float)param_1[0x244] + (float)param_1[0x55e]);
    fVar11 = (float10)FUN_00fdc1f0();
    param_1[0x87c] = (int)(float)(fVar11 * (float10)(float)param_1[0x87c]);
    param_1[0x87d] = (int)(float)(fVar11 * (float10)(float)param_1[0x87d]);
    param_1[0x87e] = (int)(float)(fVar11 * (float10)(float)param_1[0x87e]);
    param_1[0x87f] = (int)(float)(fVar11 * (float10)(float)param_1[0x87f]);
    local_370 = (float)param_1[0x10];
    local_368 = (float)param_1[0x12];
    local_364 = (float)param_1[0x13];
    iVar8 = FUN_00ac45b0();
    local_360 = local_370;
    local_358 = local_368;
    local_354 = local_364;
    if ((iVar8 != 0) &&
       (iVar8 = FUN_00a7c8a0(), local_360 = local_370, local_358 = local_368, local_354 = local_364,
       iVar8 != 0)) {
      local_360 = *(float *)(iVar8 + 0x40);
      local_358 = *(float *)(iVar8 + 0x48);
      local_354 = *(float *)(iVar8 + 0x4c);
    }
    local_360 = local_360 - (float)param_1[0x10];
    local_358 = local_358 - (float)param_1[0x12];
    local_354 = local_354 - (float)param_1[0x13];
    local_35c = 0.0;
    fVar2 = local_360 * local_360 + local_358 * local_358;
    if (fVar2 < 0.0 == (fVar2 == 0.0)) {
      FUN_00ddf460(&local_360,&local_360);
      fVar11 = (float10)local_35c;
      fVar12 = (float10)local_360;
      fVar14 = (float10)local_358;
    }
    else {
      FUN_00dd5650(&DAT_0163d0ac);
      fVar12 = (float10)0;
      fVar11 = (float10)1;
      fVar14 = fVar12;
    }
    fVar13 = (float10)fcos((float10)(float)param_1[0x249]);
    fVar13 = fVar13 * (float10)0.8;
    local_360 = (float)(fVar13 * fVar14);
    local_35c = (float)(fVar13 * fVar11);
    local_358 = (float)(fVar12 * (float10)-1.0 * fVar13);
    local_354 = (float)(fVar13 * (float10)local_354);
    fVar11 = (float10)FUN_00ddba30((float)param_1[0x244] * 0.034906585 + (float)param_1[0x249]);
    param_1[0x249] = (int)(float)fVar11;
    local_370 = (float)param_1[0x10];
    local_36c = (float)param_1[0x11];
    local_368 = (float)param_1[0x12];
    local_364 = (float)param_1[0x13];
    iVar8 = FUN_00ac45b0();
    local_340 = local_370;
    local_338 = local_368;
    local_33c = local_36c;
    local_334 = local_364;
    if ((iVar8 != 0) &&
       (iVar8 = FUN_00a7c8a0(), local_340 = local_370, local_338 = local_368, local_33c = local_36c,
       local_334 = local_364, iVar8 != 0)) {
      local_340 = *(float *)(iVar8 + 0x40);
      local_338 = *(float *)(iVar8 + 0x48);
      local_33c = *(float *)(iVar8 + 0x44);
      local_334 = *(float *)(iVar8 + 0x4c);
    }
    local_340 = local_340 - (float)param_1[0x55c];
    local_33c = local_33c - (float)param_1[0x55d];
    local_338 = local_338 - (float)param_1[0x55e];
    local_334 = local_334 - (float)param_1[0x55f];
    fVar2 = local_338 * local_338 + local_33c * local_33c + local_340 * local_340;
    if (fVar2 < 0.0 == (fVar2 == 0.0)) {
      FUN_00ddf460(&local_340,&local_340);
      fVar2 = local_338;
      fVar6 = local_340;
    }
    else {
      FUN_00dd5650(&DAT_0163d0ac);
      fVar2 = 0.0;
      fVar6 = 0.0;
    }
    param_1[0x55c] = (int)(fVar6 * 0.03 * (float)param_1[0x244] + (float)param_1[0x55c]);
    param_1[0x55e] = (int)(fVar2 * 0.03 * (float)param_1[0x244] + (float)param_1[0x55e]);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    fVar2 = (float)param_1[0x248];
    param_1[0x248] = (int)(fVar2 - (float)param_1[0x244]);
    if (0.0 <= fVar2 - (float)param_1[0x244]) {
      return;
    }
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x252] = param_1[0x252] + -1;
    if (param_1[0x252] < 1) {
      param_1[0x187] = 10;
    }
    if ((float)param_1[0x2a4] <= 625.0) {
      param_1[0x187] = 10;
    }
    if (param_1[0xbe4] == 0) {
      return;
    }
    param_1[0x187] = 8;
    return;
  case 8:
    FUN_00aa4080(0x7d,0,0x3daaaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x248] = 0x41f00000;
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x250] = 0;
    if (param_1[0x550] != 0) {
      FUN_00ad0a90();
    }
    param_1[0x550] = 0;
    goto LAB_00af3ec2;
  case 9:
LAB_00af3ec2:
    param_1[0x559] = 0x40000000;
    FUN_00ac80a0(0x3f800000,0x3f800000);
    fVar2 = (float)param_1[0x248];
    param_1[0x248] = (int)(fVar2 - (float)param_1[0x244]);
    if (0.0 <= fVar2 - (float)param_1[0x244]) {
      return;
    }
    param_1[0x187] = 2;
    return;
  case 10:
    FUN_00aa4080(0x80,0,0x3daaaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    if (param_1[0x550] != 0) {
      FUN_00ad0a90();
    }
    param_1[0x550] = 0;
    goto LAB_00af3f66;
  case 0xb:
LAB_00af3f66:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar8 = FUN_00a94ce0(0);
    if (iVar8 != 0) {
      FUN_00a8caf0(0,0,0,0);
      param_1[0x376] = 0x42700000;
      iVar8 = FUN_00ac4780();
      if (iVar8 == 2) {
        param_1[0x376] = 0x41f00000;
      }
      iVar8 = FUN_00ac4780();
      if (2 < iVar8) {
        param_1[0x376] = 0x40c00000;
      }
      FUN_00a82840(0x3dd67750,0xbe32b8c2,0x3dcccccd,0x393702d3,0x3c0efa35);
      FUN_00a82840(0x3e32b8c2,0xbe32b8c2,0x3dcccccd,0x393702d3,0x3c0efa35);
      FUN_00a82840(0x3e32b8c2,0xbe32b8c2,0x3dcccccd,0x393702d3,0x3c0efa35);
      FUN_00a82870(0x3dd67750,0xbdd67750,0x3dcccccd,0x393702d3,0x3c0efa35);
      FUN_00a82870(0x3e32b8c2,0xbe32b8c2,0x3dcccccd,0x393702d3,0x3c0efa35);
      FUN_00a82870(0x3e32b8c2,0xbe32b8c2,0x3dcccccd,0x393702d3,0x3c0efa35);
      return;
    }
  default:
    goto switchD_00af3209_default;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar8 = FUN_00a94ce0(0);
  if (iVar8 != 0) {
    param_1[0x187] = param_1[0x187] + 1;
  }
  if (((param_1[0x7e4] != 0) && (param_1[0x2a1] != 0)) &&
     (fVar2 = (float)param_1[0x2a4], !NAN(fVar2) && 400.0 < fVar2 != (fVar2 == 400.0))) {
    FUN_00a8e880(param_1[0x2a1] + 0x50);
    (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x393702d3,0x3d567750,0);
    return;
  }
switchD_00af3209_default:
  return;
}

// 00AF4190  FUN_00af4190  size=1482  [callgraph]
void __fastcall FUN_00af4190(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  short sVar4;
  undefined4 uVar5;
  int iVar6;
  float10 fVar7;
  float10 fVar8;
  float local_3a0;
  float local_39c;
  undefined4 local_398;
  undefined4 local_394;
  float local_390;
  float local_38c;
  float local_388;
  undefined4 local_380;
  undefined4 local_37c;
  undefined4 local_378;
  undefined4 local_374;
  uint local_370 [17];
  undefined4 local_32c;
  undefined4 local_31c;
  float local_318;
  float local_314;
  undefined1 local_310;
  undefined1 uStack_30f;
  undefined4 uStack_30c;
  undefined4 local_220;
  undefined4 local_21c;
  undefined4 local_1c0;
  undefined2 uStack_1b6;
  undefined4 uStack_50;
  
  local_370[0] = 0x806;
  local_370[1] = 0x807;
  local_370[2] = 0x808;
  local_370[3] = 0x809;
  local_370[4] = 0x80a;
  local_370[5] = 0x80b;
  local_370[6] = 0x80c;
  local_370[7] = 0x80d;
  local_370[8] = 0x80e;
  local_370[9] = 0x80f;
  local_370[10] = 0x810;
  local_370[0xb] = 0x811;
  local_370[0xc] = 0x812;
  local_370[0xd] = 0x813;
  local_370[0xe] = 0x814;
  local_370[0xf] = 0x815;
  switch(*(undefined4 *)(param_1 + 0x61c)) {
  case 0:
    FUN_00aa4080(0x82,0,0x3e888889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    if (*(int *)(param_1 + 0x1540) != 0) {
      FUN_00ad0a90();
    }
    *(undefined4 *)(param_1 + 0x1540) = 0;
    FUN_00aed150();
    break;
  case 1:
    break;
  case 2:
    FUN_00aa4080(0x83,0,0,0x3f800000,0,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    *(undefined4 *)(param_1 + 0x920) = 0x44070000;
    *(undefined4 *)(param_1 + 0x940) = 0;
    *(undefined4 *)(param_1 + 0x924) = 0;
    *(undefined4 *)(param_1 + 0x944) = 0;
    goto LAB_00af4331;
  case 3:
LAB_00af4331:
    fVar1 = *(float *)(param_1 + 0x924) - *(float *)(param_1 + 0x910);
    *(float *)(param_1 + 0x924) = fVar1;
    if ((fVar1 < 0.0) && (*(int *)(param_1 + 0x944) == 0)) {
      FUN_00c81b30(0x3b);
      iVar6 = FUN_00a12210(local_370[*(int *)(param_1 + 0x940)]);
      local_3a0 = SQRT(*(float *)(iVar6 + 0x14) * *(float *)(iVar6 + 0x14) +
                       *(float *)(iVar6 + 0x10) * *(float *)(iVar6 + 0x10) +
                       *(float *)(iVar6 + 0x18) * *(float *)(iVar6 + 0x18));
      local_39c = SQRT(*(float *)(iVar6 + 0x20) * *(float *)(iVar6 + 0x20) +
                       *(float *)(iVar6 + 0x24) * *(float *)(iVar6 + 0x24) +
                       *(float *)(iVar6 + 0x28) * *(float *)(iVar6 + 0x28));
      fVar1 = SQRT(*(float *)(iVar6 + 0x38) * *(float *)(iVar6 + 0x38) +
                   *(float *)(iVar6 + 0x34) * *(float *)(iVar6 + 0x34) +
                   *(float *)(iVar6 + 0x30) * *(float *)(iVar6 + 0x30));
      fVar2 = *(float *)(iVar6 + 0x28) / fVar1;
      fVar3 = *(float *)(iVar6 + 0x38) / fVar1;
      fVar7 = (float10)FUN_00ddbaa0(-(*(float *)(iVar6 + 0x18) / fVar1));
      fVar8 = (float10)fpatan((float10)fVar2,(float10)fVar3);
      local_390 = (float)fVar8;
      local_38c = (float)fVar7;
      fVar7 = (float10)fpatan((float10)*(float *)(iVar6 + 0x14) / (float10)local_39c,
                              (float10)*(float *)(iVar6 + 0x10) / (float10)local_3a0);
      local_388 = (float)fVar7;
      local_380 = *(undefined4 *)(iVar6 + 0x40);
      local_37c = *(undefined4 *)(iVar6 + 0x44);
      local_378 = *(undefined4 *)(iVar6 + 0x48);
      local_374 = *(undefined4 *)(iVar6 + 0x4c);
      local_3a0 = *(float *)(iVar6 + 0x40);
      local_39c = *(float *)(iVar6 + 0x44);
      local_398 = *(undefined4 *)(iVar6 + 0x48);
      local_394 = *(undefined4 *)(iVar6 + 0x4c);
      FUN_0041fee0();
      local_21c = 4;
      local_32c = 0x3b003;
      local_220 = 0x13;
      local_1c0 = FUN_009f8b40();
      local_39c = local_39c + 50.0;
      local_31c = 0x1e;
      local_314 = 4.2039e-44;
      local_310 = 0;
      local_318 = 2.10195e-43;
      uVar5 = FUN_00ac84d0(0x13);
      (**(code **)(**(int **)(param_1 + 0x754) + 0xc))(0x13);
      (**(code **)(**(int **)(param_1 + 0x754) + 0x14))(0x13);
      local_310 = (**(code **)(**(int **)(param_1 + 0x754) + 0x1c))(0x13);
      uStack_30c = *(undefined4 *)(param_1 + 0x4f0);
      uStack_30f = 10;
      local_31c = uVar5;
      local_318 = fVar3;
      local_314 = fVar2;
      uVar5 = FUN_00a7c7f0();
      FUN_00a7c960(uVar5);
      local_370[0x10] = local_370[0x10] | 4;
      uStack_1b6 = *(undefined2 *)(iVar6 + 0xa0);
      sVar4 = FUN_00dde2d0(0,3);
      if (sVar4 == 2) {
        uStack_50 = 1;
      }
      FUN_00416e30(&local_380,&local_3a0,&local_390,0x40000000,0x44480000);
      uVar5 = FUN_00ac45b0();
      local_390 = 0.0;
      local_38c = 0.0;
      local_388 = 0.0;
      FUN_0043fed0(uVar5,0,&local_390);
      FUN_00ad3be0(*(undefined4 *)(param_1 + 0x4f0),local_370 + 0x10);
      *(int *)(param_1 + 0x940) = *(int *)(param_1 + 0x940) + 1;
      *(undefined4 *)(param_1 + 0x924) = 0x41700000;
      if (*(int *)(param_1 + 0x4a0) == 0) {
        *(undefined4 *)(param_1 + 0x924) = 0x41a00000;
      }
      if (0xf < *(uint *)(param_1 + 0x940)) {
        *(undefined4 *)(param_1 + 0x940) = 0;
      }
    }
    FUN_00ac80a0(0x3f800000,0x3f800000);
    fVar1 = *(float *)(param_1 + 0x920) - *(float *)(param_1 + 0x910);
    *(float *)(param_1 + 0x920) = fVar1;
    if (0.0 <= fVar1) {
      return;
    }
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    return;
  case 4:
    FUN_00aa4080(0x85,0,0x3daaaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    if (*(int *)(param_1 + 0x1540) != 0) {
      FUN_00ad0a90();
    }
    *(undefined4 *)(param_1 + 0x1540) = 0;
    goto LAB_00af46e3;
  case 5:
LAB_00af46e3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar6 = FUN_00a94ce0(0);
    if (iVar6 != 0) {
      FUN_00a8caf0(0,0,0,0);
      *(undefined4 *)(param_1 + 0xdd8) = 0x42700000;
      iVar6 = FUN_00ac4780();
      if (iVar6 == 2) {
        *(undefined4 *)(param_1 + 0xdd8) = 0x41f00000;
      }
      iVar6 = FUN_00ac4780();
      if (2 < iVar6) {
        *(undefined4 *)(param_1 + 0xdd8) = 0x40c00000;
        return;
      }
    }
  default:
    goto switchD_00af4240_default;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar6 = FUN_00a94ce0(0);
  if (iVar6 != 0) {
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    return;
  }
switchD_00af4240_default:
  return;
}

// 00AF4780  FUN_00af4780  size=1346  [callgraph]
void __fastcall FUN_00af4780(int *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  short sVar4;
  undefined4 uVar5;
  int iVar6;
  float10 fVar7;
  float10 fVar8;
  float local_3a0;
  float local_39c;
  undefined4 local_398;
  undefined4 local_394;
  float local_390;
  float local_38c;
  float local_388;
  undefined4 local_380;
  undefined4 local_37c;
  undefined4 local_378;
  undefined4 local_374;
  uint local_370 [17];
  undefined4 local_32c;
  undefined4 local_31c;
  float local_318;
  float local_314;
  undefined1 local_310;
  undefined1 uStack_30f;
  int iStack_30c;
  undefined4 local_220;
  undefined4 local_21c;
  undefined4 local_1c0;
  undefined2 uStack_1b6;
  undefined4 uStack_50;
  
  local_370[0] = 0x806;
  local_370[1] = 0x807;
  local_370[2] = 0x808;
  local_370[3] = 0x809;
  local_370[4] = 0x80a;
  local_370[5] = 0x80b;
  local_370[6] = 0x80c;
  local_370[7] = 0x80d;
  local_370[8] = 0x80e;
  local_370[9] = 0x80f;
  local_370[10] = 0x810;
  local_370[0xb] = 0x811;
  local_370[0xc] = 0x812;
  local_370[0xd] = 0x813;
  local_370[0xe] = 0x814;
  local_370[0xf] = 0x815;
  if (param_1[0x187] == 0) {
    FUN_00aa4080(0x86,0,0x3e888889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    if (param_1[0x550] != 0) {
      FUN_00ad0a90();
    }
    param_1[0x550] = 0;
    FUN_00aed150();
    param_1[0x249] = 0;
    param_1[0x250] = 0;
    param_1[0x251] = 0;
  }
  else if (param_1[0x187] != 1) goto LAB_00af4c5c;
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar6 = FUN_00a94ce0(0);
  if (iVar6 != 0) {
    FUN_00a8caf0(0,0,0,0);
    param_1[0x376] = 0x42700000;
    iVar6 = FUN_00ac4780();
    if (iVar6 == 2) {
      param_1[0x376] = 0x41f00000;
    }
    iVar6 = FUN_00ac4780();
    if (2 < iVar6) {
      param_1[0x376] = 0x40c00000;
    }
    if (param_1[0x128] == 3) {
      FUN_00a8caf0(0x17,0,0,0);
    }
  }
  iVar6 = FUN_00a94ee0(0,100,0x104);
  if (iVar6 != 0) {
    FUN_00c81b30(0x3b);
    fVar1 = (float)param_1[0x249];
    param_1[0x249] = (int)(fVar1 - (float)param_1[0x244]);
    if ((fVar1 - (float)param_1[0x244] < 0.0) && (param_1[0x251] == 0)) {
      iVar6 = FUN_00a12210(local_370[param_1[0x250]]);
      local_3a0 = SQRT(*(float *)(iVar6 + 0x14) * *(float *)(iVar6 + 0x14) +
                       *(float *)(iVar6 + 0x10) * *(float *)(iVar6 + 0x10) +
                       *(float *)(iVar6 + 0x18) * *(float *)(iVar6 + 0x18));
      local_39c = SQRT(*(float *)(iVar6 + 0x20) * *(float *)(iVar6 + 0x20) +
                       *(float *)(iVar6 + 0x24) * *(float *)(iVar6 + 0x24) +
                       *(float *)(iVar6 + 0x28) * *(float *)(iVar6 + 0x28));
      fVar1 = SQRT(*(float *)(iVar6 + 0x38) * *(float *)(iVar6 + 0x38) +
                   *(float *)(iVar6 + 0x34) * *(float *)(iVar6 + 0x34) +
                   *(float *)(iVar6 + 0x30) * *(float *)(iVar6 + 0x30));
      fVar2 = *(float *)(iVar6 + 0x28) / fVar1;
      fVar3 = *(float *)(iVar6 + 0x38) / fVar1;
      fVar7 = (float10)FUN_00ddbaa0(-(*(float *)(iVar6 + 0x18) / fVar1));
      fVar8 = (float10)fpatan((float10)fVar2,(float10)fVar3);
      local_390 = (float)fVar8;
      local_38c = (float)fVar7;
      fVar7 = (float10)fpatan((float10)*(float *)(iVar6 + 0x14) / (float10)local_39c,
                              (float10)*(float *)(iVar6 + 0x10) / (float10)local_3a0);
      local_388 = (float)fVar7;
      local_380 = *(undefined4 *)(iVar6 + 0x40);
      local_37c = *(undefined4 *)(iVar6 + 0x44);
      local_378 = *(undefined4 *)(iVar6 + 0x48);
      local_374 = *(undefined4 *)(iVar6 + 0x4c);
      local_3a0 = *(float *)(iVar6 + 0x40);
      local_39c = *(float *)(iVar6 + 0x44);
      local_398 = *(undefined4 *)(iVar6 + 0x48);
      local_394 = *(undefined4 *)(iVar6 + 0x4c);
      FUN_004105d0();
      FUN_00410710();
      FUN_0041cf30();
      local_21c = 2;
      if (param_1[0x128] == 3) {
        local_21c = 3;
      }
      local_32c = 0x3b003;
      local_220 = 0x13;
      local_1c0 = FUN_009f8b40();
      local_39c = local_39c + 50.0;
      local_31c = 0x1e;
      local_314 = 4.2039e-44;
      local_310 = 0;
      local_318 = 2.10195e-43;
      uVar5 = FUN_00ac84d0(0x13);
      (**(code **)(*(int *)param_1[0x1d5] + 0xc))(0x13);
      (**(code **)(*(int *)param_1[0x1d5] + 0x14))(0x13);
      local_310 = (**(code **)(*(int *)param_1[0x1d5] + 0x1c))(0x13);
      iStack_30c = param_1[0x13c];
      uStack_30f = 10;
      local_31c = uVar5;
      local_318 = fVar3;
      local_314 = fVar2;
      uVar5 = FUN_00a7c7f0();
      FUN_00a7c960(uVar5);
      local_370[0x10] = local_370[0x10] | 4;
      uStack_1b6 = *(undefined2 *)(iVar6 + 0xa0);
      FUN_00416e30(&local_380,&local_3a0,&local_390,0x40000000,0x44480000);
      uVar5 = FUN_00ac45b0();
      sVar4 = FUN_00dde2d0(0,3);
      if (sVar4 == 2) {
        uStack_50 = 1;
      }
      local_390 = 0.0;
      local_38c = 0.0;
      local_388 = 0.0;
      FUN_0043fed0(uVar5,0,&local_390);
      FUN_00ad3be0(param_1[0x13c],local_370 + 0x10);
      param_1[0x250] = param_1[0x250] + 1;
      param_1[0x249] = 0x41700000;
      if (0xf < (uint)param_1[0x250]) {
        param_1[0x251] = 1;
      }
    }
  }
LAB_00af4c5c:
  if ((param_1[0x2a1] != 0) && (iVar6 = FUN_00a8c760(0), iVar6 != 0)) {
    FUN_00a8e880(param_1[0x2a1] + 0x50);
    (**(code **)(*param_1 + 0x308))(0x3d75c28f,0x393702d3,(float)param_1[0x244] * 0.06981317,0);
  }
  return;
}

// 00AF4CD0  FUN_00af4cd0  size=1362  [callgraph]
void __fastcall FUN_00af4cd0(int *param_1)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  float10 fVar4;
  
  if ((param_1[0x187] == 0) || (param_1[0x7e6] == 0)) {
    param_1[0x730] = 1;
    switch(param_1[0x187]) {
    case 0:
      uVar1 = 0x89;
      if (param_1[0x186] == 0x1c) {
        uVar1 = 0x8a;
      }
      FUN_00aa4080(uVar1,0,0x3e888889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      param_1[0x187] = param_1[0x187] + 1;
      if (param_1[0x550] != 0) {
        FUN_00ad0a90();
      }
      param_1[0x550] = 0;
      FUN_00aed150();
      iVar3 = FUN_00a92f90();
      iVar2 = FUN_00e26e90();
      if (iVar2 != 0) {
        *(uint *)(iVar3 + 0x280) = *(uint *)(iVar3 + 0x280) | 2;
      }
      iVar3 = FUN_00a92f90();
      iVar2 = FUN_00e26e90();
      if (iVar2 != 0) {
        *(uint *)(iVar3 + 0x280) = *(uint *)(iVar3 + 0x280) & 0xfffffffb;
      }
      iVar3 = FUN_00a92f90();
      iVar2 = FUN_00e26e90();
      if (iVar2 != 0) {
        *(uint *)(iVar3 + 0x280) = *(uint *)(iVar3 + 0x280) & 0xfffffff7;
      }
      if (param_1[0x741] == 0) {
        if (param_1[0x742] != 0) {
          iVar3 = FUN_00a92f90();
          iVar2 = FUN_00e26e90();
          if (iVar2 != 0) {
            *(uint *)(iVar3 + 0x280) = *(uint *)(iVar3 + 0x280) & 0xfffffffd;
          }
          iVar3 = FUN_00a92f90();
          iVar2 = FUN_00e26e90();
          if (iVar2 != 0) {
            *(uint *)(iVar3 + 0x280) = *(uint *)(iVar3 + 0x280) | 4;
          }
          iVar3 = FUN_00a92f90();
          iVar2 = FUN_00e26e90();
          if (iVar2 != 0) {
            *(uint *)(iVar3 + 0x280) = *(uint *)(iVar3 + 0x280) & 0xfffffff7;
          }
        }
      }
      else if (param_1[0x742] != 0) {
        iVar3 = FUN_00a92f90();
        iVar2 = FUN_00e26e90();
        if (iVar2 != 0) {
          *(uint *)(iVar3 + 0x280) = *(uint *)(iVar3 + 0x280) & 0xfffffffd;
        }
        iVar3 = FUN_00a92f90();
        iVar2 = FUN_00e26e90();
        if (iVar2 != 0) {
          *(uint *)(iVar3 + 0x280) = *(uint *)(iVar3 + 0x280) & 0xfffffffb;
        }
        iVar3 = FUN_00a92f90();
        iVar2 = FUN_00e26e90();
        if (iVar2 != 0) {
          *(uint *)(iVar3 + 0x280) = *(uint *)(iVar3 + 0x280) | 8;
        }
      }
      param_1[0x7e6] = 0;
      FUN_00ae8d00();
    case 1:
      FUN_00ac80a0(0x3f800000,0x3f800000);
      iVar3 = FUN_00a94ce0(0);
      if ((iVar3 != 0) && (param_1[0x187] = param_1[0x187] + 1, (float)param_1[0x2a4] <= 900.0)) {
        FUN_00a8caf0(0,0,0,0);
        param_1[0x376] = 0x42700000;
        iVar3 = FUN_00ac4780();
        if (iVar3 == 2) {
          param_1[0x376] = 0x41f00000;
        }
        iVar3 = FUN_00ac4780();
        if (2 < iVar3) {
          param_1[0x376] = 0x40c00000;
        }
        iVar3 = FUN_00aed900(0xc2200000);
        if (iVar3 == 0) {
          FUN_00a8caf0(4,0,0,0);
        }
        else {
          FUN_00a8caf0(2,0,0,0);
        }
      }
      break;
    case 2:
      uVar1 = 0x89;
      if (param_1[0x186] == 0x1b) {
        uVar1 = 0x8a;
      }
      FUN_00aa4080(uVar1,0,0x3e888889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      param_1[0x187] = param_1[0x187] + 1;
      if (param_1[0x550] != 0) {
        FUN_00ad0a90();
      }
      param_1[0x550] = 0;
      FUN_00aed150();
      iVar3 = FUN_00a92f90();
      iVar2 = FUN_00e26e90();
      if (iVar2 != 0) {
        *(uint *)(iVar3 + 0x280) = *(uint *)(iVar3 + 0x280) | 2;
      }
      iVar3 = FUN_00a92f90();
      iVar2 = FUN_00e26e90();
      if (iVar2 != 0) {
        *(uint *)(iVar3 + 0x280) = *(uint *)(iVar3 + 0x280) & 0xfffffffb;
      }
      iVar3 = FUN_00a92f90();
      iVar2 = FUN_00e26e90();
      if (iVar2 != 0) {
        *(uint *)(iVar3 + 0x280) = *(uint *)(iVar3 + 0x280) & 0xfffffff7;
      }
      if (param_1[0x741] == 0) {
        if (param_1[0x742] != 0) {
          iVar3 = FUN_00a92f90();
          iVar2 = FUN_00e26e90();
          if (iVar2 != 0) {
            *(uint *)(iVar3 + 0x280) = *(uint *)(iVar3 + 0x280) & 0xfffffffd;
          }
          iVar3 = FUN_00a92f90();
          iVar2 = FUN_00e26e90();
          if (iVar2 != 0) {
            *(uint *)(iVar3 + 0x280) = *(uint *)(iVar3 + 0x280) | 4;
          }
          iVar3 = FUN_00a92f90();
          iVar2 = FUN_00e26e90();
          if (iVar2 != 0) {
            *(uint *)(iVar3 + 0x280) = *(uint *)(iVar3 + 0x280) & 0xfffffff7;
          }
        }
      }
      else if (param_1[0x742] != 0) {
        iVar3 = FUN_00a92f90();
        iVar2 = FUN_00e26e90();
        if (iVar2 != 0) {
          *(uint *)(iVar3 + 0x280) = *(uint *)(iVar3 + 0x280) & 0xfffffffd;
        }
        iVar3 = FUN_00a92f90();
        iVar2 = FUN_00e26e90();
        if (iVar2 != 0) {
          *(uint *)(iVar3 + 0x280) = *(uint *)(iVar3 + 0x280) & 0xfffffffb;
        }
        iVar3 = FUN_00a92f90();
        iVar2 = FUN_00e26e90();
        if (iVar2 != 0) {
          *(uint *)(iVar3 + 0x280) = *(uint *)(iVar3 + 0x280) | 8;
        }
      }
    case 3:
      FUN_00ac80a0(0x3f800000,0x3f800000);
      iVar3 = FUN_00a94ce0(0);
      if (iVar3 != 0) {
        FUN_00a8caf0(0,0,0,0);
        param_1[0x376] = 0x42700000;
        iVar3 = FUN_00ac4780();
        if (iVar3 == 2) {
          param_1[0x376] = 0x41f00000;
        }
        iVar3 = FUN_00ac4780();
        if (2 < iVar3) {
          param_1[0x376] = 0x40c00000;
        }
      }
    }
    if ((param_1[0x7e4] != 0) && (iVar3 = FUN_00a8c760(0), iVar3 != 0)) {
      FUN_00a8e880(param_1[0x2a1] + 0x50);
      (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x393702d3,0x3e32b8c2,0);
    }
  }
  else {
    FUN_00a8caf0(0x26,0,0,0);
    param_1[0x7f1] = 0;
    fVar4 = (float10)FUN_00ddba30((float)param_1[0x25] + 3.1415927);
    param_1[0x25] = (int)(float)fVar4;
    param_1[0x813] = -1;
    if ((*(byte *)(param_1 + 0x371) & 8) == 0) {
      param_1[0x815] = 0x41200000;
      param_1[0x813] = 0xd;
      param_1[0x814] = 0x42700000;
      FUN_00c81b30(0x2d);
      return;
    }
  }
  return;
}

// 00AF5240  FUN_00af5240  size=82  [callgraph]
void __fastcall FUN_00af5240(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00ac4780();
  if ((iVar1 < 2) && (*(int *)(param_1 + 0x1d20) != 0)) {
    iVar1 = FUN_00a8c760(4);
    if (iVar1 != 0) {
      iVar1 = FUN_00aed900(0xc2200000);
      if (iVar1 != 0) {
        FUN_00a8caf0(2,0,0,0);
        return;
      }
      FUN_00a8caf0(6,0,0,0);
    }
  }
  return;
}

// 00AF52A0  FUN_00af52a0  size=2741  [callgraph]
void __fastcall FUN_00af52a0(int *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  short sVar6;
  int iVar7;
  undefined2 uVar8;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  iVar7 = param_1[0x187];
  if (((1 < iVar7) && (iVar7 < 9)) && (param_1[0x7e6] != 0)) {
    FUN_00a8caf0(0x27,0,0,0);
    param_1[0x7f1] = 0;
    param_1[0x813] = -1;
    if ((*(byte *)(param_1 + 0x371) & 7) == 7) {
      return;
    }
    param_1[0x815] = 0x41200000;
    param_1[0x813] = 0xc;
    param_1[0x814] = 0x42700000;
    FUN_00c81b30(0x2d);
    return;
  }
  param_1[0x377] = 1;
  uVar8 = 0x8f;
  switch(iVar7) {
  case 0:
    param_1[0x187] = 1;
    sVar6 = FUN_00dde2d0(0,1);
    param_1[0x250] = sVar6 + 1;
    FUN_00ae8d00();
    iVar7 = FUN_00ac4780();
    if (1 < iVar7) {
      sVar6 = FUN_00dde2d0(0,2);
      param_1[0x250] = sVar6 + 2;
    }
  case 1:
    if ((1 < param_1[0x7f0]) && (sVar6 = FUN_00dde2d0(0,2), sVar6 != 0)) {
      uVar8 = 0x8c;
    }
    FUN_00aa4080(uVar8,0,0x3e888889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    if (param_1[0x550] != 0) {
      FUN_00ad0a90();
    }
    param_1[0x550] = 0;
    FUN_00aed150();
    param_1[0x250] = param_1[0x250] + -1;
    param_1[0x7e6] = 0;
    param_1[0x748] = 0;
switchD_00af5348_caseD_2:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar7 = FUN_00a94e10(0,0x425c0000,0x42a00000);
    if (iVar7 != 0) {
      param_1[0x556] = 1;
      param_1[0x557] = 1;
    }
    goto LAB_00af546d;
  case 2:
    goto switchD_00af5348_caseD_2;
  case 3:
    uVar8 = 0x90;
    if (((1 < param_1[0x7f0]) || (iVar7 = FUN_00ac4780(), 1 < iVar7)) &&
       (sVar6 = FUN_00dde2d0(0,2), sVar6 != 0)) {
      uVar8 = 0x8d;
    }
    FUN_00aa4080(uVar8,0,0x3e888889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    if (param_1[0x550] != 0) {
      FUN_00ad0a90();
    }
    param_1[0x550] = 0;
    param_1[0x7e6] = 0;
    param_1[0x748] = 0;
  case 4:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    if (param_1[0x250] < 1) {
LAB_00af55f5:
      if (((param_1[0x250] < 2) && (iVar7 = FUN_00a8c760(4), iVar7 != 0)) &&
         (((float)param_1[0x2a8] < 0.6981317 && (625.0 < (float)param_1[0x2a3])))) {
        FUN_00a8caf0(0x1d,5,0,0);
      }
    }
    else {
      iVar7 = FUN_00a8c760(4);
      if (((iVar7 != 0) && ((float)param_1[0x2a8] < 2.0943952)) &&
         (((float)param_1[0x2a3] <= 900.0 && (FUN_00a8caf0(0x1d,1,0,0), param_1[0x250] < 2)))) {
        FUN_00a8caf0(0x1d,5,0,0);
      }
      if ((((param_1[0x250] < 1) || (iVar7 = FUN_00a8c760(4), iVar7 == 0)) ||
          (1.0471976 <= (float)param_1[0x2a8])) || (1444.0 < (float)param_1[0x2a3]))
      goto LAB_00af55f5;
      if (param_1[0x250] < 2) {
        sVar6 = FUN_00dde2d0(0,1);
        if (sVar6 != 0) {
          FUN_00a8caf0(0x1d,5,0,0);
        }
        goto LAB_00af55f5;
      }
    }
    iVar7 = FUN_00a94e10(0,0x425c0000,0x42a00000);
    if (iVar7 != 0) {
      param_1[0x556] = 1;
      param_1[0x557] = 1;
    }
    iVar7 = FUN_00a94ce0(0);
    if (iVar7 != 0) {
      FUN_00a8caf0(0,0,0,0);
      param_1[0x376] = 0x43340000;
      iVar7 = FUN_00ac4780();
      if (iVar7 == 2) {
        param_1[0x376] = 0x42700000;
      }
      iVar7 = FUN_00ac4780();
      if (2 < iVar7) {
        param_1[0x376] = 0x40c00000;
      }
    }
    goto switchD_00af5348_default;
  case 5:
    FUN_00aa4080(0x92,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x748] = 0;
    FUN_00aed150();
    break;
  case 6:
  case 8:
    break;
  case 7:
    FUN_00aa4080(0x93,0,0x3d088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    break;
  case 9:
    FUN_00aa4080(0x94,0,0x3d888889,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x248] = 0x43960000;
    iVar7 = FUN_00ac4780();
    if (iVar7 == 2) {
      param_1[0x248] = 0x42700000;
    }
    iVar7 = FUN_00ac4780();
    if (2 < iVar7) {
      param_1[0x248] = 0;
    }
  case 10:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    fVar1 = (float)param_1[0x248];
    param_1[0x248] = (int)(fVar1 - (float)param_1[0x244]);
    if (fVar1 - (float)param_1[0x244] < 0.0) {
      param_1[0x187] = param_1[0x187] + 1;
    }
    goto switchD_00af5348_default;
  case 0xb:
    FUN_00aa4080(0x95,0,0x3d888889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  case 0xc:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar7 = FUN_00a94ce0(0);
    if (iVar7 != 0) {
      param_1[0x376] = 0x43340000;
      iVar7 = FUN_00ac4780();
      if (iVar7 == 2) {
        param_1[0x376] = 0x42700000;
      }
      iVar7 = FUN_00ac4780();
      if (2 < iVar7) {
        param_1[0x376] = 0x40c00000;
      }
      FUN_00a8caf0(0,0,0,0);
    }
  default:
    goto switchD_00af5348_default;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
LAB_00af546d:
  iVar7 = FUN_00a94ce0(0);
  if (iVar7 != 0) {
    param_1[0x187] = param_1[0x187] + 1;
  }
switchD_00af5348_default:
  if (param_1[0x7e4] != 0) {
    if ((param_1[0x2a1] != 0) && (iVar7 = FUN_00a8c760(0x19), iVar7 != 0)) {
      iVar7 = param_1[0x2a1];
      param_1[0x730] = 1;
      local_20 = (float)param_1[0x10] - *(float *)(iVar7 + 0x40);
      local_18 = (float)param_1[0x12] - *(float *)(iVar7 + 0x48);
      local_14 = (float)param_1[0x13] - *(float *)(iVar7 + 0x4c);
      local_1c = 0.0;
      if (((param_1[0x187] == 2) || (param_1[0x187] == 4)) &&
         (fVar1 = local_20 * local_20 + local_18 * local_18, 121.0 < fVar1)) {
        fVar3 = 11.0 - SQRT(fVar1);
        if (fVar1 < 0.0 == (fVar1 == 0.0)) {
          FUN_00ddf460(&local_20,&local_20);
        }
        else {
          FUN_00dd5650(&DAT_0163d0ac);
          local_18 = 0.0;
          local_1c = 1.0;
          local_20 = 0.0;
        }
        local_20 = local_20 * fVar3 * 0.4;
        local_1c = fVar3 * local_1c * 0.4;
        local_18 = local_18 * fVar3 * 0.4;
        local_14 = fVar3 * local_14 * 0.4;
        fVar1 = local_18 * local_18 + local_1c * local_1c + local_20 * local_20;
        if (0.25 < fVar1) {
          if (fVar1 < 0.0 == (fVar1 == 0.0)) {
            FUN_00ddf460(&local_20,&local_20);
          }
          else {
            FUN_00dd5650(&DAT_0163d0ac);
            local_18 = 0.0;
            local_20 = 0.0;
            local_1c = 1.0;
          }
          local_20 = local_20 * 0.5;
          local_1c = local_1c * 0.5;
          local_18 = local_18 * 0.5;
          local_14 = local_14 * 0.5;
        }
        fVar1 = (float)param_1[0x244];
        param_1[0x14] = (int)((float)param_1[0x14] + local_20 * fVar1);
        param_1[0x15] = (int)(fVar1 * local_1c + (float)param_1[0x15]);
        param_1[0x16] = (int)((float)param_1[0x16] + local_18 * fVar1);
        param_1[0x17] = (int)(local_14 * fVar1 + (float)param_1[0x17]);
      }
      if (((param_1[0x187] == 6) || (param_1[0x187] == 8)) &&
         (fVar1 = local_18 * local_18 + local_1c * local_1c + local_20 * local_20, 100.0 < fVar1)) {
        fVar3 = 10.0 - SQRT(fVar1);
        if (fVar1 < 0.0 == (fVar1 == 0.0)) {
          FUN_00ddf460(&local_20,&local_20);
        }
        else {
          FUN_00dd5650(&DAT_0163d0ac);
          local_18 = 0.0;
          local_1c = 1.0;
          local_20 = 0.0;
        }
        fVar4 = local_20 * fVar3 * 0.4;
        fVar5 = fVar3 * local_1c * 0.4;
        fVar1 = local_18 * fVar3 * 0.4;
        fVar3 = fVar3 * local_14 * 0.4;
        fVar2 = fVar1 * fVar1 + fVar5 * fVar5 + fVar4 * fVar4;
        local_20 = fVar4;
        local_1c = fVar5;
        local_18 = fVar1;
        local_14 = fVar3;
        if (0.25 < fVar2) {
          if (fVar2 < 0.0 == (fVar2 == 0.0)) {
            FUN_00ddf460(&local_20,&local_20);
            fVar1 = local_18;
            fVar4 = local_20;
            fVar5 = local_1c;
          }
          else {
            FUN_00dd5650(&DAT_0163d0ac);
            fVar1 = 0.0;
            fVar4 = 0.0;
            fVar5 = 1.0;
          }
          fVar4 = fVar4 * 0.5;
          fVar5 = fVar5 * 0.5;
          fVar1 = fVar1 * 0.5;
          fVar3 = local_14 * 0.5;
        }
        fVar2 = (float)param_1[0x244];
        param_1[0x14] = (int)((float)param_1[0x14] + fVar4 * fVar2);
        param_1[0x15] = (int)((float)param_1[0x15] + fVar2 * fVar5);
        param_1[0x16] = (int)((float)param_1[0x16] + fVar1 * fVar2);
        param_1[0x17] = (int)(fVar2 * fVar3 + (float)param_1[0x17]);
      }
    }
    if (((param_1[0x7e4] != 0) && (iVar7 = FUN_00a8c760(0), iVar7 != 0)) &&
       (fVar1 = (float)param_1[0x2a3], !NAN(fVar1) && 225.0 < fVar1 != (fVar1 == 225.0))) {
      FUN_00a8e880(param_1[0x2a1] + 0x50);
      (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x393702d3,0x3c8efa35,0);
    }
  }
  return;
}

// 00AF6180  FUN_00af6180  size=181  [callgraph]
void __fastcall FUN_00af6180(int param_1)

{
  int iVar1;
  
  FUN_00aedaa0();
  *(undefined4 *)(param_1 + 0x1cc0) = 1;
  *(undefined4 *)(param_1 + 0x1550) = 1;
  *(undefined4 *)(param_1 + 0x1554) = 1;
  *(undefined4 *)(param_1 + 0x154c) = 1;
  if (*(int *)(param_1 + 0x61c) == 0) {
    FUN_00aa4080(0xa7,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    FUN_00aed150();
  }
  else if (*(int *)(param_1 + 0x61c) != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    FUN_00dc1300(1);
    FUN_00a8caf0(0xc,0,0,0);
  }
  return;
}

// 00AF6240  FUN_00af6240  size=351  [callgraph]
void __fastcall FUN_00af6240(int *param_1)

{
  short sVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  FUN_00aedaa0();
  (**(code **)(*param_1 + 0x314))();
  param_1[0x735] = param_1[0x736];
  if (param_1[0x187] == 0) {
    FUN_00aa4080(0xb0,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00aed150();
    param_1[0x7f0] = param_1[0x7f0] + 1;
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 != 0) {
    param_1[0x372] = 0;
    iVar2 = FUN_00a92f90();
    iVar3 = FUN_00e26e90();
    if (iVar3 != 0) {
      *(uint *)(iVar2 + 0x280) = *(uint *)(iVar2 + 0x280) & 0xfffffffb;
    }
    FUN_00a8caf0(0xc,0,0,0);
    iVar2 = FUN_00aed900(0xc2200000);
    if (iVar2 == 0) {
      uVar4 = 4;
    }
    else {
      uVar4 = 2;
    }
    FUN_00a8caf0(uVar4,0,0,0);
    sVar1 = FUN_00dde2d0(0,2);
    if (((sVar1 == 1) && ((float)param_1[0x2a8] < 1.0471976)) && ((float)param_1[0x2a3] <= 1600.0))
    {
      FUN_00a8caf0(0x1d,0,0,0);
    }
    if (param_1[0xbe4] != 0) {
      FUN_00a8caf0(2,0,0,0);
    }
  }
  return;
}

// 00AF63A0  FUN_00af63a0  size=384  [callgraph]
void __fastcall FUN_00af63a0(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined2 uVar3;
  
  FUN_00aedaa0();
  (**(code **)(*param_1 + 0x314))();
  param_1[0x735] = param_1[0x736];
  uVar3 = 0xb2;
  if (param_1[0x187] == 0) {
    if (param_1[0x186] == 0x29) {
      uVar3 = 0xb3;
    }
    FUN_00aa4080(uVar3,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00aed150();
    param_1[0x7f0] = param_1[0x7f0] + 1;
    if (param_1[0x128] == 0) {
      iVar1 = FUN_00a92f90();
      iVar2 = FUN_00e26e90();
      if (iVar2 != 0) {
        *(uint *)(iVar1 + 0x280) = *(uint *)(iVar1 + 0x280) | 4;
      }
    }
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    param_1[0x372] = 0;
    iVar1 = FUN_00a92f90();
    iVar2 = FUN_00e26e90();
    if (iVar2 != 0) {
      *(uint *)(iVar1 + 0x280) = *(uint *)(iVar1 + 0x280) & 0xfffffffb;
    }
    FUN_00a8caf0(0,0,0,0);
    param_1[0x376] = 0x42700000;
    iVar1 = FUN_00ac4780();
    if (iVar1 == 2) {
      param_1[0x376] = 0x41f00000;
    }
    iVar1 = FUN_00ac4780();
    if (2 < iVar1) {
      param_1[0x376] = 0x40c00000;
    }
    iVar1 = FUN_00aed900(0xc2200000);
    if (iVar1 != 0) {
      FUN_00a8caf0(2,0,0,0);
      return;
    }
    FUN_00a8caf0(4,0,0,0);
  }
  return;
}

// 00AF6520  FUN_00af6520  size=732  [callgraph]
void __fastcall FUN_00af6520(int *param_1)

{
  float fVar1;
  int iVar2;
  
  param_1[0x735] = param_1[0x736];
  (**(code **)(*param_1 + 0x314))();
  switch(param_1[0x187]) {
  case 0:
    FUN_00aa4080(0xb1,0,0x3d088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00aed150();
    param_1[0x7f0] = param_1[0x7f0] + 1;
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      FUN_00a8caf0(0,0,0,0);
      param_1[0x376] = 0x42700000;
      iVar2 = FUN_00ac4780();
      if (iVar2 == 2) {
        param_1[0x376] = 0x41f00000;
      }
      iVar2 = FUN_00ac4780();
      if (2 < iVar2) {
        param_1[0x376] = 0x40c00000;
        return;
      }
    }
    break;
  case 2:
    FUN_00aa4080(0x99,0,0x3c888889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00a8d280();
    param_1[0x248] = 0x43f00000;
    param_1[0x251] = 0;
    FUN_008f0450("sword",0x10000,1);
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    if (((param_1[0x251] == 0) && (param_1[0x2a1] != 0)) && (iVar2 = FUN_00a8d9d0(), iVar2 != 0)) {
      param_1[0x251] = 1;
      param_1[0x248] = (int)((float)param_1[0x248] + 600.0);
    }
    fVar1 = (float)param_1[0x248];
    param_1[0x248] = (int)(fVar1 - (float)param_1[0x244]);
    if (fVar1 - (float)param_1[0x244] < 0.0) {
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    break;
  case 4:
    FUN_00aa4080(0x9a,0,0x3c888889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00a8d280();
    FUN_008f0450("sword",0x10000,0);
  case 5:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      param_1[0x372] = 0;
      FUN_00a8caf0(0,0,0,0);
      param_1[0x376] = 0x42700000;
      iVar2 = FUN_00ac4780();
      if (iVar2 == 2) {
        param_1[0x376] = 0x41f00000;
      }
      iVar2 = FUN_00ac4780();
      if (2 < iVar2) {
        param_1[0x376] = 0x40c00000;
      }
      iVar2 = FUN_00aed900(0xc2200000);
      if (iVar2 == 0) {
        FUN_00a8caf0(4,0,0,0);
        return;
      }
      FUN_00a8caf0(2,0,0,0);
      return;
    }
  }
  return;
}

// 00AF6980  FUN_00af6980  size=377  [callgraph]
void __fastcall FUN_00af6980(int *param_1)

{
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  param_1[0x730] = 1;
  param_1[0x554] = 1;
  param_1[0x555] = 1;
  param_1[0x553] = 1;
  param_1[0x377] = 1;
  param_1[0x378] = 1;
  if (param_1[0x187] == 0) {
    FUN_00aa4080(0x10b,0,0,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00aed090();
    if (DAT_018b9174 == 0xa15) {
      local_20 = 0x42c4147b;
      local_1c = 0x41233333;
      local_18 = 0xc1ca6666;
      (**(code **)(*param_1 + 0x6c))(&local_20);
      param_1[0x25] = 0;
    }
    if (param_1[0x1d9] != 0) {
      FUN_008e3c10();
    }
    FUN_00c4d1a0(param_1[0x13c],0);
    DAT_018a9eec = 0;
    FUN_00a7c950();
    FUN_00dc1300(0);
    param_1[0x139] = 1;
    param_1[0x21c] = 0;
    FUN_00a8c420(0,"_tail_f");
    FUN_00a8c420(0,"_tail_b");
    FUN_00a8c420(0,"_c1tail");
    FUN_00a8c420(0,"_c2tail");
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  param_1[0x187] = param_1[0x187] + 1;
  param_1[0x1af] = 1;
  return;
}

// 00B00770  FUN_00b00770  size=3765  [callgraph]
void __fastcall FUN_00b00770(int *param_1)

{
  uint *puVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  float10 fVar8;
  float fVar9;
  undefined *puVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  int iStack_bc;
  undefined4 uStack_b8;
  int iStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined1 auStack_90 [140];
  
  (**(code **)(*param_1 + 0x318))();
  param_1[0x730] = 1;
  param_1[0x554] = 1;
  param_1[0x555] = 1;
  param_1[0x553] = 1;
  param_1[0x377] = 1;
  param_1[0x378] = 1;
  uVar7 = 0;
  iVar3 = FUN_00a81330();
  if ((iVar3 != 0) && (piVar4 = (int *)FUN_00a7c8a0(), piVar4 != (int *)0x0)) {
    puVar10 = &DAT_01be9db8;
    (**(code **)(*piVar4 + 4))(&DAT_01be9db8);
    iVar3 = FUN_00dd6d80(puVar10);
    uVar7 = -(uint)(iVar3 != 0) & (uint)piVar4;
  }
  param_1[0x374] = 1;
  if (param_1[0x187] < 8) {
    iVar3 = FUN_00a8cac0();
    if (iVar3 == 1) {
      iVar3 = FUN_00a94ce0(0);
      if (iVar3 != 0) {
        FUN_00a8cb60(2);
        uVar11 = 2;
        goto LAB_00b0088c;
      }
    }
    else if (iVar3 == 3) {
      iVar3 = FUN_00a94ce0(0);
      if ((iVar3 != 0) && (0.5 < *(float *)(uVar7 + 0x920))) {
        FUN_00a8cb60(4);
        uVar11 = 4;
        goto LAB_00b0088c;
      }
    }
    else if (((iVar3 == 7) && (iVar3 = FUN_00a94ce0(0), iVar3 != 0)) &&
            (0.5 < *(float *)(uVar7 + 0x920))) {
      FUN_00a8cb60(8);
      uVar11 = 8;
LAB_00b0088c:
      FUN_00a8cb60(uVar11);
    }
  }
  switch(param_1[0x187]) {
  case 0:
    FUN_00a94bc0(6,0);
    FUN_00aed150();
    FUN_00aed090();
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x248] = 0x3e4ccccd;
    param_1[0x24a] = 0x3e4ccccd;
    param_1[0x250] = 0;
    iStack_b4 = FUN_00a959f0(0);
    param_1[0x249] = (int)(242.0 - (float)iStack_b4);
    FUN_00aa4080(0xfc,0,0,0x3f800000,0x8000000,0,0x3f800000);
    FUN_00a93090(2);
    if (param_1[0x1d9] != 0) {
      FUN_008e3c10();
    }
    FUN_00c4d1a0(param_1[0x13c],0);
    DAT_018a9eec = 0;
    FUN_00a7c950();
    FUN_00a8c420(0,"_sword");
    FUN_00a8c420(0,"_crkata");
    FUN_00a8c420(0,"_rhand");
    FUN_00eaa6e0(0x3f800000,0);
    iStack_bc = 0;
    if (0 < (short)param_1[0xc9]) {
      iVar3 = 0;
      do {
        iVar6 = param_1[200];
        iVar5 = *(int *)(*(int *)(iVar6 + 0x60 + iVar3) + 0x40);
        if ((iVar5 != 0) && (iVar5 = FUN_00fdbbd0(iVar5,"wp_ar"), iVar5 != 0)) {
          puVar1 = (uint *)(iVar6 + 0x38 + iVar3);
          *puVar1 = *puVar1 & 0xfffffffe;
        }
        iStack_bc = iStack_bc + 1;
        iVar3 = iVar3 + 0x70;
      } while (iStack_bc < (short)param_1[0xc9]);
    }
    goto LAB_00b00a06;
  case 1:
LAB_00b00a06:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    fVar8 = (float10)FUN_00ddba30(-(float)param_1[0x25]);
    uVar12 = 0x3e860a92;
    uVar11 = 0x3ae4c388;
    if (fVar8 * fVar8 < (float10)2.4674013 == (fVar8 * fVar8 == (float10)2.4674013)) {
LAB_00b00a72:
      uVar12 = 0x3e860a92;
      uVar11 = 0x3ae4c388;
      fVar8 = (float10)FUN_00fdc1f0(0x3ae4c388,0x3e860a92);
      fVar9 = (float)fVar8;
      uVar2 = 0x40490fdb;
    }
    else {
      fVar8 = (float10)FUN_00fdc1f0(0x3ae4c388,0x3e860a92);
      fVar9 = (float)fVar8;
      uVar2 = 0;
    }
LAB_00b00a84:
    FUN_00a8db10(param_1 + 0x25,param_1[0x25],uVar2,fVar9,uVar11,uVar12);
    switchD_0080dbae::default();
    return;
  case 2:
    FUN_00aa4080(0xfd,0,0,0x3f800000,0x8000000,0,0);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x250] = 0;
    goto LAB_00b00ae4;
  case 3:
LAB_00b00ae4:
    iVar3 = FUN_00a952e0(0,0x40c00000);
    if (iVar3 != 0) {
      param_1[0x250] = 1;
    }
    iVar3 = FUN_00a8cac0();
    if (iVar3 == 3) {
      uVar11 = 0;
      FUN_00a92f90(0);
      fVar8 = (float10)FUN_00407b40(uVar11);
      fVar9 = (float)fVar8;
      uVar11 = 0;
      FUN_00a92f90(0,fVar9);
      FUN_004b4c60(uVar11,fVar9);
    }
    FUN_00ac80a0(0x3f800000,0x3f800000);
    fVar8 = (float10)FUN_00ddba30(-(float)param_1[0x25]);
    uVar12 = 0x3e860a92;
    uVar11 = 0x3ae4c388;
    if (fVar8 * fVar8 < (float10)2.4674013 != (fVar8 * fVar8 == (float10)2.4674013)) {
      fVar8 = (float10)FUN_00fdc1f0(0x3ae4c388,0x3e860a92);
      fVar9 = (float)fVar8;
      uVar2 = 0;
      goto LAB_00b00a84;
    }
    goto LAB_00b00a72;
  case 4:
    FUN_00aa4080(0xfe,0,0x3d088889,0x3f800000,0x8000000,0,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    if (param_1[0x246] != 0) {
      FUN_0041cc40(0);
    }
    goto LAB_00b00bfc;
  case 5:
    goto LAB_00b00bfc;
  case 6:
    FUN_00aa4080(0xff,0,0x3d088889,0x3f800000,0x8000000,0,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x250] = 0;
    if (param_1[0x246] != 0) {
      FUN_0041cc40(0);
    }
    goto LAB_00b00c84;
  case 7:
LAB_00b00c84:
    iVar3 = FUN_00a952e0(0,0x40a00000);
    if (iVar3 != 0) {
      param_1[0x250] = 1;
    }
    if ((uVar7 != 0) && (param_1[0x250] != 0)) {
      FUN_00a95ee0(0,uVar7);
    }
LAB_00b00bfc:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    FUN_00a94ce0(0);
    switchD_0080dbae::default();
    return;
  case 8:
    FUN_00aa4080(0x100,0,0,0x3f800000,0x8000000,0,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00a938c0(5);
    FUN_00a938c0(0xd);
    param_1[0x73f] = 1;
    if (param_1[0x1d9] != 0) {
      FUN_008e3c10();
    }
    uStack_a0 = 0x42800000;
    uStack_9c = 0x41300000;
    uStack_98 = 0;
    (**(code **)(*param_1 + 0x6c))(&uStack_a0);
    param_1[0x25] = 0x3fc90fdb;
    FUN_004066f0();
    FUN_00916360();
    FUN_00916360();
    FUN_00916360();
    FUN_00916360();
    FUN_00916360();
    (**(code **)(*(int *)param_1[0x1ec] + 0x108))(0x1f);
    FUN_00406760();
    goto LAB_00b00db6;
  case 9:
LAB_00b00db6:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
      switchD_0080dbae::default();
      return;
    }
    goto switchD_00b008a6_default;
  case 10:
    FUN_00aa4080(0x101,0,0,0x3f800000,0x8000000,0,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    break;
  case 0xb:
  case 0xd:
  case 0xf:
    break;
  case 0xc:
    FUN_00aa4080(0x102,0,0,0x3f800000,0x8000000,0,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    iStack_bc = 0;
    if (0 < (short)param_1[0xc9]) {
      iVar3 = 0;
      do {
        iVar6 = param_1[200];
        iVar5 = *(int *)(*(int *)(iVar6 + 0x60 + iVar3) + 0x40);
        if ((iVar5 != 0) && (iVar5 = FUN_00fdbbd0(iVar5,"sword_R"), iVar5 != 0)) {
          puVar1 = (uint *)(iVar6 + 0x38 + iVar3);
          *puVar1 = *puVar1 & 0xfffffffe;
        }
        iStack_bc = iStack_bc + 1;
        iVar3 = iVar3 + 0x70;
      } while (iStack_bc < (short)param_1[0xc9]);
    }
    param_1[0x73f] = 1;
    FUN_0040b190();
    iVar3 = FUN_00a82090("Em0200RightHand",0x20201,auStack_90);
    if (iVar3 != 0) {
      uVar11 = FUN_00a7c7f0();
      FUN_00a7c960(uVar11);
      iVar3 = FUN_00a7c8a0();
      param_1[0x725] = iVar3;
      if (iVar3 != 0) {
        FUN_00acf8b0(param_1[0x13c],1);
      }
    }
    break;
  case 0xe:
    FUN_00aa4080(0x103,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    break;
  case 0x10:
    FUN_00aa4080(0x104,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00a8c420(0,"_sword");
    FUN_00a8c420(0,"_crkata");
    FUN_00a8c420(0,"_rhand");
    goto LAB_00b01004;
  case 0x11:
LAB_00b01004:
    iVar3 = FUN_00a81330();
    if (((iVar3 != 0) && (iVar3 = FUN_00a7c8a0(), iVar3 != 0)) &&
       (iVar3 = FUN_00a7c8a0(), iVar3 != 0)) {
      *(undefined4 *)(iVar3 + 0xdb8) = *(undefined4 *)(iVar3 + 0xdbc);
LAB_00b01037:
      *(undefined4 *)(iVar3 + 0xd94) = 1;
    }
LAB_00b0103d:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
      switchD_0080dbae::default();
      return;
    }
    goto switchD_00b008a6_default;
  case 0x12:
    FUN_00aa4080(0x105,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    iVar3 = FUN_00a81330();
    if (((iVar3 != 0) && (iVar3 = FUN_00a7c8a0(), iVar3 != 0)) &&
       (iVar3 = FUN_00a7c8a0(), iVar3 != 0)) {
      FUN_00a8caf0(4,0,0,0);
    }
    goto LAB_00b010ec;
  case 0x13:
LAB_00b010ec:
    iVar3 = FUN_00a81330();
    if (((iVar3 != 0) && (iVar3 = FUN_00a7c8a0(), iVar3 != 0)) &&
       (iVar3 = FUN_00a7c8a0(), iVar3 != 0)) {
      *(undefined4 *)(iVar3 + 0xdb8) = *(undefined4 *)(iVar3 + 0xdbc);
      goto LAB_00b01037;
    }
    goto LAB_00b0103d;
  case 0x14:
    FUN_00aa4080(0x106,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    if (param_1[0x725] != 0) {
      FUN_00aea310();
    }
    param_1[0x187] = param_1[0x187] + 1;
    iVar3 = FUN_00a81330();
    if (iVar3 != 0) {
      FUN_00a81330();
      FUN_00a7c8a0();
      E3_EnemyBoardDebrisSokushi::vf4C();
    }
    FUN_00a7c950();
    goto LAB_00b011b3;
  case 0x15:
LAB_00b011b3:
    iVar3 = FUN_00a81330();
    if (((iVar3 != 0) && (iVar3 = FUN_00a7c8a0(), iVar3 != 0)) &&
       (iVar3 = FUN_00a7c8a0(), iVar3 != 0)) {
      *(undefined4 *)(iVar3 + 0xd94) = 1;
      *(undefined4 *)(iVar3 + 0xdb8) = *(undefined4 *)(iVar3 + 0xdbc);
    }
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
    }
    iVar3 = FUN_00a8c760(10);
    if (iVar3 != 0) {
      iStack_bc = 0;
      if (0 < (short)param_1[0xc9]) {
        iVar3 = 0;
        do {
          iVar6 = param_1[200];
          iVar5 = *(int *)(*(int *)(iVar6 + 0x60 + iVar3) + 0x40);
          if ((iVar5 != 0) && (iVar5 = FUN_00fdbbd0(iVar5,"qterh"), iVar5 != 0)) {
            puVar1 = (uint *)(iVar6 + 0x38 + iVar3);
            *puVar1 = *puVar1 | 1;
          }
          iStack_bc = iStack_bc + 1;
          iVar3 = iVar3 + 0x70;
        } while (iStack_bc < (short)param_1[0xc9]);
      }
      iStack_bc = 0;
      if (0 < (short)param_1[0xc9]) {
        iVar3 = 0;
        do {
          iVar6 = param_1[200];
          iVar5 = *(int *)(*(int *)(iVar6 + 0x60 + iVar3) + 0x40);
          if ((iVar5 != 0) && (iVar5 = FUN_00fdbbd0(iVar5,"kata_R"), iVar5 != 0)) {
            puVar1 = (uint *)(iVar6 + 0x38 + iVar3);
            *puVar1 = *puVar1 & 0xfffffffe;
          }
          iStack_bc = iStack_bc + 1;
          iVar3 = iVar3 + 0x70;
        } while (iStack_bc < (short)param_1[0xc9]);
      }
      iStack_bc = 0;
      if (0 < (short)param_1[0xc9]) {
        iVar3 = 0;
        do {
          iVar6 = param_1[200];
          iVar5 = *(int *)(*(int *)(iVar6 + 0x60 + iVar3) + 0x40);
          if ((iVar5 != 0) && (iVar5 = FUN_00fdbbd0(iVar5,"right_arm"), iVar5 != 0)) {
            puVar1 = (uint *)(iVar6 + 0x38 + iVar3);
            *puVar1 = *puVar1 & 0xfffffffe;
          }
          iStack_bc = iStack_bc + 1;
          iVar3 = iVar3 + 0x70;
        } while (iStack_bc < (short)param_1[0xc9]);
      }
      iVar3 = param_1[0x725];
      if ((iVar3 != 0) && (iStack_b4 = 0, 0 < *(short *)(iVar3 + 0x324))) {
        iStack_bc = 0;
        do {
          iVar5 = *(int *)(iVar3 + 800) + iStack_bc;
          iVar6 = *(int *)(*(int *)(iVar5 + 0x60) + 0x40);
          if ((iVar6 != 0) && (iVar6 = FUN_00fdbbd0(iVar6,"m017_01"), iVar6 != 0)) {
            puVar1 = (uint *)(iVar5 + 0x38);
            *puVar1 = *puVar1 | 1;
          }
          iStack_bc = iStack_bc + 0x70;
          iStack_b4 = iStack_b4 + 1;
        } while (iStack_b4 < *(short *)(iVar3 + 0x324));
        switchD_0080dbae::default();
        return;
      }
    }
    goto switchD_00b008a6_default;
  case 0x16:
    FUN_00aa4080(0x107,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    if (param_1[0x725] != 0) {
      FUN_00aea390();
    }
    param_1[0x187] = param_1[0x187] + 1;
    goto LAB_00b013e7;
  case 0x17:
LAB_00b013e7:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
    }
    FUN_00e03a70(0,0x3d2c7692);
    switchD_0080dbae::default();
    return;
  case 0x18:
    FUN_00aa4080(0x108,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    if (param_1[0x725] != 0) {
      FUN_00aea3c0();
    }
    (**(code **)(*param_1 + 0x358))(0x17,param_1 + 0x5e8);
    uStack_b8 = 0x42c4147b;
    iStack_b4 = 0x41233333;
    uStack_b0 = 0xc1ca6666;
    (**(code **)(*param_1 + 0x6c))(&uStack_b8);
    param_1[0x25] = 0;
    FUN_00e03a70(0,0x3f800000);
    goto LAB_00b014da;
  case 0x19:
LAB_00b014da:
    iVar3 = FUN_00a952e0(0,0x40400000);
    if ((iVar3 != 0) && (param_1[0x725] != 0)) {
      FUN_00b00540();
    }
    break;
  case 0x1a:
    FUN_00aa4080(0x109,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    goto LAB_00b01544;
  case 0x1b:
LAB_00b01544:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      FUN_004066f0();
      (**(code **)(*(int *)param_1[0x1ec] + 0x108))(8);
      FUN_00a8c420(0,"_sword");
      FUN_00a8c420(0,"_crkata");
      FUN_00a8c420(0,"_rhand");
      FUN_00406760();
      FUN_00a8caf0(0x36,0,0,0);
      iVar3 = FUN_00a81330();
      if (iVar3 != 0) {
        FUN_00a81330();
        FUN_00a7c8a0();
        E3_EnemyBoardDebrisSokushi::vf4C();
      }
      param_1[0x725] = 0;
      FUN_00a7c950();
      FUN_00a93090(6);
      switchD_0080dbae::default();
      return;
    }
  default:
    goto switchD_00b008a6_default;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar3 = FUN_00a94ce0(0);
  if (iVar3 != 0) {
    param_1[0x187] = param_1[0x187] + 1;
    switchD_0080dbae::default();
    return;
  }
switchD_00b008a6_default:
  switchD_0080dbae::default();
  return;
}

// 00B016A0  DebrisLeaveSignalContext::DebrisLeaveSignalContext_8  size=6980  [class]
void __fastcall DebrisLeaveSignalContext::DebrisLeaveSignalContext_8(int *param_1)

{
  uint *puVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  short sVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  float10 fVar10;
  float10 fVar11;
  float10 extraout_ST0;
  unkbyte10 Var12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined1 local_120 [236];
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  switch(param_1[0x186]) {
  case 0:
    if ((900.0 < (float)param_1[0x2a3]) && ((float)param_1[0x7fa] <= 0.0)) {
      iVar8 = FUN_00a81330();
      if ((iVar8 != 0) &&
         ((iVar8 = FUN_00a7c8a0(), iVar8 != 0 && (iVar8 = FUN_00a7c8a0(), iVar8 != 0)))) {
        *(undefined4 *)(iVar8 + 0xd90) = 1;
      }
      iVar8 = FUN_00a81330();
      if (((iVar8 != 0) && (iVar8 = FUN_00a7c8a0(), iVar8 != 0)) &&
         (iVar8 = FUN_00a7c8a0(), iVar8 != 0)) {
        *(undefined4 *)(iVar8 + 0xd90) = 1;
      }
      iVar8 = FUN_00a81330();
      if (((iVar8 != 0) && (iVar8 = FUN_00a7c8a0(), iVar8 != 0)) &&
         (iVar8 = FUN_00a7c8a0(), iVar8 != 0)) {
        *(undefined4 *)(iVar8 + 0xd90) = 1;
      }
      iVar8 = FUN_00a81330();
      if (((iVar8 != 0) && (iVar8 = FUN_00a7c8a0(), iVar8 != 0)) &&
         (iVar8 = FUN_00a7c8a0(), iVar8 != 0)) {
        *(undefined4 *)(iVar8 + 0xd90) = 1;
      }
    }
    if (param_1[0x187] == 0) {
      if (param_1[0xbe4] == 0) {
        local_1c = 0xaf04ca;
        FUN_00a9f4c0();
        local_1c = 0;
        local_20 = 0;
        local_24 = 0;
        local_28 = 0xffffffff;
        uStack_2c = 0xaf04e9;
        FUN_00a9f600();
        local_1c = 0;
        local_20 = 0;
        local_24 = 0;
        local_28 = 0xffffffff;
        uStack_2c = 0xaf0507;
        FUN_00a9f600();
      }
      else {
        local_1c = 0x3e888889;
        local_20 = 0;
        local_24 = 0xdc;
        local_28 = 0xaf0539;
        FUN_00aa4080();
      }
      param_1[0x248] = 0x42b40000;
      param_1[0x250] = 0;
      iVar8 = FUN_00ac4780();
      if (iVar8 == 2) {
        param_1[0x248] = 0x41f00000;
      }
      iVar8 = FUN_00ac4780();
      if (2 < iVar8) {
        param_1[0x248] = 0x41200000;
      }
      param_1[0x187] = param_1[0x187] + 1;
      param_1[0x249] = 0;
      FUN_00eaa6e0();
      param_1[0x372] = 0;
    }
    else if (param_1[0x187] != 1) goto LAB_00af05ff;
    FUN_00aecfe0();
    iVar8 = FUN_00ac4780();
    if (((iVar8 < 2) && (param_1[0x250] == 0)) && ((float)param_1[0x2a4] <= 484.0)) {
      param_1[0x250] = 1;
      param_1[0x248] = 0x43700000;
    }
    FUN_00ac80a0();
LAB_00af05ff:
    fVar2 = (float)param_1[0x248];
    if (!NAN(fVar2) && 0.0 < fVar2 != (fVar2 == 0.0)) {
      param_1[0x248] = (int)((float)param_1[0x248] - (float)param_1[0x244]);
    }
    return;
  case 1:
    FUN_00af0630();
    return;
  case 2:
    FUN_00afd4e0();
    return;
  case 3:
    FUN_00aebf20();
    return;
  case 4:
    DebrisLeaveSignalContext_2();
    return;
  case 5:
    if ((900.0 < (float)param_1[0x2a3]) && ((float)param_1[0x7fa] <= 0.0)) {
      local_1c = 0xaf11f2;
      iVar8 = FUN_00a81330();
      if (iVar8 != 0) {
        local_1c = 0xaf11ff;
        iVar8 = FUN_00a7c8a0();
        if (iVar8 != 0) {
          local_1c = 0xaf120a;
          iVar8 = FUN_00a7c8a0();
          if (iVar8 != 0) {
            *(undefined4 *)(iVar8 + 0xd90) = 1;
          }
        }
      }
      local_1c = 0xaf121f;
      iVar8 = FUN_00a81330();
      if (iVar8 != 0) {
        local_1c = 0xaf122c;
        iVar8 = FUN_00a7c8a0();
        if (iVar8 != 0) {
          local_1c = 0xaf1237;
          iVar8 = FUN_00a7c8a0();
          if (iVar8 != 0) {
            *(undefined4 *)(iVar8 + 0xd90) = 1;
          }
        }
      }
      local_1c = 0xaf124c;
      iVar8 = FUN_00a81330();
      if (iVar8 != 0) {
        local_1c = 0xaf1259;
        iVar8 = FUN_00a7c8a0();
        if (iVar8 != 0) {
          local_1c = 0xaf1264;
          iVar8 = FUN_00a7c8a0();
          if (iVar8 != 0) {
            *(undefined4 *)(iVar8 + 0xd90) = 1;
          }
        }
      }
      local_1c = 0xaf1279;
      iVar8 = FUN_00a81330();
      if (iVar8 != 0) {
        local_1c = 0xaf1286;
        iVar8 = FUN_00a7c8a0();
        if (iVar8 != 0) {
          local_1c = 0xaf1291;
          iVar8 = FUN_00a7c8a0();
          if (iVar8 != 0) {
            *(undefined4 *)(iVar8 + 0xd90) = 1;
          }
        }
      }
    }
    param_1[0x730] = 1;
    if (param_1[0x187] == 0) {
      local_1c = 0x20;
      local_20 = 0xaf12df;
      FUN_00d89e90();
      local_1c = 0;
      local_20 = 0x8000000;
      local_24 = 0x3f800000;
      local_28 = 0x3e2aaaab;
      uStack_2c = 0;
      uStack_30 = 0x1e;
      uStack_34 = 0xaf130a;
      FUN_00aa4080();
      param_1[0x187] = param_1[0x187] + 1;
      param_1[0x249] = 0;
      param_1[0x250] = 0;
      param_1[0x251] = 0;
      param_1[600] = param_1[0x10];
      param_1[0x259] = param_1[0x11];
      param_1[0x25a] = param_1[0x12];
      param_1[0x25b] = param_1[0x13];
      param_1[0x80a] = 0;
    }
    else if (param_1[0x187] != 1) {
      return;
    }
    local_1c = 0xaf1363;
    iVar8 = FUN_00a94ce0();
    if (iVar8 != 0) {
      local_1c = 0;
      local_20 = 0;
      local_24 = 0;
      local_28 = 0xaf1376;
      FUN_00a8caf0();
    }
    local_1c = 0x3f800000;
    local_20 = 0xaf1389;
    FUN_00ac80a0();
    return;
  case 6:
    DebrisLeaveSignalContext();
    return;
  case 7:
    if ((float)param_1[0x7fa] <= 0.0) {
      iVar8 = FUN_00a81330();
      if (((iVar8 != 0) && (iVar8 = FUN_00a7c8a0(), iVar8 != 0)) &&
         (iVar8 = FUN_00a7c8a0(), iVar8 != 0)) {
        *(undefined4 *)(iVar8 + 0xd90) = 1;
      }
      iVar8 = FUN_00a81330();
      if (((iVar8 != 0) && (iVar8 = FUN_00a7c8a0(), iVar8 != 0)) &&
         (iVar8 = FUN_00a7c8a0(), iVar8 != 0)) {
        *(undefined4 *)(iVar8 + 0xd90) = 1;
      }
      iVar8 = FUN_00a81330();
      if (((iVar8 != 0) && (iVar8 = FUN_00a7c8a0(), iVar8 != 0)) &&
         (iVar8 = FUN_00a7c8a0(), iVar8 != 0)) {
        *(undefined4 *)(iVar8 + 0xd90) = 1;
      }
      iVar8 = FUN_00a81330();
      if (((iVar8 != 0) && (iVar8 = FUN_00a7c8a0(), iVar8 != 0)) &&
         (iVar8 = FUN_00a7c8a0(), iVar8 != 0)) {
        *(undefined4 *)(iVar8 + 0xd90) = 1;
      }
    }
    if (param_1[0x187] == 0) {
      param_1[0x249] = 0x3f666666;
      sVar5 = FUN_00dde2d0();
      if (sVar5 == 1) {
        param_1[0x249] = 0x3f99999a;
      }
      local_1c = 0xaf17a2;
      FUN_00a9f4c0();
      local_1c = 0;
      local_20 = 0;
      local_24 = 0;
      local_28 = 0xffffffff;
      uStack_2c = 0xaf17c4;
      FUN_00a9f600();
      local_1c = 0;
      local_20 = 0;
      local_24 = 0;
      local_28 = 0xffffffff;
      uStack_2c = 0xaf17e5;
      FUN_00a9f600();
      FUN_00a96030();
      param_1[0x187] = param_1[0x187] + 1;
      param_1[0x248] = 0x3fc00000;
      if (param_1[0x743] == 1) {
        param_1[0x248] = 0x3f800000;
      }
    }
    else if (param_1[0x187] != 1) goto LAB_00af1856;
    FUN_00aecfe0();
    FUN_00ac80a0();
    iVar8 = FUN_00a94ce0();
    if (iVar8 != 0) {
      local_1c = 0xaf1856;
      FUN_00a8caf0();
    }
LAB_00af1856:
    if (((param_1[0x2a1] != 0) && (iVar8 = FUN_00a8c760(), iVar8 != 0)) &&
       (fVar2 = (float)param_1[0x2a4], !NAN(fVar2) && 400.0 < fVar2 != (fVar2 == 400.0))) {
      FUN_00a8e880();
      local_1c = 0xaf18c2;
      (**(code **)(*param_1 + 0x308))();
    }
    return;
  case 8:
    if ((float)param_1[0x7fa] <= 0.0) {
      iVar8 = FUN_00a81330();
      if (((iVar8 != 0) && (iVar8 = FUN_00a7c8a0(), iVar8 != 0)) &&
         (iVar8 = FUN_00a7c8a0(), iVar8 != 0)) {
        *(undefined4 *)(iVar8 + 0xd90) = 1;
      }
      iVar8 = FUN_00a81330();
      if (((iVar8 != 0) && (iVar8 = FUN_00a7c8a0(), iVar8 != 0)) &&
         (iVar8 = FUN_00a7c8a0(), iVar8 != 0)) {
        *(undefined4 *)(iVar8 + 0xd90) = 1;
      }
      iVar8 = FUN_00a81330();
      if (((iVar8 != 0) && (iVar8 = FUN_00a7c8a0(), iVar8 != 0)) &&
         (iVar8 = FUN_00a7c8a0(), iVar8 != 0)) {
        *(undefined4 *)(iVar8 + 0xd90) = 1;
      }
      iVar8 = FUN_00a81330();
      if (((iVar8 != 0) && (iVar8 = FUN_00a7c8a0(), iVar8 != 0)) &&
         (iVar8 = FUN_00a7c8a0(), iVar8 != 0)) {
        *(undefined4 *)(iVar8 + 0xd90) = 1;
      }
    }
    if (param_1[0x187] == 0) {
      param_1[0x249] = 0x3f666666;
      sVar5 = FUN_00dde2d0();
      if (sVar5 == 1) {
        param_1[0x249] = 0x3f99999a;
      }
      local_1c = 0xaf1a02;
      FUN_00a9f4c0();
      local_1c = 0;
      local_20 = 0;
      local_24 = 0;
      local_28 = 0xffffffff;
      uStack_2c = 0xaf1a24;
      FUN_00a9f600();
      local_1c = 0;
      local_20 = 0;
      local_24 = 0;
      local_28 = 0xffffffff;
      uStack_2c = 0xaf1a45;
      FUN_00a9f600();
      FUN_00a96030();
      param_1[0x187] = param_1[0x187] + 1;
      param_1[0x248] = 0x3fc00000;
      if (param_1[0x743] == 1) {
        param_1[0x248] = 0x3f800000;
      }
    }
    else if (param_1[0x187] != 1) goto LAB_00af1ab6;
    FUN_00aecfe0();
    FUN_00ac80a0();
    iVar8 = FUN_00a94ce0();
    if (iVar8 != 0) {
      local_1c = 0xaf1ab6;
      FUN_00a8caf0();
    }
LAB_00af1ab6:
    if (((param_1[0x2a1] != 0) && (iVar8 = FUN_00a8c760(), iVar8 != 0)) &&
       (fVar2 = (float)param_1[0x2a4], !NAN(fVar2) && 400.0 < fVar2 != (fVar2 == 400.0))) {
      FUN_00a8e880();
      local_1c = 0xaf1b22;
      (**(code **)(*param_1 + 0x308))();
    }
    return;
  case 9:
    if ((float)param_1[0x7fa] <= 0.0) {
      iVar8 = FUN_00a81330();
      if (((iVar8 != 0) && (iVar8 = FUN_00a7c8a0(), iVar8 != 0)) &&
         (iVar8 = FUN_00a7c8a0(), iVar8 != 0)) {
        *(undefined4 *)(iVar8 + 0xd90) = 1;
      }
      iVar8 = FUN_00a81330();
      if (((iVar8 != 0) && (iVar8 = FUN_00a7c8a0(), iVar8 != 0)) &&
         (iVar8 = FUN_00a7c8a0(), iVar8 != 0)) {
        *(undefined4 *)(iVar8 + 0xd90) = 1;
      }
      iVar8 = FUN_00a81330();
      if (((iVar8 != 0) && (iVar8 = FUN_00a7c8a0(), iVar8 != 0)) &&
         (iVar8 = FUN_00a7c8a0(), iVar8 != 0)) {
        *(undefined4 *)(iVar8 + 0xd90) = 1;
      }
      iVar8 = FUN_00a81330();
      if (((iVar8 != 0) && (iVar8 = FUN_00a7c8a0(), iVar8 != 0)) &&
         (iVar8 = FUN_00a7c8a0(), iVar8 != 0)) {
        *(undefined4 *)(iVar8 + 0xd90) = 1;
      }
    }
    if (param_1[0x187] == 0) {
      param_1[0x249] = 0x3f666666;
      sVar5 = FUN_00dde2d0();
      if (sVar5 == 1) {
        param_1[0x249] = 0x3f99999a;
      }
      local_1c = 0xaf1c62;
      FUN_00a9f4c0();
      local_1c = 0;
      local_20 = 0;
      local_24 = 0;
      local_28 = 0xffffffff;
      uStack_2c = 0xaf1c84;
      FUN_00a9f600();
      local_1c = 0;
      local_20 = 0;
      local_24 = 0;
      local_28 = 0xffffffff;
      uStack_2c = 0xaf1ca5;
      FUN_00a9f600();
      FUN_00a96030();
      param_1[0x187] = param_1[0x187] + 1;
      param_1[0x248] = 0x3fc00000;
      if (param_1[0x743] == 1) {
        param_1[0x248] = 0x3f800000;
      }
    }
    else if (param_1[0x187] != 1) goto LAB_00af1d16;
    FUN_00aecfe0();
    FUN_00ac80a0();
    iVar8 = FUN_00a94ce0();
    if (iVar8 != 0) {
      local_1c = 0xaf1d16;
      FUN_00a8caf0();
    }
LAB_00af1d16:
    if (((param_1[0x2a1] != 0) && (iVar8 = FUN_00a8c760(), iVar8 != 0)) &&
       (fVar2 = (float)param_1[0x2a4], !NAN(fVar2) && 400.0 < fVar2 != (fVar2 == 400.0))) {
      FUN_00a8e880();
      local_1c = 0xaf1d82;
      (**(code **)(*param_1 + 0x308))();
    }
    return;
  case 10:
    if ((float)param_1[0x7fa] <= 0.0) {
      iVar8 = FUN_00a81330();
      if (((iVar8 != 0) && (iVar8 = FUN_00a7c8a0(), iVar8 != 0)) &&
         (iVar8 = FUN_00a7c8a0(), iVar8 != 0)) {
        *(undefined4 *)(iVar8 + 0xd90) = 1;
      }
      iVar8 = FUN_00a81330();
      if (((iVar8 != 0) && (iVar8 = FUN_00a7c8a0(), iVar8 != 0)) &&
         (iVar8 = FUN_00a7c8a0(), iVar8 != 0)) {
        *(undefined4 *)(iVar8 + 0xd90) = 1;
      }
      iVar8 = FUN_00a81330();
      if (((iVar8 != 0) && (iVar8 = FUN_00a7c8a0(), iVar8 != 0)) &&
         (iVar8 = FUN_00a7c8a0(), iVar8 != 0)) {
        *(undefined4 *)(iVar8 + 0xd90) = 1;
      }
      iVar8 = FUN_00a81330();
      if (((iVar8 != 0) && (iVar8 = FUN_00a7c8a0(), iVar8 != 0)) &&
         (iVar8 = FUN_00a7c8a0(), iVar8 != 0)) {
        *(undefined4 *)(iVar8 + 0xd90) = 1;
      }
    }
    if (param_1[0x187] == 0) {
      param_1[0x249] = 0x3f666666;
      sVar5 = FUN_00dde2d0();
      if (sVar5 == 1) {
        param_1[0x249] = 0x3f99999a;
      }
      local_1c = 0xaf1ec2;
      FUN_00a9f4c0();
      local_1c = 0;
      local_20 = 0;
      local_24 = 0;
      local_28 = 0xffffffff;
      uStack_2c = 0xaf1ee4;
      FUN_00a9f600();
      local_1c = 0;
      local_20 = 0;
      local_24 = 0;
      local_28 = 0xffffffff;
      uStack_2c = 0xaf1f05;
      FUN_00a9f600();
      FUN_00a96030();
      param_1[0x187] = param_1[0x187] + 1;
      param_1[0x248] = 0x3fc00000;
      if (param_1[0x743] == 1) {
        param_1[0x248] = 0x3f800000;
      }
    }
    else if (param_1[0x187] != 1) goto LAB_00af1f76;
    FUN_00aecfe0();
    FUN_00ac80a0();
    iVar8 = FUN_00a94ce0();
    if (iVar8 != 0) {
      local_1c = 0xaf1f76;
      FUN_00a8caf0();
    }
LAB_00af1f76:
    if (((param_1[0x2a1] != 0) && (iVar8 = FUN_00a8c760(), iVar8 != 0)) &&
       (fVar2 = (float)param_1[0x2a4], !NAN(fVar2) && 400.0 < fVar2 != (fVar2 == 400.0))) {
      FUN_00a8e880();
      local_1c = 0xaf1fe2;
      (**(code **)(*param_1 + 0x308))();
    }
    return;
  case 0xb:
    FUN_00af95f0();
    return;
  case 0xc:
    FUN_00af1ff0();
    return;
  case 0xd:
    if (param_1[0x187] == 0) {
      local_1c = 0;
      local_20 = 8;
      local_24 = 0xaf20f5;
      FUN_00aa4080();
      param_1[0x187] = param_1[0x187] + 1;
      FUN_00aed150();
    }
    else if (param_1[0x187] != 1) {
      return;
    }
    FUN_00ac80a0();
    iVar8 = FUN_00a94ce0();
    if (iVar8 != 0) {
      FUN_00a8caf0();
      param_1[0x375] = 0x45610000;
    }
    return;
  case 0xe:
    if (param_1[0x187] == 0) {
      local_1c = 0;
      local_20 = 0x49;
      local_24 = 0xaf2185;
      FUN_00aa4080();
      param_1[0x187] = param_1[0x187] + 1;
      FUN_00aed150();
    }
    else if (param_1[0x187] != 1) {
      return;
    }
    FUN_00ac80a0();
    iVar8 = FUN_00a94ce0();
    if (iVar8 != 0) {
      FUN_00a8caf0();
      param_1[0x376] = 0x42700000;
      iVar8 = FUN_00ac4780();
      if (iVar8 == 2) {
        param_1[0x376] = 0x41f00000;
      }
      iVar8 = FUN_00ac4780();
      if (2 < iVar8) {
        param_1[0x376] = 0x40c00000;
      }
    }
    return;
  case 0xf:
    if (param_1[0x187] == 0) {
      local_1c = 0;
      local_20 = 0x6f;
      local_24 = 0xaf2245;
      FUN_00aa4080();
      param_1[0x187] = param_1[0x187] + 1;
      FUN_00aed150();
    }
    else if (param_1[0x187] != 1) {
      return;
    }
    FUN_00ac80a0();
    iVar8 = FUN_00a94ce0();
    if (iVar8 != 0) {
      FUN_00a8caf0();
      param_1[0x376] = 0x42700000;
      iVar8 = FUN_00ac4780();
      if (iVar8 == 2) {
        param_1[0x376] = 0x41f00000;
      }
      iVar8 = FUN_00ac4780();
      if (2 < iVar8) {
        param_1[0x376] = 0x40c00000;
      }
    }
    return;
  default:
    return;
  case 0x12:
    FUN_00afdcf0();
    return;
  case 0x13:
    FUN_00afe400();
    return;
  case 0x14:
    FUN_00afeb10();
    return;
  case 0x15:
    FUN_00af22c0();
    return;
  case 0x16:
    FUN_00af2480();
    return;
  case 0x17:
    FUN_00af2b30();
    return;
  case 0x18:
    FUN_00af3100();
    return;
  case 0x19:
    FUN_00af4190();
    return;
  case 0x1a:
    FUN_00af4780();
    return;
  case 0x1b:
  case 0x1c:
    FUN_00af4cd0();
    return;
  case 0x1d:
    FUN_00af52a0();
    return;
  case 0x1e:
    param_1[0x730] = 1;
    param_1[0x556] = 1;
    param_1[0x557] = 1;
    param_1[0x554] = 1;
    param_1[0x377] = 1;
    if (param_1[0x187] == 0) {
      local_1c = 0x3f800000;
      local_20 = 0x3d888889;
      local_24 = 0;
      local_28 = 0x96;
      uStack_2c = 0xaf5e01;
      FUN_00aa4080();
      param_1[0x187] = param_1[0x187] + 1;
      if (param_1[0x550] != 0) {
        FUN_00ad0a90();
      }
      param_1[0x550] = 0;
      FUN_00aed150();
      param_1[0x250] = param_1[0x250] + -1;
      param_1[0x248] = 0;
      param_1[0x7e6] = 0;
    }
    else if (param_1[0x187] != 1) goto LAB_00af6116;
    FUN_00ac80a0();
    local_1c = 0xaf5e71;
    iVar8 = FUN_00a94e10();
    if (iVar8 != 0) {
      local_1c = 0xaf5e9e;
      FUN_00a8de10();
      fVar2 = (float)param_1[0x248] - (float)param_1[0x244] * 0.1;
      param_1[0x248] = (int)fVar2;
      if (fVar2 < 0.0) {
        param_1[0x248] = -0x41000000;
      }
    }
    local_1c = 0xaf5eec;
    iVar8 = FUN_00a94e10();
    if (iVar8 != 0) {
      local_1c = 0xaf5f1d;
      FUN_00a8de10();
      fVar10 = (float10)FUN_00fdc1f0();
      param_1[0x248] = (int)(float)(fVar10 * (float10)(float)param_1[0x248]);
      FUN_00a8e880();
      local_1c = 0x3e4ccccd;
      local_20 = 0xaf5f7d;
      (**(code **)(*param_1 + 0x308))();
    }
    local_1c = 0xaf5f9c;
    iVar8 = FUN_00a94e10();
    if (iVar8 != 0) {
      iVar8 = FUN_00a12210();
      fVar2 = *(float *)(iVar8 + 0x44);
      fVar3 = *(float *)(param_1[0x2a1] + 0x54);
      iVar8 = FUN_00a12210();
      fVar10 = (float10)*(float *)(iVar8 + 0x40) - (float10)*(float *)(param_1[0x2a1] + 0x50);
      fVar11 = (float10)*(float *)(iVar8 + 0x48) - (float10)*(float *)(param_1[0x2a1] + 0x58);
      Var12 = fpatan(SQRT(fVar11 * fVar11 + fVar10 * fVar10),(float10)(fVar2 - fVar3));
      fcos(Var12);
      local_1c = 0xaf6013;
      FUN_00a8de10();
      fVar10 = (float10)FUN_00fdc1f0();
      fVar10 = ((float10)(float)param_1[0x244] * (float10)0.2 + (float10)(float)param_1[0x248]) *
               fVar10;
      param_1[0x248] = (int)(float)fVar10;
      if ((float10)1 < fVar10) {
        param_1[0x248] = (int)(float)(float10)1;
      }
    }
    local_1c = 0xaf6074;
    iVar8 = FUN_00a94e10();
    if (iVar8 != 0) {
      local_1c = 0xaf60a1;
      FUN_00a8de10();
      fVar10 = (float10)FUN_00fdc1f0();
      param_1[0x248] = (int)(float)(fVar10 * (float10)(float)param_1[0x248]);
    }
    iVar8 = FUN_00a94ce0();
    if (iVar8 != 0) {
      local_1c = 0;
      local_20 = 0xaf60da;
      FUN_00a8caf0();
      param_1[0x376] = 0x43340000;
      iVar8 = FUN_00ac4780();
      if (iVar8 == 2) {
        param_1[0x376] = 0x42700000;
      }
      iVar8 = FUN_00ac4780();
      if (2 < iVar8) {
        param_1[0x376] = 0x40c00000;
      }
    }
LAB_00af6116:
    if ((param_1[0x7e4] != 0) && (iVar8 = FUN_00a8c760(), iVar8 != 0)) {
      FUN_00a8e880();
      local_1c = 0x3e4ccccd;
      local_20 = 0xaf616f;
      (**(code **)(*param_1 + 0x308))();
    }
    return;
  case 0x1f:
    FUN_00af9b80();
    return;
  case 0x20:
    FUN_00af9eb0();
    return;
  case 0x21:
    FUN_00aedaa0();
    param_1[0x730] = 1;
    param_1[0x554] = 1;
    switch(param_1[0x187]) {
    case 0:
      FUN_00aa4080(0xa0,0,0x3f000000,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      param_1[0x187] = param_1[0x187] + 1;
      FUN_00aed090();
      uVar14 = 0;
      uVar13 = FUN_00a12210(0x29);
      FUN_00a85150(uVar13,uVar14);
      uVar14 = 0;
      uVar13 = FUN_00a12210(0x2b);
      FUN_00a85150(uVar13,uVar14);
      FUN_00aa4080(0xd7,5,0x3e888889,0x3f800000,0x10,0,0x3f800000);
      FUN_00e01ca0();
      FUN_00dffb30(param_1 + 0x698);
      FUN_00e02d50(param_1,0x1d,local_120);
      if (param_1[0x810] != 0) {
        E3_EnemyBoardDebrisSokushi::vf4C();
      }
      param_1[0x810] = 0;
    case 1:
      FUN_00ac80a0(0x3f800000,0x3f800000);
      iVar8 = FUN_00a94ce0(0);
      if (iVar8 != 0) {
        param_1[0x187] = param_1[0x187] + 1;
      }
      FUN_00a952e0(0,0x42f60000);
      return;
    case 2:
      FUN_00aa4080(0xa1,0,0,0x3f800000,0,0xbf800000,0x3f800000);
      param_1[0x187] = param_1[0x187] + 1;
      param_1[0x248] = 0x44160000;
      FUN_00dc1300(1);
    case 3:
      FUN_00ac80a0(0x3f800000,0x3f800000);
      param_1[0x248] = (int)((float)param_1[0x248] - (float)param_1[0x244]);
      if ((param_1[0x128] == 1) && (iVar8 = FUN_00fdbc60(), param_1[0x21c] <= iVar8)) {
        param_1[0x248] = (int)(float)(extraout_ST0 - (float10)(float)param_1[0x244] * (float10)10.0)
        ;
      }
      if (((param_1[0x750] != 0) || (param_1[0x753] != 0)) || (param_1[0x752] != 0)) {
        param_1[0x248] = (int)((float)param_1[0x248] - 20.0);
      }
      if ((float)param_1[0x248] < 0.0) {
        param_1[0x187] = param_1[0x187] + 1;
        return;
      }
      break;
    case 4:
      FUN_00aa4080(0xa2,0,0x3daaaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      param_1[0x187] = param_1[0x187] + 1;
      FUN_00a94bc0(5,0x3e888889);
      (**(code **)(param_1[0x698] + 8))(0x41200000,0,0);
      if (param_1[0x810] != 0) {
        E3_EnemyBoardDebrisSokushi::vf4C();
      }
      param_1[0x810] = 0;
    case 5:
      FUN_00ac80a0(0x3f800000,0x3f800000);
      iVar8 = FUN_00a94ce0(0);
      if (iVar8 != 0) {
        iVar8 = FUN_00aed900(0xc2200000);
        if (iVar8 == 0) {
          uVar13 = 6;
        }
        else {
          uVar13 = 2;
        }
        FUN_00a8caf0(uVar13,0,0,0);
        param_1[0x376] = 0x42700000;
        iVar8 = FUN_00ac4780();
        if (iVar8 == 2) {
          param_1[0x376] = 0x41f00000;
        }
        iVar8 = FUN_00ac4780();
        if (2 < iVar8) {
          param_1[0x376] = 0x40c00000;
          return;
        }
      }
    }
    return;
  case 0x24:
    FUN_00aecb60();
    return;
  case 0x25:
    param_1[0x730] = 1;
    param_1[0x554] = 1;
    param_1[0x555] = 1;
    param_1[0x553] = 1;
    iVar8 = FUN_00a81330();
    if ((iVar8 != 0) && (piVar6 = (int *)FUN_00a7c8a0(), piVar6 != (int *)0x0)) {
      (**(code **)(*piVar6 + 4))();
      FUN_00dd6d80();
    }
    break;
  case 0x26:
    FUN_00af6180();
    return;
  case 0x27:
    FUN_00af6240();
    return;
  case 0x28:
  case 0x29:
    FUN_00af63a0();
    return;
  case 0x2a:
    FUN_00af6520();
    return;
  case 0x2d:
    iVar8 = param_1[0x187];
    if (iVar8 == 0) {
      local_1c = 0x8000000;
      local_20 = 0x3f800000;
      local_24 = 0x3e888889;
      local_28 = 0;
      uStack_2c = 0xaa;
      uStack_30 = 0xaf6880;
      FUN_00aa4080();
      param_1[0x187] = param_1[0x187] + 1;
      FUN_00aed150();
      FUN_00a937e0();
      if ((param_1[0x742] == 0) && (iVar8 = 0, 0 < (short)param_1[0xc9])) {
        iVar9 = 0;
        do {
          iVar4 = param_1[200];
          if (*(int *)(*(int *)(iVar4 + 0x60 + iVar9) + 0x40) != 0) {
            local_1c = 0xaf68cc;
            iVar7 = FUN_00fdbbd0();
            if (iVar7 != 0) {
              puVar1 = (uint *)(iVar4 + 0x38 + iVar9);
              *puVar1 = *puVar1 | 1;
            }
          }
          iVar8 = iVar8 + 1;
          iVar9 = iVar9 + 0x70;
        } while (iVar8 < (short)param_1[0xc9]);
      }
      if ((param_1[0x741] == 0) && (iVar8 = 0, 0 < (short)param_1[0xc9])) {
        iVar9 = 0;
        do {
          iVar4 = param_1[200];
          if (*(int *)(*(int *)(iVar4 + 0x60 + iVar9) + 0x40) != 0) {
            local_1c = 0xaf691c;
            iVar7 = FUN_00fdbbd0();
            if (iVar7 != 0) {
              puVar1 = (uint *)(iVar4 + 0x38 + iVar9);
              *puVar1 = *puVar1 | 1;
            }
          }
          iVar8 = iVar8 + 1;
          iVar9 = iVar9 + 0x70;
        } while (iVar8 < (short)param_1[0xc9]);
      }
      local_1c = 0xaf694a;
      FUN_00c4d1a0();
    }
    else if (iVar8 != 1) {
      if (iVar8 != 2) {
        return;
      }
      param_1[0x187] = 3;
      return;
    }
    FUN_00ac80a0();
    iVar8 = FUN_00a94ce0();
    if (iVar8 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
      param_1[0x1af] = 1;
    }
    return;
  case 0x2f:
    FUN_00b00770();
    return;
  case 0x32:
  case 0x33:
  case 0x34:
  case 0x35:
    FUN_00afb7a0();
    return;
  case 0x36:
    FUN_00af6980();
    return;
  }
  switch(param_1[0x187]) {
  case 0:
    local_1c = 0;
    local_20 = 0;
    local_24 = 0xb6;
    local_28 = 0xaece28;
    FUN_00aa4080();
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x248] = 0x43340000;
    param_1[0x249] = 0;
  case 1:
    fVar2 = (float)param_1[0x248];
    param_1[0x248] = (int)(fVar2 - (float)param_1[0x244]);
    param_1[0x249] = (int)((float)param_1[0x249] + (float)param_1[0x244]);
    if (fVar2 - (float)param_1[0x244] < 0.0) {
      param_1[0x187] = param_1[0x187] + 1;
    }
    FUN_00ac80a0();
    return;
  case 2:
    local_1c = 0x3e088889;
    local_20 = 0;
    local_24 = 0xb7;
    local_28 = 0xaecec2;
    FUN_00aa4080();
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x249] = 0;
    break;
  case 3:
    break;
  default:
    goto switchD_00aecdf3_default;
  }
  param_1[0x249] = (int)((float)param_1[0x244] + (float)param_1[0x249]);
  FUN_00ac80a0();
  iVar8 = FUN_00a94ce0();
  if (iVar8 != 0) {
    local_1c = 0xaecf15;
    FUN_00a8caf0();
    param_1[0x376] = 0x42700000;
    iVar8 = FUN_00ac4780();
    if (iVar8 == 2) {
      param_1[0x376] = 0x41f00000;
    }
    iVar8 = FUN_00ac4780();
    if (2 < iVar8) {
      param_1[0x376] = 0x40c00000;
    }
  }
  if (30.0 < (float)param_1[0x249]) {
    local_1c = 0xaecf6f;
    FUN_00ae93c0();
    return;
  }
switchD_00aecdf3_default:
  return;
}

