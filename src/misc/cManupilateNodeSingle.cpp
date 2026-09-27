// src/misc/cManupilateNodeSingle.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 005E3200..00AB8E30, 16 functions

#include "mgrr.h"
#include "cManupilateNodeSingle.h"

// 005E3200  FUN_005e3200  size=52  [callgraph]
undefined4 FUN_005e3200(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if ((((param_1 == 0xf0c04) || (param_1 == 0xf0c05)) || (param_1 == 0xf0c07)) ||
     ((param_1 == 0xf0c08 || (param_1 == 0xf0c11)))) {
    uVar1 = 1;
  }
  return uVar1;
}

// 005E3240  FUN_005e3240  size=84  [callgraph]
undefined4 FUN_005e3240(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if ((((((param_1 == 0xf0c00) || (param_1 == 0xf0c03)) || (param_1 == 0xf0c06)) ||
       ((param_1 == 0xf0c10 || (param_1 == 0xf0c04)))) ||
      ((param_1 == 0xf0c05 || ((param_1 == 0xf0c07 || (param_1 == 0xf0c08)))))) ||
     (param_1 == 0xf0c11)) {
    uVar1 = 1;
  }
  return uVar1;
}

// 005E32A0  cManupilateNodeSingle::vf44  size=30  [class]
void cManupilateNodeSingle::vf44(void)

{
  FUN_00a8c820();
  FUN_00a8c820();
  FUN_00a944d0();
  BehaviorBgBase::vf44();
  return;
}

// 005E32D0  cManupilateNodeSingle::vf320  size=61  [class]
void __fastcall cManupilateNodeSingle::vf320(int *param_1)

