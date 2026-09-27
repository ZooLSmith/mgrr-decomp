// src/enemy/em0045/Em0045.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 0043E920..00AB6E00, 13 functions

#include "types.h"

// 0043E920  FUN_0043e920  size=240  [callgraph]
void __fastcall FUN_0043e920(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  undefined4 local_14;
  
  iVar4 = FUN_00a8cac0();
  if (iVar4 == 0) {
    *(undefined4 *)(param_1 + 0x880) = *(undefined4 *)(param_1 + 0x50);
    *(float *)(param_1 + 0x884) = *(float *)(param_1 + 0x54) + 3.0;
    *(undefined4 *)(param_1 + 0x888) = *(undefined4 *)(param_1 + 0x58);
    *(float *)(param_1 + 0x88c) = *(float *)(param_1 + 0x5c) + local_14;
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  }
  else if (iVar4 != 1) {
    return;
  }
  *(float *)(param_1 + 0x50) =
       (*(float *)(param_1 + 0x880) - *(float *)(param_1 + 0x50)) * 0.1 + *(float *)(param_1 + 0x50)
  ;
  *(float *)(param_1 + 0x54) =
       (*(float *)(param_1 + 0x884) - *(float *)(param_1 + 0x54)) * 0.1 + *(float *)(param_1 + 0x54)
  ;
  *(float *)(param_1 + 0x58) =
       (*(float *)(param_1 + 0x888) - *(float *)(param_1 + 0x58)) * 0.1 + *(float *)(param_1 + 0x58)
  ;
  *(float *)(param_1 + 0x5c) =
       (*(float *)(param_1 + 0x88c) - *(float *)(param_1 + 0x5c)) * 0.1 + *(float *)(param_1 + 0x5c)
  ;
  fVar1 = *(float *)(param_1 + 0x50) - *(float *)(param_1 + 0x880);
  fVar3 = *(float *)(param_1 + 0x54) - *(float *)(param_1 + 0x884);
  fVar2 = *(float *)(param_1 + 0x58) - *(float *)(param_1 + 0x888);
  if (SQRT(fVar2 * fVar2 + fVar3 * fVar3 + fVar1 * fVar1) < 0.5) {
    FUN_00a8caf0(1,0,0,0);
  }
  return;
}

// 0043EA10  FUN_0043ea10  size=38  [callgraph]
void FUN_0043ea10(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00a7f290(param_2);
  FUN_00a7c960(uVar1);
  return;
}

// 0043EA40  Em0045::thunk_vf48  size=5  [class]
void __fastcall Em0045::thunk_vf48(int param_1)

{
  float10 fVar1;
  
  *(undefined4 *)(param_1 + 0x64c) = 0;
  if (*(int *)(param_1 + 2000) != 0) {
    if (*(int *)(param_1 + 0x4f0) != 0) {
      FUN_00a7c910();
    }
    fVar1 = (float10)FUN_00e049b0();
    *(float *)(*(int *)(param_1 + 2000) + 8) = (float)(fVar1 * (float10)0.016666668);
  }
  if ((*(int *)(param_1 + 0x7cc) != 0) && (*(int *)(param_1 + 2000) != 0)) {
    FUN_00d82df0(*(int *)(param_1 + 2000));
  }
  if (*(int *)(param_1 + 0x7d8) != 0) {
    thunk_FUN_00c73380();
  }
  *(undefined4 *)(param_1 + 0x860) = 0;
  *(undefined4 *)(param_1 + 0x864) = 0;
  *(undefined4 *)(param_1 + 0x868) = 0;
  *(undefined4 *)(param_1 + 0x86c) = 0x3f800000;
  return;
}

// 0043EA50  Em0045::vf50  size=33  [class]
void __fastcall Em0045::vf50(int param_1)

{
  switchD_0080dbae::default();
  Behavior::vf50();
  if (*(int *)(param_1 + 0x7b0) != 0) {
    FUN_008f3cb0(param_1);
  }
  return;
}

// 0043EA80  Em0045::thunk_vf54  size=5  [class]
void __fastcall Em0045::thunk_vf54(int *param_1)

