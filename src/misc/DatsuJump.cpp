// src/misc/DatsuJump.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 0089D170..00BEF020, 3 functions

#include "mgrr.h"

// 0089D170  DatsuJump::SafeCheck  size=1182  [class]
void __thiscall DatsuJump::SafeCheck(int param_1,undefined4 *param_2)

{
  float fVar1;
  int *piVar2;
  int iVar3;
  float *pfVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  float10 fVar9;
  undefined *puVar10;
  int local_534;
  float local_530;
  float local_52c;
  float local_528;
  float local_524;
  int iStack_514;
  float local_510;
  float fStack_50c;
  float local_508;
  float fStack_504;
  float local_500;
  float local_4fc;
  float local_4f8;
  float fStack_4f4;
  float fStack_4f0;
  float fStack_4ec;
  float fStack_4e8;
  float fStack_4e4;
  undefined4 uStack_4e0;
  undefined4 uStack_4dc;
  undefined4 uStack_4d8;
  int *piStack_4d4;
  float fStack_4d0;
  float fStack_4cc;
  float fStack_4c8;
  int *piStack_4c4;
  float fStack_4c0;
  float fStack_4bc;
  float fStack_4b8;
  undefined4 uStack_4b4;
  undefined4 uStack_4b0;
  undefined4 uStack_4ac;
  undefined4 uStack_4a8;
  char *pcStack_4a4;
  undefined4 uStack_4a0;
  undefined1 auStack_494 [20];
  undefined1 auStack_480 [336];
  undefined **appuStack_330 [4];
  int iStack_320;
  int iStack_31c;
  uint uStack_318;
  
  if (*(int *)(param_1 + 0x20) == 0) {
    if (param_2 == (undefined4 *)0x0) {
      uVar5 = 0;
    }
    else {
      puVar10 = &DAT_01b35b78;
      (**(code **)*param_2)(&DAT_01b35b78);
      iVar3 = FUN_00dd6d80(puVar10);
      uVar5 = -(uint)(iVar3 != 0) & (uint)param_2;
    }
    piVar2 = *(int **)(uVar5 + 0x5e0);
    if (piVar2 == (int *)0x0) {
      piVar7 = (int *)0x0;
    }
    else {
      puVar10 = &DAT_01b35b20;
      (**(code **)(*piVar2 + 4))(&DAT_01b35b20);
      iVar3 = FUN_00dd6d80(puVar10);
      piVar7 = (int *)(-(uint)(iVar3 != 0) & (uint)piVar2);
    }
    iVar3 = FUN_00a12210(0xffffffff);
    local_510 = *(float *)(iVar3 + 0x40);
    local_508 = *(float *)(iVar3 + 0x48);
    pfVar4 = (float *)FUN_00ac70a0();
    local_530 = *pfVar4;
    local_52c = pfVar4[1];
    local_528 = pfVar4[2];
    local_524 = pfVar4[3];
    local_500 = 0.0;
    fVar9 = (float10)fpatan((float10)local_530 - (float10)local_510,
                            (float10)local_528 - (float10)local_508);
    local_4fc = (float)fVar9;
    local_4f8 = 0.0;
    (**(code **)(*piVar7 + 0x88))(&local_500);
    fStack_4c0 = local_530 - 10.0;
    uStack_4b0 = 0;
    uStack_4a8 = 0;
    uStack_4a0 = 0;
    fStack_4b8 = local_528 - local_508;
    fStack_4d0 = local_530;
    uStack_4b4 = 0xffff0006;
    uStack_4ac = 0x60;
    fStack_4cc = local_52c;
    pcStack_4a4 = "zangekiDatsuJumpSafeCheck";
    fStack_4c8 = local_528;
    fStack_4bc = local_52c;
    piStack_4d4 = piVar2;
    piStack_4c4 = piVar2;
    iVar3 = RayCastSingleHitWork::RayCastSingleHitWork_2(&fStack_4e4,auStack_494,0,0,&piStack_4d4);
    if (iVar3 == 0) {
      *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(param_1 + 0xb0);
      *(undefined4 *)(param_1 + 0xc4) = *(undefined4 *)(param_1 + 0xb4);
      *(undefined4 *)(param_1 + 200) = *(undefined4 *)(param_1 + 0xb8);
      uStack_4d8 = *(undefined4 *)(param_1 + 0xbc);
    }
    else {
      *(float *)(param_1 + 0xc0) = fStack_4e4;
      *(undefined4 *)(param_1 + 0xc4) = uStack_4e0;
      *(undefined4 *)(param_1 + 200) = uStack_4dc;
    }
    *(undefined4 *)(param_1 + 0xcc) = uStack_4d8;
    *(undefined4 *)(param_1 + 0x40) = 0;
    *(undefined4 *)(param_1 + 0x44) = 0x42200000;
    *(undefined4 *)(param_1 + 0x48) = 0x428c0000;
    (**(code **)(*(int *)(uVar5 + 400) + 8))(0,0,0);
    FUN_004039a0(1,piVar7,0);
    FUN_00dffb30((int *)(uVar5 + 400));
    FUN_00e03080(piVar7[0x13c],0);
    iVar3 = FUN_00a81330();
    if (iVar3 != 0) {
      FUN_00e03080(iVar3,1);
    }
    FUN_00a8c8b0(0x11400,auStack_480);
    pfVar4 = (float *)FUN_00a926e0(&local_510);
    fStack_4f0 = *pfVar4 * 1.5 + (float)piVar7[0x10];
    fStack_4ec = pfVar4[1] * 1.5 + (float)piVar7[0x11];
    fStack_4e8 = (float)piVar7[0x12] + pfVar4[2] * 1.5;
    fStack_4e4 = pfVar4[3] * 1.5 + (float)piVar7[0x13];
    pfVar4 = (float *)FUN_00ac70a0();
    local_530 = *pfVar4;
    local_52c = pfVar4[1];
    local_528 = pfVar4[2];
    local_524 = pfVar4[3];
    hkpAllRayHitCollector::hkpAllRayHitCollector();
    iVar3 = RayCastMultiHitWork::RayCastMultiHitWork
                      (appuStack_330,&fStack_4f0,&local_530,0xffff0006,"DatsuJump::SafeCheck");
    if (iVar3 != 0) {
      FUN_0112c170();
      iStack_514 = 0;
      if (0 < iStack_31c) {
        local_534 = 0;
        do {
          iVar6 = local_534 + iStack_320;
          iVar3 = *(int *)(iVar6 + 0x50);
          iVar8 = *(char *)(iVar3 + 0x10) + iVar3;
          if ((((iVar8 != 0) && (*(char *)(iVar3 + 0x18) != '\x02')) &&
              (iVar3 = FUN_008f8cf0(iVar8,1), iVar3 == 0)) &&
             (iVar3 = FUN_008f8cf0(iVar8,2), iVar3 != 0)) {
            fVar1 = *(float *)(iVar6 + 0x10);
            local_510 = (local_530 - fStack_4f0) * fVar1 + fStack_4f0;
            fStack_50c = (local_52c - fStack_4ec) * fVar1 + fStack_4ec;
            local_508 = (local_528 - fStack_4e8) * fVar1 + fStack_4e8;
            fStack_504 = (local_524 - fStack_4e4) * fVar1 + fStack_4e4;
            local_500 = local_510;
            local_4fc = fStack_50c;
            local_4f8 = local_508;
            fStack_4f4 = fStack_504;
            iVar3 = FUN_00ac70a0();
            local_4fc = *(float *)(iVar3 + 4);
            FUN_00ac7060(&local_500);
            FUN_00ac70b0();
            break;
          }
          iStack_514 = iStack_514 + 1;
          local_534 = local_534 + 0x60;
        } while (iStack_514 < iStack_31c);
      }
    }
    appuStack_330[0] = hkpAllRayHitCollector::vftable;
    iStack_31c = 0;
    if (-1 < (int)uStack_318) {
      (**(code **)(PTR_vftable_018e9b94 + 0x10))(iStack_320,(uStack_318 & 0x3fffffff) * 0x60);
    }
  }
  StateMachineNode::SafeCheck(param_2);
  return;
}

