// src/effect/et002f/Et002f.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 005D1260..00AB8190, 13 functions

#include "mgrr.h"
#include "Et002f.h"

// 005D1260  Et002f::vf44  size=39  [class]
void __fastcall Et002f::vf44(int param_1)

{
  (**(code **)(*(int *)(param_1 + 0xbc0) + 4))();
  FUN_00a5dc60();
  Behavior::vf44();
  return;
}

// 005D1290  Et002f::thunk_vf48  size=5  [class]
void __fastcall Et002f::thunk_vf48(int *param_1)

{
  BehaviorDebrisActor::vf48();
  (**(code **)(*param_1 + 0x328))(0x3f800000);
  return;
}

// 005D12A0  FUN_005d12a0  size=277  [between]
void __fastcall FUN_005d12a0(int param_1)

{
  float10 fVar1;
  
  *(float *)(param_1 + 0x54) = *(float *)(param_1 + 0x54) - *(float *)(param_1 + 0xbb0);
  if (*(int *)(param_1 + 0xb98) == 0) {
    fVar1 = (float10)FUN_00fdc1f0();
    *(float *)(param_1 + 3000) = (float)(fVar1 * (float10)*(float *)(param_1 + 3000));
    *(float *)(param_1 + 0xbbc) = (float)((float10)*(float *)(param_1 + 0xbbc) * fVar1);
    fVar1 = fVar1 * (float10)*(float *)(param_1 + 0xbb0);
  }
  else {
    fVar1 = (float10)*(float *)(param_1 + 0x910) * (float10)0.014835299 +
            (float10)*(float *)(param_1 + 0xbb4);
    *(float *)(param_1 + 0xbb4) = (float)fVar1;
    *(float *)(param_1 + 3000) =
         *(float *)(param_1 + 0x910) * 0.012217305 + *(float *)(param_1 + 3000);
    *(float *)(param_1 + 0xbbc) =
         *(float *)(param_1 + 0x910) * 0.017453292 + *(float *)(param_1 + 0xbbc);
    fVar1 = (float10)fsin(fVar1);
    fVar1 = fVar1 * (float10)0.3;
  }
  *(float *)(param_1 + 0xbb0) = (float)fVar1;
  *(float *)(param_1 + 0x54) = *(float *)(param_1 + 0xbb0) + *(float *)(param_1 + 0x54);
  *(undefined4 *)(param_1 + 0x90) = *(undefined4 *)(param_1 + 0xba0);
  *(undefined4 *)(param_1 + 0x94) = *(undefined4 *)(param_1 + 0xba4);
  *(undefined4 *)(param_1 + 0x98) = *(undefined4 *)(param_1 + 0xba8);
  *(undefined4 *)(param_1 + 0x9c) = *(undefined4 *)(param_1 + 0xbac);
  fVar1 = (float10)fsin((float10)*(float *)(param_1 + 3000));
  *(float *)(param_1 + 0x98) =
       (float)(fVar1 * (float10)0.05235988 + (float10)*(float *)(param_1 + 0x98));
  fVar1 = (float10)fsin((float10)*(float *)(param_1 + 0xbbc));
  *(float *)(param_1 + 0x94) =
       (float)(fVar1 * (float10)0.034906585 + (float10)*(float *)(param_1 + 0x94));
  return;
}

// 005D1440  FUN_005d1440  size=150  [between]
float10 __thiscall FUN_005d1440(int param_1,undefined4 param_2,float param_3,float param_4)

{
  float10 fVar1;
  float10 fVar2;
  float10 fVar3;
  
  fVar1 = (float10)FUN_00a8ec30(param_2);
  if (param_3 != 0.0) {
    fVar2 = (float10)FUN_00ddba30((float)(fVar1 - (float10)*(float *)(param_1 + 0xba4)));
    fVar2 = fVar2 * (float10)param_3 * (float10)*(float *)(param_1 + 0x910);
    fVar3 = (float10)param_4;
    if (fVar2 <= -fVar3) {
      fVar2 = -fVar3;
    }
    if (fVar3 < fVar2) {
      fVar2 = fVar3;
    }
    fVar2 = (float10)FUN_00ddba30((float)(fVar2 + (float10)*(float *)(param_1 + 0xba4)));
    *(float *)(param_1 + 0xba4) = (float)fVar2;
    fVar1 = (float10)(float)fVar1;
  }
  fVar1 = (float10)FUN_00ddba30((float)((float10)*(float *)(param_1 + 0xba4) - fVar1));
  return ABS(fVar1);
}

