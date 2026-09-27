// src/effect/et0010/Et0010.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 005CFBA0..00AB7EC0, 31 functions

#include "types.h"

// 005CFBA0  FUN_005cfba0  size=108  [callgraph]
void __fastcall FUN_005cfba0(int param_1)

{
  float fVar1;
  float fVar2;
  int *piVar3;
  int iVar4;
  
  piVar3 = (int *)FUN_00c13920();
  iVar4 = (**(code **)(*piVar3 + 0x28))(0);
  if (iVar4 != 0) {
    iVar4 = FUN_00a7c8a0();
    fVar1 = *(float *)(iVar4 + 0x48);
    fVar2 = *(float *)(iVar4 + 0x4c);
    *(float *)(param_1 + 0x50) =
         (*(float *)(param_1 + 0x50) - *(float *)(param_1 + 0x50)) * 0.01 +
         *(float *)(param_1 + 0x50);
    *(float *)(param_1 + 0x54) =
         (*(float *)(param_1 + 0x54) - *(float *)(param_1 + 0x54)) * 0.01 +
         *(float *)(param_1 + 0x54);
    *(float *)(param_1 + 0x58) =
         ((fVar1 - 15.0) - *(float *)(param_1 + 0x58)) * 0.01 + *(float *)(param_1 + 0x58);
    *(float *)(param_1 + 0x5c) =
         (fVar2 - *(float *)(param_1 + 0x5c)) * 0.01 + *(float *)(param_1 + 0x5c);
  }
  return;
}

// 005CFC20  Et0010::vf268  size=55  [class]
undefined4 __thiscall Et0010::vf268(int param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  int iVar1;
  
  if (*param_4 == 6) {
    *(undefined4 *)(param_1 + 0xdd8) = 1;
    iVar1 = param_4[0xb];
    if (iVar1 == -1) {
      iVar1 = (int)*(short *)(param_1 + 0xe22);
    }
    *(int *)(param_1 + 0xe14) = iVar1;
    *(undefined4 *)(param_1 + 0xddc) = 0;
  }
  return 0;
}

// 005CFC60  FUN_005cfc60  size=165  [between]
void __fastcall FUN_005cfc60(int *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  undefined4 local_20;
  undefined4 local_1c;
  float local_18;
  
  iVar4 = FUN_00a7f600(0xf0107);
  if (iVar4 != 0) {
    FUN_00a7c8a0();
    FUN_00a7c8a0();
    iVar4 = FUN_00a7c8a0();
    fVar1 = (float)param_1[0x10] - *(float *)(iVar4 + 0x40);
    fVar3 = (float)param_1[0x11] - *(float *)(iVar4 + 0x44);
    fVar2 = (float)param_1[0x12] - *(float *)(iVar4 + 0x48);
    local_18 = SQRT(fVar1 * fVar1 + fVar3 * fVar3 + fVar2 * fVar2);
    fVar1 = 0.2;
    if ((0.2 < local_18) || (fVar1 = -0.2, local_18 < -0.2)) {
      local_18 = fVar1;
    }
    local_20 = 0;
    local_1c = 0;
    (**(code **)(*param_1 + 0x70))(&local_20);
  }
  return;
}

// 005CFD10  FUN_005cfd10  size=38  [between]
void __fastcall FUN_005cfd10(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0xdd0) == 0) {
    uVar1 = FUN_00e5e0c0("et0010_se_mov_hovering",param_1,0xffffffff,0);
    *(undefined4 *)(param_1 + 0xdd0) = uVar1;
  }
  return;
}

// 005CFD40  FUN_005cfd40  size=44  [between]
void __fastcall FUN_005cfd40(int param_1)

{
  if (*(int *)(param_1 + 0xdd0) != 0) {
    FUN_00e5ca30(*(int *)(param_1 + 0xdd0),0x40400000);
    *(undefined4 *)(param_1 + 0xdd0) = 0;
  }
  return;
}

// 005CFD70  FUN_005cfd70  size=34  [between]
void FUN_005cfd70(void)

{
  int iVar1;
  
  iVar1 = FUN_00a8cab0();
  if (iVar1 == 0) {
    FUN_005cfba0();
    return;
  }
  if (iVar1 == 1) {
    FUN_005cfc60();
    return;
  }
  return;
}

// 005CFDA0  Et0010::vf44  size=135  [class]
void __fastcall Et0010::vf44(int param_1)

