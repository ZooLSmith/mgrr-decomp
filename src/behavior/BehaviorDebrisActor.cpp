// src/behavior/BehaviorDebrisActor.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 005D86E0..00A9D2F0, 25 functions

#include "mgrr.h"
#include "BehaviorDebrisActor.h"

// 005D86E0  BehaviorDebrisActor::ExplosionSlot::vf10  size=1  [class]
void BehaviorDebrisActor::ExplosionSlot::vf10(void)

{
  return;
}

// 005D86F0  BehaviorDebrisActor::ExplosionSlot::vf14  size=1  [class]
void BehaviorDebrisActor::ExplosionSlot::vf14(void)

{
  return;
}

// 005D8730  BehaviorDebrisActor::vf114  size=35  [class]
void __thiscall BehaviorDebrisActor::vf114(int *param_1,int param_2)

{
  Bh0064::vf114(param_2);
  (**(code **)(*param_1 + 0x118))(*(undefined4 *)(param_2 + 4));
  return;
}

// 005D8760  BehaviorDebrisActor::vf1D0  size=16  [class]
void __thiscall BehaviorDebrisActor::vf1D0(undefined4 param_1,undefined4 param_2)

{
  FUN_00a8e5d0(param_1,param_2,0);
  return;
}

// 005D87F0  BehaviorDebrisActor::vf44  size=176  [class]
void __fastcall BehaviorDebrisActor::vf44(int param_1)

{
  int iVar1;
  
  if (*(undefined4 **)(param_1 + 0x8e8) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x8e8))(1);
    *(undefined4 *)(param_1 + 0x8e8) = 0;
  }
  if (*(int *)(param_1 + 0x8f4) != 0) {
    FUN_00d8a1d0(0x1e,*(int *)(param_1 + 0x8f4));
    if (*(undefined4 **)(param_1 + 0x8f4) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(param_1 + 0x8f4))(1);
      *(undefined4 *)(param_1 + 0x8f4) = 0;
    }
  }
  FUN_00a8c820();
  FUN_00a944d0();
  if (*(int *)(param_1 + 0x870) != 0) {
    FUN_00900ca0();
  }
  iVar1 = *(int *)(param_1 + 0x7b4);
  if (iVar1 != 0) {
    lib::Array<RigidBodyList::ConnectMap>::Array<RigidBodyList::ConnectMap>();
    FUN_00dd4920(iVar1);
    *(undefined4 *)(param_1 + 0x7b4) = 0;
  }
  if (*(int *)(param_1 + 0x788) != 0) {
    FUN_00dd4940(*(int *)(param_1 + 0x788));
    *(undefined4 *)(param_1 + 0x788) = 0;
  }
  Behavior::vf44();
  return;
}

// 005D88A0  BehaviorDebrisActor::vfC8  size=18  [class]
void __fastcall BehaviorDebrisActor::vfC8(int param_1)

{
  if (*(int *)(param_1 + 0x7b4) != 0) {
    FUN_0091acf0();
    return;
  }
  return;
}

// 005D88C0  BehaviorDebrisActor::vf20  size=24  [class]
void __fastcall BehaviorDebrisActor::vf20(int *param_1)

{
  Bh0064::vf20();
  (**(code **)(*param_1 + 200))(0);
  return;
}

// 005D88E0  BehaviorDebrisActor::vf1C  size=24  [class]
void __fastcall BehaviorDebrisActor::vf1C(int *param_1)

{
  Bh0064::vf1C();
  (**(code **)(*param_1 + 200))(1);
  return;
}

// 005D9EA0  BehaviorDebrisActor::ExplosionSlot::vf00  size=31  [class]
undefined4 * __thiscall BehaviorDebrisActor::ExplosionSlot::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = Slot::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 005D9EF0  BehaviorDebrisActor::DebrisPhantomListener::vf04  size=3  [class]
void BehaviorDebrisActor::DebrisPhantomListener::vf04(void)

{
  return;
}

// 005D9F40  BehaviorDebrisActor::DebrisPhantomListener::vf08  size=47  [class]
undefined4 * __thiscall
BehaviorDebrisActor::DebrisPhantomListener::vf08(undefined4 *param_1,byte param_2)

{
  LPVOID pvVar1;
  
  *param_1 = hkpPhantomOverlapListener::vftable;
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,4);
  }
  return param_1;
}

// 005D9F70  FUN_005d9f70  size=362  [between]
float * __thiscall FUN_005d9f70(int param_1,float *param_2)

{
  float fVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  int iVar6;
  
  fVar3 = 0.0;
  iVar2 = *(int *)(param_1 + 0x330);
  *param_2 = 0.0;
  iVar6 = 0;
  param_2[1] = 0.0;
  param_2[2] = 0.0;
  if (0 < *(int *)(iVar2 + 0xc4)) {
    fVar1 = param_2[3];
    pfVar5 = (float *)(*(int *)(iVar2 + 0xc0) + 0x18);
    fVar4 = fVar3;
    do {
      iVar6 = iVar6 + 1;
      *param_2 = pfVar5[-2] + *param_2;
      fVar4 = pfVar5[-1] + fVar4;
      param_2[1] = fVar4;
      fVar3 = *pfVar5 + fVar3;
      param_2[2] = fVar3;
      fVar1 = pfVar5[1] + fVar1;
      param_2[3] = fVar1;
      pfVar5 = pfVar5 + 0x1c;
    } while (iVar6 < *(int *)(iVar2 + 0xc4));
  }
  if (*(int *)(iVar2 + 0xc4) != 0) {
    fVar3 = (float)*(int *)(iVar2 + 0xc4);
    *param_2 = *param_2 / fVar3;
    param_2[1] = param_2[1] / fVar3;
    param_2[2] = param_2[2] / fVar3;
    param_2[3] = param_2[3] / fVar3;
  }
  if (((*param_2 == 0.0) && (param_2[1] == 0.0)) && (param_2[2] == 0.0)) {
    return param_2;
  }
  fVar3 = param_2[1] * param_2[1] + *param_2 * *param_2 + param_2[2] * param_2[2];
  if (fVar3 < 0.0 == (fVar3 == 0.0)) {
    FUN_00ddf460(param_2,param_2);
    return param_2;
  }
  FUN_00dd5650(&DAT_0163d0ac);
  *param_2 = 0.0;
  param_2[1] = 1.0;
  param_2[2] = 0.0;
  return param_2;
}

// 005DA0E0  FUN_005da0e0  size=773  [between]
void __fastcall FUN_005da0e0(int param_1)