// 008D0ED0  DatsuJump::SafeCheck_2  size=1182  [class]
void __thiscall DatsuJump::SafeCheck_2(int param_1,undefined4 *param_2)

{
  float fVar1;
  int *piVar2;
  int iVar3;
  float *pfVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  float10 fVar9;
  undefined *puVar10;
  int local_534;
  float local_530;
  float local_52c;
  float local_528;
  float local_524;
  int iStack_514;
  float local_510;
  float fStack_50c;
  float local_508;
  float fStack_504;
  float local_500;
  float local_4fc;
  float local_4f8;
  float fStack_4f4;
  float fStack_4f0;
  float fStack_4ec;
  float fStack_4e8;
  float fStack_4e4;
  undefined4 uStack_4e0;
  undefined4 uStack_4dc;
  undefined4 uStack_4d8;
  int *piStack_4d4;
  float fStack_4d0;
  float fStack_4cc;
  float fStack_4c8;
  int *piStack_4c4;
  float fStack_4c0;
  float fStack_4bc;
  float fStack_4b8;
  undefined4 uStack_4b4;
  undefined4 uStack_4b0;
  undefined4 uStack_4ac;
  undefined4 uStack_4a8;
  char *pcStack_4a4;
  undefined4 uStack_4a0;
  undefined1 auStack_494 [20];
  undefined1 auStack_480 [336];
  undefined **appuStack_330 [4];
  int iStack_320;
  int iStack_31c;
  uint uStack_318;
  
  if (*(int *)(param_1 + 0x20) == 0) {
    if (param_2 == (undefined4 *)0x0) {
      uVar5 = 0;
    }
    else {
      puVar10 = &DAT_01b35bdc;
      (**(code **)*param_2)(&DAT_01b35bdc);
      iVar3 = FUN_00dd6d80(puVar10);
      uVar5 = -(uint)(iVar3 != 0) & (uint)param_2;
    }
    piVar2 = *(int **)(uVar5 + 0x5e0);
    if (piVar2 == (int *)0x0) {
      piVar7 = (int *)0x0;
    }
    else {
      puVar10 = &DAT_01b35b90;
      (**(code **)(*piVar2 + 4))(&DAT_01b35b90);
      iVar3 = FUN_00dd6d80(puVar10);
      piVar7 = (int *)(-(uint)(iVar3 != 0) & (uint)piVar2);
    }
    iVar3 = FUN_00a12210(0xffffffff);
    local_510 = *(float *)(iVar3 + 0x40);
    local_508 = *(float *)(iVar3 + 0x48);
    pfVar4 = (float *)FUN_00ac70a0();
    local_530 = *pfVar4;
    local_52c = pfVar4[1];
    local_528 = pfVar4[2];
    local_524 = pfVar4[3];
    local_500 = 0.0;
    fVar9 = (float10)fpatan((float10)local_530 - (float10)local_510,
                            (float10)local_528 - (float10)local_508);
    local_4fc = (float)fVar9;
    local_4f8 = 0.0;
    (**(code **)(*piVar7 + 0x88))(&local_500);
    fStack_4c0 = local_530 - 10.0;
    uStack_4b0 = 0;
    uStack_4a8 = 0;
    uStack_4a0 = 0;
    fStack_4b8 = local_528 - local_508;
    fStack_4d0 = local_530;
    uStack_4b4 = 0xffff0006;
    uStack_4ac = 0x60;
    fStack_4cc = local_52c;
    pcStack_4a4 = "zangekiDatsuJumpSafeCheck";
    fStack_4c8 = local_528;
    fStack_4bc = local_52c;
    piStack_4d4 = piVar2;
    piStack_4c4 = piVar2;
    iVar3 = RayCastSingleHitWork::RayCastSingleHitWork_2(&fStack_4e4,auStack_494,0,0,&piStack_4d4);
    if (iVar3 == 0) {
      *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(param_1 + 0xb0);
      *(undefined4 *)(param_1 + 0xc4) = *(undefined4 *)(param_1 + 0xb4);
      *(undefined4 *)(param_1 + 200) = *(undefined4 *)(param_1 + 0xb8);
      uStack_4d8 = *(undefined4 *)(param_1 + 0xbc);
    }
    else {
      *(float *)(param_1 + 0xc0) = fStack_4e4;
      *(undefined4 *)(param_1 + 0xc4) = uStack_4e0;
      *(undefined4 *)(param_1 + 200) = uStack_4dc;
    }
    *(undefined4 *)(param_1 + 0xcc) = uStack_4d8;
    *(undefined4 *)(param_1 + 0x40) = 0;
    *(undefined4 *)(param_1 + 0x44) = 0x42200000;
    *(undefined4 *)(param_1 + 0x48) = 0x428c0000;
    (**(code **)(*(int *)(uVar5 + 400) + 8))(0,0,0);
    FUN_004039a0(1,piVar7,0);
    FUN_00dffb30((int *)(uVar5 + 400));
    FUN_00e03080(piVar7[0x13c],0);
    iVar3 = FUN_00a81330();
    if (iVar3 != 0) {
      FUN_00e03080(iVar3,1);
    }
    FUN_00a8c8b0(0x11500,auStack_480);
    pfVar4 = (float *)FUN_00a926e0(&local_510);
    fStack_4f0 = *pfVar4 * 1.5 + (float)piVar7[0x10];
    fStack_4ec = pfVar4[1] * 1.5 + (float)piVar7[0x11];
    fStack_4e8 = (float)piVar7[0x12] + pfVar4[2] * 1.5;
    fStack_4e4 = pfVar4[3] * 1.5 + (float)piVar7[0x13];
    pfVar4 = (float *)FUN_00ac70a0();
    local_530 = *pfVar4;
    local_52c = pfVar4[1];
    local_528 = pfVar4[2];
    local_524 = pfVar4[3];
    hkpAllRayHitCollector::hkpAllRayHitCollector();
    iVar3 = RayCastMultiHitWork::RayCastMultiHitWork
                      (appuStack_330,&fStack_4f0,&local_530,0xffff0006,"DatsuJump::SafeCheck");
    if (iVar3 != 0) {
      FUN_0112c170();
      iStack_514 = 0;
      if (0 < iStack_31c) {
        local_534 = 0;
        do {
          iVar6 = local_534 + iStack_320;
          iVar3 = *(int *)(iVar6 + 0x50);
          iVar8 = *(char *)(iVar3 + 0x10) + iVar3;
          if ((((iVar8 != 0) && (*(char *)(iVar3 + 0x18) != '\x02')) &&
              (iVar3 = FUN_008f8cf0(iVar8,1), iVar3 == 0)) &&
             (iVar3 = FUN_008f8cf0(iVar8,2), iVar3 != 0)) {
            fVar1 = *(float *)(iVar6 + 0x10);
            local_510 = (local_530 - fStack_4f0) * fVar1 + fStack_4f0;
            fStack_50c = (local_52c - fStack_4ec) * fVar1 + fStack_4ec;
            local_508 = (local_528 - fStack_4e8) * fVar1 + fStack_4e8;
            fStack_504 = (local_524 - fStack_4e4) * fVar1 + fStack_4e4;
            local_500 = local_510;
            local_4fc = fStack_50c;
            local_4f8 = local_508;
            fStack_4f4 = fStack_504;
            iVar3 = FUN_00ac70a0();
            local_4fc = *(float *)(iVar3 + 4);
            FUN_00ac7060(&local_500);
            FUN_00ac70b0();
            break;
          }
          iStack_514 = iStack_514 + 1;
          local_534 = local_534 + 0x60;
        } while (iStack_514 < iStack_31c);
      }
    }
    appuStack_330[0] = hkpAllRayHitCollector::vftable;
    iStack_31c = 0;
    if (-1 < (int)uStack_318) {
      (**(code **)(PTR_vftable_018e9b94 + 0x10))(iStack_320,(uStack_318 & 0x3fffffff) * 0x60);
    }
  }
  StateMachineNode::SafeCheck(param_2);
  return;
}