// 005D1520  Et002f::vf50  size=54  [class]
void __fastcall Et002f::vf50(int param_1)

{
  BehaviorAppBase::vf50();
  if ((((*(char *)(param_1 + 0x470) != '\0') && ((*(byte *)(param_1 + 0x472) & 0x80) != 0)) &&
      (*(char *)(param_1 + 0x471) != '\0')) && (*(int *)(param_1 + 0xb94) != 0)) {
    return;
  }
  FUN_00a93170();
  return;
}

// 005D1560  Et002f::vf264  size=127  [class]
undefined4 __thiscall Et002f::vf264(int param_1,undefined4 param_2)

{
  int iVar1;
  
  FUN_0040ac60(param_2);
  if (*(int *)(param_1 + 0xa74) != -1) {
    iVar1 = FUN_00d46690(*(undefined1 *)(param_1 + 0xa74));
    if (iVar1 != 0) {
      FUN_00a5dcc0(iVar1);
    }
  }
  if ((*(int *)(param_1 + 0x4a0) == 1) || (*(int *)(param_1 + 0x4a0) == 3)) {
    FUN_00aa0ba0(*(undefined4 *)(param_1 + 0xa58),*(undefined4 *)(param_1 + 0xaec));
  }
  if (*(int *)(param_1 + 0x4a0) == 2) {
    *(undefined4 *)(param_1 + 0xb94) = 0;
  }
  return 1;
}

// 005D15E0  Et002f::vf2B4  size=670  [class]
void __fastcall Et002f::vf2B4(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  float10 fVar5;
  float10 fVar6;
  float local_48;
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
  undefined4 local_14;
  
  if (*(int *)(param_1 + 0x61c) == 0) {
    *(undefined4 *)(param_1 + 0xb98) = 0;
    *(undefined4 *)(param_1 + 0x61c) = 1;
  }
  else if (*(int *)(param_1 + 0x61c) != 1) {
    return;
  }
  fVar1 = *(float *)(param_1 + 0xba4);
  FUN_00a8d790(&local_3c);
  local_20 = local_3c;
  local_1c = local_38;
  local_18 = local_34;
  local_14 = 0x3f800000;
  FUN_005d1440(&local_20,0x3c23d70a,0x3c0efa35);
  FUN_00a8b8a0(&local_30,*(float *)(param_1 + 0xd20) * *(float *)(param_1 + 0x910));
  *(float *)(param_1 + 0x50) = *(float *)(param_1 + 0x50) + local_30;
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_1 + 0x54);
  *(float *)(param_1 + 0x58) = local_28 + *(float *)(param_1 + 0x58);
  *(float *)(param_1 + 0x5c) = local_24 + *(float *)(param_1 + 0x5c);
  fVar2 = (local_38 - *(float *)(param_1 + 0x54)) * 0.0075;
  fVar3 = 0.03;
  if ((fVar2 <= 0.03) && (fVar3 = fVar2, fVar2 < -0.03)) {
    fVar3 = -0.03;
  }
  *(float *)(param_1 + 0x54) = fVar3 + *(float *)(param_1 + 0x54);
  local_30 = local_3c - *(float *)(param_1 + 0xb80);
  local_2c = local_38 - *(float *)(param_1 + 0xb84);
  local_28 = local_34 - *(float *)(param_1 + 0xb88);
  local_24 = 1.0;
  if (0.0 < local_2c * (local_38 - *(float *)(param_1 + 0x44)) +
            local_30 * (local_3c - *(float *)(param_1 + 0x40)) +
            local_28 * (local_34 - *(float *)(param_1 + 0x48))) {
    local_2c = 0.0;
    iVar4 = FUN_00a97e60(SQRT(local_30 * local_30 + local_28 * local_28) * 0.5,1);
    if (iVar4 == 0) goto LAB_005d17b2;
  }
  else {
    FUN_00c9da70();
  }
  *(float *)(param_1 + 0xb80) = local_3c;
  *(float *)(param_1 + 0xb84) = local_38;
  *(float *)(param_1 + 0xb88) = local_34;
  *(undefined4 *)(param_1 + 0xb8c) = 0x3f800000;