{
  float fVar1;
  int *piVar2;
  int iVar3;
  float10 fVar4;
  float *pfVar5;
  float local_44;
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
  float local_14;
  
  if (*(int *)(param_1 + 0x7b4) != 0) {
    if (*(int *)(param_1 + 0x880) == 0) {
      FUN_00912890(DAT_01885d20);
      *(undefined4 *)(param_1 + 0x880) = 1;
    }
    *(undefined4 *)(param_1 + 0x8fc) = 1;
    *(undefined4 *)(param_1 + 0x8f8) = 0;
    *(undefined4 *)(param_1 + 0x88c) = 1;
    FUN_0091ea00(param_1);
    piVar2 = (int *)FUN_00912660(&local_44,0);
    iVar3 = *piVar2;
    local_30 = *(float *)(iVar3 + 0x120);
    local_2c = *(float *)(iVar3 + 0x124);
    local_28 = *(float *)(iVar3 + 0x128);
    local_24 = *(float *)(iVar3 + 300);
    iVar3 = *(int *)(param_1 + 0x588);
    local_40 = local_30 - *(float *)(iVar3 + 0x50);
    local_3c = local_2c - (*(float *)(iVar3 + 0x54) - 0.5);
    local_38 = local_28 - *(float *)(iVar3 + 0x58);
    local_34 = local_24 - (*(float *)(iVar3 + 0x5c) + local_14);
    if (((local_40 != 0.0) || (local_3c != 0.0)) || (local_38 != 0.0)) {
      fVar1 = local_38 * local_38 + local_40 * local_40 + local_3c * local_3c;
      if (fVar1 < 0.0 == (fVar1 == 0.0)) {
        FUN_00ddf460(&local_40,&local_40);
      }
      else {
        FUN_00dd5650(&DAT_0163d0ac);
        local_40 = 0.0;
        local_3c = 1.0;
        local_38 = 0.0;
      }
    }
    piVar2 = (int *)FUN_00c13920();
    (**(code **)(*piVar2 + 0x28))(0);
    pfVar5 = &local_24;
    FUN_00a7c8a0(pfVar5);
    FUN_00a92640(pfVar5);
    iVar3 = *(int *)(param_1 + 0x588);
    local_44 = local_34 - *(float *)(iVar3 + 0x50);
    local_40 = local_30 - (*(float *)(iVar3 + 0x54) - 0.5);
    local_3c = local_2c - *(float *)(iVar3 + 0x58);
    local_38 = local_28 - (*(float *)(iVar3 + 0x5c) + fStack_18);
    iVar3 = FUN_00a7c8a0();
    local_44 = (local_44 + local_34) - *(float *)(iVar3 + 0x130);
    local_40 = (local_40 + local_30) - *(float *)(iVar3 + 0x134);
    local_3c = (local_3c + local_2c) - *(float *)(iVar3 + 0x138);
    local_38 = (local_38 + local_28) - *(float *)(iVar3 + 0x13c);
    local_34 = local_44 * 100.0;
    local_30 = local_40 * 100.0;
    local_2c = local_3c * 100.0;
    local_28 = local_38 * 100.0;
    fVar4 = (float10)FUN_00916de0();
    local_24 = (float)((float10)local_34 * fVar4);
    fStack_20 = (float)((float10)local_30 * fVar4);
    fStack_1c = (float)((float10)local_2c * fVar4);
    fStack_18 = (float)(fVar4 * (float10)local_28);
    FUN_0091ab40(&local_24);
    local_24 = local_44 * 0.1;
    fStack_20 = local_40 * 0.1;
    fStack_1c = local_3c * 0.1;
    fStack_18 = local_38 * 0.1;
    FUN_0091ac60(&local_24);
  }
  return;
}

// 005DA3F0  BehaviorDebrisActor::vf30  size=627  [class]
void __fastcall BehaviorDebrisActor::vf30(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  char *_Src;
  float10 fVar7;
  float10 fVar8;
  float local_3c;
  char local_28 [8];
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  Bh0064::vf30();
  iVar6 = param_1[0x162];
  if ((iVar6 != 0) && (*(int *)(iVar6 + 0x98) != 0)) {
    *(undefined4 *)(iVar6 + 0x9c) = *(undefined4 *)(iVar6 + 0x9c);
    *(undefined4 *)(iVar6 + 0x98) = 1;
  }
  if (param_1[0x162] != 0) {
    local_3c = 0.0;
    local_28[0] = '\0';
    local_28[1] = '\0';
    local_28[2] = '\0';
    local_28[3] = '\0';
    local_28[4] = 0;
    iVar6 = FUN_00a92f90();
    if (iVar6 != 0) {
      _Src = (char *)FUN_00e366b0(0);
      _strcpy_s(local_28,5,_Src);
      iVar6 = FUN_00e26e90();
      if (iVar6 == 0) {
        fVar7 = (float10)-1.0;
      }
      else {
        fVar7 = (float10)FUN_00e36970(0);
      }
      fVar8 = (float10)FUN_00a92ff0();
      local_3c = (float)(fVar8 * (float10)0.016666668 + (float10)(float)fVar7);
    }
    iVar6 = param_1[0x162];
    local_20 = *(undefined4 *)(iVar6 + 0x50);
    iVar1 = *(int *)(iVar6 + 0x34);
    uVar2 = *(undefined4 *)(iVar6 + 0x38);
    local_1c = *(undefined4 *)(iVar6 + 0x54);
    uVar3 = *(undefined4 *)(iVar6 + 0xb0);
    iVar4 = param_1[0x23e];
    local_18 = *(undefined4 *)(iVar6 + 0x58);
    iVar5 = *(int *)(iVar6 + 4);
    local_14 = *(undefined4 *)(iVar6 + 0x5c);
    iVar6 = param_1[0x23f];
    FUN_00a8b6e0();
    (**(code **)(*param_1 + 0x118))(0);
    *(undefined4 *)(param_1[0x162] + 0xb0) = uVar3;
    _strcpy_s((char *)(param_1[0x162] + 0x14),5,local_28);
    *(float *)(param_1[0x162] + 0x1c) = local_3c;
    *(int *)(param_1[0x162] + 0x48) = iVar4;
    iVar4 = param_1[0x162];
    *(undefined4 *)(iVar4 + 0x50) = local_20;
    *(undefined4 *)(iVar4 + 0x54) = local_1c;
    *(undefined4 *)(iVar4 + 0x58) = local_18;
    *(undefined4 *)(iVar4 + 0x5c) = local_14;
    *(int *)(param_1[0x162] + 0x4c) = iVar6;
    if (param_1[0x12d] == 0x20010) {
      iVar6 = param_1[0x162];
      *(int *)(iVar6 + 0xc4) = param_1[0x1a5];
      *(int *)(iVar6 + 200) = param_1[0x1a6];
      *(int *)(iVar6 + 0xcc) = param_1[0x1a7];
    }
    *(int *)(param_1[0x162] + 0xd0) = param_1[0x1a8];
    iVar6 = param_1[0x162];
    *(int *)(iVar6 + 0xd4) = param_1[0x1a9];
    *(int *)(iVar6 + 0xd8) = param_1[0x1aa];
    *(int *)(iVar6 + 0xdc) = param_1[0x1ab];
    *(char *)(param_1[0x162] + 0xe0) = (char)param_1[0x1ac];
    if (iVar5 == 1) {
      *(undefined4 *)(param_1[0x162] + 4) = 2;
    }
    else {
      *(undefined4 *)(param_1[0x162] + 4) = 1;
    }
    if (iVar1 != 0) {
      *(undefined4 *)(param_1[0x162] + 0x34) = 1;
      *(undefined4 *)(param_1[0x162] + 0x38) = uVar2;
    }
  }
  if (param_1[0x21c] != 0) {
    FUN_00900ca0();
  }
  return;
}

// 005DA670  BehaviorDebrisActor::BehaviorDebrisActor  size=179  [class]
undefined4 * __fastcall BehaviorDebrisActor::BehaviorDebrisActor(undefined4 *param_1)

{
  Behavior::Behavior();
  *param_1 = vftable;
  FUN_009003e0();
  param_1[0x221] = 0;
  param_1[0x225] = 0;
  param_1[0x220] = 0;
  param_1[0x232] = 0;
  param_1[0x222] = 0;
  param_1[0x223] = 0;
  param_1[0x234] = 0x3f800000;
  param_1[0x224] = 0;
  param_1[0x230] = 0;
  param_1[0x231] = 0;
  param_1[0x233] = 0;
  param_1[0x235] = 0;
  param_1[0x23c] = 0;
  param_1[0x236] = 0;
  param_1[0x237] = 0;
  param_1[0x238] = 0;
  param_1[0x239] = 0;
  param_1[0x23a] = 0;
  param_1[0x23b] = 0;
  param_1[0x23d] = 0;
  param_1[0x23e] = 0;
  param_1[0x23f] = 0;
  param_1[0x240] = 0;
  param_1[0x241] = 0;
  return param_1;
}

// 005DA730  BehaviorDebrisActor::vf04  size=6  [class]
undefined * BehaviorDebrisActor::vf04(void)

{
  return &DAT_01b35304;
}

// 005DA750  BehaviorDebrisActor::destruct  size=30  [class]
undefined4 __thiscall BehaviorDebrisActor::destruct(undefined4 param_1,byte param_2)

