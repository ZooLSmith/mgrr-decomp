// src/unsorted/unit_005DCDE0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 005DCDE0..005DCDE0, 1 functions

#include "types.h"

// 005DCDE0  FUN_005dcde0  size=563  [run]
void __fastcall FUN_005dcde0(int *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int unaff_ESI;
  float10 fVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  char *pcVar8;
  undefined4 uVar9;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  undefined1 local_60 [4];
  int local_5c;
  undefined1 local_50 [76];
  
  if ((param_1[0x1ed] != 0) &&
     (((FUN_00916d50(&local_80), local_80 != 0.0 || (local_7c != 0.0)) || (local_78 != 0.0)))) {
    if ((param_1[0x265] == 0) && (param_1[0x263] == 0)) {
      if (param_1[0x261] == 0) {
        puVar1 = (undefined4 *)FUN_009f8b60();
        local_70 = local_80;
        uVar9 = 0;
        local_6c = local_7c - 30.0;
        pcVar8 = "debrisFall";
        uVar7 = 0;
        uVar6 = 4;
        uVar5 = 0;
        local_68 = local_78;
        local_64 = local_64 + local_74;
        uVar2 = FUN_00410130(0x12,*puVar1,0,0,0,0,4,0,"debrisFall",0);
        FUN_00445d40(&local_80,&local_70,uVar2,uVar5,uVar6,uVar7,pcVar8,uVar9);
        iVar3 = RayCastSingleHitWork::RayCastSingleHitWork_2(local_60,0,0,0,local_50);
        if (iVar3 != 0) {
          param_1[0x265] = 1;
          param_1[0x264] = local_5c;
        }
        param_1[0x261] = 1;
        return;
      }
    }
    else if (((param_1[0x262] == 0) && (param_1[0x265] != 0)) &&
            (local_7c < (float)param_1[0x264] + 0.2)) {
      local_70 = local_80;
      local_6c = (float)param_1[0x264];
      local_68 = local_78;
      (**(code **)(*param_1 + 0x6c))(&local_70);
      iVar3 = 0;
      if (0 < *(int *)(param_1[0x1ed] + 0xc)) {
        do {
          FUN_00912660(&stack0xffffff74,iVar3);
          if (unaff_ESI != 0) {
            fVar4 = (float10)FUN_00915ee0();
            local_74 = 0.0;
            local_70 = 0.0;
            local_6c = 0.0;
            FUN_0091a5e0(&local_74);
            local_70 = (float)fVar4 * -1.0 * local_70;
            FUN_0091a620(&local_74);
          }
          iVar3 = iVar3 + 1;
        } while (iVar3 < *(int *)(param_1[0x1ed] + 0xc));
        return;
      }
    }
  }
  return;
}

