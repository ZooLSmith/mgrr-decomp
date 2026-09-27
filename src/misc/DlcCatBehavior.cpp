// src/misc/DlcCatBehavior.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00603560..00AB9BE0, 9 functions

#include "mgrr.h"
#include "DlcCatBehavior.h"

// 00603560  FUN_00603560  size=486  [callgraph]
void __fastcall FUN_00603560(int *param_1)

{
  code *pcVar1;
  float10 fVar2;
  short sVar3;
  int *piVar4;
  int iVar5;
  float unaff_ESI;
  float unaff_EDI;
  float10 fVar6;
  float in_stack_ffffffc8;
  undefined4 uStack_34;
  float fStack_30;
  undefined4 uStack_2c;
  float fStack_28;
  int iStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  
  if (param_1[0x187] == 0) {
    if (param_1[0x186] == 1) {
      FUN_00a9e290(&DAT_0163b7bc,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
      sVar3 = FUN_00dde2d0(0xb4,300);
      param_1[0x288] = (int)sVar3;
    }
    else if (param_1[0x186] == 2) {
      piVar4 = (int *)FUN_00c13920();
      (**(code **)(*piVar4 + 0x28))(0);
      iVar5 = FUN_00a7c8a0();
      uStack_34 = *(undefined4 *)(iVar5 + 0x40);
      fStack_30 = *(float *)(iVar5 + 0x44);
      uStack_2c = *(undefined4 *)(iVar5 + 0x48);
      fStack_28 = *(float *)(iVar5 + 0x4c);
      iStack_24 = param_1[0x14];
      fStack_20 = (float)param_1[0x15];
      fStack_1c = (float)param_1[0x16];
      fStack_18 = (float)param_1[0x17];
      D3DXVec3TransformNormal(&uStack_34,&uStack_34,param_1 + 0x3c);
      unaff_EDI = (float)param_1[0x48] + unaff_EDI;
      unaff_ESI = (float)param_1[0x49] + unaff_ESI;
      in_stack_ffffffc8 = (float)param_1[0x4a] + in_stack_ffffffc8;
      D3DXVec3TransformNormal(&fStack_30,&fStack_30,param_1 + 0x3c);
      fVar6 = (float10)fStack_20;
      fStack_20 = (float)((float10)(float)param_1[0x48] + fVar6);
      fStack_1c = (float)param_1[0x49] + fStack_1c;
      fVar2 = (float10)fStack_18;
      fStack_18 = (float)((float10)(float)param_1[0x4a] + fVar2);
      fVar6 = (float10)fpatan((float10)fStack_30 - ((float10)(float)param_1[0x48] + fVar6),
                              (float10)fStack_28 - ((float10)(float)param_1[0x4a] + fVar2));
      param_1[0x25] = (int)(float)fVar6;
      switchD_0080dbae::default(unaff_EDI,unaff_ESI,in_stack_ffffffc8);
      FUN_00a9f2b0(&DAT_0164598c,0,0,0x3f800000,0,0x3c888889,0x3f800000);
      param_1[0x288] = 0;
    }
    else {
      FUN_00a9e290(&DAT_0163b5f4,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
      sVar3 = FUN_00dde2d0(0xb4,300);
      param_1[0x288] = (int)sVar3;
    }
    pcVar1 = *(code **)(*param_1 + 100);
    param_1[0x187] = 1;
    (*pcVar1)();
  }
  return;
}

// 00603750  DlcCatBehavior::vf94  size=7  [class]
undefined4 __fastcall DlcCatBehavior::vf94(int param_1)

{
  return *(undefined4 *)(param_1 + 0xa28);
}

// 00603780  DlcCatBehavior::vf40  size=500  [class]
undefined4 __fastcall DlcCatBehavior::vf40(int *param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  
  iVar1 = BehaviorAppBase::vf40();
  if (iVar1 == 0) {
    return 0;
  }
  piVar2 = (int *)(**(code **)(*param_1 + 0x68))();
  param_1[0x280] = *piVar2;
  param_1[0x281] = piVar2[1];
  param_1[0x282] = piVar2[2];
  param_1[0x283] = piVar2[3];
  piVar2 = (int *)(**(code **)(*param_1 + 0x84))();
  param_1[0x284] = *piVar2;
  param_1[0x285] = piVar2[1];
  param_1[0x286] = piVar2[2];
  param_1[0x287] = piVar2[3];
  FUN_00a9e290(&DAT_0163b5f4,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
  FUN_00a8caf0(0,0,0,0);
  FUN_00603560();
  param_1[0x288] = 0;
  iVar1 = FUN_008ec660(param_1,0x3f800000,0x3e99999a,0x42200000,0x41a00000,0x78,7,0);
  param_1[0x1d9] = iVar1;
  FUN_008e6d00();
  *(float *)(param_1[0x1d9] + 0xf4) = *(float *)(param_1[0x1d9] + 0xf4) * 0.5;
  FUN_00410540(1,&DAT_01b7bd48);
  uVar3 = FUN_00a8d2a0();
  lib::StaticArray<Collision*,64>::StaticArray<Collision*,64>_2(1);
  puVar4 = (undefined4 *)FUN_009f8b60();
  iVar1 = CollisionSphere::CollisionSphere(2,*puVar4,0);
  param_1[0x289] = iVar1;
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0x380) = 0;
    FUN_00d77c50(param_1[0x13c],0);
    *(undefined4 *)(param_1[0x289] + 0x510) = 0x3f800000;
    FUN_00a93a00(param_1[0x289],uVar3);
    FUN_00d7b0f0();
    FUN_00d7b890();
  }
  param_1[0x28a] = 0;
  iVar1 = FUN_00d46780();
  if (iVar1 != 0) {
    param_1[0x28a] = 2;
    return 1;
  }
  iVar1 = FUN_00d467a0();
  if (iVar1 != 0) {
    param_1[0x28a] = 3;
  }
  return 1;
}

// 00603980  DlcCatBehavior::vf4C  size=326  [class]
void __fastcall DlcCatBehavior::vf4C(int *param_1)

{
  float *pfVar1;
  int iVar2;
  float10 fVar3;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  undefined1 auStack_20 [28];
  
  Behavior::vf4C();
  if ((char)param_1[0x11c] == '\0') {
    (**(code **)(*param_1 + 100))();
    if (param_1[0x186] == 1) {
      fStack_40 = (float)param_1[0x10];
      fStack_3c = (float)param_1[0x11] + 0.5;
      fStack_38 = (float)param_1[0x12];
      fStack_34 = (float)param_1[0x13] + fStack_24;
      pfVar1 = (float *)FUN_00a925a0(auStack_20);
      fStack_30 = *pfVar1 * 2.0 + fStack_40;
      fStack_2c = pfVar1[1] * 2.0 + fStack_3c;
      fStack_28 = pfVar1[2] * 2.0 + fStack_38;
      fStack_24 = pfVar1[3] * 2.0 + fStack_34;
      iVar2 = RayCastSingleHitWork::RayCastSingleHitWork_4(0,0,0,0,&fStack_40,&fStack_30,0x1e,0);
      if (iVar2 != 0) {
        (**(code **)(*param_1 + 0x7c))(param_1 + 0x280,param_1 + 0x284);
      }
    }
    param_1 = param_1 + 0x288;
    *param_1 = *param_1 + -1;
    if (*param_1 < 0) {
      iVar2 = FUN_00a94ce0(0);
      if (iVar2 != 0) {
        fVar3 = (float10)FUN_00dde300(0,0x3f800000);
        if (fVar3 < (float10)0.6) {
          FUN_00a8caf0(1,0,0,0);
          FUN_00603560();
          return;
        }
        FUN_00a8caf0(0,0,0,0);
        FUN_00603560();
      }
    }
  }
  return;
}

// 00603AD0  DlcCatBehavior::vf44  size=94  [class]
void __fastcall DlcCatBehavior::vf44(int param_1)

{
  FUN_00a9d8a0();
  FUN_008e3c10();
  FUN_008e1c60();
  if (*(int *)(param_1 + 0x67c) != 0) {
    *(undefined4 *)(param_1 + 0x684) = 0;
    if (*(int *)(param_1 + 0x688) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 0x67c),0);
      *(undefined4 *)(param_1 + 0x688) = 0;
    }
    *(undefined4 *)(param_1 + 0x67c) = 0;
    *(undefined4 *)(param_1 + 0x680) = 0;
  }
  Behavior::vf44();
  return;
}