{
  int iVar1;
  
  FUN_00a92ef0();
  if (*(int *)(param_1 + 0x7b0) != 0) {
    HkRemovePhysicsSystem::HkRemovePhysicsSystem();
    if (*(int **)(param_1 + 0x7b0) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0x7b0) + 4))(1);
      *(undefined4 *)(param_1 + 0x7b0) = 0;
    }
  }
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    FUN_00a805f0();
  }
  FUN_00a97d20();
  FUN_00a944d0();
  if (*(int *)(param_1 + 0xdd0) != 0) {
    FUN_00e5ca30(*(int *)(param_1 + 0xdd0),0x40400000);
    *(undefined4 *)(param_1 + 0xdd0) = 0;
  }
  BehaviorEmBase::vf44();
  return;
}

// 005CFE30  Et0010::vf50  size=33  [class]
void __fastcall Et0010::vf50(int param_1)

{
  BehaviorEmBase::vf50();
  FUN_00a93170();
  if (*(int *)(param_1 + 0x7b0) != 0) {
    FUN_008f3cb0(param_1);
  }
  return;
}

// 005CFE60  FUN_005cfe60  size=107  [between]
void __fastcall FUN_005cfe60(int param_1)

{
  int iVar1;
  float10 fVar2;
  
  iVar1 = FUN_00a12210(1);
  if (iVar1 != 0) {
    fVar2 = (float10)FUN_00ddba30(*(float *)(param_1 + 0xdc4) + *(float *)(param_1 + 0xdc0));
    *(float *)(param_1 + 0xdc4) = (float)fVar2;
    *(float *)(iVar1 + 0x94) = (float)fVar2;
  }
  iVar1 = FUN_00a12210(3);
  if (iVar1 != 0) {
    fVar2 = (float10)FUN_00ddba30(*(float *)(param_1 + 0xdcc) + *(float *)(param_1 + 0xdc8));
    *(float *)(param_1 + 0xdcc) = (float)fVar2;
    *(float *)(iVar1 + 0x90) = (float)fVar2;
  }
  return;
}

// 005CFED0  Et0010::vf26C  size=183  [class]
undefined4 __thiscall Et0010::vf26C(int *param_1,uint param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  float *pfVar2;
  float10 fVar3;
  undefined4 local_20 [7];
  
  local_20[0] = 0;
  local_20[1] = 0x3f4ccccd;
  local_20[2] = 0xbf4ccccd;
  local_20[0] = local_20[param_2 & 3];
  local_20[1] = 0xbe99999a;
  pfVar2 = (float *)(param_4 + 0x50);
  local_20[2] = 0xc0e9999a;
  D3DXVec3TransformNormal(pfVar2,local_20,param_1 + 4);
  *pfVar2 = *pfVar2 + (float)param_1[0x10];
  *(float *)(param_4 + 0x54) = (float)param_1[0x11] + *(float *)(param_4 + 0x54);
  *(float *)(param_4 + 0x58) = (float)param_1[0x12] + *(float *)(param_4 + 0x58);
  *(undefined4 *)(param_4 + 0x5c) = 0;
  iVar1 = (**(code **)(*param_1 + 0x84))();
  fVar3 = (float10)FUN_00ddba30(*(float *)(iVar1 + 4) + 3.1415927);
  *(float *)(param_4 + 0x60) = (float)fVar3;
  *(undefined4 *)(param_4 + 100) = 0;
  return 1;
}

// 005CFFA0  FUN_005cffa0  size=161  [between]
void __fastcall FUN_005cffa0(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0xdd4) == 0) {
    iVar1 = FUN_00a94ce0(1);
    if (iVar1 != 0) {
      FUN_00a9e290(&DAT_0163bbb8,1,0,0x3f800000,0,0xbf800000,0x3f800000);
      *(undefined4 *)(param_1 + 0xdd4) = 1;
    }
  }
  else if (*(int *)(param_1 + 0xdd4) == 2) {
    iVar1 = FUN_00a94ce0(1);
    if (iVar1 != 0) {
      FUN_00a9e290(&DAT_01643658,1,0,0x3f800000,0,0xbf800000,0x3f800000);
      *(undefined4 *)(param_1 + 0xdd4) = 3;
      return;
    }
  }
  return;
}

// 005D0070  Et0010::vf34C  size=14  [class]
void Et0010::vf34C(void)

{
  FUN_00a8caf0(0,0,0,0);
  return;
}

// 005D00A0  FUN_005d00a0  size=68  [between]
void __fastcall FUN_005d00a0(int param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = FUN_00ca02e0(*(int *)(param_1 + 0xa84) + 0x40);
  *(uint *)(param_1 + 0xe10) = uVar1;
  if (uVar1 != 0xffffffff) {
    if (**(int **)(param_1 + 0x808) == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(**(int **)(param_1 + 0x808) + 8);
    }
    if (uVar1 < iVar2 - 1U) {
      *(uint *)(param_1 + 0xe10) = uVar1 + 1;
    }
  }
  return;
}