{
  Behavior::~Behavior();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 005DC3F0  BehaviorDebrisActor::DebrisPhantomListener::vf00  size=168  [class]
void BehaviorDebrisActor::DebrisPhantomListener::vf00(int param_1)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = *(int *)(param_1 + 4);
  uVar1 = *(uint *)(iVar5 + 0x1c);
  if (*(char *)(iVar5 + 0x18) != '\x01') {
    *(undefined4 *)(param_1 + 8) = 1;
    return;
  }
  iVar5 = *(char *)(iVar5 + 0x10) + iVar5;
  if (iVar5 == 0) {
    cVar3 = '\0';
  }
  else {
    uVar2 = *(uint *)(iVar5 + 0xc);
    if (uVar2 == 0) {
      cVar3 = '\0';
    }
    else {
      cVar3 = (char)*(undefined4 *)((-(uint)(uVar2 != 0) & uVar2) + 8);
    }
  }
  if (-1 < cVar3) {
    iVar4 = FUN_008f7780(iVar5);
    if ((iVar4 != 0) && (*(int *)(iVar4 + 0x4f0) != 0)) {
      iVar4 = FUN_00a7c800();
      if (*(int *)(iVar4 + 0x4b4) != 0x700000) goto LAB_005dc48e;
    }
    if (((iVar5 != 0) && (uVar2 = *(uint *)(iVar5 + 0xc), uVar2 != 0)) &&
       (*(int *)((-(uint)(uVar2 != 0) & uVar2) + 0x38) == 5)) {
      *(uint *)(param_1 + 8) = (uint)((uVar1 & 0x1f) != 1);
      return;
    }
  }
LAB_005dc48e:
  *(undefined4 *)(param_1 + 8) = 1;
  return;
}

// 005DC4A0  BehaviorDebrisActor::vf50  size=2318  [class]
void __fastcall BehaviorDebrisActor::vf50(int *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined2 uVar6;
  int iVar7;
  int *piVar8;
  undefined4 uVar9;
  float *pfVar10;
  int iVar11;
  bool bVar12;
  float10 fVar13;
  float10 fVar14;
  undefined *puVar15;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  undefined1 auStack_20 [4];
  float fStack_1c;
  float fStack_14;
  
  Behavior::vf50();
  if (param_1[0x23e] != 0) {
    iVar7 = FUN_00a92f90();
    if ((iVar7 != 0) && (param_1[0x222] != 0)) {
      (**(code **)(*param_1 + 100))();
      FUN_00a93170();
    }
    iVar7 = param_1[0x1ed];
    goto LAB_005dcd9f;
  }
  iVar7 = FUN_00a92f90();
  if (iVar7 == 0) {
    return;
  }
  if (param_1[0x222] == 0) {
    return;
  }
  (**(code **)(*param_1 + 100))();
  FUN_00a93170();
  if (param_1[0x12d] == 0x20010) {
    if ((param_1[0x220] == 0) && (param_1[0x1ed] != 0)) {
      iVar7 = *(int *)(param_1[0xcc] + 200);
      fVar1 = *(float *)(iVar7 + 0x10);
      fVar2 = *(float *)(iVar7 + 0x14);
      fVar3 = *(float *)(iVar7 + 0x18);
      iVar7 = param_1[0x238];
      if (iVar7 == 0) {
        piVar8 = (int *)FUN_00c13920();
        (**(code **)(*piVar8 + 0x28))(0);
        uVar9 = FUN_00a7c8a0();
        iVar7 = FUN_00412580(uVar9);
        if (iVar7 != 0) {
          fStack_30 = *(float *)(iVar7 + 0x50) - (float)param_1[0x14];
          fStack_2c = *(float *)(iVar7 + 0x54) - (float)param_1[0x15];
          fStack_28 = *(float *)(iVar7 + 0x58) - (float)param_1[0x16];
          fStack_24 = *(float *)(iVar7 + 0x5c) - (float)param_1[0x17];
          if (((fStack_30 != 0.0) || (fStack_2c != 0.0)) || (fStack_28 != 0.0)) {
            fVar1 = fStack_28 * fStack_28 + fStack_30 * fStack_30 + fStack_2c * fStack_2c;
            if (fVar1 < 0.0 == (fVar1 == 0.0)) {
              FUN_00ddf460(&fStack_30,&fStack_30);
            }
            else {
              FUN_00dd5650(&DAT_0163d0ac);
              fStack_30 = 0.0;
              fStack_2c = 1.0;
              fStack_28 = 0.0;
            }
          }
          pfVar10 = (float *)FUN_00a925a0(auStack_20);
          fVar1 = pfVar10[2] * fStack_28 + *pfVar10 * fStack_30 + pfVar10[1] * fStack_2c;
          pfVar10 = (float *)FUN_00a92640(auStack_20);
          fVar2 = pfVar10[2] * fStack_28 + *pfVar10 * fStack_30 + pfVar10[1] * fStack_2c;
          if (*(int *)(iVar7 + 0x2678) != 0) {
            if (fVar1 <= 0.0) {
              FUN_00aa4940(&DAT_01644ba4,0,0x3dcccccd,0x3f800000,0,0xbf800000,0x3f800000);
              param_1[0x231] = 1;
            }
            else {
              FUN_00aa4940(&DAT_01644bac,0,0x3dcccccd,0x3f800000,0,0xbf800000,0x3f800000);
              param_1[0x231] = 1;
            }
            goto LAB_005dcca0;
          }
          if (fVar1 <= 0.0) {
            if (0.5 < fVar2) {
              uVar9 = 0;
            }
            else {
              if (-0.5 <= fVar2) {
                iVar7 = *(int *)(param_1[0xcc] + 200);
                pfVar10 = (float *)FUN_00a92640(auStack_20);
                if (0.0 < *(float *)(iVar7 + 0x18) * pfVar10[2] +
                          *(float *)(iVar7 + 0x10) * *pfVar10 +
                          *(float *)(iVar7 + 0x14) * pfVar10[1]) {
                  uVar9 = 0;
                  goto LAB_005dc86f;
                }
              }
              uVar9 = 0x40;
            }
          }
          else if (0.5 < fVar2) {
            uVar9 = 0;
          }
          else {
            if (-0.5 <= fVar2) {
              iVar7 = *(int *)(param_1[0xcc] + 200);
              pfVar10 = (float *)FUN_00a92640(auStack_20);
              if (0.0 < *(float *)(iVar7 + 0x18) * pfVar10[2] +
                        *(float *)(iVar7 + 0x10) * *pfVar10 + *(float *)(iVar7 + 0x14) * pfVar10[1])
              {
                uVar9 = 0;
                goto LAB_005dc86f;
              }
            }
            uVar9 = 0x40;
          }
LAB_005dc86f:
          FUN_00aa4940(&DAT_01644b9c,0,0x3dcccccd,0x3f800000,uVar9,0xbf800000,0x3f800000);
          bVar12 = false;
          iVar7 = 0;
          if (0 < *(int *)(param_1[0x1ed] + 0x181c)) {
            do {
              iVar11 = FUN_00912680(iVar7);
              piVar8 = (int *)param_1[0xd8];
              if ((int *)param_1[0xd8] == (int *)0x0) {
                piVar8 = param_1;
              }
              if (((iVar11 < 0) || ((short)piVar8[0xd6] <= iVar11)) ||
                 (iVar11 = iVar11 * 0xb0 + piVar8[0xd4], iVar11 == 0)) {
                uVar6 = 0xffff;
              }
              else {
                uVar6 = *(undefined2 *)(iVar11 + 0xa0);
              }
              switch(uVar6) {
              case 0:
              case 1:
              case 2:
                goto switchD_005dc8ee_caseD_0;
              case 0x10:
              case 0x11:
              case 0x12:
              case 0x14:
              case 0x15:
              case 0x16:
                bVar12 = true;
              }
            } while ((bVar12) && (iVar7 = iVar7 + 1, iVar7 < *(int *)(param_1[0x1ed] + 0x181c)));
          }
          if (fVar1 <= 0.0) {
            puVar15 = &DAT_01644ba4;
          }
          else {
            puVar15 = &DAT_01644bac;
          }
          FUN_00aa4940(puVar15,0,0x3dcccccd,0x3f800000,0,0xbf800000,0x3f800000);
switchD_005dc8ee_caseD_0:
          if (!bVar12) {
            FUN_00aa4940(&DAT_01644278,0,0x3dcccccd,0x3f800000,0,0xbf800000,0x3f800000);
          }
        }
        param_1[0x231] = 1;
      }
      else if (iVar7 == 1) {
        uVar9 = 0;
        param_1[0x231] = 1;
        FUN_00a92f90(0);
        fVar13 = (float10)FUN_00407b40(uVar9);
        if (fVar13 < (float10)0.5 == (fVar13 == (float10)0.5)) {
          FUN_00aa4940(&DAT_01644278,0,0x3dcccccd,0x3f800000,0,0xbf800000,0x3f800000);
          if (param_1[0x220] == 0) {
            FUN_00912890(DAT_01885d20);
            param_1[0x220] = 1;
          }
        }
        else if (0.0 <= fVar1 * 0.0 + fVar2 + fVar3 * 0.0) {
          iVar7 = *(int *)(param_1[0xcc] + 200);
          fStack_30 = *(float *)(iVar7 + 0x10) * -0.01;
          fStack_2c = *(float *)(iVar7 + 0x14) * -0.01;
          fStack_28 = *(float *)(iVar7 + 0x18) * -0.01;
          fStack_24 = *(float *)(iVar7 + 0x1c) * -0.01;
          (**(code **)(*param_1 + 0x70))(&fStack_30);
        }
        else {
          iVar7 = *(int *)(param_1[0xcc] + 200);
          fStack_30 = *(float *)(iVar7 + 0x10) * 0.01;
          fStack_2c = *(float *)(iVar7 + 0x14) * 0.01;
          fStack_28 = *(float *)(iVar7 + 0x18) * 0.01;
          fStack_24 = *(float *)(iVar7 + 0x1c) * 0.01;
          (**(code **)(*param_1 + 0x70))(&fStack_30);
        }
      }
      else if (iVar7 == 2) {
        param_1[0x231] = 1;
        FUN_00912890(DAT_01885d20);
        param_1[0x220] = 1;
        fVar13 = (float10)FUN_00916de0();
        fVar1 = (float)fVar13;
        if (*(int *)(param_1[0x162] + 4) == 2) {
          fVar13 = (float10)FUN_00dde300(0,0x40000000);
          fStack_34 = (float)(fVar13 - (float10)1.0);
          if ((float10)0 == fVar13 - (float10)1.0) {
            fStack_34 = 0.1;
          }
          iVar7 = *(int *)(param_1[0xcc] + 200);
          fStack_30 = *(float *)(iVar7 + 0x10) * fVar1;
          fStack_2c = *(float *)(iVar7 + 0x14) * fVar1;
          fStack_28 = *(float *)(iVar7 + 0x18) * fVar1;
          fStack_24 = *(float *)(iVar7 + 0x1c) * fVar1;
          FUN_0091ab40(&fStack_30);
          iVar7 = *(int *)(param_1[0xcc] + 200);
          fVar2 = *(float *)(iVar7 + 0x10);
          fVar3 = *(float *)(iVar7 + 0x14);
          fVar4 = *(float *)(iVar7 + 0x18);
          fVar5 = *(float *)(iVar7 + 0x1c);
        }
        else {
          iVar7 = *(int *)(param_1[0xcc] + 200);
          fVar14 = (float10)2.0;
          fStack_1c = (float)((float10)(float)((float10)*(float *)(iVar7 + 0x14) * fVar14) * fVar13)
          ;
          fStack_30 = (float)((float10)*(float *)(iVar7 + 0x10) * fVar14 * fVar13 +
                             (float10)(float)(undefined *)0x0 * fVar13);
          fStack_2c = (float)((float10)fStack_1c + fVar13 * fVar14);
          fStack_28 = (float)((float10)(float)((float10)*(float *)(iVar7 + 0x18) * fVar14) * fVar13
                             + (float10)(float)(undefined *)0x0 * fVar13);
          fStack_24 = (float)((float10)fStack_14 * fVar13 +
                             (float10)*(float *)(iVar7 + 0x1c) * fVar14 * fVar13);
          FUN_0091ab40(&fStack_30);
          iVar7 = *(int *)(param_1[0xcc] + 200);
          fVar2 = *(float *)(iVar7 + 0x10);
          fVar3 = *(float *)(iVar7 + 0x14);
          fVar4 = *(float *)(iVar7 + 0x18);
          fVar5 = *(float *)(iVar7 + 0x1c);
          fStack_34 = 10.0;
        }
        fStack_30 = fVar2 * fVar1 * fStack_34;
        fStack_2c = fVar3 * fVar1 * fStack_34;
        fStack_28 = fVar4 * fVar1 * fStack_34;
        fStack_24 = fVar5 * fVar1 * fStack_34;
        FUN_0091ac60(&fStack_30);
      }
    }
LAB_005dcca0:
    if ((((param_1[0x238] == 3) && (param_1[0x239] == 0)) && (param_1[0x162] != 0)) &&
       (1 < *(int *)(param_1[0x162] + 8))) {
      uVar9 = 0;
      FUN_00a92f90(0);
      fVar13 = (float10)FUN_00407b40(uVar9);
      uVar9 = 0;
      FUN_00a92f90(0);
      fVar14 = (float10)FUN_0043f390(uVar9);
      if ((fVar14 - (float10)4.1666665 < (float10)(float)fVar13 !=
           (fVar14 - (float10)4.1666665 == (float10)(float)fVar13)) &&
         (fVar13 = (float10)FUN_00916de0(), fVar13 < (float10)0.5)) {
        param_1[0x239] = 1;
      }
    }
  }
  FUN_00a92f90();
  iVar7 = FUN_00e26e90();
  if (iVar7 == 0) {
    fVar13 = (float10)-1.0;
  }
  else {
    fVar13 = (float10)FUN_00e36970(0);
  }
  FUN_00a92f90();
  iVar7 = FUN_00e26e90();
  if (iVar7 == 0) {
    fVar14 = (float10)-1.0;
  }
  else {
    fVar14 = (float10)FUN_00e36a50(0);
  }
  if (fVar14 < (float10)(float)fVar13 != (fVar14 == (float10)(float)fVar13)) {
    param_1[0x222] = 0;
    param_1[0x223] = 1;
  }
  if (param_1[0x1ed] == 0) {
    return;
  }
  iVar7 = param_1[0x220];
LAB_005dcd9f:
  if (iVar7 != 0) {
    FUN_0091ea00(param_1);
  }
  return;
}