{
  int iVar1;
  float10 fVar2;
  
  if (((param_1[0x13c] != 0) && (iVar1 = FUN_00a7c890(), iVar1 != 0)) &&
     ((*(byte *)(iVar1 + 0x94) & 1) != 0)) {
    FUN_00e30490();
    FUN_00e304b0();
  }
  if (param_1[0x1f1] != 0) {
    FUN_00a9ccb0();
  }
  if ((param_1[0x1da] != 0) && (iVar1 = (**(code **)(*param_1 + 0x244))(), iVar1 != 0)) {
    if (param_1[0x1db] != 0) {
      if (param_1[0x13c] != 0) {
        FUN_00a7c910();
      }
      fVar2 = (float10)FUN_00e049b0();
      FUN_00a01350((float)fVar2,0);
    }
    if (param_1[0x1dc] != 0) {
      if (param_1[0x13c] != 0) {
        FUN_00a7c910();
      }
      fVar2 = (float10)FUN_00e049b0();
      FUN_00a01350((float)fVar2,0);
    }
  }
  if (param_1[0x1f1] == 0) {
    return;
  }
  FUN_00a9cef0();
  return;
}

// 0043EA90  Em0045::vf1D0  size=67  [class]
void __thiscall Em0045::vf1D0(int param_1,undefined4 param_2)

{
  undefined **local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_8 = 0;
  local_4 = *(undefined4 *)(param_1 + 0x4f0);
  local_c = HoldEntitySignalContext::vftable;
  FUN_00d89e90(0x1d,&local_c);
  FUN_00a8e5d0(param_1,param_2,0);
  return;
}

// 0043EAE0  Em0045::vf40  size=372  [class]
undefined4 __fastcall Em0045::vf40(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  iVar1 = Behavior::startup();
  if (iVar1 == 0) {
    return 0;
  }
  uVar4 = 2;
  FUN_00a92fb0(2);
  FUN_00e08640(uVar4);
  lib::AllocatedArray<Behavior::InstructionContainer>::
  AllocatedArray<Behavior::InstructionContainer>();
  uStack_8 = 0;
  uStack_4 = 0;
  uStack_c = 1;
  iVar1 = lib::StaticArray<Behavior::EffectIntegrationContainer,32>::
          StaticArray<Behavior::EffectIntegrationContainer,32>(&uStack_c);
  if (iVar1 == 0) {
    return 0;
  }
  if (*(undefined4 **)(param_1 + 0x370) != (undefined4 *)0x0) {
    *(uint *)(param_1 + 0x364) = *(uint *)(param_1 + 0x364) | 0x400000;
    **(undefined4 **)(param_1 + 0x370) = 0;
  }
  if (*(int *)(param_1 + 0x370) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x370) + 4) = 0;
    *(undefined4 *)(*(int *)(param_1 + 0x370) + 8) = 1;
  }
  *(undefined4 *)(param_1 + 0x690) = 1;
  *(undefined4 *)(param_1 + 0x890) = 0;
  uStack_10 = 0;
  iVar1 = FUN_00a54ae0(&uStack_10,param_1 + 0x494,"_col.hkx");
  if (iVar1 != 0) {
    iVar2 = FUN_00dd3500(0x3c,&DAT_01b7bd48);
    if (iVar2 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = RigidBodyCollection::RigidBodyCollection_2();
    }
    *(undefined4 *)(param_1 + 0x7b0) = uVar4;
    iVar1 = FUN_008f6410(*(undefined4 *)(param_1 + 0x4f0),iVar1,uStack_10);
    if (iVar1 != 0) {
      FUN_008f2cd0(0);
      (**(code **)(**(int **)(param_1 + 0x7b0) + 0x108))(0xb);
      puVar3 = (undefined4 *)FUN_009f8b60();
      (**(code **)(**(int **)(param_1 + 0x7b0) + 0x114))(*puVar3);
      FUN_008f1600(0x80000000);
      FUN_008f1600(0x20);
      FUN_008f1600(0x4000000);
    }
  }
  FUN_00a8caf0(0,0,0,0);
  return 1;
}

// 0043EC60  Em0045::vf44  size=81  [class]
void __fastcall Em0045::vf44(int param_1)