// 005D00F0  FUN_005d00f0  size=150  [between]
float10 __thiscall FUN_005d00f0(int param_1,undefined4 param_2,float param_3,float param_4)

{
  float10 fVar1;
  float10 fVar2;
  float10 fVar3;
  
  fVar1 = (float10)FUN_00a8ec30(param_2);
  if (param_3 != 0.0) {
    fVar2 = (float10)FUN_00ddba30((float)(fVar1 - (float10)*(float *)(param_1 + 0x94)));
    fVar2 = fVar2 * (float10)param_3 * (float10)*(float *)(param_1 + 0x910);
    fVar3 = (float10)param_4;
    if (fVar2 <= -fVar3) {
      fVar2 = -fVar3;
    }
    if (fVar3 < fVar2) {
      fVar2 = fVar3;
    }
    fVar2 = (float10)FUN_00ddba30((float)(fVar2 + (float10)*(float *)(param_1 + 0x94)));
    *(float *)(param_1 + 0x94) = (float)fVar2;
    fVar1 = (float10)(float)fVar1;
  }
  fVar1 = (float10)FUN_00ddba30((float)((float10)*(float *)(param_1 + 0x94) - fVar1));
  return ABS(fVar1);
}

// 005D0200  FUN_005d0200  size=52  [between]
float10 __fastcall FUN_005d0200(int param_1)

{
  float10 fVar1;
  
  if (*(int *)(param_1 + 0xa84) != 0) {
    fVar1 = (float10)FUN_00a8ec30(*(int *)(param_1 + 0xa84) + 0x40);
    fVar1 = (float10)FUN_00ddba30((float)((float10)*(float *)(param_1 + 0x94) - fVar1));
    return ABS(fVar1);
  }
  return (float10)6.2831855;
}

// 005D0240  FUN_005d0240  size=123  [between]
void __fastcall FUN_005d0240(int param_1)

{
  uint uVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x61c) != 0) {
    if (*(int *)(param_1 + 0x808) != 0) {
      FUN_005d00a0();
      uVar1 = *(uint *)(*(int *)(param_1 + 0x808) + 4);
      if ((uVar1 < *(uint *)(param_1 + 0xe10)) && (iVar2 = FUN_00a8d820(), uVar1 < iVar2 - 1U)) {
        FUN_00a8caf0(1,0,0,0);
        return;
      }
    }
    if ((*(int *)(param_1 + 0xdd8) != 0) && (*(int *)(param_1 + 0xddc) == 0)) {
      FUN_00c9dbe0(4);
      FUN_00a8caf0(3,0,0,0);
    }
  }
  return;
}

// 005D0330  FUN_005d0330  size=380  [between]
undefined4 __fastcall FUN_005d0330(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int local_4;
  
  local_4 = param_1;
  iVar1 = lib::StaticArray<Constraints,32>::StaticArray<Constraints,32>();
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = FUN_00a82090("Et0011",0x40011,0);
  if (iVar1 != 0) {
    uVar2 = FUN_00a7c7f0();
    FUN_00a7c960(uVar2);
    FUN_00a8c5f0(0,*(undefined4 *)(param_1 + 0x4f0),iVar1,0xffffffff,0xffffffff);
  }
  FUN_00a94bc0(0,0);
  *(undefined4 *)(param_1 + 0xdd4) = 3;
  FUN_00a9e290(&DAT_01643658,1,0,0x3f800000,0,0xbf800000,0x3f800000);
  *(undefined4 *)(param_1 + 0xdd8) = 0;
  *(undefined4 *)(param_1 + 0xddc) = 0;
  local_4 = 0;
  iVar1 = FUN_00a54ae0(&local_4,param_1 + 0x494,"_col.hkx");
  if (iVar1 != 0) {
    iVar3 = FUN_00dd3500(0x3c,&DAT_01b7bd48);
    if (iVar3 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = RigidBodyCollection::RigidBodyCollection_2();
    }
    *(int *)(param_1 + 0x7b0) = iVar3;
    if (iVar3 != 0) {
      FUN_008f6410(*(undefined4 *)(param_1 + 0x4f0),iVar1,local_4);
      FUN_008f2cd0(1);
      (**(code **)(**(int **)(param_1 + 0x7b0) + 0xdc))(0);
    }
  }
  iVar1 = FUN_00aa0ba0(*(undefined4 *)(param_1 + 0xe78),*(undefined4 *)(param_1 + 0xf0c));
  if (iVar1 != 0) {
    uVar2 = FUN_00a8d730(param_1 + 0x40);
    *(undefined4 *)(param_1 + 0xe10) = uVar2;
    FUN_00a8d6f0(uVar2);
    FUN_00a8caf0(1,0,0,0);
  }
  return 1;
}

