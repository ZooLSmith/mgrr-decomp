// src/boss/bm0303/Bm0303.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00412320..00AB9060, 12 functions

#include "mgrr.h"
#include "Bm0303.h"

// 00412320  Bm0303::vf50  size=48  [class]
void __fastcall Bm0303::vf50(int param_1)

{
  Behavior::vf50();
  if (*(int *)(param_1 + 0x930) != 0) {
    FUN_0092bcd0();
    if (*(char *)(*(int *)(param_1 + 0x930) + 0x20) != '\0') {
      FUN_0092b680();
    }
  }
  FUN_00a93170();
  return;
}

// 00412350  Bm0303::vf54  size=26  [class]
void __fastcall Bm0303::vf54(int param_1)

{
  Behavior::vf54();
  if (*(int *)(param_1 + 0x7b0) != 0) {
    FUN_008f3cb0(param_1);
  }
  return;
}

// 00412370  Bm0303::vf2EC  size=189  [class]
void __fastcall Bm0303::vf2EC(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int unaff_EBP;
  int iVar4;
  int local_4;
  
  iVar4 = 0;
  *(undefined4 *)(param_1 + 0x870) = 1;
  local_4 = param_1;
  FUN_00a9e290(&DAT_0163b604,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
  if (*(int *)(param_1 + 0x7b0) != 0) {
    FUN_008f1600(0x10000);
  }
  local_4 = 0;
  piVar1 = (int *)FUN_00c14bb0();
  iVar2 = (**(code **)(*piVar1 + 0x28))(&local_4,0x305);
  if ((iVar2 != 0) && (0 < unaff_EBP)) {
    do {
      piVar1 = *(int **)(iVar2 + iVar4 * 4);
      if ((piVar1 != (int *)0x0) && (iVar3 = (**(code **)(*piVar1 + 8))(), iVar3 != 0)) {
        (**(code **)(**(int **)(iVar2 + iVar4 * 4) + 0xe0))(1,"elevator_col",0,0);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < unaff_EBP);
  }
  *(undefined1 *)(param_1 + 0x93e) = 1;
  return;
}

// 00412580  FUN_00412580  size=42  [callgraph]
uint FUN_00412580(int *param_1)

{
  int iVar1;
  undefined *puVar2;
  
  if (param_1 == (int *)0x0) {
    return 0;
  }
  puVar2 = &DAT_01be9db8;
  (**(code **)(*param_1 + 4))(&DAT_01be9db8);
  iVar1 = FUN_00dd6d80(puVar2);
  return -(uint)(iVar1 != 0) & (uint)param_1;
}

// 004125F0  Bm0303::vf44  size=107  [class]
void __fastcall Bm0303::vf44(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x878) != 0) {
    FUN_00d7b0f0();
  }
  iVar1 = *(int *)(param_1 + 0x930);
  if (iVar1 != 0) {
    cXml::cXml_6();
    FUN_00dd4920(iVar1);
    *(undefined4 *)(param_1 + 0x930) = 0;
  }
  if (*(int **)(param_1 + 0x7b0) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x7b0) + 4))(1);
    *(undefined4 *)(param_1 + 0x7b0) = 0;
  }
  FUN_00a8c820();
  FUN_00a9d8a0();
  Behavior::vf44();
  return;
}