{
  FUN_00c4d000(*(undefined4 *)(param_1 + 0x4f0));
  *(undefined4 *)(param_1 + 0x890) = 0;
  if (*(int **)(param_1 + 0x7b0) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x7b0) + 4))(1);
    *(undefined4 *)(param_1 + 0x7b0) = 0;
  }
  FUN_00a8c820();
  FUN_00a92ef0();
  Behavior::vf44();
  return;
}

// 0043ECC0  FUN_0043ecc0  size=1628  [between]
void __fastcall FUN_0043ecc0(int *param_1)

{
  int iVar1;
  int *piVar2;
  float *pfVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  undefined4 uVar8;
  float fVar9;
  float local_3c4;
  float fStack_3c0;
  float fStack_3bc;
  float fStack_3b8;
  float fStack_3b4;
  float fStack_3b0;
  float fStack_3ac;
  float fStack_3a8;
  float fStack_3a4;
  float fStack_3a0;
  float fStack_39c;
  float fStack_398;
  int iStack_394;
  int iStack_390;
  int iStack_38c;
  int iStack_388;
  float fStack_384;
  float fStack_380;
  float fStack_37c;
  float fStack_378;
  float fStack_374;
  float fStack_370;
  float fStack_36c;
  float fStack_368;
  float fStack_364;
  float fStack_360;
  float fStack_35c;
  float fStack_358;
  undefined4 uStack_354;
  undefined4 local_350;
  undefined4 local_34c;
  undefined4 local_348;
  undefined1 local_340 [52];
  int iStack_30c;
  int iStack_308;
  int iStack_304;
  int iStack_300;
  int iStack_2fc;
  int iStack_2f8;
  undefined1 auStack_2c4 [144];
  undefined4 local_234;
  undefined4 uStack_100;
  
  iVar1 = FUN_00a8cac0();
  if (iVar1 == 0) {
    param_1[0x1bb] = 1;
    FUN_00405230();
    local_350 = 0;
    local_34c = 0;
    local_348 = 0;
    FUN_00c151f0(1,param_1[0x13c],0,&local_350,0,0x43960000,0x3f800000,0,4);
    uVar8 = FUN_00c57830(local_340);
    iVar1 = FUN_00c4d470(uVar8);
    param_1[0x224] = iVar1;
    if (iVar1 != 0) {
      *(undefined1 *)(iVar1 + 0x4c) = 2;
    }
    param_1[0x225] = 1;
    uVar8 = FUN_004039a0(0x7a,param_1,0);
    FUN_00a963e0(uVar8);
    param_1[0x187] = param_1[0x187] + 1;
    local_234 = 0;
  }
  else if (iVar1 != 1) {
    if (iVar1 != 2) {
      return;
    }
    local_3c4 = (float)param_1[0x22d];
    fVar4 = (float10)FUN_00a93060();
    param_1[0x22d] = (int)(float)((float10)local_3c4 - fVar4);
    if ((float10)0 <= (float10)local_3c4 - fVar4) {
      return;
    }
    param_1[0x22d] = (int)(float)(float10)0;
    FUN_00a805f0();
    return;
  }
  piVar2 = (int *)FUN_00c13920();
  (**(code **)(*piVar2 + 0x28))(0);
  uVar8 = 5;
  FUN_00a7c8a0(5);
  iVar1 = FUN_00a12210(uVar8);
  fStack_384 = *(float *)(iVar1 + 0x40);
  fStack_380 = *(float *)(iVar1 + 0x44);
  fStack_37c = *(float *)(iVar1 + 0x48);
  fStack_378 = *(float *)(iVar1 + 0x4c);
  local_3c4 = fStack_384 - (float)param_1[0x10];
  fStack_3c0 = fStack_380 - (float)param_1[0x11];
  fStack_3bc = fStack_37c - (float)param_1[0x12];
  fStack_3b8 = fStack_378 - (float)param_1[0x13];
  if (((local_3c4 != 0.0) || (fStack_3c0 != 0.0)) || (fStack_3bc != 0.0)) {
    fVar9 = fStack_3bc * fStack_3bc + local_3c4 * local_3c4 + fStack_3c0 * fStack_3c0;
    if (fVar9 < 0.0 == (fVar9 == 0.0)) {
      FUN_00ddf460(&local_3c4,&local_3c4);
    }
    else {
      FUN_00dd5650(&DAT_0163d0ac);
      local_3c4 = 0.0;
      fStack_3c0 = 1.0;
      fStack_3bc = 0.0;
    }
  }
  fVar9 = SQRT((fStack_37c - (float)param_1[0x12]) * (fStack_37c - (float)param_1[0x12]) +
               (fStack_380 - (float)param_1[0x11]) * (fStack_380 - (float)param_1[0x11]) +
               (fStack_384 - (float)param_1[0x10]) * (fStack_384 - (float)param_1[0x10]));
  if ((param_1[0x225] != 0) && (param_1[0x225] = (uint)(3.0 < fVar9), 3.0 < fVar9 == 0)) {
    param_1[0x228] = (int)local_3c4;
    param_1[0x229] = (int)fStack_3c0;
    param_1[0x22a] = (int)fStack_3bc;
    param_1[0x22b] = (int)fStack_3b8;
    param_1[0x22c] = 0x3e99999a;
  }
  if (0.3 < fVar9 != (fVar9 == 0.3)) {
    fVar9 = 0.3;
  }
  fVar4 = (float10)FUN_00a93060();
  param_1[0x25] = (int)(float)(fVar4 * (float10)5.0 + (float10)(float)param_1[0x25]);
  fVar4 = (float10)FUN_00a93060();
  param_1[0x24] = (int)(float)(fVar4 * (float10)5.0 + (float10)(float)param_1[0x24]);
  fVar4 = (float10)FUN_00a93060();
  param_1[0x26] = (int)(float)(fVar4 * (float10)5.0 + (float10)(float)param_1[0x26]);
  fStack_374 = (float)param_1[0x14];
  fStack_370 = (float)param_1[0x15];
  fStack_36c = (float)param_1[0x16];
  fStack_368 = (float)param_1[0x17];
  pfVar3 = (float *)FUN_00a925a0(auStack_2c4);
  fStack_364 = *pfVar3 + fStack_374;
  fStack_360 = pfVar3[1] + fStack_370;
  fStack_35c = pfVar3[2] + fStack_36c;
  fStack_358 = pfVar3[3] + fStack_368;
  if (param_1[0x225] == 0) {
    fStack_3a8 = (float)param_1[0x22c];
    fStack_3b4 = fStack_3a8 * (float)param_1[0x228];
    fStack_3b0 = (float)param_1[0x229] * fStack_3a8;
    fStack_3ac = (float)param_1[0x22a] * fStack_3a8;
    fStack_3a8 = fStack_3a8 * (float)param_1[0x22b];
    fVar5 = (float10)FUN_00a92ff0();
    fVar4 = (float10)fStack_3b0 * fVar5;
    fVar6 = (float10)fStack_3ac * fVar5;
    fVar7 = (float10)fStack_3a8 * fVar5;
    fVar5 = (float10)fStack_3b4 * fVar5 + (float10)(float)param_1[0x14];
  }
  else {
    fStack_3b4 = local_3c4 * fVar9;
    fStack_3b0 = fStack_3c0 * fVar9;
    fStack_3ac = fStack_3bc * fVar9;
    fStack_3a8 = fVar9 * fStack_3b8;
    fVar5 = (float10)FUN_00a92ff0();
    fVar4 = (float10)fStack_3b0 * fVar5;
    fVar6 = (float10)fStack_3ac * fVar5;
    fVar7 = (float10)fStack_3a8 * fVar5;
    fVar5 = (float10)(float)param_1[0x14] + (float10)fStack_3b4 * fVar5;
  }
  param_1[0x14] = (int)(float)fVar5;
  param_1[0x15] = (int)(float)(fVar4 + (float10)(float)param_1[0x15]);
  param_1[0x16] = (int)(float)(fVar6 + (float10)(float)param_1[0x16]);
  param_1[0x17] = (int)(float)(fVar7 + (float10)(float)param_1[0x17]);
  fStack_3a4 = fStack_384;
  fStack_3a0 = fStack_380;
  fStack_39c = fStack_37c;
  fStack_398 = fStack_378;
  iStack_394 = param_1[0x14];
  iStack_390 = param_1[0x15];
  iStack_38c = param_1[0x16];
  iStack_388 = param_1[0x17];
  D3DXVec3TransformNormal(&fStack_3a4,&fStack_3a4,param_1 + 0x3c);
  fStack_3b0 = fStack_3b0 + (float)param_1[0x48];
  fStack_3ac = (float)param_1[0x49] + fStack_3ac;
  fStack_3a8 = (float)param_1[0x4a] + fStack_3a8;
  D3DXVec3TransformNormal(&fStack_3a0,&fStack_3a0,param_1 + 0x3c);
  fVar4 = (float10)fStack_3ac;
  fStack_3ac = (float)((float10)(float)param_1[0x48] + fVar4);
  fStack_3a8 = (float)param_1[0x49] + fStack_3a8;
  fVar6 = (float10)fStack_3a4;
  fStack_3a4 = (float)((float10)(float)param_1[0x4a] + fVar6);
  if (param_1[0x225] != 0) {
    fVar4 = (float10)fpatan((float10)fStack_3bc - ((float10)(float)param_1[0x48] + fVar4),
                            (float10)fStack_3b4 - ((float10)(float)param_1[0x4a] + fVar6));
    param_1[0x25] = (int)(float)fVar4;
  }
  iVar1 = FUN_009f8b40();
  iVar1 = RayCastSingleHitWork::RayCastSingleHitWork_4
                    (0,0,0,0,&iStack_38c,&fStack_37c,iVar1 << 0x10 | 0x1e,&DAT_0163d54c);
  if (iVar1 == 0) {
    return;
  }
  param_1[0x1bb] = 0;
  FUN_00c4d000(param_1[0x13c]);
  param_1[0x224] = 0;
  FUN_00a8c9b0(0,0x7a,0,0);
  (**(code **)(*param_1 + 0x20))();
  FUN_00a8ca80(0,0,0);
  uVar8 = FUN_004039a0(0x3d,param_1,0);
  FUN_00a8c8b0(0x20040,uVar8);
  iVar1 = 5;
  param_1[0x22d] = 0x40400000;
  uStack_100 = 0;
  do {
    FUN_0040b190();
    iStack_30c = param_1[0x14];
    iStack_308 = param_1[0x15];
    iStack_304 = param_1[0x16];
    iStack_300 = param_1[0x24];
    fStack_35c = 4.2039e-45;
    uStack_354 = 2;
    iStack_2fc = param_1[0x25];
    iStack_2f8 = param_1[0x26];
    FUN_00a82090("sutegoro",0x20040,&fStack_35c);
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  param_1[0x187] = param_1[0x187] + 1;
  return;
}

// 0043F320  Em0045::vf4C  size=41  [class]
void Em0045::vf4C(void)

{
  int iVar1;
  
  Behavior::vf4C();
  iVar1 = FUN_00a8cab0();
  if (iVar1 == 0) {
    FUN_0043e920();
    return;
  }
  if (iVar1 == 1) {
    FUN_0043ecc0();
    return;
  }
  return;
}

// 00AA62C0  Em0045::Em0045  size=48  [class]
undefined4 * __fastcall Em0045::Em0045(undefined4 *param_1)

{
  int iVar1;
  
  Behavior::Behavior_95();
  *param_1 = vftable;
  iVar1 = 1;
  do {
    FUN_00a7c930();
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  return param_1;
}

// 00AA6300  Em0045::vf04  size=6  [class]
undefined * Em0045::vf04(void)

{
  return &DAT_01b34c60;
}

// 00AB6E00  Em0045::vf00  size=105  [class]
undefined4 * __thiscall Em0045::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = Behavior::vftable;
  cLockonPartsList::~cLockonPartsList();
  if (param_1[0x19f] != 0) {
    param_1[0x1a1] = 0;
    if (param_1[0x1a2] != 0) {
      FUN_00dd48d0(param_1[0x19f],0);
      param_1[0x1a2] = 0;
    }
    param_1[0x19f] = 0;
    param_1[0x1a0] = 0;
  }
  cXml::cXml_2();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

