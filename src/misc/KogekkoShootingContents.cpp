// src/misc/KogekkoShootingContents.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 008DC720..008DF5A0, 6 functions

#include "types.h"

// 008DC720  KogekkoShootingContents::vf00  size=6  [class]
undefined * KogekkoShootingContents::vf00(void)

{
  return &DAT_01b35d84;
}

// 008DD720  KogekkoShootingContents::vf04  size=31  [class]
undefined4 * __thiscall KogekkoShootingContents::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = ContentsBase::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 008DE750  FUN_008de750  size=476  [callgraph]
void __fastcall FUN_008de750(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined *puVar6;
  undefined4 local_dc [7];
  undefined4 local_c0 [8];
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_90 [2];
  undefined4 local_88;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  
  iVar1 = FUN_00a00ca0(0x20040,0);
  if (iVar1 != 0) {
    iVar1 = FUN_00a00ca0(0x20040,8);
    if (iVar1 != 0) {
      iVar1 = FUN_00a00ca0(0x20040,9);
      if (iVar1 != 0) {
        local_dc[0] = 8;
        local_c0[0] = 0xc30a8000;
        local_dc[1] = 8;
        local_dc[3] = 4;
        local_c0[1] = 0x414e6666;
        local_dc[4] = 5;
        local_dc[5] = 6;
        local_c0[2] = 0xc377f852;
        local_dc[2] = 9;
        puVar4 = local_c0 + 2;
        local_c0[4] = 0xc306b333;
        uVar5 = 0;
        local_c0[5] = 0x414e6666;
        local_c0[6] = 0xc377f852;
        local_a0 = 0xc3080000;
        local_9c = 0x412ccccd;
        local_98 = 0xc3770000;
        do {
          FUN_0040b190();
          local_88 = *(undefined4 *)((int)local_dc + uVar5 + 0xc);
          local_40 = puVar4[-2];
          local_90[0] = *(undefined4 *)((int)local_dc + uVar5);
          local_3c = puVar4[-1];
          local_38 = *puVar4;
          uVar2 = FUN_00a82090("kogekkoShooting",0x20040,local_90);
          iVar1 = **(int **)(param_1 + 0x14);
          uVar2 = FUN_00a7f290(uVar2);
          (**(code **)(iVar1 + 8))(uVar2);
          uVar5 = uVar5 + 4;
          puVar4 = puVar4 + 4;
        } while (uVar5 < 0xc);
        FUN_00a81330();
        piVar3 = (int *)FUN_00a7c8a0();
        if (piVar3 != (int *)0x0) {
          puVar6 = &DAT_01be9d00;
          (**(code **)(*piVar3 + 4))(&DAT_01be9d00);
          iVar1 = FUN_00dd6d80(puVar6);
          if (iVar1 != 0) {
            uVar2 = FUN_00a81330();
            FUN_00a7c970(uVar2);
            uVar2 = FUN_00a81330();
            FUN_00a7c970(uVar2);
          }
        }
        if (*(int *)(param_1 + 0xc) != 1) {
          *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0xc);
        }
        *(undefined4 *)(param_1 + 0xc) = 1;
      }
    }
  }
  return;
}

// 008DE930  KogekkoShootingContents::vf0C  size=14  [class]
void __fastcall KogekkoShootingContents::vf0C(int param_1)

{
  if (*(int *)(param_1 + 0xc) == 0) {
    FUN_008de750();
    return;
  }
  return;
}

// 008DE940  KogekkoShootingContents::vf10  size=149  [class]
void __fastcall KogekkoShootingContents::vf10(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(*(int *)(param_1 + 0x14) + 4);
  if (iVar2 != iVar2 + *(int *)(*(int *)(param_1 + 0x14) + 8) * 4) {
    do {
      iVar1 = FUN_00a81330();
      if (iVar1 != 0) {
        FUN_00a805f0();
      }
      iVar2 = iVar2 + 4;
    } while (iVar2 != *(int *)(*(int *)(param_1 + 0x14) + 4) +
                      *(int *)(*(int *)(param_1 + 0x14) + 8) * 4);
  }
  if (*(int *)(*(int *)(param_1 + 0x14) + 4) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x14) + 8) = 0;
  }
  if (*(undefined4 **)(param_1 + 0x14) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x14))(1);
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  FUN_00a00bd0(0x20040,0);
  FUN_00a00bd0(0x20040,8);
  FUN_00a00bd0(0x20040,9);
  return;
}

// 008DF5A0  KogekkoShootingContents::vf08  size=152  [class]
undefined4 __fastcall KogekkoShootingContents::vf08(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *local_4;
  
  local_4 = param_1;
  FUN_00a00a60(0x20040,0);
  FUN_00a00a60(0x20040,8);
  FUN_00a00a60(0x20040,9);
  puVar2 = (undefined4 *)FUN_00dd3500(0x18,&DAT_01b7bd48);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    *puVar2 = lib::AllocatedArray<EntityHandle>::vftable;
    puVar2[4] = 0;
    puVar2[5] = 0;
  }
  local_4 = &DAT_01b7bd48;
  FUN_008dc010(0x14,&local_4);
  iVar1 = param_1[3];
  param_1[5] = puVar2;
  param_1[3] = 0;
  if (iVar1 != 0) {
    param_1[4] = iVar1;
  }
  return 1;
}