// 005DE3E0  FUN_005de3e0  size=253  [callgraph]
void __fastcall FUN_005de3e0(int *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  char cVar3;
  undefined1 *puVar4;
  undefined1 local_170 [16];
  undefined1 local_160 [288];
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  
  param_1[0x23b] = 1;
  if (param_1[0x12d] == 0x20030) {
    cVar3 = '\x03';
    FUN_00e5e0c0("em0030_se_dmg_exp_s",param_1,0xffffffff,0);
  }
  else {
    cVar3 = (param_1[0x12d] == 0x40050) + '\n';
  }
  FUN_004039a0(cVar3,param_1,0);
  if (param_1[0x1ed] == 0) {
    local_40 = param_1[0x10];
    local_3c = param_1[0x11];
    local_38 = param_1[0x12];
    local_34 = param_1[0x13];
  }
  else {
    piVar1 = (int *)FUN_00916d50(local_170);
    local_40 = *piVar1;
    local_3c = piVar1[1];
    local_38 = piVar1[2];
    local_34 = piVar1[3];
  }
  puVar4 = local_160;
  uVar2 = FUN_00e00b40(param_1[0x12d],puVar4);
  FUN_00a8c930(uVar2,puVar4);
  (**(code **)(*param_1 + 0x20))();
  if ((undefined4 *)param_1[0xdc] != (undefined4 *)0x0) {
    param_1[0xd9] = param_1[0xd9] & 0xffbfffff;
    *(undefined4 *)param_1[0xdc] = 1;
  }
  return;
}

// 005DE4E0  BehaviorDebrisActor::vf4C  size=930  [class]
void __fastcall BehaviorDebrisActor::vf4C(int *param_1)

