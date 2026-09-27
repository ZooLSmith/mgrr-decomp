// src/unsorted/unit_0051DA50.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 0051DA50..0051DAB0, 2 functions

#include "mgrr.h"

// 0051DA50  FUN_0051da50  size=92  [run]
undefined4 __fastcall FUN_0051da50(int param_1)

{
  float fVar1;
  int iVar2;
  
  if ((((*(int *)(param_1 + 0xa84) != 0) && (*(int *)(param_1 + 0x1610) == 0)) &&
      (fVar1 = *(float *)(param_1 + 0xa90), NAN(fVar1) || 36.0 < fVar1 == (fVar1 == 36.0))) &&
     (((fVar1 = *(float *)(*(int *)(param_1 + 0xa84) + 0x44) - *(float *)(param_1 + 0x44),
       !NAN(fVar1) && -2.0 < fVar1 != (fVar1 == -2.0) && (fVar1 < 4.0 != (fVar1 == 4.0))) &&
      (iVar2 = FUN_00ac82f0(), iVar2 != 0)))) {
    return 1;
  }
  return 0;
}

// 0051DAB0  FUN_0051dab0  size=327  [run]
void FUN_0051dab0(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined1 local_80 [124];
  
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    FUN_00405230();
    local_90 = 0;
    uVar9 = 0;
    local_8c = 0;
    uVar8 = 2;
    local_88 = 0;
    puVar4 = &local_90;
    uVar7 = 0x3fc00000;
    uVar6 = 0x43480000;
    uVar5 = 0;
    uVar3 = 3;
    uVar2 = FUN_00a81330(3,puVar4,0,0x43480000,0x3fc00000,2,0);
    FUN_00c151f0(1,uVar2,uVar3,puVar4,uVar5,uVar6,uVar7,uVar8,uVar9);
    FUN_00c57830(local_80);
    FUN_00a81330();
    iVar1 = FUN_00a7c8a0();
    local_90 = 0;
    uVar7 = 1;
    local_8c = 0;
    puVar4 = &local_90;
    local_88 = 0;
    uVar6 = 0;
    *(undefined4 *)(iVar1 + 0x6ec) = 1;
    uVar5 = 0;
    uVar3 = 0;
    uVar2 = FUN_00a12210(3);
    FUN_00a81330(uVar2,uVar3,uVar5,uVar6,puVar4,uVar7);
    FUN_00a7c8a0();
    FUN_00a889e0(uVar2,uVar3,uVar5,uVar6,puVar4,uVar7);
    FUN_00a81330();
    iVar1 = FUN_00a7c8a0();
    *(undefined4 *)(iVar1 + 0x6c4) = 3;
    *(undefined4 *)(iVar1 + 0x6d0) = 0;
    *(undefined4 *)(iVar1 + 0x6d4) = 0;
    *(undefined4 *)(iVar1 + 0x6d8) = 0;
    *(undefined4 *)(iVar1 + 0x6dc) = local_84;
    FUN_00a81330();
    iVar1 = FUN_00a7c8a0();
    *(undefined4 *)(iVar1 + 0x82c) = 5;
  }
  return;
}

