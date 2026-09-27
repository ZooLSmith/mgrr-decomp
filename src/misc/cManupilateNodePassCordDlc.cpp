// src/misc/cManupilateNodePassCordDlc.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 0085A1A0..00AB9CA0, 13 functions

#include "mgrr.h"
#include "cManupilateNodePassCordDlc.h"

// 0085A1A0  cManupilateNodePassCordDlc::vf44  size=16  [class]
void cManupilateNodePassCordDlc::vf44(void)

{
  FUN_00a8c820();
  GimmickBehaviorBase::vf44();
  return;
}

// 0085A1C0  cManupilateNodePassCordDlc::vf320  size=61  [class]
void __fastcall cManupilateNodePassCordDlc::vf320(int *param_1)

{
  float10 fVar1;
  
  fVar1 = (float10)FUN_00e03a90(0);
  fVar1 = fVar1 * (float10)0.016666668 + (float10)(float)param_1[0x2d0];
  param_1[0x2d0] = (int)(float)fVar1;
  if ((float10)(float)param_1[0x2d1] <= fVar1) {
                    /* WARNING: Could not recover jumptable at 0x0085a1f9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x328))();
    return;
  }
  return;
}

// 0085A200  cManupilateNodePassCordDlc::vf328  size=180  [class]
void __fastcall cManupilateNodePassCordDlc::vf328(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  (**(code **)(*param_1 + 0x32c))();
  param_1[0x2d0] = 0;
  param_1[0x2cc] = 1;
  param_1[0x2cd] = 0;
  iVar1 = FUN_00d46780();
  if (iVar1 != 0) {
    iVar1 = param_1[0x2d4];
    if (iVar1 == 1) {
      uVar2 = 10;
    }
    else if (iVar1 == 2) {
      uVar2 = 0xb;
    }
    else {
      if (iVar1 != 3) goto LAB_0085a260;
      uVar2 = 9;
    }
    FUN_00c82240(uVar2);
  }
LAB_0085a260:
  iVar1 = FUN_00d467a0();
  if (iVar1 != 0) {
    if (DAT_018b9174 == 0xd30) {
      FUN_00c82240(3);
      FUN_00c82240(0x13);
      return;
    }
    if (DAT_018b9174 == 0xd50) {
      FUN_00c82240(5);
      FUN_00c82240(8);
    }
  }
  return;
}

// 0085A2C0  cManupilateNodePassCordDlc::vf318  size=135  [class]
void __thiscall cManupilateNodePassCordDlc::vf318(int param_1,int param_2)

{
  int iVar1;
  float fVar2;
  
  fVar2 = (float)*(int *)(param_2 + 0x28);
  if (*(int *)(param_2 + 0x28) < 0) {
    fVar2 = fVar2 + 4.2949673e+09;
  }
  *(float *)(param_1 + 0xb44) = fVar2;
  iVar1 = *(int *)(param_2 + 0xc);
  if (iVar1 == 4) {
    if (*(int *)(param_2 + 0x30) == 0) {
      FUN_00c47a30(*(undefined4 *)(param_2 + 0x18),0);
      *(undefined4 *)(param_1 + 0xb58) = *(undefined4 *)(param_2 + 0xc);
      return;
    }
    *(undefined4 *)(param_1 + 0xb58) = 4;
    return;
  }
  if (iVar1 == 9) {
    *(undefined4 *)(param_1 + 0xb50) = *(undefined4 *)(param_2 + 0x30);
    *(undefined4 *)(param_1 + 0xb5c) = *(undefined4 *)(param_2 + 0x18);
    *(undefined4 *)(param_1 + 0xb58) = *(undefined4 *)(param_2 + 0xc);
    return;
  }
  *(int *)(param_1 + 0xb58) = iVar1;
  return;
}

// 0085A350  cManupilateNodePassCordDlc::vf330  size=34  [class]
void __fastcall cManupilateNodePassCordDlc::vf330(int param_1)

{
  FUN_00a8ca80(0,0,0);
  *(undefined4 *)(param_1 + 0xb4c) = 1;
  return;
}

// 0085A6A0  cManupilateNodePassCordDlc::vf40  size=316  [class]
undefined4 __fastcall cManupilateNodePassCordDlc::vf40(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  char *pcVar4;
  
  *(undefined4 *)(param_1 + 0xb54) = 0;
  *(undefined4 *)(param_1 + 0xb5c) = 0;
  iVar1 = GimmickBehaviorBase::vf40();
  if (iVar1 == 0) {
    return 0;
  }
  *(undefined4 *)(param_1 + 0xb40) = 0;
  *(undefined4 *)(param_1 + 0xb44) = 0;
  *(undefined4 *)(param_1 + 0xb50) = 0xffffffff;
  uVar3 = FUN_00859fa0(*(undefined4 *)(param_1 + 0x4b0));
  iVar1 = (int)((ulonglong)uVar3 >> 0x20);
  if ((((((int)uVar3 != 0) || (iVar1 == 0xf0c04)) || (iVar1 == 0xf0c05)) ||
      ((iVar1 == 0xf0c07 || (iVar1 == 0xf0c08)))) || (iVar1 == 0xf0c11)) {
    uVar2 = FUN_004039a0(1,param_1,0);
    FUN_00a963e0(uVar2);
  }
  iVar1 = *(int *)(param_1 + 0x4b0);
  if ((iVar1 != 0xf0c00) && (iVar1 != 0xf0c04)) {
    iVar1 = FUN_0085a010(iVar1);
    if (iVar1 == 0) {
      iVar1 = FUN_00de4550("ba0c00_0000.mot",0);
      pcVar4 = "ba0c00_0000_0_seq.bxm";
    }
    else {
      iVar1 = FUN_00de4550("ba0c04_0000.mot",0);
      pcVar4 = "ba0c04_0000_0_seq.bxm";
    }
    uVar2 = FUN_00de4550(pcVar4,0);
    if (iVar1 != 0) {
      FUN_00a9efb0(iVar1,uVar2,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    }
  }
  *(undefined4 *)(param_1 + 0xb48) = 0;
  *(undefined4 *)(param_1 + 0xb4c) = 0;
  return 1;
}

// 0085A7E0  cManupilateNodePassCordDlc::vf4C  size=670  [class]
void __fastcall cManupilateNodePassCordDlc::vf4C(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  
  if (((param_1[0x2d5] == 0) && (DAT_0188694c != 0)) && (param_1[0x2d6] == 9)) {
    iVar1 = FUN_00d46780();
    if (iVar1 != 0) {
      iVar1 = param_1[0x2d4];
      if (iVar1 == 1) {
        uVar4 = 10;
      }
      else if (iVar1 == 2) {
        uVar4 = 0xb;
      }
      else {
        if (iVar1 != 3) goto LAB_0085a85e;
        uVar4 = 9;
      }
      iVar1 = FUN_00c82370(uVar4);
      if (iVar1 != 0) {
        (**(code **)(*param_1 + 0x328))();
      }
    }
LAB_0085a85e:
    iVar1 = FUN_00d467a0();
    if (iVar1 != 0) {
      if (DAT_018b9174 == 0xd30) {
        uVar4 = 3;
      }
      else {
        if (DAT_018b9174 != 0xd50) goto LAB_0085a89f;
        uVar4 = 5;
      }
      iVar1 = FUN_00c82370(uVar4);
      if (iVar1 != 0) {
        (**(code **)(*param_1 + 0x328))();
      }
    }
LAB_0085a89f:
    param_1[0x2d5] = 1;
  }
  uVar3 = FUN_00859fa0(param_1[300]);
  iVar1 = (int)((ulonglong)uVar3 >> 0x20);
  if ((((((int)uVar3 == 0) && (iVar1 != 0xf0c04)) &&
       ((iVar1 != 0xf0c05 && ((iVar1 != 0xf0c07 && (iVar1 != 0xf0c08)))))) && (iVar1 != 0xf0c11)) ||
     (param_1[0x2d4] == -1)) goto LAB_0085aa71;
  iVar1 = FUN_005e2db0();
  if (((iVar1 != 0) || (param_1[0x2d3] != 0)) || (param_1[0x2cf] != 0)) goto LAB_0085aa71;
  iVar2 = 0;
  iVar1 = FUN_00d46780();
  if (iVar1 != 0) {
    iVar1 = param_1[0x2d4];
    if (iVar1 == 1) {
      uVar4 = 2;
    }
    else if (iVar1 == 2) {
      uVar4 = 3;
    }
    else {
      if (iVar1 != 3) goto LAB_0085a957;
      uVar4 = 1;
    }
    iVar2 = FUN_00c82370(uVar4);
  }
LAB_0085a957:
  iVar1 = FUN_00d467a0();
  if (iVar1 != 0) {
    if (DAT_018b9174 == 0xd30) {
      uVar4 = 2;
    }
    else {
      if (DAT_018b9174 != 0xd50) goto LAB_0085a98a;
      uVar4 = 4;
    }
    iVar2 = FUN_00c82370(uVar4);
  }
LAB_0085a98a:
  if (iVar2 != 0) {
    if (param_1[0x186] == 0) {
      FUN_00a8ca80(0,0,0);
      uVar4 = FUN_004039a0(2,param_1,0);
      FUN_00a963e0(uVar4);
      param_1[0x186] = param_1[0x186] + 1;
      ExcelStage::vf4C();
      return;
    }
    iVar1 = FUN_00c1bd80();
    if (iVar1 != param_1[0x2d2]) {
      FUN_00a8ca80(0,0,0);
      if (iVar1 == 0) {
        uVar4 = 2;
      }
      else {
        uVar4 = 1;
      }
      uVar4 = FUN_004039a0(uVar4,param_1,0);
      FUN_00a963e0(uVar4);
    }
    param_1[0x2d2] = iVar1;
    ExcelStage::vf4C();
    return;
  }
  if (param_1[0x2d2] != 0) {
    FUN_00a8ca80(0,0,0);
    uVar4 = FUN_004039a0(1,param_1,0);
    FUN_00a963e0(uVar4);
  }
  param_1[0x2d2] = 0;
LAB_0085aa71:
  ExcelStage::vf4C();
  return;
}

// 0085AA80  cManupilateNodePassCordDlc::vf324  size=105  [class]
void __fastcall cManupilateNodePassCordDlc::vf324(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  float10 extraout_ST0;
  
  *(undefined4 *)(param_1 + 0xb40) = 0;
  *(undefined4 *)(param_1 + 0xb34) = 1;
  iVar1 = FUN_00859fa0(*(undefined4 *)(param_1 + 0x4b0));
  if (iVar1 != 0) {
    FUN_00a8ca80(0,(float)extraout_ST0,(float)extraout_ST0);
    uVar2 = FUN_004039a0(3,param_1,0);
    FUN_00a963e0(uVar2);
    return;
  }
  return;
}

// 0085AAF0  cManupilateNodePassCordDlc::vf32C  size=320  [class]
void __fastcall cManupilateNodePassCordDlc::vf32C(int param_1)

{
  uint *puVar1;
  byte bVar2;
  char *pcVar3;
  int iVar4;
  undefined4 uVar5;
  byte *pbVar6;
  int iVar7;
  int *piVar8;
  bool bVar9;
  
  iVar7 = *(int *)(param_1 + 0x4b0);
  if (iVar7 != 0x40080) {
    if ((((iVar7 != 0xf0c04) && (iVar7 != 0xf0c05)) && (iVar7 != 0xf0c07)) &&
       ((iVar7 != 0xf0c08 && (iVar7 != 0xf0c11)))) {
      if ((*(int *)(param_1 + 0xb30) == 0) && (*(int *)(param_1 + 0xb34) == 0)) {
        FUN_00a8ca80(0,0,0);
      }
      return;
    }
    FUN_00a8ca80(0,0,0);
    uVar5 = FUN_004039a0(3,param_1,0);
    FUN_00a963e0(uVar5);
    return;
  }
  iVar7 = 0;
  if (0 < *(short *)(param_1 + 0x324)) {
    piVar8 = (int *)(*(int *)(param_1 + 800) + 0x60);
    do {
      pbVar6 = *(byte **)(*piVar8 + 0x40);
      if (pbVar6 != (byte *)0x0) {
        pcVar3 = "Monitor_On";
        do {
          bVar2 = *pcVar3;
          bVar9 = bVar2 < *pbVar6;
          if (bVar2 != *pbVar6) {
LAB_0085ab60:
            iVar4 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
            goto LAB_0085ab65;
          }
          if (bVar2 == 0) break;
          bVar2 = pcVar3[1];
          bVar9 = bVar2 < pbVar6[1];
          if (bVar2 != pbVar6[1]) goto LAB_0085ab60;
          pcVar3 = pcVar3 + 2;
          pbVar6 = pbVar6 + 2;
        } while (bVar2 != 0);
        iVar4 = 0;
LAB_0085ab65:
        if (iVar4 == 0) {
          if ((iVar7 != -1) && (iVar7 = iVar7 * 0x70 + *(int *)(param_1 + 800), iVar7 != 0)) {
            puVar1 = (uint *)(iVar7 + 0x38);
            *puVar1 = *puVar1 & 0xfffffffe;
          }
          break;
        }
      }
      iVar7 = iVar7 + 1;
      piVar8 = piVar8 + 0x1c;
    } while (iVar7 < *(short *)(param_1 + 0x324));
  }
  FUN_00a8c9b0(0,1,0,0);
  return;
}

// 0085AC30  cManupilateNodePassCordDlc::vf31C  size=185  [class]
void __fastcall cManupilateNodePassCordDlc::vf31C(int param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  
  *(undefined4 *)(param_1 + 0x618) = 0;
  *(undefined4 *)(param_1 + 0xb30) = 0;
  *(undefined4 *)(param_1 + 0xb34) = 0;
  FUN_00a8ca80(0,0,0);
  uVar2 = FUN_00859fa0(*(undefined4 *)(param_1 + 0x4b0));
  iVar1 = (int)((ulonglong)uVar2 >> 0x20);
  if ((((((int)uVar2 != 0) || (iVar1 == 0xf0c04)) || (iVar1 == 0xf0c05)) ||
      (((iVar1 == 0xf0c07 || (iVar1 == 0xf0c08)) || (iVar1 == 0xf0c11)))) &&
     (*(int *)(param_1 + 0xb4c) == 0)) {
    iVar1 = FUN_00c1bd80();
    if (iVar1 == 0) {
      uVar3 = 2;
    }
    else {
      uVar3 = 1;
    }
    uVar3 = FUN_004039a0(uVar3,param_1,0);
    FUN_00a963e0(uVar3);
  }
  *(undefined4 *)(param_1 + 0xb40) = 0;
  return;
}

// 00AB1B10  cManupilateNodePassCordDlc::cManupilateNodePassCordDlc  size=18  [class]
undefined4 * __fastcall cManupilateNodePassCordDlc::cManupilateNodePassCordDlc(undefined4 *param_1)

{
  BehaviorBa::BehaviorBa();
  *param_1 = vftable;
  return param_1;
}

// 00AB1B30  cManupilateNodePassCordDlc::vf04  size=6  [class]
undefined * cManupilateNodePassCordDlc::vf04(void)

{
  return &DAT_01b35ae0;
}

// 00AB9CA0  cManupilateNodePassCordDlc::vf00  size=43  [class]
undefined4 __thiscall cManupilateNodePassCordDlc::vf00(undefined4 param_1,byte param_2)

{
  cEspControler::~cEspControler();
  FUN_0040d3f0();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