{
  float10 fVar1;
  
  fVar1 = (float10)FUN_00e03a90(0);
  fVar1 = fVar1 * (float10)0.016666668 + (float10)(float)param_1[0x2d0];
  param_1[0x2d0] = (int)(float)fVar1;
  if ((float10)(float)param_1[0x2d1] <= fVar1) {
                    /* WARNING: Could not recover jumptable at 0x005e3309. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x328))();
    return;
  }
  return;
}

// 005E3310  cManupilateNodeSingle::vf328  size=43  [class]
void __fastcall cManupilateNodeSingle::vf328(int *param_1)

{
  (**(code **)(*param_1 + 0x32c))();
  param_1[0x2d0] = 0;
  param_1[0x2cc] = 1;
  param_1[0x2cd] = 0;
  return;
}

// 005E3340  cManupilateNodeSingle::vf318  size=182  [class]
void __thiscall cManupilateNodeSingle::vf318(int param_1,int param_2)

{
  byte bVar1;
  float fVar2;
  int iVar3;
  byte *pbVar4;
  char *pcVar5;
  bool bVar6;
  
  fVar2 = (float)*(int *)(param_2 + 0x28);
  if (*(int *)(param_2 + 0x28) < 0) {
    fVar2 = fVar2 + 4.2949673e+09;
  }
  *(float *)(param_1 + 0xb44) = fVar2;
  iVar3 = *(int *)(param_2 + 0xc);
  if (iVar3 == 4) {
    if (*(int *)(param_2 + 0x30) == 0) {
      if (DAT_018b9174 == 0x140) {
        pcVar5 = "P140_BAD_OPEN";
        pbVar4 = &DAT_018b917c;
        do {
          bVar1 = *pbVar4;
          bVar6 = bVar1 < (byte)*pcVar5;
          if (bVar1 != *pcVar5) {
LAB_005e33a3:
            iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
            goto LAB_005e33a8;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar4[1];
          bVar6 = bVar1 < (byte)pcVar5[1];
          if (bVar1 != pcVar5[1]) goto LAB_005e33a3;
          pbVar4 = pbVar4 + 2;
          pcVar5 = pcVar5 + 2;
        } while (bVar1 != 0);
        iVar3 = 0;
LAB_005e33a8:
        if (iVar3 == 0) {
          FUN_00c478b0(*(undefined4 *)(param_2 + 0x18),0);
          return;
        }
      }
      FUN_00c47a30(*(undefined4 *)(param_2 + 0x18),0);
      return;
    }
  }
  else if (((iVar3 == 10) || (iVar3 == 9)) || (iVar3 == 0xc)) {
    FUN_00c47a30(*(undefined4 *)(param_2 + 0x18),0);
  }
  return;
}

// 005E3400  cManupilateNodeSingle::vf330  size=34  [class]
void __fastcall cManupilateNodeSingle::vf330(int param_1)

{
  FUN_00a8ca80(0,0,0);
  *(undefined4 *)(param_1 + 0xb4c) = 1;
  return;
}

// 005E3430  cManupilateNodeSingle::vf334  size=36  [class]
void __fastcall cManupilateNodeSingle::vf334(int param_1)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 0xb3c) = 0;
  iVar1 = FUN_00c1bd80();
  *(uint *)(param_1 + 0xb48) = (uint)(iVar1 == 0);
  return;
}

// 005E36C0  cManupilateNodeSingle::startup  size=254  [class]
undefined4 __fastcall cManupilateNodeSingle::startup(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  
  iVar1 = GimmickBehaviorBase::startup();
  if (iVar1 == 0) {
    return 0;
  }
  *(undefined4 *)(param_1 + 0xb40) = 0;
  *(undefined4 *)(param_1 + 0xb44) = 0;
  iVar1 = FUN_005e3240(*(undefined4 *)(param_1 + 0x4b0));
  if (iVar1 != 0) {
    uVar2 = FUN_004039a0(2,param_1,0);
    FUN_00a963e0(uVar2);
  }
  iVar1 = *(int *)(param_1 + 0x4b0);
  if ((iVar1 != 0xf0c00) && (iVar1 != 0xf0c04)) {
    iVar1 = FUN_005e3200(iVar1);
    if (iVar1 == 0) {
      iVar1 = FUN_00de4550("ba0c00_0000.mot",0);
      pcVar3 = "ba0c00_0000_0_seq.bxm";
    }
    else {
      iVar1 = FUN_00de4550("ba0c04_0000.mot",0);
      pcVar3 = "ba0c04_0000_0_seq.bxm";
    }
    uVar2 = FUN_00de4550(pcVar3,0);
    if (iVar1 != 0) {
      FUN_00a9efb0(iVar1,uVar2,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    }
  }
  *(undefined4 *)(param_1 + 0xb48) = 0;
  *(undefined4 *)(param_1 + 0xb4c) = 0;
  return 1;
}

// 005E37C0  cManupilateNodeSingle::vf4C  size=152  [class]
void __fastcall cManupilateNodeSingle::vf4C(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_005e3240(*(undefined4 *)(param_1 + 0x4b0));
  if ((((iVar1 != 0) && (*(int *)(param_1 + 0xb30) == 0)) && (*(int *)(param_1 + 0xb4c) == 0)) &&
     (*(int *)(param_1 + 0xb3c) == 0)) {
    iVar1 = FUN_00c1bd80();
    if (iVar1 != *(int *)(param_1 + 0xb48)) {
      FUN_00a8ca80(0,0,0);
      if (iVar1 == 0) {
        uVar2 = 2;
      }
      else {
        uVar2 = 1;
      }
      uVar2 = FUN_004039a0(uVar2,param_1,0);
      FUN_00a963e0(uVar2);
    }
    *(int *)(param_1 + 0xb48) = iVar1;
  }
  ExcelStage::vf4C();
  return;
}

// 005E3860  cManupilateNodeSingle::vf324  size=118  [class]
void __fastcall cManupilateNodeSingle::vf324(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(param_1 + 0x4b0);
  *(undefined4 *)(param_1 + 0xb40) = 0;
  *(undefined4 *)(param_1 + 0xb34) = 1;
  if ((((iVar1 != 0xf0c00) && (iVar1 != 0xf0c03)) && (iVar1 != 0xf0c06)) && (iVar1 != 0xf0c10)) {
    return;
  }
  FUN_00a8ca80(0,0,0);
  uVar2 = FUN_004039a0(3,param_1,0);
  FUN_00a963e0(uVar2);
  return;
}

// 005E38E0  cManupilateNodeSingle::vf32C  size=320  [class]
void __fastcall cManupilateNodeSingle::vf32C(int param_1)

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
LAB_005e3950:
            iVar4 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
            goto LAB_005e3955;
          }
          if (bVar2 == 0) break;
          bVar2 = pcVar3[1];
          bVar9 = bVar2 < pbVar6[1];
          if (bVar2 != pbVar6[1]) goto LAB_005e3950;
          pcVar3 = pcVar3 + 2;
          pbVar6 = pbVar6 + 2;
        } while (bVar2 != 0);
        iVar4 = 0;
LAB_005e3955:
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

// 005E3A20  cManupilateNodeSingle::vf31C  size=135  [class]
void __fastcall cManupilateNodeSingle::vf31C(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  *(undefined4 *)(param_1 + 0xb30) = 0;
  *(undefined4 *)(param_1 + 0xb34) = 0;
  FUN_00a8ca80(0,0,0);
  iVar1 = FUN_005e3240(*(undefined4 *)(param_1 + 0x4b0));
  if ((iVar1 != 0) && (*(int *)(param_1 + 0xb4c) == 0)) {
    iVar1 = FUN_00c1bd80();
    if (iVar1 == 0) {
      uVar2 = 2;
    }
    else {
      uVar2 = 1;
    }
    uVar2 = FUN_004039a0(uVar2,param_1,0);
    FUN_00a963e0(uVar2);
  }
  *(undefined4 *)(param_1 + 0xb40) = 0;
  return;
}

// 00AB00B0  cManupilateNodeSingle::cManupilateNodeSingle  size=18  [class]
undefined4 * __fastcall cManupilateNodeSingle::cManupilateNodeSingle(undefined4 *param_1)

{
  BehaviorBa::BehaviorBa();
  *param_1 = vftable;
  return param_1;
}

// 00AB00D0  cManupilateNodeSingle::vf04  size=6  [class]
undefined * cManupilateNodeSingle::vf04(void)

{
  return &DAT_01b35344;
}

// 00AB8E30  cManupilateNodeSingle::destruct  size=43  [class]
undefined4 __thiscall cManupilateNodeSingle::destruct(undefined4 param_1,byte param_2)

{
  cEspControler::~cEspControler();
  FUN_0040d3f0();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

