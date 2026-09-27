// src/misc/cPlayerPosInfo.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 009FE9C0..009FE9C0, 1 functions

#include "types.h"

// 009FE9C0  cPlayerPosInfo::setPlayerPos  size=310  [class]
void __thiscall cPlayerPosInfo::setPlayerPos(uint *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 local_60;
  float local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  float local_4c;
  undefined4 local_48;
  undefined4 local_40;
  float local_3c;
  undefined4 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined1 local_20 [4];
  float local_1c;
  
  if (((param_2 < *param_1) && (uVar1 = param_1[1], uVar1 != 0)) && (DAT_01be8e54 != 0)) {
    iVar5 = param_2 * 0x58;
    local_60 = *(undefined4 *)(iVar5 + 4 + uVar1);
    local_5c = *(float *)(iVar5 + 8 + uVar1);
    local_58 = *(undefined4 *)(iVar5 + 0xc + uVar1);
    local_54 = 0x3f800000;
    if (DAT_01be8e58 != 0) {
      local_3c = local_5c + 2.5;
      local_4c = local_5c - 25.0;
      local_50 = local_60;
      local_48 = local_58;
      local_40 = local_60;
      local_38 = local_58;
      iVar2 = FUN_00a7c8a0();
      if (*(int *)(iVar2 + 0x4d0) == 0) {
        piVar3 = *(int **)(iVar2 + 0x4cc);
      }
      else {
        piVar3 = (int *)(iVar2 + 0x4d8);
      }
      iVar2 = RayCastSingleHitWork::RayCastSingleHitWork_4
                        (local_20,0,0,0,&local_40,&local_50,*piVar3 << 0x10 | 6,
                         "cPlayerPosInfo::setPlayerPos");
      if (iVar2 != 0) {
        local_5c = local_1c;
      }
      uVar4 = FUN_00a7c8a0();
      piVar3 = (int *)FUN_0049b700(uVar4);
      if (piVar3 != (int *)0x0) {
        local_2c = *(undefined4 *)(param_1[1] + 0x10 + iVar5);
        local_30 = 0;
        local_28 = 0;
        (**(code **)(*piVar3 + 0x7c))(&local_60,&local_30);
        return;
      }
    }
  }
  return;
}

