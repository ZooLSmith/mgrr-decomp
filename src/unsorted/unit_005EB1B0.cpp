// src/unsorted/unit_005EB1B0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 005EB1B0..005EB1B0, 1 functions

#include "mgrr.h"

// 005EB1B0  FUN_005eb1b0  size=1262  [run]
void __fastcall FUN_005eb1b0(int *param_1)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  float10 fVar7;
  undefined *puVar8;
  undefined4 uStack_34;
  float fStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  pcVar1 = *(code **)(*param_1 + 0x220);
  param_1[0xd9] = param_1[0xd9] & 0xffefffff;
  (*pcVar1)(0x3f800000);
  iVar2 = param_1[0x1d9];
  if (iVar2 != 0) {
    *(undefined4 *)(iVar2 + 0x120) = 0;
    *(undefined4 *)(iVar2 + 0x124) = 0;
  }
  DAT_01bea090 = DAT_01bea090 & 0xffffffbf;
  iVar2 = FUN_00a8cac0();
  if (iVar2 == 0) {
    DAT_01bea070 = DAT_01bea070 | 0x200000;
    iVar2 = FUN_00a81330();
    if (iVar2 == 0) {
      iVar2 = *param_1;
      uVar3 = FUN_00a81330();
      (**(code **)(iVar2 + 0x15c))(0x67,uVar3);
      (**(code **)(*param_1 + 0x388))(0);
      return;
    }
    FUN_00db3e80(0,0,&DAT_01bea1d0);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00a81330();
    FUN_00a7c8a0();
    if (param_1[0x2dd] == 0) {
      uVar3 = FUN_00de4550("Pl0010_1100.mot",0);
      uVar4 = FUN_00de4550("Pl0010_1100_0_seq.bxm",0);
      puVar8 = &DAT_01645378;
    }
    else {
      uVar3 = FUN_00de4550("Pl0010_1101.mot",0);
      uVar4 = FUN_00de4550("Pl0010_1101_0_seq.bxm",0);
      puVar8 = &DAT_01645348;
    }
    FUN_00a9f180(uVar3,uVar4,puVar8,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x2dd] = 1;
    iVar2 = FUN_00a12210(0xf01);
    iVar5 = FUN_00a12210(0xf02);
    if ((iVar2 != 0) && (iVar5 != 0)) {
      uStack_34 = 0;
      uStack_2c = 0;
      uStack_28 = 0x3f800000;
      uStack_24 = *(undefined4 *)(iVar2 + 0x40);
      uStack_20 = *(undefined4 *)(iVar2 + 0x44);
      uStack_1c = *(undefined4 *)(iVar2 + 0x48);
      uStack_18 = *(undefined4 *)(iVar2 + 0x4c);
      fVar7 = (float10)fpatan((float10)*(float *)(iVar5 + 0x40) - (float10)*(float *)(iVar2 + 0x40),
                              (float10)*(float *)(iVar5 + 0x48) - (float10)*(float *)(iVar2 + 0x48))
      ;
      fStack_30 = (float)fVar7;
      (**(code **)(*param_1 + 0x7c))(&uStack_24,&uStack_34);
      param_1[0x248] = 0;
      param_1[0x250] = 0;
    }
  }
  else {
    iVar2 = FUN_00a8cac0();
    if (iVar2 == 1) {
      iVar2 = FUN_00a94ce0(0);
      if (iVar2 != 0) {
        FUN_00a81330();
        FUN_00a7c8a0();
        FUN_00aa92c0(1);
        FUN_00a8ca50(2,0,0);
        uVar3 = FUN_00de4550("Pl0010_1102.mot",0);
        uVar4 = FUN_00de4550("Pl0010_1102_0_seq.bxm",0);
        FUN_00a9f180(uVar3,uVar4,&DAT_01645318,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
        param_1[0x187] = param_1[0x187] + 1;
      }
    }
    else {
      iVar2 = FUN_00a8cac0();
      if (iVar2 == 2) {
        if (param_1[0x250] == 0) {
          fVar7 = (float10)FUN_00a92ff0();
          fVar7 = fVar7 * (float10)0.016666668 + (float10)(float)param_1[0x248];
          param_1[0x248] = (int)(float)fVar7;
          if ((float10)2.0 <= fVar7) {
            param_1[0x250] = 1;
            FUN_00a81330();
            uVar3 = FUN_00a7c8a0();
            iVar2 = FUN_005e94d0(uVar3);
            if (iVar2 != 0) {
              FUN_005e8eb0();
            }
          }
        }
        iVar2 = FUN_00a94ce0(0);
        if (iVar2 != 0) {
          FUN_00a81330();
          FUN_00a7c8a0();
          uVar3 = FUN_00de4550("Pl0010_1103.mot",0);
          uVar4 = FUN_00de4550("Pl0010_1103_0_seq.bxm",0);
          FUN_00a9f180(uVar3,uVar4,&DAT_016452e8,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
          param_1[0x187] = param_1[0x187] + 1;
        }
      }
      else {
        iVar2 = FUN_00a8cac0();
        if (iVar2 == 3) {
          iVar2 = FUN_00a94ce0(0);
          if (iVar2 != 0) {
            DAT_01bea070 = DAT_01bea070 & 0xffdfffff;
            iVar2 = FUN_00a81330();
            if (iVar2 != 0) {
              FUN_00a81330();
              uVar3 = FUN_00a7c8a0();
              iVar2 = FUN_005e94d0(uVar3);
              if (iVar2 != 0) {
                FUN_005e8f60();
              }
            }
            iVar2 = *param_1;
            uVar3 = FUN_00a81330();
            (**(code **)(iVar2 + 0x15c))(0x67,uVar3);
            FUN_00ba6810(1,0);
            pcVar1 = *(code **)(*param_1 + 0x388);
            param_1[0xd9] = param_1[0xd9] | 0x100000;
            (*pcVar1)(0);
          }
        }
      }
    }
  }
  iVar2 = FUN_00a81330();
  if (iVar2 != 0) {
    FUN_00a81330();
    piVar6 = (int *)FUN_00a7c8a0();
    if (piVar6 != (int *)0x0) {
      puVar8 = &DAT_01b353bc;
      (**(code **)(*piVar6 + 4))(&DAT_01b353bc);
      iVar2 = FUN_00dd6d80(puVar8);
      if ((iVar2 != 0) && (piVar6[0x24c] != 0)) {
        iVar2 = FUN_0094a2c0();
        if (iVar2 != 0) goto LAB_005eb684;
      }
    }
  }
  FUN_00a92f90();
  FUN_00e26e90();
  FUN_00e22f10(0);
LAB_005eb684:
  FUN_00b94790(0x3f800000,0x3f800000);
  return;
}