// 005D04E0  FUN_005d04e0  size=67  [between]
void __fastcall FUN_005d04e0(int param_1)

{
  if (*(int *)(param_1 + 0xdd4) == 3) {
    *(undefined4 *)(param_1 + 0xdd4) = 0;
    FUN_00a9e290(&DAT_0163b604,1,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
  }
  return;
}

// 005D0530  FUN_005d0530  size=67  [between]
void __fastcall FUN_005d0530(int param_1)

{
  if (*(int *)(param_1 + 0xdd4) == 1) {
    *(undefined4 *)(param_1 + 0xdd4) = 2;
    FUN_00a9e290(&DAT_0163b5e8,1,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
  }
  return;
}

// 005D0580  FUN_005d0580  size=551  [between]
undefined4 __thiscall FUN_005d0580(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  float fVar1;
  float fVar2;
  int iVar3;
  undefined4 uVar4;
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
  
  FUN_00a8d790(&local_3c);
  uVar4 = 0;
  if (param_2 == 0) {
    fVar1 = *(float *)(param_1 + 0xde4) + 0.01;
    *(float *)(param_1 + 0xde4) = fVar1;
    if (!NAN(fVar1) && 0.22 < fVar1 != (fVar1 == 0.22)) {
      *(undefined4 *)(param_1 + 0xde4) = 0x3e6147ae;
      uVar4 = 1;
    }
  }
  else if (param_2 == 1) {
    local_20 = local_3c;
    local_1c = local_38;
    local_18 = local_34;
    local_14 = 0x3f800000;
    FUN_005d00f0(&local_20,param_3,param_4);
  }
  else if (param_2 == 2) {
    fVar1 = *(float *)(param_1 + 0xde4) - 0.01;
    *(float *)(param_1 + 0xde4) = fVar1;
    if (fVar1 < 0.0 != (fVar1 == 0.0)) {
      *(undefined4 *)(param_1 + 0xde4) = 0;
      uVar4 = 1;
    }
  }
  FUN_00a8b8a0(&local_30,*(float *)(param_1 + 0xde4) * *(float *)(param_1 + 0x910) * 0.5);
  *(float *)(param_1 + 0x50) = *(float *)(param_1 + 0x50) + local_30;
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_1 + 0x54);
  *(float *)(param_1 + 0x58) = local_28 + *(float *)(param_1 + 0x58);
  *(float *)(param_1 + 0x5c) = local_24 + *(float *)(param_1 + 0x5c);
  fVar1 = (local_38 - *(float *)(param_1 + 0x54)) * 0.0075;
  fVar2 = 0.03;
  if ((fVar1 <= 0.03) && (fVar2 = fVar1, fVar1 < -0.03)) {
    fVar2 = -0.03;
  }
  *(float *)(param_1 + 0x54) = fVar2 + *(float *)(param_1 + 0x54);
  if (*(int *)(param_1 + 0x620) != 2) {
    local_30 = local_3c - *(float *)(param_1 + 0xe00);
    local_2c = local_38 - *(float *)(param_1 + 0xe04);
    local_28 = local_34 - *(float *)(param_1 + 0xe08);
    local_24 = 1.0;
    fVar1 = local_30 * (local_3c - *(float *)(param_1 + 0x40)) +
            local_2c * (local_38 - *(float *)(param_1 + 0x44)) +
            local_28 * (local_34 - *(float *)(param_1 + 0x48));
    if (fVar1 < 0.0 == (fVar1 == 0.0)) {
      local_2c = 0.0;
      iVar3 = FUN_00a97e60(SQRT(local_28 * local_28 + local_30 * local_30) * 0.25,1);
      if (iVar3 != 0) {
        uVar4 = 1;
      }
      return uVar4;
    }
    FUN_00c9da70();
    return 1;
  }
  return uVar4;
}

// 005D07B0  FUN_005d07b0  size=450  [between]
void __fastcall FUN_005d07b0(int *param_1)

{
  uint uVar1;
  int iVar2;
  int local_c;
  int local_8;
  int local_4;
  
  uVar1 = FUN_00ca02e0(param_1[0x2a1] + 0x40);
  param_1[900] = uVar1;
  if (uVar1 != 0xffffffff) {
    if (*(int *)param_1[0x202] == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(*(int *)param_1[0x202] + 8);
    }
    if (uVar1 < iVar2 - 1U) {
      param_1[900] = uVar1 + 1;
    }
  }
  if (param_1[0x187] == 0) {
    FUN_00ca3140(param_1 + 0x10,0);
    if (*(int *)(param_1[0x202] + 0x18) != 0) {
      FUN_00c9da70();
    }
    param_1[0x380] = param_1[0x10];
    param_1[0x381] = param_1[0x11];
    param_1[0x382] = param_1[0x12];
    param_1[899] = param_1[0x13];
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x188] = 0;
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  iVar2 = param_1[0x188];
  if (iVar2 == 0) {
    iVar2 = FUN_005d0580(0,0x3da3d70a,0x3c8efa35);
    if (iVar2 != 0) {
      param_1[0x188] = param_1[0x188] + 1;
    }
  }
  else if (iVar2 == 1) {
    FUN_00a8d790(&local_c);
    uVar1 = FUN_00a8d800();
    iVar2 = FUN_005d0580(param_1[0x188],0x3da3d70a,0x3c8efa35);
    if (iVar2 != 0) {
      if ((uint)param_1[900] <= uVar1) {
        param_1[0x188] = 2;
      }
      iVar2 = FUN_00a8d820();
      if (uVar1 == iVar2 - 1U) {
        FUN_00c9da60(uVar1);
      }
      param_1[0x380] = local_c;
      param_1[0x381] = local_8;
      param_1[0x382] = local_4;
      param_1[899] = 0x3f800000;
      return;
    }
  }
  else if (iVar2 == 2) {
    iVar2 = FUN_005d0580(2,0x3da3d70a,0x3c8efa35);
    if (iVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x005d08ae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
  }
  return;
}

// 005D0980  FUN_005d0980  size=313  [between]
void __fastcall FUN_005d0980(int *param_1)

{
  float fVar1;
  int iVar2;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  switch(param_1[0x187]) {
  case 0:
    FUN_005d04e0();
    if ((int *)param_1[0x1ec] != (int *)0x0) {
      (**(code **)(*(int *)param_1[0x1ec] + 0xdc))(1);
    }
    param_1[0x187] = param_1[0x187] + 1;
  case 1:
    if (param_1[0x375] == 1) {
      local_18 = 0;
      local_14 = 0;
      local_10 = 0;
      local_c = 0;
      local_8 = 0;
      local_4 = 0;
      FUN_00c186a0(param_1[0x3c3],param_1[0x385],param_1[0x13c],0xffffffff,&local_c,&local_18);
      param_1[0x187] = param_1[0x187] + 1;
      param_1[0x377] = 1;
      return;
    }
    break;
  case 2:
    iVar2 = FUN_00c18eb0(DAT_01d5bad4,(int)*(short *)((int)param_1 + 0xe22));
    if (iVar2 == 0) {
      param_1[0x187] = param_1[0x187] + 1;
      param_1[0x248] = 0x42f00000;
      return;
    }
    break;
  case 3:
    fVar1 = (float)param_1[0x248];
    param_1[0x248] = (int)(fVar1 - (float)param_1[0x244]);
    if (fVar1 - (float)param_1[0x244] <= 0.0) {
      FUN_005d0530();
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    break;
  case 4:
    if (param_1[0x375] == 3) {
      if ((int *)param_1[0x1ec] != (int *)0x0) {
        (**(code **)(*(int *)param_1[0x1ec] + 0xdc))(0);
      }
      (**(code **)(*param_1 + 0x34c))();
    }
  }
  return;
}

// 005D0AD0  FUN_005d0ad0  size=476  [between]
void __fastcall FUN_005d0ad0(int *param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int local_c;
  int local_8;
  int local_4;
  
  uVar2 = FUN_00ca02e0(param_1[0x2a1] + 0x40);
  param_1[900] = uVar2;
  if (uVar2 != 0xffffffff) {
    if (*(int *)param_1[0x202] == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(*(int *)param_1[0x202] + 8);
    }
    if (uVar2 < iVar3 - 1U) {
      param_1[900] = uVar2 + 1;
    }
  }
  if (param_1[0x187] == 0) {
    FUN_00ca3140(param_1 + 0x10,0);
    if (*(int *)(param_1[0x202] + 0x18) != 0) {
      FUN_00c9da70();
    }
    param_1[0x380] = param_1[0x10];
    param_1[0x381] = param_1[0x11];
    param_1[0x382] = param_1[0x12];
    param_1[899] = param_1[0x13];
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x188] = 0;
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  iVar3 = param_1[0x188];
  if (iVar3 == 0) {
    iVar3 = FUN_005d0580(0,0x3da3d70a,0x3c730fc1);
    if (iVar3 != 0) {
      param_1[0x188] = param_1[0x188] + 1;
    }
  }
  else if (iVar3 == 1) {
    FUN_00a8d790(&local_c);
    iVar3 = FUN_00a8d800();
    iVar4 = FUN_005d0580(param_1[0x188],0x3da3d70a,0x3c8efa35);
    if (iVar4 != 0) {
      uVar5 = 4;
      FUN_00c9dab0(4);
      cVar1 = FUN_00c9d9a0(uVar5);
      if (cVar1 != '\0') {
        param_1[0x188] = 2;
      }
      iVar4 = FUN_00a8d820();
      if (iVar3 == iVar4 + -1) {
        FUN_00c9da60(iVar3);
      }
      param_1[0x380] = local_c;
      param_1[0x381] = local_8;
      param_1[0x382] = local_4;
      param_1[899] = 0x3f800000;
      return;
    }
  }
  else if (iVar3 == 2) {
    iVar3 = FUN_005d0580(2,0x3da3d70a,0x3c730fc1);
    if (iVar3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x005d0bce. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
  }
  return;
}

// 005D0CB0  Et0010::vf264  size=132  [class]
undefined4 __thiscall Et0010::vf264(int param_1,undefined4 param_2)

{
  int iVar1;
  
  FUN_0040ac60(param_2);
  if (*(int *)(param_1 + 0x4a0) == 3) {
    iVar1 = FUN_005d0330();
    if (iVar1 == 0) {
      return 0;
    }
  }
  else {
    if (*(int *)(param_1 + 0x4a0) != 1) {
      return 1;
    }
    FUN_00aa0ba0(*(undefined4 *)(param_1 + 0xe78),*(undefined4 *)(param_1 + 0xf0c));
    FUN_00d4af50();
    FUN_0040ac60(param_2);
    if (0 < *(int *)(param_1 + 0xe90)) {
      *(int *)(param_1 + 0xde8) = *(int *)(param_1 + 0xe90);
    }
  }
  return 1;
}

// 005D0D40  Et0010::vf48  size=110  [class]
void __fastcall Et0010::vf48(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  
  BehaviorEmBase::vf48();
  iVar1 = *(int *)(param_1 + 0x63c);
  if (iVar1 != 0) {
    piVar2 = *(int **)(iVar1 + 4);
    if (piVar2 != piVar2 + *(int *)(iVar1 + 8) * 0x10) {
      do {
        if (*piVar2 == 0xc) {
          uVar3 = 0;
LAB_005d0d7b:
          FUN_00a8caf0(uVar3,0,0,0);
        }
        else if (*piVar2 == 0xd) {
          uVar3 = 1;
          goto LAB_005d0d7b;
        }
        piVar2 = piVar2 + 0x10;
      } while (piVar2 != (int *)(*(int *)(*(int *)(param_1 + 0x63c) + 8) * 0x40 +
                                *(int *)(*(int *)(param_1 + 0x63c) + 4)));
    }
    if (*(int *)(*(int *)(param_1 + 0x63c) + 4) != 0) {
      *(undefined4 *)(*(int *)(param_1 + 0x63c) + 8) = 0;
    }
  }
  return;
}

// 005D0E00  FUN_005d0e00  size=129  [between]
void __fastcall FUN_005d0e00(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00ac4770();
  if (iVar1 == 0) {
    switch(*(undefined4 *)(param_1 + 0x618)) {
    case 0:
      FUN_005d0240();
    }
  }
  switch(*(undefined4 *)(param_1 + 0x618)) {
  case 0:
    if (*(int *)(param_1 + 0x61c) == 0) {
      *(undefined4 *)(param_1 + 0x61c) = 1;
    }
    break;
  case 1:
    FUN_005d07b0();
    break;
  case 3:
    FUN_005d0980();
    break;
  case 4:
    FUN_005d0ad0();
  }
  FUN_005cffa0();
  FUN_00ac80a0(0x3f800000,0x3f800000);
  return;
}

// 005D0EB0  Et0010::vf40  size=804  [class]
undefined4 __fastcall Et0010::vf40(int param_1)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  undefined4 uVar6;
  byte *pbVar7;
  int iVar8;
  bool bVar9;
  undefined4 auStack_190 [99];
  
  iVar3 = BehaviorEmBase::vf40();
  if (iVar3 == 0) {
    return 0;
  }
  iVar3 = 0;
  if (0 < *(short *)(param_1 + 0x324)) {
    iVar8 = 0;
    do {
      pbVar4 = *(byte **)(*(int *)(iVar8 + 0x60 + *(int *)(param_1 + 800)) + 0x40);
      if (pbVar4 != (byte *)0x0) {
        pbVar7 = &DAT_016436a4;
        do {
          bVar2 = *pbVar4;
          bVar9 = bVar2 < *pbVar7;
          if (bVar2 != *pbVar7) {
LAB_005d0f30:
            iVar5 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
            goto LAB_005d0f35;
          }
          if (bVar2 == 0) break;
          bVar2 = pbVar4[1];
          bVar9 = bVar2 < pbVar7[1];
          if (bVar2 != pbVar7[1]) goto LAB_005d0f30;
          pbVar4 = pbVar4 + 2;
          pbVar7 = pbVar7 + 2;
        } while (bVar2 != 0);
        iVar5 = 0;
LAB_005d0f35:
        if (iVar5 == 0) {
          puVar1 = (uint *)(iVar8 + *(int *)(param_1 + 800) + 0x38);
          *puVar1 = *puVar1 & 0xfffffffe;
        }
      }
      iVar3 = iVar3 + 1;
      iVar8 = iVar8 + 0x70;
    } while (iVar3 < *(short *)(param_1 + 0x324));
  }
  iVar3 = 0;
  if (0 < *(short *)(param_1 + 0x324)) {
    iVar8 = 0;
    do {
      pbVar4 = *(byte **)(*(int *)(iVar8 + 0x60 + *(int *)(param_1 + 800)) + 0x40);
      if (pbVar4 != (byte *)0x0) {
        pbVar7 = &DAT_01643698;
        do {
          bVar2 = *pbVar4;
          bVar9 = bVar2 < *pbVar7;
          if (bVar2 != *pbVar7) {
LAB_005d0fa0:
            iVar5 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
            goto LAB_005d0fa5;
          }
          if (bVar2 == 0) break;
          bVar2 = pbVar4[1];
          bVar9 = bVar2 < pbVar7[1];
          if (bVar2 != pbVar7[1]) goto LAB_005d0fa0;
          pbVar4 = pbVar4 + 2;
          pbVar7 = pbVar7 + 2;
        } while (bVar2 != 0);
        iVar5 = 0;
LAB_005d0fa5:
        if (iVar5 == 0) {
          puVar1 = (uint *)(iVar8 + *(int *)(param_1 + 800) + 0x38);
          *puVar1 = *puVar1 & 0xfffffffe;
        }
      }
      iVar3 = iVar3 + 1;
      iVar8 = iVar8 + 0x70;
    } while (iVar3 < *(short *)(param_1 + 0x324));
  }
  iVar3 = 0;
  if (0 < *(short *)(param_1 + 0x324)) {
    iVar8 = 0;
    do {
      pbVar4 = *(byte **)(*(int *)(iVar8 + 0x60 + *(int *)(param_1 + 800)) + 0x40);
      if (pbVar4 != (byte *)0x0) {
        pbVar7 = &DAT_0164368c;
        do {
          bVar2 = *pbVar4;
          bVar9 = bVar2 < *pbVar7;
          if (bVar2 != *pbVar7) {
LAB_005d1010:
            iVar5 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
            goto LAB_005d1015;
          }
          if (bVar2 == 0) break;
          bVar2 = pbVar4[1];
          bVar9 = bVar2 < pbVar7[1];
          if (bVar2 != pbVar7[1]) goto LAB_005d1010;
          pbVar4 = pbVar4 + 2;
          pbVar7 = pbVar7 + 2;
        } while (bVar2 != 0);
        iVar5 = 0;
LAB_005d1015:
        if (iVar5 == 0) {
          puVar1 = (uint *)(iVar8 + *(int *)(param_1 + 800) + 0x38);
          *puVar1 = *puVar1 & 0xfffffffe;
        }
      }
      iVar3 = iVar3 + 1;
      iVar8 = iVar8 + 0x70;
    } while (iVar3 < *(short *)(param_1 + 0x324));
  }
  iVar3 = 0;
  if (0 < *(short *)(param_1 + 0x324)) {
    iVar8 = 0;
    do {
      pbVar4 = *(byte **)(*(int *)(iVar8 + 0x60 + *(int *)(param_1 + 800)) + 0x40);
      if (pbVar4 != (byte *)0x0) {
        pbVar7 = &DAT_01643680;
        do {
          bVar2 = *pbVar4;
          bVar9 = bVar2 < *pbVar7;
          if (bVar2 != *pbVar7) {
LAB_005d1080:
            iVar5 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
            goto LAB_005d1085;
          }
          if (bVar2 == 0) break;
          bVar2 = pbVar4[1];
          bVar9 = bVar2 < pbVar7[1];
          if (bVar2 != pbVar7[1]) goto LAB_005d1080;
          pbVar4 = pbVar4 + 2;
          pbVar7 = pbVar7 + 2;
        } while (bVar2 != 0);
        iVar5 = 0;
LAB_005d1085:
        if (iVar5 == 0) {
          puVar1 = (uint *)(iVar8 + *(int *)(param_1 + 800) + 0x38);
          *puVar1 = *puVar1 & 0xfffffffe;
        }
      }
      iVar3 = iVar3 + 1;
      iVar8 = iVar8 + 0x70;
    } while (iVar3 < *(short *)(param_1 + 0x324));
  }
  iVar3 = 0;
  if (0 < *(short *)(param_1 + 0x324)) {
    iVar8 = 0;
    do {
      pbVar4 = *(byte **)(*(int *)(iVar8 + 0x60 + *(int *)(param_1 + 800)) + 0x40);
      if (pbVar4 != (byte *)0x0) {
        pbVar7 = &DAT_01643674;
        do {
          bVar2 = *pbVar4;
          bVar9 = bVar2 < *pbVar7;
          if (bVar2 != *pbVar7) {
LAB_005d10f0:
            iVar5 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
            goto LAB_005d10f5;
          }
          if (bVar2 == 0) break;
          bVar2 = pbVar4[1];
          bVar9 = bVar2 < pbVar7[1];
          if (bVar2 != pbVar7[1]) goto LAB_005d10f0;
          pbVar4 = pbVar4 + 2;
          pbVar7 = pbVar7 + 2;
        } while (bVar2 != 0);
        iVar5 = 0;
LAB_005d10f5:
        if (iVar5 == 0) {
          puVar1 = (uint *)(iVar8 + *(int *)(param_1 + 800) + 0x38);
          *puVar1 = *puVar1 & 0xfffffffe;
        }
      }
      iVar3 = iVar3 + 1;
      iVar8 = iVar8 + 0x70;
    } while (iVar3 < *(short *)(param_1 + 0x324));
  }
  uVar6 = FUN_004039a0(0,param_1,0);
  FUN_00a963e0(uVar6);
  if (*(int *)(param_1 + 0x4a0) != 3) {
    lib::AllocatedArray<Behavior::InstructionContainer>::
    AllocatedArray<Behavior::InstructionContainer>();
    auStack_190[0] = 0xd;
    FUN_00a9d720(auStack_190);
  }
  FUN_00a9e290(&DAT_0163b5f4,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
  *(undefined4 *)(param_1 + 0xdc0) = 0x43fa0000;
  *(undefined4 *)(param_1 + 0xde8) = 1;
  *(undefined4 *)(param_1 + 0xdc4) = 0;
  *(undefined4 *)(param_1 + 0xdc8) = 0x43c80000;
  *(undefined4 *)(param_1 + 0xdcc) = 0;
  if (*(int *)(param_1 + 0xdd0) == 0) {
    uVar6 = FUN_00e5e0c0("et0010_se_mov_hovering",param_1,0xffffffff,0);
    *(undefined4 *)(param_1 + 0xdd0) = uVar6;
  }
  return 1;
}

// 005D11E0  Et0010::vf4C  size=123  [class]
void __fastcall Et0010::vf4C(int param_1)

{
  int iVar1;
  
  BehaviorEmBase::vf4C();
  if (*(int *)(param_1 + 0x4a0) == 3) {
    FUN_005d0e00();
    FUN_005cfe60();
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  if (*(int *)(param_1 + 0x4a0) == 0) {
    iVar1 = FUN_00a8cab0();
    if (iVar1 == 0) {
      FUN_005cfba0();
    }
    else if (iVar1 == 1) {
      FUN_005cfc60();
      FUN_005cfe60();
      return;
    }
  }
  else if (*(int *)(param_1 + 0x4a0) == 1) {
    FUN_00d4af60();
    FUN_005cfe60();
    return;
  }
  FUN_005cfe60();
  return;
}

// 00AAF400  Et0010::Et0010  size=40  [class]
undefined4 * __fastcall Et0010::Et0010(undefined4 *param_1)

{
  BehaviorAppBase::BehaviorAppBase_34();
  *param_1 = vftable;
  FUN_00a7c930();
  FUN_004ec5c0();
  return param_1;
}

// 00AAF430  Et0010::vf04  size=6  [class]
undefined * Et0010::vf04(void)

{
  return &DAT_01b352a4;
}

// 00AB7EC0  Et0010::vf00  size=30  [class]
undefined4 __thiscall Et0010::vf00(undefined4 param_1,byte param_2)

{
  cEnemyCautionStateManager::cEnemyCautionStateManager_3();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