// 00412660  FUN_00412660  size=614  [between]
void __fastcall FUN_00412660(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *piVar4;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  iVar1 = param_1[0x187];
  if (iVar1 == 0) {
    FUN_00b94ed0();
    FUN_00b8a040(1,0,0);
    iVar1 = FUN_00a81330();
    if (iVar1 == 0) {
      FUN_00aa4080(0xe,0,0x3e088889,0x3f800000,0,0xbf800000,0x3f800000);
    }
    else {
      FUN_00a81330();
      FUN_00a7c8a0();
      uVar2 = FUN_00de4550("Pl0010_a310.mot",0);
      FUN_00a7c8a0();
      uVar3 = FUN_00de4550("Pl0010_a310_0_seq.bxm",0);
      FUN_00a9efb0(uVar2,uVar3,0,0x3e088889,0x3f800000,0,0xbf800000,0x3f800000);
    }
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (iVar1 != 1) {
    if (iVar1 == 2) {
      FUN_00b94790(0x3f800000,0x3f800000);
      iVar1 = FUN_00a94ce0(0);
      if (iVar1 != 0) {
        (**(code **)(*param_1 + 0x388))(0);
      }
    }
    goto LAB_0041284c;
  }
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    FUN_00a92f90();
    FUN_00e26e90();
    FUN_00e22f10(0);
  }
  FUN_00b94790(0x3f800000,0x3f800000);
  piVar4 = (int *)FUN_00a6e640();
  iVar1 = (**(code **)(*piVar4 + 0x24))(2,1,2);
  if (iVar1 != 0) {
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00aa4080(0x7a,0,0x3e088889,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00a96070(0,0x8000000,1);
    FUN_00b94790(0x3f800000,0x3f800000);
    FUN_00a7c950();
    param_1[0x2dd] = 0;
  }
LAB_0041284c:
  local_20 = 0;
  local_1c = 0xc1a00000;
  local_18 = 0;
  local_30 = param_1[0x10];
  local_2c = param_1[0x11];
  local_28 = param_1[0x12];
  local_24 = param_1[0x13];
  iVar1 = hkpCdPointCollector::hkpCdPointCollector(&local_20,&local_30,1,0,0x3c23d70a);
  if (iVar1 != 0) {
    param_1[0x14] = local_30;
    param_1[0x15] = local_2c;
    param_1[0x16] = local_28;
    param_1[0x17] = local_24;
  }
  return;
}

// 004128D0  FUN_004128d0  size=521  [between]
void __fastcall FUN_004128d0(int *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  uint *puVar7;
  uint uVar8;
  int iStack_74;
  undefined1 auStack_68 [4];
  undefined1 auStack_64 [20];
  uint uStack_50;
  uint uStack_4c;
  uint uStack_38;
  uint uStack_34;
  uint uStack_30;
  
  param_1[0x21d] = 1;
  FUN_004066f0();
  iVar5 = (**(code **)(*(int *)param_1[0x1ec] + 0xc))();
  if (0 < iVar5) {
    do {
      piVar6 = (int *)(**(code **)(*(int *)param_1[0x1ec] + 300))(auStack_64,0);
      iVar5 = *piVar6;
      uVar8 = uStack_50 | 0x20000000;
      puVar7 = (uint *)(**(code **)(*param_1 + 0x68))();
      uStack_38 = *puVar7;
      uStack_34 = puVar7[1];
      uStack_30 = puVar7[2];
      puVar7 = (uint *)FUN_00a925a0(auStack_68);
      uVar1 = *puVar7;
      uVar2 = puVar7[1];
      uVar3 = puVar7[2];
      if ((iVar5 != 0) && (uVar4 = *(uint *)(iVar5 + 0xc), uVar4 != 0)) {
        puVar7 = (uint *)(-(uint)(uVar4 != 0) & uVar4);
        *puVar7 = *puVar7 | 0x80000;
        puVar7[0x15] = 0x18e;
        *puVar7 = *puVar7 | 0x100000;
        puVar7[0x16] = 0x47c34f80;
        *puVar7 = *puVar7 | 0x800000;
        puVar7[0x19] = 100;
        *puVar7 = *puVar7 | 0x200000;
        puVar7[0x17] = uVar8;
        *puVar7 = *puVar7 | 0x400000;
        puVar7[0x18] = uStack_4c;
        *puVar7 = *puVar7 | 0x1000000;
        puVar7[0x1a] = uStack_38;
        *puVar7 = *puVar7 | 0x2000000;
        puVar7[0x1b] = uStack_34;
        *puVar7 = *puVar7 | 0x4000000;
        puVar7[0x1c] = uStack_30;
        *puVar7 = *puVar7 | 0x8000000;
        puVar7[0x1d] = uVar1;
        *puVar7 = *puVar7 | 0x10000000;
        puVar7[0x1e] = uVar2;
        *puVar7 = *puVar7 | 0x20000000;
        puVar7[0x1f] = uVar3;
      }
      iStack_74 = iStack_74 + 1;
      iVar5 = (**(code **)(*(int *)param_1[0x1ec] + 0xc))();
    } while (iStack_74 < iVar5);
  }
  if (param_1[0x1ec] != 0) {
    FUN_008f1760(0x10000);
  }
  FUN_00eaa6e0(0,0);
  *(undefined2 *)((int)param_1 + 0x93e) = 0;
  if (DAT_01885d68 != 1) {
    piVar6 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
    *piVar6 = *piVar6 + -1;
    if (((*piVar6 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
      FUN_00dd7320();
    }
  }
  return;
}

// 00412AE0  Bm0303::startup  size=452  [class]
undefined4 __fastcall Bm0303::startup(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 extraout_ECX;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  *(undefined1 *)(param_1 + 0x93e) = 0;
  iVar1 = Behavior::startup();
  if (iVar1 != 0) {
    *(uint *)(param_1 + 0x364) = *(uint *)(param_1 + 0x364) & 0xfffffffd;
    *(undefined4 *)(param_1 + 0x878) = 0;
    iVar1 = FUN_00dd3500(0x3c,&DAT_01b7bd48);
    if (iVar1 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = RigidBodyCollision::RigidBodyCollision();
    }
    *(int *)(param_1 + 0x7b0) = iVar1;
    if (iVar1 != 0) {
      uVar5 = *(undefined4 *)(param_1 + 0x4f0);
      uVar2 = FUN_00de46d0("_col.hkx",0);
      uVar3 = FUN_00de4550("_col.hkx",0);
      FUN_008f6410(uVar5,uVar3,uVar2);
      FUN_008f2ea0();
      FUN_008f1040(0x3ff001f);
    }
    local_8 = 0;
    local_4 = 0;
    local_c = 1;
    iVar1 = lib::StaticArray<Behavior::EffectIntegrationContainer,32>::
            StaticArray<Behavior::EffectIntegrationContainer,32>(&local_c);
    if (iVar1 != 0) {
      iVar1 = FUN_00de4550("_DRInfo.bxm",0);
      if (iVar1 != 0) {
        iVar4 = FUN_00dd3500(0x50,&DAT_01b7bd48);
        if (iVar4 == 0) {
          uVar5 = 0;
        }
        else {
          uVar5 = FUN_0092b420();
        }
        uVar2 = *(undefined4 *)(param_1 + 0x7b0);
        *(undefined4 *)(param_1 + 0x930) = uVar5;
        uVar3 = FUN_00a7c7f0(iVar1,uVar2);
        uVar5 = extraout_ECX;
        FUN_00a7c940(uVar3);
        FUN_0092b4e0(uVar5,iVar1,uVar2);
        FUN_00928d50(4);
        FUN_00928d50(2);
        *(uint *)(param_1 + 0x4c0) = *(uint *)(param_1 + 0x4c0) | 0x80000;
      }
      if (*(undefined4 **)(param_1 + 0x370) != (undefined4 *)0x0) {
        *(uint *)(param_1 + 0x364) = *(uint *)(param_1 + 0x364) | 0x400000;
        **(undefined4 **)(param_1 + 0x370) = 0;
      }
      *(undefined4 *)(param_1 + 0x870) = 0;
      *(undefined4 *)(param_1 + 0x87c) = 0;
      *(undefined4 *)(param_1 + 0x874) = 0;
      *(undefined4 *)(param_1 + 0x934) = 0xffffffff;
      iVar1 = DAT_018b9174;
      *(int *)(param_1 + 0x938) = DAT_018b9174;
      if (iVar1 == 0x340) {
        FUN_004128d0();
        *(undefined4 *)(param_1 + 0x54) = 0xc3b08000;
      }
      *(undefined2 *)(param_1 + 0x93c) = 0;
      *(undefined1 *)(param_1 + 0x93f) = 0;
      return 1;
    }
  }
  return 0;
}

// 00412CB0  Bm0303::vf4C  size=574  [class]
void __fastcall Bm0303::vf4C(int *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uStack_180;
  float fStack_17c;
  undefined4 uStack_178;
  float fStack_174;
  undefined1 auStack_170 [16];
  undefined1 auStack_160 [348];
  
  Behavior::vf4C();
  if ((param_1[0x24e] == 0x340) && ((char)param_1[0x24f] == '\0')) {
    FUN_004128d0();
    *(undefined1 *)(param_1 + 0x24f) = 1;
  }
  if (param_1[0x21c] == 0) {
    return;
  }
  if (*(char *)((int)param_1 + 0x93d) == '\0') {
    iVar1 = FUN_00a94d60(&DAT_0163b604);
    if (iVar1 == 0) {
      if (*(char *)((int)param_1 + 0x93d) != '\0') goto LAB_00412ea7;
      FUN_00a96030(0,0);
      piVar2 = (int *)FUN_00c13920();
      iVar1 = (**(code **)(*piVar2 + 0x28))(0xffffffff);
      if (iVar1 != 0) {
        FUN_00a7c8a0();
        iVar1 = FUN_00a8d9f0();
        if (iVar1 != 0) {
          iVar1 = param_1[0x13c];
          FUN_00a7c8a0();
          iVar3 = FUN_00a8da10();
          if (iVar1 == iVar3) {
            *(undefined1 *)((int)param_1 + 0x93d) = 1;
            puVar4 = (undefined4 *)FUN_00a7c8b0();
            uStack_180 = *puVar4;
            fStack_17c = (float)puVar4[1] - 5.0;
            uStack_178 = puVar4[2];
            fStack_174 = (float)puVar4[3] - 1.0;
            FUN_00a7c8a0();
            iVar1 = FUN_009f8b40();
            uVar5 = FUN_00a7c8b0();
            iVar1 = FUN_0090dc50(auStack_170,0,0,uVar5,&uStack_180,iVar1 << 0x10,"ElvAttach");
            if (iVar1 != 0) {
              FUN_00a7ce90(auStack_170);
            }
            uVar5 = FUN_00a7c8a0();
            iVar1 = FUN_00412580(uVar5);
            if (iVar1 != 0) {
              FUN_00be86f0();
            }
            uVar6 = 0;
            uVar5 = FUN_00a7c8a0(0);
            FUN_004039a0(1,uVar5,uVar6);
            FUN_00dffb30(param_1 + 0x220);
            FUN_00a963e0(auStack_160);
            FUN_00a96030(0,0x3f800000);
            *(undefined1 *)((int)param_1 + 0x93f) = 1;
            FUN_00a9e290(&DAT_0163bbb8,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
          }
        }
      }
    }
    else {
      (**(code **)(*param_1 + 100))();
    }
    if (*(char *)((int)param_1 + 0x93d) == '\0') goto LAB_00412eb0;
  }
LAB_00412ea7:
  (**(code **)(*param_1 + 100))();
LAB_00412eb0:
  iVar1 = FUN_00a8c760(0xb);
  if (iVar1 != 0) {
    FUN_004128d0();
  }
  if ((*(char *)((int)param_1 + 0x93f) != '\0') && (iVar1 = FUN_00a94d60(&DAT_0163bbb8), iVar1 != 0)
     ) {
    param_1[0x21c] = 0;
  }
  return;
}

// 00AA6E40  Bm0303::Bm0303  size=29  [class]
undefined4 * __fastcall Bm0303::Bm0303(undefined4 *param_1)

{
  Behavior::Behavior();
  *param_1 = vftable;
  cEspControler::cEspControler();
  return param_1;
}

// 00AA6E60  Bm0303::vf04  size=6  [class]
undefined * Bm0303::vf04(void)

{
  return &DAT_01b34bd0;
}

// 00AB9060  Bm0303::destruct  size=30  [class]
undefined4 __thiscall Bm0303::destruct(undefined4 param_1,byte param_2)

{
  Behavior::~Behavior();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

