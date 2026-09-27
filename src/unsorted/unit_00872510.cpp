// src/unsorted/unit_00872510.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00872510..008728E0, 4 functions

#include "mgrr.h"

// 00872510  FUN_00872510  size=397  [run]
undefined4 FUN_00872510(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int *piVar5;
  uint uVar6;
  float *pfVar7;
  int iVar8;
  undefined *puVar9;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined1 local_70 [16];
  undefined1 local_60 [16];
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  char *local_20;
  undefined4 local_1c;
  
  if (param_1 == (undefined4 *)0x0) {
    uVar6 = 0;
  }
  else {
    puVar9 = &DAT_01b35b78;
    (**(code **)*param_1)(&DAT_01b35b78);
    iVar8 = FUN_00dd6d80(puVar9);
    uVar6 = -(uint)(iVar8 != 0) & (uint)param_1;
  }
  piVar5 = *(int **)(uVar6 + 0x5e0);
  if (piVar5 == (int *)0x0) {
    uVar6 = 0;
  }
  else {
    puVar9 = &DAT_01b35b20;
    (**(code **)(*piVar5 + 4))(&DAT_01b35b20);
    iVar8 = FUN_00dd6d80(puVar9);
    uVar6 = -(uint)(iVar8 != 0) & (uint)piVar5;
  }
  *param_2 = *(undefined4 *)(uVar6 + 0x40);
  param_2[1] = *(undefined4 *)(uVar6 + 0x44);
  param_2[2] = *(undefined4 *)(uVar6 + 0x48);
  param_2[3] = *(undefined4 *)(uVar6 + 0x4c);
  uVar1 = *(undefined4 *)(uVar6 + 0x40);
  uVar2 = *(undefined4 *)(uVar6 + 0x44);
  uVar3 = *(undefined4 *)(uVar6 + 0x48);
  uVar4 = *(undefined4 *)(uVar6 + 0x4c);
  pfVar7 = (float *)FUN_00a8bac0(local_70,0x40a00000);
  local_40 = *(float *)(uVar6 + 0x40) - *pfVar7;
  local_3c = *(float *)(uVar6 + 0x44) - pfVar7[1];
  local_38 = *(float *)(uVar6 + 0x48) - pfVar7[2];
  local_34 = *(float *)(uVar6 + 0x4c) - pfVar7[3];
  local_30 = 0xffff0006;
  local_2c = 0;
  local_28 = 0x60;
  local_24 = 0;
  local_20 = "zangekiIaiAttack_CheckGround";
  local_1c = 0;
  local_50 = uVar1;
  local_4c = uVar2;
  local_48 = uVar3;
  local_44 = uVar4;
  iVar8 = RayCastSingleHitWork::RayCastSingleHitWork_2(&local_80,local_60,0,0,&local_50);
  if (iVar8 != 0) {
    *param_2 = local_80;
    param_2[1] = local_7c;
    param_2[2] = local_78;
    param_2[3] = local_74;
    return 1;
  }
  return 0;
}

// 008726A0  FUN_008726a0  size=145  [run]
undefined4 __thiscall FUN_008726a0(int param_1,undefined4 *param_2)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  
  if (param_2 == (undefined4 *)0x0) {
    uVar2 = 0;
  }
  else {
    puVar3 = &DAT_01b35b78;
    (**(code **)*param_2)(&DAT_01b35b78);
    iVar1 = FUN_00dd6d80(puVar3);
    uVar2 = -(uint)(iVar1 != 0) & (uint)param_2;
  }
  if (*(int **)(uVar2 + 0x5e0) != (int *)0x0) {
    puVar3 = &DAT_01b35b20;
    (**(code **)(**(int **)(uVar2 + 0x5e0) + 4))(&DAT_01b35b20);
    FUN_00dd6d80(puVar3);
  }
  iVar1 = FUN_0086f370();
  if ((iVar1 != 0x100007) &&
     (((iVar1 != 0x100011 && (iVar1 != 0x100019)) || (*(int *)(param_1 + 0x7c) != 0)))) {
    *(int *)(uVar2 + 0x3ec) = iVar1;
    return 1;
  }
  return 0;
}

