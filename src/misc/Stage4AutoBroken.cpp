// src/misc/Stage4AutoBroken.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 0040D0D0..00AB9670, 5 functions

#include "mgrr.h"
#include "Stage4AutoBroken.h"

// 0040D0D0  Stage4AutoBroken::startup  size=169  [class]
undefined4 __fastcall Stage4AutoBroken::startup(int param_1)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar3 = BehaviorBa::startup();
  if (iVar3 == 0) {
    return 0;
  }
  iVar3 = 0;
  if (0 < *(short *)(param_1 + 0x324)) {
    iVar5 = 0;
    do {
      iVar2 = *(int *)(param_1 + 800);
      iVar4 = *(int *)(*(int *)(iVar2 + 0x60 + iVar5) + 0x40);
      if (iVar4 != 0) {
        iVar4 = FUN_00fdbbd0(iVar4,&DAT_0163bdcc);
        if (iVar4 != 0) {
          puVar1 = (uint *)(iVar2 + 0x38 + iVar5);
          *puVar1 = *puVar1 | 1;
        }
      }
      iVar3 = iVar3 + 1;
      iVar5 = iVar5 + 0x70;
    } while (iVar3 < *(short *)(param_1 + 0x324));
  }
  iVar3 = 0;
  if (0 < *(short *)(param_1 + 0x324)) {
    iVar5 = 0;
    do {
      iVar2 = *(int *)(param_1 + 800);
      iVar4 = *(int *)(*(int *)(iVar2 + 0x60 + iVar5) + 0x40);
      if (iVar4 != 0) {
        iVar4 = FUN_00fdbbd0(iVar4,"appear");
        if (iVar4 != 0) {
          puVar1 = (uint *)(iVar2 + 0x38 + iVar5);
          *puVar1 = *puVar1 & 0xfffffffe;
        }
      }
      iVar3 = iVar3 + 1;
      iVar5 = iVar5 + 0x70;
    } while (iVar3 < *(short *)(param_1 + 0x324));
  }
  return 1;
}

// 0040D190  Stage4AutoBroken::vf50  size=228  [class]
void __fastcall Stage4AutoBroken::vf50(int param_1)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  byte *pbVar8;
  bool bVar9;
  
  ExcelStage::vf50();
  FUN_00a92f90();
  pbVar8 = &DAT_0163b604;
  pbVar4 = (byte *)FUN_00e366b0(0);
  do {
    bVar2 = *pbVar4;
    bVar9 = bVar2 < *pbVar8;
    if (bVar2 != *pbVar8) {
LAB_0040d1d2:
      iVar5 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
      goto LAB_0040d1d7;
    }
    if (bVar2 == 0) break;
    bVar2 = pbVar4[1];
    bVar9 = bVar2 < pbVar8[1];
    if (bVar2 != pbVar8[1]) goto LAB_0040d1d2;
    pbVar4 = pbVar4 + 2;
    pbVar8 = pbVar8 + 2;
  } while (bVar2 != 0);
  iVar5 = 0;
LAB_0040d1d7:
  if (iVar5 == 0) {
    iVar5 = 0;
    if (0 < *(short *)(param_1 + 0x324)) {
      iVar7 = 0;
      do {
        iVar3 = *(int *)(param_1 + 800);
        iVar6 = *(int *)(*(int *)(iVar3 + 0x60 + iVar7) + 0x40);
        if ((iVar6 != 0) && (iVar6 = FUN_00fdbbd0(iVar6,&DAT_0163bdcc), iVar6 != 0)) {
          puVar1 = (uint *)(iVar3 + 0x38 + iVar7);
          *puVar1 = *puVar1 & 0xfffffffe;
        }
        iVar5 = iVar5 + 1;
        iVar7 = iVar7 + 0x70;
      } while (iVar5 < *(short *)(param_1 + 0x324));
    }
    iVar5 = 0;
    if (0 < *(short *)(param_1 + 0x324)) {
      iVar7 = 0;
      do {
        iVar3 = *(int *)(param_1 + 800);
        iVar6 = *(int *)(*(int *)(iVar3 + 0x60 + iVar7) + 0x40);
        if ((iVar6 != 0) && (iVar6 = FUN_00fdbbd0(iVar6,"appear"), iVar6 != 0)) {
          puVar1 = (uint *)(iVar3 + 0x38 + iVar7);
          *puVar1 = *puVar1 | 1;
        }
        iVar5 = iVar5 + 1;
        iVar7 = iVar7 + 0x70;
      } while (iVar5 < *(short *)(param_1 + 0x324));
    }
  }
  return;
}

// 00AB0EA0  Stage4AutoBroken::Stage4AutoBroken  size=18  [class]
undefined4 * __fastcall Stage4AutoBroken::Stage4AutoBroken(undefined4 *param_1)

{
  BehaviorBa::BehaviorBa();
  *param_1 = vftable;
  return param_1;
}

// 00AB0EC0  Stage4AutoBroken::vf04  size=6  [class]
undefined * Stage4AutoBroken::vf04(void)

{
  return &DAT_01b34b60;
}

// 00AB9670  Stage4AutoBroken::destruct  size=43  [class]
undefined4 __thiscall Stage4AutoBroken::destruct(undefined4 param_1,byte param_2)

{
  cEspControler::~cEspControler();
  FUN_0040d3f0();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