{
  uint *puVar1;
  float fVar2;
  float10 fVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  float10 fVar8;
  float10 fVar9;
  float local_38;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  Behavior::vf4C();
  if (param_1[0x223] == 0) {
LAB_005de6cc:
    if ((((param_1[0x224] == 0) || ((char)param_1[0x11c] == '\0')) ||
        ((*(byte *)((int)param_1 + 0x472) & 0x80) == 0)) ||
       (*(char *)((int)param_1 + 0x471) == '\0')) goto LAB_005de6f7;
  }
  else {
    iVar6 = param_1[0x12d];
    if ((((iVar6 == 0x40050) || (iVar6 == 0x20030)) || (iVar6 == 0xd006f)) ||
       (((iVar6 == 0xd0080 || (iVar6 == 0xd0082)) || ((iVar6 == 0xd0084 || (iVar6 == 0xd0085)))))) {
      fVar8 = (float10)FUN_00a93060();
      fVar9 = (float10)FUN_00a92ff0();
      fVar8 = fVar9 * (float10)(float)fVar8 + (float10)(float)param_1[0x221];
      param_1[0x221] = (int)(float)fVar8;
      if (((float10)(float)param_1[0x23c] <= fVar8) && (param_1[0x23b] == 0)) {
        FUN_005de3e0();
      }
      fVar2 = (float)param_1[0x23c] + 7.0;
    }
    else {
      if (param_1[0x223] == 0) goto LAB_005de6cc;
      fVar8 = (float10)FUN_00a93060();
      fVar9 = (float10)FUN_00a92ff0();
      fVar8 = fVar9 * (float10)(float)fVar8 + (float10)(float)param_1[0x221];
      param_1[0x221] = (int)(float)fVar8;
      fVar9 = (float10)2.0;
      if (fVar9 < fVar8 != (fVar9 == fVar8)) {
        fVar3 = (float10)1;
        fVar8 = fVar3 - (fVar8 - fVar9);
        local_38 = (float)fVar8;
        if (fVar8 < fVar3) {
          if ((fVar8 <= (float10)0.8) && (param_1[0x1ed] != 0)) {
            FUN_0091adf0(1);
            FUN_0091adf0(2);
            fVar8 = (float10)local_38;
          }
        }
        else {
          local_38 = (float)fVar3;
          fVar8 = fVar3;
        }
        iVar7 = 0;
        iVar6 = 0;
        if (0 < (short)param_1[0xc9]) {
          do {
            *(float *)(iVar7 + 0x1c + param_1[200]) = (float)fVar8;
            iVar6 = iVar6 + 1;
            iVar7 = iVar7 + 0x70;
          } while (iVar6 < (short)param_1[0xc9]);
        }
        iVar7 = 0;
        iVar6 = FUN_00a94360();
        if (0 < iVar6) {
          do {
            FUN_00a94380(iVar7);
            FUN_00a81330();
            iVar6 = FUN_00a7c800();
            if (iVar6 != 0) {
              iVar5 = 0;
              iVar4 = 0;
              if (0 < *(short *)(iVar6 + 0x324)) {
                do {
                  *(float *)(iVar5 + 0x1c + *(int *)(iVar6 + 800)) = local_38;
                  iVar4 = iVar4 + 1;
                  iVar5 = iVar5 + 0x70;
                } while (iVar4 < *(short *)(iVar6 + 0x324));
              }
            }
            iVar7 = iVar7 + 1;
            iVar6 = FUN_00a94360();
          } while (iVar7 < iVar6);
          fVar2 = 3.0;
          goto LAB_005de583;
        }
      }
      fVar2 = 3.0;
    }
LAB_005de583:
    if (fVar2 < (float)param_1[0x221] == (fVar2 == (float)param_1[0x221])) goto LAB_005de6f7;
  }
  E3_EnemyBoardDebrisSokushi::vf4C();
LAB_005de6f7:
  iVar6 = 0;
  if (param_1[0x235] != 0) {
    fVar2 = (float)param_1[0x234];
    param_1[0x234] = (int)(fVar2 - 0.011111111);
    if (fVar2 - 0.011111111 <= 0.0) {
      local_38 = 0.0;
      if (0 < (short)param_1[0xc9]) {
        do {
          iVar7 = param_1[200];
          iVar4 = *(int *)(*(int *)(iVar7 + 0x60 + iVar6) + 0x40);
          if ((iVar4 != 0) && (iVar4 = FUN_00fdbbd0(iVar4,&DAT_0164425c), iVar4 != 0)) {
            puVar1 = (uint *)(iVar7 + 0x38 + iVar6);
            *puVar1 = *puVar1 & 0xfffffffe;
          }
          local_38 = (float)((int)local_38 + 1);
          iVar6 = iVar6 + 0x70;
        } while ((int)local_38 < (int)(short)param_1[0xc9]);
      }
      param_1[0x234] = 0;
    }
    iVar6 = param_1[0x234];
    iVar7 = 0;
    local_38 = 0.0;
    if (0 < (short)param_1[0xc9]) {
      do {
        iVar4 = param_1[200];
        iVar5 = *(int *)(*(int *)(iVar4 + 0x60 + iVar7) + 0x40);
        if ((iVar5 != 0) && (iVar5 = FUN_00fdbbd0(iVar5,&DAT_0164425c), iVar5 != 0)) {
          *(int *)(iVar4 + 0x1c + iVar7) = iVar6;
        }
        local_38 = (float)((int)local_38 + 1);
        iVar7 = iVar7 + 0x70;
      } while ((int)local_38 < (int)(short)param_1[0xc9]);
    }
  }
  if (((param_1[0x231] != 0) && (param_1[0x23e] != 0)) && (*(int *)(param_1[0xcc] + 0xc4) != 0)) {
    FUN_005d9f70(&fStack_30);
    fVar8 = (float10)FUN_00a92ff0();
    fVar8 = fVar8 + (float10)(float)param_1[0x232];
    param_1[0x232] = (int)(float)fVar8;
    if (fVar8 < (float10)60.0 != (fVar8 == (float10)60.0)) {
      fStack_20 = fStack_30 * -0.00062500004;
      fStack_1c = fStack_2c * -0.00062500004;
      fStack_18 = fStack_28 * -0.00062500004;
      fStack_14 = fStack_24 * -0.00062500004;
      (**(code **)(*param_1 + 0x70))(&fStack_20);
      return;
    }
    param_1[0x233] = 1;
  }
  return;
}

// 005DFBA0  BehaviorDebrisActor::ExplosionSlot::vf18  size=83  [class]
void __thiscall
BehaviorDebrisActor::ExplosionSlot::vf18(int param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  undefined *puVar2;
  
  if ((param_2 == 0x1e) && (param_3 != (undefined4 *)0x0)) {
    puVar2 = &DAT_01be9be0;
    (**(code **)*param_3)(&DAT_01be9be0);
    iVar1 = FUN_00dd6d80(puVar2);
    if (iVar1 != 0) {
      iVar1 = *(int *)(*(int *)(param_1 + 4) + 0x588);
      if (iVar1 == 0) {
        iVar1 = 0;
      }
      else {
        iVar1 = *(int *)(iVar1 + 0xb0);
      }
      if (param_3[2] == iVar1) {
        FUN_005de3e0();
      }
    }
  }
  return;
}

// 005DFC00  BehaviorDebrisActor::startup  size=2193  [class]
undefined4 __fastcall BehaviorDebrisActor::startup(int *param_1)

