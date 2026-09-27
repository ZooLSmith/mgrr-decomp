// src/misc/cManupilateNodeSingleDlc.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00859FA0..00AB9C70, 15 functions

#include "mgrr.h"
#include "cManupilateNodeSingleDlc.h"

// 00859FA0  FUN_00859fa0  size=100  [callgraph]
undefined4 FUN_00859fa0(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if ((((((param_1 == 0xf0c00) || (param_1 == 0xf0c03)) || (param_1 == 0xf0c06)) ||
       ((param_1 == 0xf0c10 || (param_1 == 0xf0c50)))) ||
      ((param_1 == 0xf0c51 || ((param_1 == 0xf0c52 || (param_1 == 0xf0c53)))))) ||
     ((param_1 == 0xf0c54 || ((param_1 == 0xf0c55 || (param_1 == 0xf0c56)))))) {
    uVar1 = 1;
  }
  return uVar1;
}

// 0085A010  FUN_0085a010  size=52  [callgraph]
undefined4 FUN_0085a010(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if ((((param_1 == 0xf0c04) || (param_1 == 0xf0c05)) || (param_1 == 0xf0c07)) ||
     ((param_1 == 0xf0c08 || (param_1 == 0xf0c11)))) {
    uVar1 = 1;
  }
  return uVar1;
}

// 0085A0A0  cManupilateNodeSingleDlc::vf44  size=16  [class]
void cManupilateNodeSingleDlc::vf44(void)

{
  FUN_00a8c820();
  GimmickBehaviorBase::vf44();
  return;
}

// 0085A0C0  cManupilateNodeSingleDlc::vf320  size=61  [class]
void __fastcall cManupilateNodeSingleDlc::vf320(int *param_1)

{
  float10 fVar1;
  
  fVar1 = (float10)FUN_00e03a90(0);
  fVar1 = fVar1 * (float10)0.016666668 + (float10)(float)param_1[0x2d0];
  param_1[0x2d0] = (int)(float)fVar1;
  if ((float10)(float)param_1[0x2d1] <= fVar1) {
                    /* WARNING: Could not recover jumptable at 0x0085a0f9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x328))();
    return;
  }
  return;
}

// 0085A100  cManupilateNodeSingleDlc::vf328  size=43  [class]
void __fastcall cManupilateNodeSingleDlc::vf328(int *param_1)

{
  (**(code **)(*param_1 + 0x32c))();
  param_1[0x2d0] = 0;
  param_1[0x2cc] = 1;
  param_1[0x2cd] = 0;
  return;
}

// 0085A130  cManupilateNodeSingleDlc::vf318  size=57  [class]
void __thiscall cManupilateNodeSingleDlc::vf318(int param_1,int param_2)

{
  float fVar1;
  
  fVar1 = (float)*(int *)(param_2 + 0x28);
  if (*(int *)(param_2 + 0x28) < 0) {
    fVar1 = fVar1 + 4.2949673e+09;
  }
  *(float *)(param_1 + 0xb44) = fVar1;
  if ((*(int *)(param_2 + 0xc) == 4) && (*(int *)(param_2 + 0x30) == 0)) {
    FUN_00c47a30(*(undefined4 *)(param_2 + 0x18),0);
  }
  return;
}

// 0085A170  cManupilateNodeSingleDlc::vf330  size=34  [class]
void __fastcall cManupilateNodeSingleDlc::vf330(int param_1)

{
  FUN_00a8ca80(0,0,0);
  *(undefined4 *)(param_1 + 0xb4c) = 1;
  return;
}

// 0085A380  cManupilateNodeSingleDlc::vf4C  size=192  [class]
void __fastcall cManupilateNodeSingleDlc::vf4C(int param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  
  uVar2 = FUN_00859fa0(*(undefined4 *)(param_1 + 0x4b0));
  iVar1 = (int)((ulonglong)uVar2 >> 0x20);
  if ((((((int)uVar2 != 0) || (iVar1 == 0xf0c04)) || (iVar1 == 0xf0c05)) ||
      ((iVar1 == 0xf0c07 || (iVar1 == 0xf0c08)))) || (iVar1 == 0xf0c11)) {
    iVar1 = FUN_005e2db0();
    if (((iVar1 == 0) && (*(int *)(param_1 + 0xb4c) == 0)) && (*(int *)(param_1 + 0xb3c) == 0)) {
      iVar1 = FUN_00c1bd80();
      if (iVar1 != *(int *)(param_1 + 0xb48)) {
        FUN_00a8ca80(0,0,0);
        if (iVar1 == 0) {
          uVar3 = 2;
        }
        else {
          uVar3 = 1;
        }
        uVar3 = FUN_004039a0(uVar3,param_1,0);
        FUN_00a963e0(uVar3);
      }
      *(int *)(param_1 + 0xb48) = iVar1;
    }
  }
  ExcelStage::vf4C();
  return;
}

// 0085A440  cManupilateNodeSingleDlc::vf324  size=105  [class]
void __fastcall cManupilateNodeSingleDlc::vf324(int param_1)

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

// 0085A4B0  cManupilateNodeSingleDlc::vf32C  size=320  [class]
void __fastcall cManupilateNodeSingleDlc::vf32C(int param_1)

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
LAB_0085a520:
            iVar4 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
            goto LAB_0085a525;
          }
          if (bVar2 == 0) break;
          bVar2 = pcVar3[1];
          bVar9 = bVar2 < pbVar6[1];
          if (bVar2 != pbVar6[1]) goto LAB_0085a520;
          pcVar3 = pcVar3 + 2;
          pbVar6 = pbVar6 + 2;
        } while (bVar2 != 0);
        iVar4 = 0;
LAB_0085a525:
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

// 0085A5F0  cManupilateNodeSingleDlc::vf31C  size=175  [class]
void __fastcall cManupilateNodeSingleDlc::vf31C(int param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  
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

// 0085ACF0  cManupilateNodeSingleDlc::startup  size=294  [class]
undefined4 __fastcall cManupilateNodeSingleDlc::startup(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  char *pcVar4;
  
  iVar1 = GimmickBehaviorBase::startup();
  if (iVar1 == 0) {
    return 0;
  }
  *(undefined4 *)(param_1 + 0xb40) = 0;
  *(undefined4 *)(param_1 + 0xb44) = 0;
  uVar3 = FUN_00859fa0(*(undefined4 *)(param_1 + 0x4b0));
  iVar1 = (int)((ulonglong)uVar3 >> 0x20);
  if ((((((int)uVar3 != 0) || (iVar1 == 0xf0c04)) || (iVar1 == 0xf0c05)) ||
      ((iVar1 == 0xf0c07 || (iVar1 == 0xf0c08)))) || (iVar1 == 0xf0c11)) {
    uVar2 = FUN_004039a0(2,param_1,0);
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

// 00AB1AC0  cManupilateNodeSingleDlc::cManupilateNodeSingleDlc  size=18  [class]
undefined4 * __fastcall cManupilateNodeSingleDlc::cManupilateNodeSingleDlc(undefined4 *param_1)

{
  BehaviorBa::BehaviorBa();
  *param_1 = vftable;
  return param_1;
}

// 00AB1AE0  cManupilateNodeSingleDlc::vf04  size=6  [class]
undefined * cManupilateNodeSingleDlc::vf04(void)

{
  return &DAT_01b35adc;
}

// 00AB9C70  cManupilateNodeSingleDlc::destruct  size=43  [class]
undefined4 __thiscall cManupilateNodeSingleDlc::destruct(undefined4 param_1,byte param_2)

{
  cEspControler::~cEspControler();
  FUN_0040d3f0();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