LAB_005d17b2:
  fVar5 = (float10)*(float *)(param_1 + 0x910) * (float10)0.006981317 +
          (float10)*(float *)(param_1 + 0x920);
  *(float *)(param_1 + 0x920) = (float)fVar5;
  fVar5 = (float10)fsin(fVar5);
  *(float *)(param_1 + 0xb90) = (float)(fVar5 * (float10)0.6981317);
  iVar4 = FUN_00a12210(0);
  if (iVar4 != 0) {
    local_48 = (*(float *)(param_1 + 0xba4) - fVar1) * 190.98593;
    fVar1 = 1.0;
    if ((1.0 < local_48) || (fVar1 = -1.0, local_48 < -1.0)) {
      local_48 = fVar1;
    }
    fVar5 = (float10)FUN_00fdc1f0();
    fVar1 = *(float *)(iVar4 + 0x98);
    fVar6 = (float10)FUN_00ddba30(local_48 * -0.12217305 - fVar1);
    fVar5 = (float10)FUN_00ddba30((float)(((float10)1 - (float10)(float)fVar5) * fVar6 +
                                         (float10)fVar1));
    *(float *)(iVar4 + 0x98) = (float)fVar5;
  }
  return;
}

// 005D1880  FUN_005d1880  size=478  [between]
void __fastcall FUN_005d1880(int *param_1)

{
  float fVar1;
  code *pcVar2;
  int iVar3;
  int unaff_ESI;
  float10 fVar4;
  float10 fVar5;
  int iStack_88;
  int iStack_84;
  undefined1 local_78 [12];
  float local_6c;
  undefined1 auStack_68 [4];
  float local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58 [2];
  undefined1 local_50 [76];
  
  if (param_1[0x187] == 0) {
    iVar3 = FUN_00e5e0c0("et002f_se_mov_hovering",param_1,1,0);
    param_1[0x248] = 0x3ecccccd;
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x249] = 0;
    param_1[0x349] = iVar3;
    param_1[0x34a] = 0x3f800000;
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  fVar1 = (float)param_1[0x248] * (float)param_1[0x244] * (float)param_1[0x34a];
  fVar4 = (float10)FUN_00a581b0(local_78,fVar1,param_1[0x249]);
  param_1[0x249] = (int)(float)fVar4;
  fVar4 = (float10)FUN_00a58f40((float)fVar4);
  fVar5 = (float10)FUN_00fdc1f0();
  param_1[0x34a] =
       (int)(float)(((float10)(float)fVar4 - (float10)(float)param_1[0x34a]) * ((float10)1 - fVar5)
                   + (float10)(float)param_1[0x34a]);
  FUN_00a585a0(&local_6c,fVar1,param_1[0x249]);
  fVar1 = (float)param_1[0x2e9];
  fVar4 = (float10)fpatan((float10)local_6c,(float10)local_64);
  fVar4 = (float10)FUN_00ddba30((float)(fVar4 - (float10)fVar1));
  fVar4 = (float10)FUN_00ddba30((float)(fVar4 * (float10)0.2 + (float10)fVar1));
  param_1[0x2e9] = (int)(float)fVar4;
  local_60 = 0;
  local_5c = 0;
  local_58[0] = 0x40100000;
  D3DXMatrixRotationY(local_50,param_1[0x25]);
  D3DXVec3TransformNormal(auStack_68,auStack_68,local_58);
  param_1[0x14] = unaff_ESI;
  param_1[0x15] = iStack_88;
  param_1[0x16] = iStack_84;
  iVar3 = FUN_00a54a60(param_1[0x249]);
  if (iVar3 != 0) {
    pcVar2 = *(code **)(*param_1 + 0x20);
    param_1[0x187] = param_1[0x187] + 1;
    (*pcVar2)();
    param_1[0x139] = 1;
    FUN_00e5ca30(param_1[0x349],0x40400000);
    FUN_00a805f0();
  }
  return;
}