// 00BEF020  DatsuJump::SafeCheck_3  size=1174  [class]
void __thiscall DatsuJump::SafeCheck_3(int param_1,undefined4 *param_2)

{
  float fVar1;
  int *piVar2;
  int iVar3;
  float *pfVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  float10 fVar9;
  undefined *puVar10;
  int local_534;
  float local_530;
  float local_52c;
  float local_528;
  float local_524;
  int iStack_514;
  float local_510;
  float fStack_50c;
  float local_508;
  float fStack_504;
  float local_500;
  float local_4fc;
  float local_4f8;
  float fStack_4f4;
  float fStack_4f0;
  float fStack_4ec;
  float fStack_4e8;
  float fStack_4e4;
  undefined4 uStack_4e0;
  undefined4 uStack_4dc;
  undefined4 uStack_4d8;
  int *piStack_4d4;
  float fStack_4d0;
  float fStack_4cc;
  float fStack_4c8;
  int *piStack_4c4;
  float fStack_4c0;
  float fStack_4bc;
  float fStack_4b8;
  undefined4 uStack_4b4;
  undefined4 uStack_4b0;
  undefined4 uStack_4ac;
  undefined4 uStack_4a8;
  char *pcStack_4a4;
  undefined4 uStack_4a0;
  undefined1 auStack_494 [20];
  undefined1 auStack_480 [336];
  undefined **appuStack_330 [4];
  int iStack_320;
  int iStack_31c;
  uint uStack_318;
  
  if (*(int *)(param_1 + 0x20) == 0) {
    if (param_2 == (undefined4 *)0x0) {
      uVar5 = 0;
    }
    else {
      puVar10 = &DAT_01be9ef4;
      (**(code **)*param_2)(&DAT_01be9ef4);
      iVar3 = FUN_00dd6d80(puVar10);
      uVar5 = -(uint)(iVar3 != 0) & (uint)param_2;
    }
    piVar2 = *(int **)(uVar5 + 0xc);
    if (piVar2 == (int *)0x0) {
      piVar7 = (int *)0x0;
    }
    else {
      puVar10 = &DAT_01be9db8;
      (**(code **)(*piVar2 + 4))(&DAT_01be9db8);
      iVar3 = FUN_00dd6d80(puVar10);
      piVar7 = (int *)(-(uint)(iVar3 != 0) & (uint)piVar2);
    }
    iVar3 = FUN_00a12210(0xffffffff);
    local_510 = *(float *)(iVar3 + 0x40);
    local_508 = *(float *)(iVar3 + 0x48);
    pfVar4 = (float *)FUN_00ac70a0();
    local_530 = *pfVar4;
    local_52c = pfVar4[1];
    local_528 = pfVar4[2];
    local_524 = pfVar4[3];
    local_500 = 0.0;
    fVar9 = (float10)fpatan((float10)local_530 - (float10)local_510,
                            (float10)local_528 - (float10)local_508);
    local_4fc = (float)fVar9;
    local_4f8 = 0.0;
    (**(code **)(*piVar7 + 0x88))(&local_500);
    fStack_4c0 = local_530 - 10.0;
    uStack_4b0 = 0;
    uStack_4a8 = 0;
    uStack_4a0 = 0;
    fStack_4b8 = local_528 - local_508;
    fStack_4d0 = local_530;
    uStack_4b4 = 0xffff0006;
    uStack_4ac = 0x60;
    fStack_4cc = local_52c;
    pcStack_4a4 = "zangekiDatsuJumpSafeCheck";
    fStack_4c8 = local_528;
    fStack_4bc = local_52c;
    piStack_4d4 = piVar2;
    piStack_4c4 = piVar2;
    iVar3 = RayCastSingleHitWork::RayCastSingleHitWork_2(&fStack_4e4,auStack_494,0,0,&piStack_4d4);
    if (iVar3 == 0) {
      *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(param_1 + 0xb0);
      *(undefined4 *)(param_1 + 0xc4) = *(undefined4 *)(param_1 + 0xb4);
      *(undefined4 *)(param_1 + 200) = *(undefined4 *)(param_1 + 0xb8);
      uStack_4d8 = *(undefined4 *)(param_1 + 0xbc);
    }
    else {
      *(float *)(param_1 + 0xc0) = fStack_4e4;
      *(undefined4 *)(param_1 + 0xc4) = uStack_4e0;
      *(undefined4 *)(param_1 + 200) = uStack_4dc;
    }
    *(undefined4 *)(param_1 + 0xcc) = uStack_4d8;
    *(undefined4 *)(param_1 + 0x40) = 0;
    *(undefined4 *)(param_1 + 0x44) = 0x42200000;
    *(undefined4 *)(param_1 + 0x48) = 0x428c0000;
    (**(code **)(*(int *)(uVar5 + 400) + 8))(0,0,0);
    FUN_004039a0(1,piVar7,0);
    FUN_00dffb30((int *)(uVar5 + 400));
    FUN_00e03080(piVar7[0x13c],0);
    iVar3 = FUN_00a81330();
    if (iVar3 != 0) {
      FUN_00e03080(iVar3,1);
    }
    FUN_00a8c8b0(0x10010,auStack_480);
    pfVar4 = (float *)FUN_00a926e0(&local_510);
    fStack_4f0 = *pfVar4 * 1.5 + (float)piVar7[0x10];
    fStack_4ec = pfVar4[1] * 1.5 + (float)piVar7[0x11];
    fStack_4e8 = (float)piVar7[0x12] + pfVar4[2] * 1.5;
    fStack_4e4 = pfVar4[3] * 1.5 + (float)piVar7[0x13];
    pfVar4 = (float *)FUN_00ac70a0();
    local_530 = *pfVar4;
    local_52c = pfVar4[1];
    local_528 = pfVar4[2];
    local_524 = pfVar4[3];
    hkpAllRayHitCollector::hkpAllRayHitCollector();
    iVar3 = RayCastMultiHitWork::RayCastMultiHitWork
                      (appuStack_330,&fStack_4f0,&local_530,0xffff0006,"DatsuJump::SafeCheck");
    if (iVar3 != 0) {
      FUN_0112c170();
      iStack_514 = 0;
      if (0 < iStack_31c) {
        local_534 = 0;
        do {
          iVar6 = local_534 + iStack_320;
          iVar3 = *(int *)(iVar6 + 0x50);
          iVar8 = *(char *)(iVar3 + 0x10) + iVar3;
          if ((((iVar8 != 0) && (*(char *)(iVar3 + 0x18) != '\x02')) &&
              (iVar3 = FUN_008f8cf0(iVar8,1), iVar3 == 0)) &&
             (iVar3 = FUN_008f8cf0(iVar8,2), iVar3 != 0)) {
            fVar1 = *(float *)(iVar6 + 0x10);
            local_510 = (local_530 - fStack_4f0) * fVar1 + fStack_4f0;
            fStack_50c = (local_52c - fStack_4ec) * fVar1 + fStack_4ec;
            local_508 = (local_528 - fStack_4e8) * fVar1 + fStack_4e8;
            fStack_504 = (local_524 - fStack_4e4) * fVar1 + fStack_4e4;
            local_500 = local_510;
            local_4fc = fStack_50c;
            local_4f8 = local_508;
            fStack_4f4 = fStack_504;
            iVar3 = FUN_00ac70a0();
            local_4fc = *(float *)(iVar3 + 4);
            FUN_00ac7060(&local_500);
            FUN_00ac70b0();
            break;
          }
          iStack_514 = iStack_514 + 1;
          local_534 = local_534 + 0x60;
        } while (iStack_514 < iStack_31c);
      }
    }
    appuStack_330[0] = hkpAllRayHitCollector::vftable;
    iStack_31c = 0;
    if (-1 < (int)uStack_318) {
      (**(code **)(PTR_vftable_018e9b94 + 0x10))(iStack_320,(uStack_318 & 0x3fffffff) * 0x60);
    }
  }
  StateMachineNode::SafeCheck(param_2);
  return;
}

