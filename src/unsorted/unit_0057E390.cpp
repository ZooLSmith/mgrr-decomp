// src/unsorted/unit_0057E390.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 0057E390..0057E3F0, 2 functions

#include "types.h"

// 0057E390  FUN_0057e390  size=79  [run]
void __fastcall FUN_0057e390(int param_1)

{
  if (*(int *)(param_1 + 0x7b0) != 0) {
    FUN_008f2b40();
    FUN_008f3cb0(param_1);
    (**(code **)(**(int **)(param_1 + 0x7b0) + 0x108))(0xb);
    FUN_00a8f640();
  }
  *(undefined4 *)(param_1 + 0xa70) = 1;
  *(undefined4 *)(param_1 + 0xa78) = 0x43960000;
  return;
}

// 0057E3F0  FUN_0057e3f0  size=334  [run]
void __fastcall FUN_0057e3f0(int param_1)

{
  uint *puVar1;
  byte bVar2;
  byte *pbVar3;
  int iVar4;
  byte *pbVar5;
  char *pcVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  
  iVar8 = 0;
  if (0 < *(short *)(param_1 + 0x324)) {
    iVar7 = 0;
    do {
      pbVar3 = *(byte **)(*(int *)(*(int *)(param_1 + 800) + 0x60 + iVar7) + 0x40);
      if (pbVar3 != (byte *)0x0) {
        pbVar5 = &DAT_01642054;
        do {
          bVar2 = *pbVar3;
          bVar9 = bVar2 < *pbVar5;
          if (bVar2 != *pbVar5) {
LAB_0057e440:
            iVar4 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
            goto LAB_0057e445;
          }
          if (bVar2 == 0) break;
          bVar2 = pbVar3[1];
          bVar9 = bVar2 < pbVar5[1];
          if (bVar2 != pbVar5[1]) goto LAB_0057e440;
          pbVar3 = pbVar3 + 2;
          pbVar5 = pbVar5 + 2;
        } while (bVar2 != 0);
        iVar4 = 0;
LAB_0057e445:
        if (iVar4 == 0) {
          puVar1 = (uint *)(*(int *)(param_1 + 800) + 0x38 + iVar7);
          *puVar1 = *puVar1 & 0xfffffffe;
        }
      }
      iVar8 = iVar8 + 1;
      iVar7 = iVar7 + 0x70;
    } while (iVar8 < *(short *)(param_1 + 0x324));
  }
  iVar8 = 0;
  if (0 < *(short *)(param_1 + 0x324)) {
    iVar7 = 0;
    do {
      pbVar3 = *(byte **)(*(int *)(iVar7 + 0x60 + *(int *)(param_1 + 800)) + 0x40);
      if (pbVar3 != (byte *)0x0) {
        pcVar6 = "light";
        do {
          bVar2 = *pbVar3;
          bVar9 = bVar2 < (byte)*pcVar6;
          if (bVar2 != *pcVar6) {
LAB_0057e4b0:
            iVar4 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
            goto LAB_0057e4b5;
          }
          if (bVar2 == 0) break;
          bVar2 = pbVar3[1];
          bVar9 = bVar2 < (byte)pcVar6[1];
          if (bVar2 != pcVar6[1]) goto LAB_0057e4b0;
          pbVar3 = pbVar3 + 2;
          pcVar6 = pcVar6 + 2;
        } while (bVar2 != 0);
        iVar4 = 0;
LAB_0057e4b5:
        if (iVar4 == 0) {
          puVar1 = (uint *)(iVar7 + *(int *)(param_1 + 800) + 0x38);
          *puVar1 = *puVar1 & 0xfffffffe;
        }
      }
      iVar8 = iVar8 + 1;
      iVar7 = iVar7 + 0x70;
    } while (iVar8 < *(short *)(param_1 + 0x324));
  }
  iVar8 = 0;
  if (0 < *(short *)(param_1 + 0x324)) {
    iVar7 = 0;
    do {
      pbVar3 = *(byte **)(*(int *)(iVar7 + 0x60 + *(int *)(param_1 + 800)) + 0x40);
      if (pbVar3 != (byte *)0x0) {
        pcVar6 = "poleattack";
        do {
          bVar2 = *pbVar3;
          bVar9 = bVar2 < (byte)*pcVar6;
          if (bVar2 != *pcVar6) {
LAB_0057e520:
            iVar4 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
            goto LAB_0057e525;
          }
          if (bVar2 == 0) break;
          bVar2 = pbVar3[1];
          bVar9 = bVar2 < (byte)pcVar6[1];
          if (bVar2 != pcVar6[1]) goto LAB_0057e520;
          pbVar3 = pbVar3 + 2;
          pcVar6 = pcVar6 + 2;
        } while (bVar2 != 0);
        iVar4 = 0;
LAB_0057e525:
        if (iVar4 == 0) {
          puVar1 = (uint *)(iVar7 + *(int *)(param_1 + 800) + 0x38);
          *puVar1 = *puVar1 | 1;
        }
      }
      iVar8 = iVar8 + 1;
      iVar7 = iVar7 + 0x70;
    } while (iVar8 < *(short *)(param_1 + 0x324));
  }
  return;
}