// 00603B30  FUN_00603b30  size=107  [between]
bool __fastcall FUN_00603b30(int param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  bool bVar4;
  
  *(undefined4 *)(param_1 + 0x684) = 0;
  FUN_00ac2080(0);
  piVar3 = *(int **)(param_1 + 0x67c);
  piVar2 = piVar3 + *(int *)(param_1 + 0x684) * 0x54;
  bVar4 = false;
  if (piVar3 != piVar2) {
    while ((((iVar1 = *piVar3, iVar1 == 0 || (iVar1 == 1)) || (iVar1 == 2)) ||
           ((iVar1 == 0x1b0 || (iVar1 == 0x147))))) {
      piVar3 = piVar3 + 0x54;
      if (piVar3 == piVar2) {
        return bVar4;
      }
    }
    bVar4 = iVar1 != 0x1b0;
  }
  return bVar4;
}

// 00603BA0  DlcCatBehavior::vf48  size=49  [class]
void DlcCatBehavior::vf48(void)

{
  int iVar1;
  
  iVar1 = FUN_00603b30();
  if (iVar1 != 0) {
    iVar1 = FUN_00a8cab0();
    if (iVar1 != 2) {
      FUN_00a8caf0(2,0,0,0);
      FUN_00603560();
      return;
    }
  }
  return;
}

// 00AB19F0  DlcCatBehavior::vf04  size=6  [class]
undefined * DlcCatBehavior::vf04(void)

{
  return &DAT_01b354d4;
}

// 00AB9BE0  DlcCatBehavior::vf00  size=105  [class]
undefined4 * __thiscall DlcCatBehavior::vf00(undefined4 *param_1,byte param_2)

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