// 005D1A60  FUN_005d1a60  size=644  [between]
void __fastcall FUN_005d1a60(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  float10 fVar5;
  float10 fVar6;
  float local_48;
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
  undefined4 local_14;
  
  if (*(int *)(param_1 + 0x61c) == 0) {
    *(undefined4 *)(param_1 + 0xb98) = 0;
    *(undefined4 *)(param_1 + 0xd20) = 0x3dcccccd;
    *(undefined4 *)(param_1 + 0x61c) = 1;
  }
  else if (*(int *)(param_1 + 0x61c) != 1) {
    return;
  }
  fVar1 = *(float *)(param_1 + 0xba4);
  FUN_00a8d790(&local_3c);
  local_20 = local_3c;
  local_1c = local_38;
  local_18 = local_34;
  local_14 = 0x3f800000;
  FUN_005d1440(&local_20,0x3c23d70a,0x3c0efa35);
  FUN_00a8b8a0(&local_30,*(float *)(param_1 + 0xd20) * *(float *)(param_1 + 0x910));
  *(float *)(param_1 + 0x50) = *(float *)(param_1 + 0x50) + local_30;
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_1 + 0x54);
  *(float *)(param_1 + 0x58) = local_28 + *(float *)(param_1 + 0x58);
  *(float *)(param_1 + 0x5c) = local_24 + *(float *)(param_1 + 0x5c);
  fVar2 = (local_38 - *(float *)(param_1 + 0x54)) * 0.0075;
  fVar3 = 0.03;
  if ((fVar2 <= 0.03) && (fVar3 = fVar2, fVar2 < -0.03)) {
    fVar3 = -0.03;
  }
  *(float *)(param_1 + 0x54) = fVar3 + *(float *)(param_1 + 0x54);
  local_30 = local_3c - *(float *)(param_1 + 0xb80);
  local_2c = local_38 - *(float *)(param_1 + 0xb84);
  local_28 = local_34 - *(float *)(param_1 + 0xb88);
  local_24 = 1.0;
  if (0.0 < local_2c * (local_38 - *(float *)(param_1 + 0x44)) +
            local_30 * (local_3c - *(float *)(param_1 + 0x40)) +
            local_28 * (local_34 - *(float *)(param_1 + 0x48))) {
    local_2c = 0.0;
    iVar4 = FUN_00a97e60(SQRT(local_30 * local_30 + local_28 * local_28) * 0.25,1);
    if (iVar4 == 0) goto LAB_005d1c3e;
  }
  else {
    FUN_00c9da70();
  }
  *(float *)(param_1 + 0xb80) = local_3c;
  *(float *)(param_1 + 0xb84) = local_38;
  *(float *)(param_1 + 0xb88) = local_34;
  *(undefined4 *)(param_1 + 0xb8c) = 0x3f800000;
LAB_005d1c3e:
  iVar4 = FUN_00a12210(0);
  if (iVar4 != 0) {
    local_48 = (*(float *)(param_1 + 0xba4) - fVar1) * 190.98593;
    fVar1 = 1.0;
    if ((1.0 < local_48) || (fVar1 = -1.0, local_48 < -1.0)) {
      local_48 = fVar1;
    }
    fVar5 = (float10)FUN_00fdc1f0();
    fVar1 = *(float *)(iVar4 + 0x98);
    fVar6 = (float10)FUN_00ddba30(local_48 * -0.12217305 - fVar1);
    fVar5 = (float10)FUN_00ddba30((float)(((float10)1 - (float10)(float)fVar5) * fVar6 +
                                         (float10)fVar1));
    *(float *)(iVar4 + 0x98) = (float)fVar5;
  }
  return;
}