{
  uint *puVar1;
  char cVar2;
  short sVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int *piVar9;
  LPVOID pvVar10;
  int iVar11;
  float10 fVar12;
  undefined4 uVar13;
  int local_38;
  int local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined1 local_20 [28];
  
  iVar4 = Behavior::startup();
  if (iVar4 == 0) {
    return 0;
  }
  param_1[0x130] = param_1[0x130] | 0x40;
  iVar4 = lib::StaticArray<Constraints,32>::StaticArray<Constraints,32>();
  if (iVar4 == 0) {
    return 0;
  }
  local_2c = 0;
  local_28 = 0;
  local_30 = 1;
  iVar4 = lib::StaticArray<Behavior::EffectIntegrationContainer,32>::
          StaticArray<Behavior::EffectIntegrationContainer,32>(&local_30);
  if (iVar4 == 0) {
    return 0;
  }
  iVar4 = FUN_00a92f90();
  if (iVar4 != 0) {
    uVar13 = 1;
    FUN_00a92f90(1);
    FUN_00e26e50(uVar13);
  }
  if (param_1[0xdc] != 0) {
    *(undefined4 *)(param_1[0xdc] + 0xc) = 1;
  }
  if ((undefined4 *)param_1[0xdc] != (undefined4 *)0x0) {
    param_1[0xd9] = param_1[0xd9] | 0x400000;
    *(undefined4 *)param_1[0xdc] = 0;
  }
  uVar13 = 3;
  FUN_00a92fb0(3);
  FUN_00e08640(uVar13);
  param_1[0x234] = 0x3f800000;
  param_1[0x221] = 0;
  param_1[0x240] = 0;
  param_1[0x230] = 0;
  param_1[0x223] = 0;
  param_1[0x224] = 1;
  param_1[0x236] = 0;
  param_1[0x23b] = 0;
  param_1[0x1a4] = (uint)(param_1[0x12d] == 0x20010);
  param_1[0x220] = 0;
  param_1[0x222] = 0;
  param_1[0x235] = 0;
  FUN_00910ac0(0);
  iVar4 = param_1[0x162];
  param_1[0x225] = 0;
  param_1[0x232] = 0;
  param_1[0x237] = 0;
  param_1[0x231] = 0;
  param_1[0x233] = 0;
  param_1[0x238] = -1;
  param_1[0x1e3] = 0;
  param_1[0x1e2] = 0;
  param_1[0x23e] = 0;
  param_1[0x23f] = 0;
  if (iVar4 != 0) {
    param_1[0x23e] = *(int *)(iVar4 + 0x48);
    iVar4 = *(int *)(iVar4 + 0x4c);
    param_1[0x23f] = iVar4;
    if (iVar4 != 0) {
      param_1[0x23e] = 0;
    }
  }
  if (param_1[0x23a] == 0) {
    return 0;
  }
  puVar5 = (undefined4 *)FUN_00dd3500(8,&DAT_01b7c168);
  if (puVar5 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    *puVar5 = ExplosionSlot::vftable;
    puVar5[1] = param_1;
  }
  param_1[0x23d] = (int)puVar5;
  if (puVar5 == (undefined4 *)0x0) {
    return 0;
  }
  FUN_00d89ec0(0x1e,puVar5);
  iVar4 = 0;
  if (0 < (short)param_1[0xc9]) {
    iVar11 = 0;
    do {
      iVar6 = param_1[200];
      *(undefined4 *)(iVar6 + 0x10 + iVar11) = 0x3f800000;
      iVar6 = iVar6 + iVar11;
      *(undefined4 *)(iVar6 + 0x14) = 0x3f800000;
      iVar4 = iVar4 + 1;
      *(undefined4 *)(iVar6 + 0x18) = 0x3f800000;
      iVar11 = iVar11 + 0x70;
      *(undefined4 *)(iVar6 + 0x1c) = 0x3f800000;
    } while (iVar4 < (short)param_1[0xc9]);
  }
  if (param_1[0x12d] == 0x20010) {
    iVar4 = FUN_00dd3580(0x54,&DAT_01b7bd48);
    param_1[0x1e2] = iVar4;
    if (iVar4 == 0) {
      return 0;
    }
    *(undefined4 *)(iVar4 + param_1[0x1e3] * 4) = 0xa0006;
    param_1[0x1e3] = param_1[0x1e3] + 1;
    *(undefined4 *)(param_1[0x1e2] + param_1[0x1e3] * 4) = 0xb0007;
    param_1[0x1e3] = param_1[0x1e3] + 1;
    *(undefined4 *)(param_1[0x1e2] + param_1[0x1e3] * 4) = 0xc0008;
    param_1[0x1e3] = param_1[0x1e3] + 1;
    *(undefined4 *)(param_1[0x1e2] + param_1[0x1e3] * 4) = 0xd0009;
    param_1[0x1e3] = param_1[0x1e3] + 1;
    *(undefined4 *)(param_1[0x1e2] + param_1[0x1e3] * 4) = 0x13000f;
    param_1[0x1e3] = param_1[0x1e3] + 1;
    *(undefined4 *)(param_1[0x1e2] + param_1[0x1e3] * 4) = 0x140010;
    param_1[0x1e3] = param_1[0x1e3] + 1;
    *(undefined4 *)(param_1[0x1e2] + param_1[0x1e3] * 4) = 0x150011;
    param_1[0x1e3] = param_1[0x1e3] + 1;
    local_38 = 0x160012;
    *(undefined4 *)(param_1[0x1e2] + param_1[0x1e3] * 4) = 0x160012;
    param_1[0x1e3] = param_1[0x1e3] + 1;
    FUN_00a95e20(param_1[0x1e2],param_1[0x1e3]);
  }
  iVar4 = FUN_009f8d30();
  if (iVar4 == 0) {
    iVar4 = param_1[0x162];
    if ((iVar4 != 0) && (*(int *)(iVar4 + 0x90) != 0)) {
      param_1[0x235] = 1;
      param_1[0x234] = *(int *)(iVar4 + 0x94);
    }
    if (param_1[0x235] == 0) {
      param_1[0x235] = 1;
      param_1[0x234] = 0x3f800000;
    }
    if (((float)param_1[0x234] <= 0.0) && (local_34 = 0, 0 < (short)param_1[0xc9])) {
      iVar4 = 0;
      do {
        iVar11 = param_1[200];
        iVar6 = *(int *)(*(int *)(iVar11 + 0x60 + iVar4) + 0x40);
        if ((iVar6 != 0) && (iVar6 = FUN_00fdbbd0(iVar6,&DAT_0164425c), iVar6 != 0)) {
          puVar1 = (uint *)(iVar11 + 0x38 + iVar4);
          *puVar1 = *puVar1 & 0xfffffffe;
        }
        local_34 = local_34 + 1;
        iVar4 = iVar4 + 0x70;
      } while (local_34 < (short)param_1[0xc9]);
    }
    local_38 = param_1[0x234];
    local_34 = 0;
    if (0 < (short)param_1[0xc9]) {
      iVar4 = 0;
      do {
        iVar11 = param_1[200];
        iVar6 = *(int *)(*(int *)(iVar11 + 0x60 + iVar4) + 0x40);
        if ((iVar6 != 0) && (iVar6 = FUN_00fdbbd0(iVar6,&DAT_0164425c), iVar6 != 0)) {
          *(int *)(iVar11 + 0x1c + iVar4) = local_38;
        }
        local_34 = local_34 + 1;
        iVar4 = iVar4 + 0x70;
      } while (local_34 < (short)param_1[0xc9]);
    }
    (**(code **)(*param_1 + 0x20))();
    goto LAB_005e0419;
  }
  iVar4 = FUN_00dd3500(0x3080,&DAT_01b7bd48);
  if (iVar4 == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = lib::StaticArray<RigidBodyList::ConnectMap,256>::
            StaticArray<RigidBodyList::ConnectMap,256>();
  }
  param_1[0x1ed] = iVar4;
  if (iVar4 == 0) {
    return 0;
  }
  iVar4 = FUN_009fdd80(iVar4);
  if (iVar4 != 0) {
    return 0;
  }
  FUN_00923ff0(param_1);
  fVar12 = (float10)FUN_00916de0();
  if ((float10)0 == fVar12) {
    FUN_00a805f0();
    return 1;
  }
  FUN_0091c3e0(6,1);
  FUN_0091adf0(4);
  FUN_0091adf0(0x20);
  FUN_0091afb0(0x80);
  FUN_0091adf0(0x200000);
  FUN_0091c130(0);
  iVar4 = param_1[0x162];
  if ((iVar4 == 0) || (*(int *)(iVar4 + 0x2c) == 0)) {
    uVar13 = cXmlBinary::cXmlBinary_41();
  }
  else {
    uVar13 = *(undefined4 *)(iVar4 + 0x30);
  }
  FUN_0091b870(uVar13);
  iVar4 = param_1[0x162];
  if ((iVar4 != 0) && (*(int *)(iVar4 + 0x34) != 0)) {
    FUN_0091c760(*(undefined4 *)(iVar4 + 0x38));
  }
  iVar4 = param_1[0x162];
  if ((iVar4 != 0) && (*(int *)(iVar4 + 0x98) != 0)) {
    FUN_0091c550(0x21,*(undefined4 *)(iVar4 + 0x9c));
    FUN_0091c550(0x22,*(undefined4 *)(param_1[0x162] + 0x9c));
  }
  iVar4 = param_1[0x162];
  if ((iVar4 != 0) && (*(int *)(iVar4 + 0x90) != 0)) {
    param_1[0x235] = 1;
    local_34 = *(int *)(iVar4 + 0x94);
    param_1[0x234] = local_34;
    local_38 = 0;
    if (0 < (short)param_1[0xc9]) {
      iVar4 = 0;
      do {
        iVar11 = param_1[200];
        iVar6 = *(int *)(*(int *)(iVar11 + 0x60 + iVar4) + 0x40);
        if ((iVar6 != 0) && (iVar6 = FUN_00fdbbd0(iVar6,&DAT_0164425c), iVar6 != 0)) {
          *(int *)(iVar11 + 0x1c + iVar4) = local_34;
        }
        local_38 = local_38 + 1;
        iVar4 = iVar4 + 0x70;
      } while (local_38 < (short)param_1[0xc9]);
    }
    if ((float)param_1[0x234] <= 0.0) {
      iVar4 = 0;
      local_38 = 0;
      if (0 < (short)param_1[0xc9]) {
        do {
          iVar11 = param_1[200];
          iVar6 = *(int *)(*(int *)(iVar11 + 0x60 + iVar4) + 0x40);
          if ((iVar6 != 0) && (iVar6 = FUN_00fdbbd0(iVar6,&DAT_0164425c), iVar6 != 0)) {
            puVar1 = (uint *)(iVar11 + 0x38 + iVar4);
            *puVar1 = *puVar1 & 0xfffffffe;
          }
          local_38 = local_38 + 1;
          iVar4 = iVar4 + 0x70;
        } while (local_38 < (short)param_1[0xc9]);
      }
    }
  }
  iVar4 = param_1[0x162];
  if (iVar4 != 0) {
    param_1[0x1a5] = *(int *)(iVar4 + 0xc4);
    param_1[0x1a6] = *(int *)(iVar4 + 200);
    param_1[0x1a7] = *(int *)(iVar4 + 0xcc);
    iVar4 = param_1[0x162];
    param_1[0x1a8] = *(int *)(iVar4 + 0xd0);
    param_1[0x1a9] = *(int *)(iVar4 + 0xd4);
    param_1[0x1aa] = *(int *)(iVar4 + 0xd8);
    param_1[0x1ab] = *(int *)(iVar4 + 0xdc);
    *(undefined1 *)(param_1 + 0x1ac) = *(undefined1 *)(param_1[0x162] + 0xe0);
  }
  if (param_1[0x21c] == 0) {
    if (param_1[0x23e] == 0) {
      cVar2 = FUN_0091b370();
      if (-1 < cVar2) {
        FUN_004066f0();
        FUN_00912660(&local_38,0);
        uVar7 = FUN_0091a9d0();
        uVar8 = FUN_0091a9d0();
        FUN_00911f60(local_20,&local_30);
        local_34 = FUN_00915420();
        piVar9 = (int *)FUN_00900480();
        uVar13 = (**(code **)(*piVar9 + 0x14))
                           (local_34,local_20,&local_30,uVar7 & 0x1f,uVar8 >> 0x10,0);
        lib::AllocatedArray<hkpPhantomListener*>::AllocatedArray<hkpPhantomListener*>(uVar13);
        pvVar10 = TlsGetValue(DAT_01f8fc4c);
        puVar5 = (undefined4 *)(**(code **)(**(int **)((int)pvVar10 + 0x2c) + 4))(4);
        if (puVar5 == (undefined4 *)0x0) {
          puVar5 = (undefined4 *)0x0;
        }
        else {
          *puVar5 = DebrisPhantomListener::vftable;
        }
        FUN_00900940(puVar5);
        FUN_00900bd0();
        FUN_01006000();
        FUN_00406760();
      }
      goto LAB_005e02f7;
    }
  }
  else {
LAB_005e02f7:
    if (param_1[0x23e] == 0) goto LAB_005e0419;
  }
  param_1[0x231] = 1;
LAB_005e0419:
  iVar4 = param_1[0x12d];
  if ((((iVar4 == 0x20030) || (iVar4 == 0x40050)) || (iVar4 == 0xd006f)) ||
     (((iVar4 == 0xd0080 || (iVar4 == 0xd0082)) || ((iVar4 == 0xd0084 || (iVar4 == 0xd0085)))))) {
    sVar3 = FUN_00dde2d0(0,10);
    param_1[0x223] = 1;
    param_1[0x23c] = (int)((float)(int)sVar3 * 0.1 + 3.0);
  }
  return 1;
}

