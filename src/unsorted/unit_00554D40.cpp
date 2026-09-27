// src/unsorted/unit_00554D40.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00554D40..00554D40, 1 functions

#include "types.h"

// 00554D40  FUN_00554d40  size=1317  [run]
void __fastcall FUN_00554d40(int *param_1)

{
  uint *puVar1;
  byte bVar2;
  code *pcVar3;
  int iVar4;
  int *piVar5;
  byte *pbVar6;
  int iVar7;
  undefined4 uVar8;
  char *pcVar9;
  int iVar10;
  bool bVar11;
  float10 fVar12;
  undefined *puVar13;
  float fVar14;
  undefined4 uVar15;
  int iStack_1fc;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined4 uStack_1e8;
  undefined1 auStack_1e0 [336];
  undefined1 auStack_90 [140];
  
  (**(code **)(*param_1 + 0x318))();
  param_1[0x75c] = 1;
  param_1[0x580] = 1;
  param_1[0x581] = 1;
  param_1[0x57f] = 1;
  param_1[0x3a2] = 1;
  param_1[0x3a3] = 1;
  param_1[0x372] = 1;
  iVar4 = FUN_00a81330();
  iVar10 = 0;
  if ((iVar4 != 0) && (piVar5 = (int *)FUN_00a7c8a0(), piVar5 != (int *)0x0)) {
    puVar13 = &DAT_01be9db8;
    (**(code **)(*piVar5 + 4))(&DAT_01be9db8);
    FUN_00dd6d80(puVar13);
  }
  if (param_1[0x187] == 0) {
    FUN_00a94bc0(3,0);
    FUN_00a94bc0(2,0);
    FUN_00a94bc0(5,0);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00aa4080(0x37,0,0x3f800000,0x3f800000,0,0,0x3f800000);
    iVar4 = FUN_00a81330();
    if (iVar4 != 0) {
      FUN_00a805f0();
    }
    FUN_00a7c950();
    FUN_0040b190();
    if (param_1[0x370] == 0x12) {
      iVar4 = FUN_00a82090("Em020A Head",0x2020c,auStack_90);
      iStack_1fc = 0;
      if (0 < (short)param_1[0xc9]) {
        do {
          pbVar6 = *(byte **)(*(int *)(iVar10 + 0x60 + param_1[200]) + 0x40);
          if (pbVar6 != (byte *)0x0) {
            pcVar9 = "head_down";
            do {
              bVar2 = *pbVar6;
              bVar11 = bVar2 < (byte)*pcVar9;
              if (bVar2 != *pcVar9) {
LAB_00554ed0:
                iVar7 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
                goto LAB_00554ed5;
              }
              if (bVar2 == 0) break;
              bVar2 = pbVar6[1];
              bVar11 = bVar2 < (byte)pcVar9[1];
              if (bVar2 != pcVar9[1]) goto LAB_00554ed0;
              pbVar6 = pbVar6 + 2;
              pcVar9 = pcVar9 + 2;
            } while (bVar2 != 0);
            iVar7 = 0;
LAB_00554ed5:
            if (iVar7 == 0) {
              puVar1 = (uint *)(iVar10 + param_1[200] + 0x38);
              *puVar1 = *puVar1 & 0xfffffffe;
            }
          }
          iStack_1fc = iStack_1fc + 1;
          iVar10 = iVar10 + 0x70;
        } while (iStack_1fc < (short)param_1[0xc9]);
      }
      iVar10 = 0;
      iStack_1fc = 0;
      if (0 < (short)param_1[0xc9]) {
        do {
          pbVar6 = *(byte **)(*(int *)(iVar10 + 0x60 + param_1[200]) + 0x40);
          if (pbVar6 != (byte *)0x0) {
            pcVar9 = "in_head_down";
            do {
              bVar2 = *pbVar6;
              bVar11 = bVar2 < (byte)*pcVar9;
              if (bVar2 != *pcVar9) {
LAB_00554f50:
                iVar7 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
                goto LAB_00554f55;
              }
              if (bVar2 == 0) break;
              bVar2 = pbVar6[1];
              bVar11 = bVar2 < (byte)pcVar9[1];
              if (bVar2 != pcVar9[1]) goto LAB_00554f50;
              pbVar6 = pbVar6 + 2;
              pcVar9 = pcVar9 + 2;
            } while (bVar2 != 0);
            iVar7 = 0;
LAB_00554f55:
            if (iVar7 == 0) {
              puVar1 = (uint *)(iVar10 + param_1[200] + 0x38);
              *puVar1 = *puVar1 | 1;
            }
          }
          iStack_1fc = iStack_1fc + 1;
          iVar10 = iVar10 + 0x70;
        } while (iStack_1fc < (short)param_1[0xc9]);
      }
      if (iVar4 != 0) {
        iVar4 = FUN_00a7c8a0();
        if (iVar4 != 0) {
          FUN_00acf8b0(param_1[0x13c],0);
          uVar8 = FUN_009f8b40();
          FUN_00ac55a0(uVar8);
        }
        uVar8 = FUN_00a7c7f0();
        FUN_00a7c960(uVar8);
      }
    }
    pcVar3 = *(code **)(param_1[0x374] + 8);
    param_1[0x842] = -0x40800000;
    param_1[0x841] = -0x40800000;
    param_1[0x840] = -1;
    param_1[0x373] = 0;
    (*pcVar3)(0x41200000,0,0);
    param_1[0x248] = 0;
    if (param_1[0x57c] != 0) {
      FUN_00ad0a90();
    }
    param_1[0x57c] = 0;
    if ((((param_1[0x370] == 0x14) && (iVar4 = FUN_00a81330(), iVar4 != 0)) &&
        (iVar4 = FUN_00a7c8a0(), iVar4 != 0)) && (iVar4 = FUN_00a7c8a0(), iVar4 != 0)) {
      FUN_00a8caf0(5,0,0,0);
    }
    param_1[0x898] = 0;
  }
  else if (param_1[0x187] != 1) goto LAB_005550d2;
  uStack_1f4 = 0x439ac000;
  fVar14 = (float)param_1[0x244] * 0.5;
  uVar8 = 0x3c23d70a;
  fVar12 = (float10)FUN_00fdc1f0(0x3c23d70a,fVar14);
  FUN_00a981b0(param_1 + 0x14,param_1 + 0x14,&uStack_1f4,(float)fVar12,uVar8,fVar14);
  param_1[0x248] = (int)((float)param_1[0x248] + (float)param_1[0x244]);
  FUN_00ac80a0(0x3f800000,0x3f800000);
LAB_005550d2:
  if (param_1[0x898] != 0) {
    FUN_00a81330();
    if ((param_1[0x370] == 0x13) && (iVar4 = FUN_00a81330(), iVar4 != 0)) {
      if ((*(byte *)(param_1 + 0x371) & 4) == 0) {
        uVar15 = 0;
        uVar8 = FUN_00a7c8a0(0);
        FUN_004039a0(3,uVar8,uVar15);
        FUN_00dffb20(param_1 + 0x6f0);
        FUN_00dffbc0(0x111);
        uStack_1f0 = 0;
        uStack_1ec = 0x3f800000;
        uStack_1e8 = 0;
        FUN_00dffbd0(&uStack_1f0);
        FUN_00a8c8b0(param_1[300],auStack_1e0);
      }
      if (param_1[0x370] == 0x13) {
        *(ushort *)(param_1 + 0x371) = *(ushort *)(param_1 + 0x371) | 4;
      }
      uVar15 = 0;
      piVar5 = param_1 + 0x844;
      uVar8 = FUN_00a7c8a0(piVar5,0);
      FUN_00a8e5d0(uVar8,piVar5,uVar15);
    }
    if ((param_1[0x370] == 0x14) && (iVar4 = FUN_00a81330(), iVar4 != 0)) {
      if ((*(byte *)(param_1 + 0x371) & 2) == 0) {
        uVar15 = 0;
        uVar8 = FUN_00a7c8a0(0);
        FUN_004039a0(3,uVar8,uVar15);
        FUN_00dffbc0(0x110);
        FUN_00dffb20(param_1 + 0x6f0);
        uStack_1f0 = 0;
        uStack_1ec = 0x3f800000;
        uStack_1e8 = 0;
        FUN_00dffbd0(&uStack_1f0);
        FUN_00a8c8b0(param_1[300],auStack_1e0);
      }
      if (param_1[0x370] == 0x14) {
        *(ushort *)(param_1 + 0x371) = *(ushort *)(param_1 + 0x371) | 2;
      }
      uVar15 = 0;
      param_1 = param_1 + 0x844;
      uVar8 = FUN_00a7c8a0(param_1,0);
      FUN_00a8e5d0(uVar8,param_1,uVar15);
    }
  }
  return;
}

