// src/unsorted/unit_009B28E0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 009B28E0..009B28E0, 1 functions

#include "mgrr.h"

// 009B28E0  FUN_009b28e0  size=539  [run]
void FUN_009b28e0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  undefined *puVar4;
  undefined1 auStack_d0 [4];
  undefined1 local_cc [4];
  int iStack_c8;
  char *local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined1 *local_b4;
  undefined4 local_b0;
  undefined4 local_a0;
  undefined4 local_9c;
  int local_98;
  undefined4 local_94;
  undefined1 local_90 [80];
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  
  FUN_0040b190();
  if (param_1 == 0) {
    local_40 = 0x3f800000;
    local_3c = 0xbf800000;
  }
  else if (param_1 == 1) {
    local_40 = 0xbfa66666;
    local_3c = 0xbf800000;
    local_28 = 0x3f7ae148;
    local_24 = 0x3f7ae148;
    local_20 = 0x3f7ae148;
  }
  else if (param_1 == 2) {
    local_40 = 0xbf266666;
    local_3c = 0xbfd47ae1;
    local_38 = 0x3fcccccd;
  }
  FUN_00a7ca40();
  FUN_00de3530();
  if ((DAT_01bea02c == 0) && (DAT_01bea028 == DAT_01bea024)) {
    uVar1 = *DAT_01bea01c;
  }
  else {
    uVar1 = 0xffffffff;
  }
  local_bc = 0x10010;
  local_b8 = 0x10010;
  local_b4 = local_90;
  local_c0 = "Pl0010";
  local_b0 = 0;
  cObjReadManager::getDataAtSet(local_cc,uVar1,0);
  uVar1 = FUN_00de44b0(&DAT_01657e1c,0);
  local_a0 = cModelDataManager::EntryModelData(uVar1,0);
  local_94 = FUN_00de4550("_param.bxm",0);
  iVar2 = FUN_00de44b0(&DAT_0164518c,0);
  uVar1 = FUN_00de44b0(&DAT_01645174,0);
  local_98 = FUN_00de44b0(&DAT_01645170,0);
  local_9c = uVar1;
  if (iVar2 != 0) {
    local_9c = 0;
    local_98 = iVar2;
  }
  iVar2 = FUN_00a81b80(&local_c0);
  if (iVar2 != 0) {
    piVar3 = (int *)FUN_00c13920();
    (**(code **)(*piVar3 + 0x60))(0xffffffff);
    *(int *)(iStack_c8 + 0x468) = iVar2;
    piVar3 = (int *)FUN_00a7c8a0();
    if (piVar3 != (int *)0x0) {
      Behavior::setupCloth(auStack_d0);
      FUN_008e3c10();
      (**(code **)(*piVar3 + 0x20))();
      puVar4 = &DAT_01be9db8;
      (**(code **)(*piVar3 + 4))(&DAT_01be9db8);
      iVar2 = FUN_00dd6d80(puVar4);
      if (iVar2 != 0) {
        piVar3[0x2dd] = 1;
      }
    }
  }
  return;
}