// 005E1C90  BehaviorDebrisActor::vf54  size=2074  [class]
void __fastcall BehaviorDebrisActor::vf54(int *param_1)

{
  byte bVar1;
  float fVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  float *pfVar6;
  byte *pbVar7;
  uint uVar8;
  bool bVar9;
  float10 fVar10;
  float fStack_240;
  float fStack_23c;
  float fStack_238;
  int *local_234;
  float local_230;
  float local_22c;
  float local_228;
  float local_224;
  float local_220;
  float local_21c;
  float local_218;
  float local_214;
  float local_210;
  float local_20c;
  float local_208;
  float fStack_204;
  uint local_1f4;
  undefined **local_1f0;
  undefined4 local_1ec;
  int *local_1e8;
  uint local_1e4;
  undefined1 *local_1e0;
  int local_1dc [3];
  undefined1 local_1d0 [380];
  undefined1 auStack_54 [80];
  
  Behavior::vf54();
  if ((((param_1[0x23e] == 0) || (param_1[0x23f] != 0)) && (param_1[0x1ed] != 0)) &&
     (((param_1[0x220] != 0 && (param_1[0x230] == 0)) ||
      (((param_1[0x1ed] != 0 && ((param_1[0x220] != 0 && (param_1[0x230] != 0)))) &&
       (param_1[0x239] != 0)))))) {
    param_1[0x240] = 1;
    FUN_0091e980(param_1);
  }
  if (param_1[0x23e] != 0) {
    if (param_1[0x1ed] == 0) {
      return;
    }
    if ((param_1[0x220] == 0) && (param_1[0x21c] != 0)) {
      iVar3 = FUN_00a92f90();
      if (iVar3 == 0) {
        return;
      }
      iVar3 = param_1[0x162];
      if (iVar3 == 0) {
        return;
      }
      if (param_1[0x222] != 0) {
        return;
      }
      pbVar7 = &DAT_01644278;
      pbVar4 = (byte *)(iVar3 + 0x14);
      do {
        bVar1 = *pbVar4;
        bVar9 = bVar1 < *pbVar7;
        if (bVar1 != *pbVar7) {
LAB_005e1d90:
          iVar5 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
          goto LAB_005e1d95;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar4[1];
        bVar9 = bVar1 < pbVar7[1];
        if (bVar1 != pbVar7[1]) goto LAB_005e1d90;
        pbVar4 = pbVar4 + 2;
        pbVar7 = pbVar7 + 2;
      } while (bVar1 != 0);
      iVar5 = 0;
LAB_005e1d95:
      if (iVar5 != 0) {
        param_1[0x225] = 0x3f955555;
      }
      FUN_00aa4940((byte *)(iVar3 + 0x14),0,0x3dcccccd,0x3f800000,0,*(undefined4 *)(iVar3 + 0x1c),
                   0x3f800000);
      param_1[0x222] = 1;
      param_1[0x223] = 0;
      return;
    }
  }
  if (param_1[0x1ed] == 0) {
    return;
  }
  if (param_1[0x220] != 0) {
    return;
  }
  local_234 = param_1 + 0x21c;
  if (param_1[0x21c] == 0) {
    return;
  }
  FUN_004066f0();
  local_1ec = 0x7f7fffee;
  local_1e0 = local_1d0;
  local_1f0 = hkpAllCdPointCollector::vftable;
  local_1dc[1] = 0x80000008;
  local_1dc[0] = 0;
  FUN_00900350(&local_1f0);
  bVar9 = local_1dc[0] != 0;
  uVar8 = (uint)bVar9;
  hkpCdPointCollector::hkpCdPointCollector();
  if (uVar8 == 0) {
    local_1e8 = local_1dc;
    local_1f0 = hkpAllCdBodyPairCollector::vftable;
    local_1e0 = &DAT_80000010;
    local_1ec = CONCAT31(local_1ec._1_3_,bVar9);
    local_1e4 = uVar8;
    FUN_00900320(&local_1f0);
    uVar8 = (uint)(local_1e4 != 0);
    hkpCdBodyPairCollector::hkpCdBodyPairCollector();
    if (uVar8 == 0) {
      if (param_1[0x12d] != 0x20010) goto LAB_005e221c;
      FUN_0091adf0(0x2000);
      FUN_009174c0();
      FUN_005d9f70(&local_210);
      if ((*(int *)(param_1[0xcc] + 0xc4) == 0) ||
         (((local_210 == 0.0 && (local_20c == 0.0)) && (local_208 == 0.0)))) {
        if (param_1[0x23e] != 0) goto LAB_005e2167;
LAB_005e214c:
        param_1[0x238] = 0;
      }
      else {
        fVar2 = ABS(local_208 * 0.0 + local_210 * 0.0 + local_20c);
        if (!NAN(fVar2) && 0.8 < fVar2 != (fVar2 == 0.8)) goto LAB_005e214c;
        if (fVar2 < 0.3) {
          param_1[0x238] = 2;
        }
        else {
          param_1[0x238] = 1;
        }
      }
      if ((param_1[0x162] != 0) && (*(int *)(param_1[0x162] + 4) != 0)) {
        param_1[0x238] = 2;
      }
LAB_005e2167:
      iVar3 = FUN_00a92f90();
      if ((iVar3 != 0) && (iVar3 = param_1[0x162], iVar3 != 0)) {
        FUN_00aa4940(iVar3 + 0x14,0,0x3dcccccd,0x3f800000,0,*(undefined4 *)(iVar3 + 0x1c),0x3f800000
                    );
        pbVar7 = &DAT_01644278;
        pbVar4 = (byte *)(param_1[0x162] + 0x14);
        do {
          bVar1 = *pbVar4;
          bVar9 = bVar1 < *pbVar7;
          if (bVar1 != *pbVar7) {
LAB_005e21de:
            iVar3 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
            goto LAB_005e21e3;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar4[1];
          bVar9 = bVar1 < pbVar7[1];
          if (bVar1 != pbVar7[1]) goto LAB_005e21de;
          pbVar4 = pbVar4 + 2;
          pbVar7 = pbVar7 + 2;
        } while (bVar1 != 0);
        iVar3 = 0;
LAB_005e21e3:
        if (iVar3 != 0) {
          param_1[0x225] = 0x3f955555;
        }
        param_1[0x222] = 1;
        param_1[0x223] = 0;
      }
      FUN_00900ca0();
      FUN_00406760();
      return;
    }
  }
  if (param_1[0x12d] == 0x20010) {
    FUN_0091adf0(0x2000);
    FUN_009174c0();
    if ((param_1[0x1ed] != 0) && (param_1[0x220] == 0)) {
      FUN_00912890(DAT_01885d20);
      param_1[0x220] = 1;
    }
    param_1[0x230] = 1;
    param_1[0x238] = 3;
    if (param_1[0x162] != 0) {
      FUN_005d9170();
    }
    iVar3 = FUN_00a92f90();
    if ((iVar3 != 0) && (iVar3 = param_1[0x162], iVar3 != 0)) {
      pbVar4 = (byte *)(iVar3 + 0x14);
      pbVar7 = &DAT_01644278;
      do {
        bVar1 = *pbVar4;
        bVar9 = bVar1 < *pbVar7;
        if (bVar1 != *pbVar7) {
LAB_005e1f80:
          iVar5 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
          goto LAB_005e1f85;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar4[1];
        bVar9 = bVar1 < pbVar7[1];
        if (bVar1 != pbVar7[1]) goto LAB_005e1f80;
        pbVar4 = pbVar4 + 2;
        pbVar7 = pbVar7 + 2;
      } while (bVar1 != 0);
      iVar5 = 0;
LAB_005e1f85:
      if (iVar5 != 0) {
        param_1[0x225] = 0x3f955555;
      }
      fVar2 = 0.0;
      if (1 < *(int *)(iVar3 + 8)) {
        local_1f4 = FUN_00dde2a0(5,0xf);
        local_1f4 = local_1f4 & 0xffff;
        fVar2 = (float)local_1f4 * 0.016666668;
      }
      FUN_00aa4940(param_1[0x162] + 0x14,0,0x3dcccccd,0x3f800000,0,
                   *(float *)(param_1[0x162] + 0x1c) + fVar2,0x3f800000);
      FUN_005d9f70(&local_220);
      local_230 = local_220 * -0.075;
      local_22c = local_21c * -0.075;
      local_228 = local_218 * -0.075;
      local_224 = local_214 * -0.075;
      (**(code **)(*param_1 + 0x70))(&local_230);
      switchD_0080dbae::default();
      if (param_1[0x1ed] != 0) {
        FUN_0091ea00(param_1);
      }
      param_1[0x222] = 1;
      param_1[0x223] = 0;
    }
    FUN_00900ca0();
    FUN_00406760();
    return;
  }
LAB_005e221c:
  if (((uVar8 == 0) || ((int *)param_1[0x162] == (int *)0x0)) || (*(int *)param_1[0x162] == 0)) {
    FUN_009174c0();
    FUN_00a8b6e0();
    (**(code **)(*param_1 + 0x118))(0);
    param_1[0x223] = 1;
  }
  else {
    FUN_00917560();
    param_1[0x223] = 0;
    if (param_1[0x235] == 0) {
      param_1[0x235] = 1;
      param_1[0x234] = 0x3f800000;
    }
    if ((param_1[0x162] != 0) && (FUN_005d9170(), 1 < *(int *)(param_1[0x162] + 8))) {
      param_1[0x224] = 1;
    }
    iVar3 = FUN_009f9460(param_1[0x12d]);
    if ((((iVar3 != 0) || (iVar3 = FUN_009f94a0(param_1[0x12d]), iVar3 != 0)) ||
        (iVar3 = FUN_009f9480(param_1[0x12d]), iVar3 != 0)) && (*(int *)(param_1[0xcc] + 0xc4) != 0)
       ) {
      FUN_005d9f70(&local_220);
      local_230 = local_220 * -0.01;
      local_22c = local_21c * -0.01;
      local_228 = local_218 * -0.01;
      local_224 = local_214 * -0.01;
      (**(code **)(*param_1 + 0x70))(&local_230);
      local_234 = (int *)0x0;
      local_230 = 1.0;
      local_22c = 0.0;
      FUN_00ddcfe0(auStack_54,&local_234,0x3fc90fdb);
      D3DXVec3TransformNormal(&local_214,&local_224,auStack_54);
      fStack_240 = local_220 * 0.02;
      fStack_23c = local_21c * 0.02;
      fStack_238 = local_218 * 0.02;
      local_234 = (int *)(local_214 * 0.02);
      (**(code **)(*param_1 + 0x70))(&fStack_240);
      switchD_0080dbae::default();
      if (param_1[0x1ed] != 0) {
        FUN_0091ea00(param_1);
      }
    }
  }
  FUN_00900ca0();
  if ((param_1[0x1ed] != 0) && (param_1[0x220] == 0)) {
    FUN_00912890(DAT_01885d20);
    param_1[0x220] = 1;
  }
  if ((*(int *)(param_1[0xcc] + 0xc4) != 0) && (uVar8 == 0)) {
    fVar10 = (float10)FUN_00916de0();
    fVar10 = fVar10 * (float10)-1.0;
    local_220 = (float)fVar10;
    local_21c = (float)((float10)0.2 * fVar10);
    local_218 = (float)fVar10;
    pfVar6 = (float *)FUN_005d9f70(&local_230);
    local_210 = local_220 * *pfVar6;
    local_20c = pfVar6[1] * local_21c;
    local_208 = pfVar6[2] * local_218;
    fStack_204 = pfVar6[3] * local_214;
    FUN_0091ab40(&local_210);
  }
  FUN_00406760();
  return;
}

// 00A9D2F0  BehaviorDebrisActor::vf48  size=137  [class]
void __fastcall BehaviorDebrisActor::vf48(int param_1)

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