// 005D1CF0  Et002f::vf4C  size=215  [class]
void __fastcall Et002f::vf4C(int *param_1)

{
  float fVar1;
  int iVar2;
  float10 fVar3;
  
  FUN_00a92fb0();
  fVar3 = (float10)FUN_00e049b0();
  param_1[0x244] = (int)(float)fVar3;
  if (((((char)param_1[0x11c] == '\0') || ((*(byte *)((int)param_1 + 0x472) & 0x80) == 0)) ||
      (*(char *)((int)param_1 + 0x471) == '\0')) || (param_1[0x2e5] == 0)) {
    switch(param_1[0x128]) {
    case 1:
      (**(code **)(*param_1 + 0x2b4))();
      break;
    case 2:
      FUN_005d1880();
      break;
    case 3:
      FUN_005d1a60();
    }
    FUN_005d12a0();
    iVar2 = FUN_00a12210(1);
    if (iVar2 != 0) {
      fVar1 = 1.0;
      if ((float)param_1[0x244] < 1.0) {
        fVar1 = (float)param_1[0x244];
      }
      *(float *)(iVar2 + 0x94) = fVar1 + *(float *)(iVar2 + 0x94);
    }
    iVar2 = FUN_00a12210(5);
    if (iVar2 != 0) {
      *(undefined4 *)(iVar2 + 0x90) = 0x3f1c61aa;
      *(int *)(iVar2 + 0x94) = param_1[0x2e4];
    }
  }
  Behavior::vf4C();
  return;
}

// 005D1DE0  Et002f::vf40  size=279  [class]
undefined4 __fastcall Et002f::vf40(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined1 local_120 [284];
  
  iVar1 = BehaviorAppBase::vf40();
  if (iVar1 == 0) {
    return 0;
  }
  *(undefined4 *)(param_1 + 0xb98) = 1;
  *(undefined4 *)(param_1 + 0xba0) = *(undefined4 *)(param_1 + 0x90);
  *(undefined4 *)(param_1 + 0xba4) = *(undefined4 *)(param_1 + 0x94);
  *(undefined4 *)(param_1 + 0xba8) = *(undefined4 *)(param_1 + 0x98);
  *(undefined4 *)(param_1 + 0xbac) = *(undefined4 *)(param_1 + 0x9c);
  *(undefined4 *)(param_1 + 0xb90) = 0;
  *(undefined4 *)(param_1 + 0xbb0) = 0;
  *(undefined4 *)(param_1 + 0xbb4) = 0;
  *(undefined4 *)(param_1 + 3000) = 0;
  *(undefined4 *)(param_1 + 0xbbc) = 0;
  FUN_00e01eb0(param_1 + 0xbc0);
  FUN_00e02d50(param_1,1,local_120);
  FUN_00e02d50(param_1,2,local_120);
  *(undefined4 *)(param_1 + 0xd20) = 0x3d75c28f;
  if ((*(byte *)(param_1 + 0x4a8) & 1) != 0) {
    *(undefined4 *)(param_1 + 0xd20) = 0x3df5c28f;
  }
  if (*(int *)(param_1 + 0x4a4) == 1) {
    FUN_00e01eb0(param_1 + 0xc70);
    FUN_00e02d50(param_1,0x1c,local_120);
  }
  *(undefined4 *)(param_1 + 0xb94) = 1;
  uVar2 = FUN_00932720();
  if ((uVar2 & 0xf00) == 0x300) {
    *(undefined4 *)(param_1 + 0x338) = 5;
  }
  return 1;
}

// 00AAF8A0  Et002f::vf04  size=6  [class]
undefined * Et002f::vf04(void)

{
  return &DAT_01b352a8;
}

// 00AB8190  Et002f::vf00  size=30  [class]
undefined4 __thiscall Et002f::vf00(undefined4 param_1,byte param_2)

{
  Behavior::Behavior_70();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