// 00872740  FUN_00872740  size=411  [run]
void __thiscall FUN_00872740(int param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined4 uVar5;
  int *piVar6;
  int *piVar7;
  uint uVar8;
  undefined *puVar9;
  
  if (param_2 == (undefined4 *)0x0) {
    uVar8 = 0;
  }
  else {
    puVar9 = &DAT_01b35b78;
    (**(code **)*param_2)(&DAT_01b35b78);
    iVar2 = FUN_00dd6d80(puVar9);
    uVar8 = -(uint)(iVar2 != 0) & (uint)param_2;
  }
  piVar7 = *(int **)(uVar8 + 0x5e0);
  if (piVar7 == (int *)0x0) {
    piVar7 = (int *)0x0;
  }
  else {
    puVar9 = &DAT_01b35b20;
    (**(code **)(*piVar7 + 4))(&DAT_01b35b20);
    iVar2 = FUN_00dd6d80(puVar9);
    piVar7 = (int *)(-(uint)(iVar2 != 0) & (uint)piVar7);
  }
  if ((*(int *)(param_1 + 0x30) != 5) || (*(int *)(uVar8 + 0x690) == 0)) {
    iVar2 = FUN_00dd3500(0x110,&DAT_01b7c0b8);
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = CollisionAttackData::CollisionAttackData();
    }
    *(undefined4 *)(*(int *)(iVar2 + 8) + 0x30) = 0;
    iVar1 = *(int *)(iVar2 + 8);
    *(undefined4 *)(iVar1 + 0x8c) = 0;
    *(undefined4 *)(iVar1 + 0x90) = 0;
    puVar3 = *(undefined4 **)(iVar2 + 8);
    puVar3[3] = 1;
    *puVar3 = 0x18a;
    puVar3[1] = 0x32;
    *(undefined1 *)(puVar3 + 4) = 0;
    puVar3[2] = 500;
    *(undefined1 *)(*(int *)(iVar2 + 8) + 0x11) = 7;
    *(undefined4 *)(iVar2 + 4) = 1;
    puVar3 = (undefined4 *)FUN_009f8b60();
    piVar4 = (int *)FUN_00602cb0(10,*puVar3,iVar2);
    if (piVar4 != (int *)0x0) {
      iVar2 = *piVar4;
      uVar5 = (**(code **)(*piVar7 + 0x68))();
      (**(code **)(iVar2 + 0x6c))(uVar5);
      piVar7 = (int *)piVar4[0x21c];
      piVar4[0x21d] = 0x3f000000;
      puVar3 = (undefined4 *)FUN_009f8b60();
      (**(code **)(*piVar7 + 0x20))(0xb,*puVar3,0);
      piVar6 = (int *)FUN_00d773c0();
      (**(code **)(*piVar6 + 8))(piVar7);
      FUN_00d7b0f0();
      FUN_00d77c50(piVar4[0x13c],0xffffffff);
      piVar7[0x144] = 0x3dcccccd;
      FUN_00d77580(0x3dcccccd,0x40800000,0x3f000000);
      piVar7[0xe0] = 0x18a;
      FUN_00d7b890();
    }
  }
  return;
}

// 008728E0  FUN_008728e0  size=322  [run]
undefined4
FUN_008728e0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
            int param_5,undefined4 param_6)

{
  uint uVar1;
  int iVar2;
  undefined *puVar3;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined1 local_60 [16];
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  uint local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  char *local_20;
  undefined4 local_1c;
  
  if (param_1 == (undefined4 *)0x0) {
    uVar1 = 0;
  }
  else {
    puVar3 = &DAT_01b35b78;
    (**(code **)*param_1)(&DAT_01b35b78);
    iVar2 = FUN_00dd6d80(puVar3);
    uVar1 = -(uint)(iVar2 != 0) & (uint)param_1;
  }
  if (*(int **)(uVar1 + 0x5e0) != (int *)0x0) {
    puVar3 = &DAT_01b35b20;
    (**(code **)(**(int **)(uVar1 + 0x5e0) + 4))(&DAT_01b35b20);
    FUN_00dd6d80(puVar3);
  }
  if ((param_5 != 0) && (iVar2 = FUN_00a12210(param_6), iVar2 != 0)) {
    iVar2 = FUN_009f8b40();
    local_50 = *param_2;
    local_30 = iVar2 << 0x10 | 3;
    local_4c = param_2[1];
    local_48 = param_2[2];
    local_2c = 0;
    local_44 = param_2[3];
    local_28 = 0x48;
    local_40 = *param_3;
    local_24 = 0;
    local_20 = "weakPointViewCheck";
    local_3c = param_3[1];
    local_1c = 0;
    local_38 = param_3[2];
    local_34 = param_3[3];
    iVar2 = RayCastSingleHitWork::RayCastSingleHitWork_2(&local_70,local_60,0,0,&local_50);
    if (iVar2 != 0) {
      *param_4 = local_70;
      param_4[1] = local_6c;
      param_4[2] = local_68;
      param_4[3] = local_64;
      return 1;
    }
  }
  return 0;
}

