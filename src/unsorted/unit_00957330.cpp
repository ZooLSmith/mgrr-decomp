// src/unsorted/unit_00957330.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00957330..00957BD0, 7 functions

#include "types.h"

// 00957330  FUN_00957330  size=336  [run]
int * FUN_00957330(undefined4 param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  int local_24;
  undefined4 local_20;
  float local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  if ((DAT_01bea094 & 0x2000000) != 0) {
    return (int *)0x0;
  }
  if (DAT_01b37398 != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_01b37380);
  }
  local_20 = 0;
  local_1c = 0.0;
  local_18 = 0;
  local_14 = 0x3f800000;
  local_24 = 0;
  iVar1 = hkpAllRayHitCollector::hkpAllRayHitCollector_5
                    (&local_20,&local_24,param_2,0x40000000,0x41200000,"ItemDropCheck");
  if (iVar1 == 0) {
    local_20 = *param_2;
    local_1c = (float)param_2[1];
    local_18 = param_2[2];
    local_14 = param_2[3];
  }
  else {
    local_1c = local_1c + 0.5;
  }
  piVar2 = (int *)0x0;
  iVar1 = FUN_0094e140(param_1,&local_20,0,0);
  if (iVar1 != 0) {
    FUN_00e5e080("core_se_sys_item_drop",&local_20,0,0xffffffff,0);
    piVar2 = (int *)FUN_00954a90(iVar1);
    if (piVar2 != (int *)0x0) {
      piVar2[0x19] = local_24;
      (**(code **)(*piVar2 + 0x18))(&local_20);
      (**(code **)(*piVar2 + 0x14))();
      piVar2[0x20] = param_3;
      (**(code **)(*piVar2 + 0x24))();
      (**(code **)(*piVar2 + 0x20))(1);
      FUN_00950a70(piVar2);
    }
  }
  if (DAT_01b37398 != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_01b37380);
  }
  return piVar2;
}

// 00957480  FUN_00957480  size=434  [run]
int * FUN_00957480(undefined4 param_1,undefined4 param_2,undefined4 *param_3,int param_4)

{
  code *pcVar1;
  int iVar2;
  int *piVar3;
  int local_2c;
  undefined1 local_28 [4];
  uint local_24;
  undefined4 local_20;
  float local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  if ((DAT_01bea094 & 0x2000000) != 0) {
    return (int *)0x0;
  }
  if (DAT_01b37398 != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_01b37380);
  }
  local_20 = 0;
  local_1c = 0.0;
  local_18 = 0;
  local_14 = 0x3f800000;
  local_2c = 0;
  iVar2 = hkpAllRayHitCollector::hkpAllRayHitCollector_5
                    (&local_20,&local_2c,param_3,0x40000000,0x41200000,"ItemDropCheck");
  if (iVar2 == 0) {
    local_20 = *param_3;
    local_1c = (float)param_3[1];
    local_18 = param_3[2];
    local_14 = param_3[3];
  }
  else {
    local_1c = local_1c + 0.5;
  }
  local_24 = 0xffffffff;
  piVar3 = (int *)0x0;
  iVar2 = FUN_0094e140(param_1,&local_20,param_2,local_28);
  if (iVar2 != 0) {
    FUN_00e5e080("core_se_sys_item_drop",&local_20,0,0xffffffff,0);
    piVar3 = (int *)FUN_00954a90(iVar2);
    if (piVar3 != (int *)0x0) {
      pcVar1 = *(code **)(*piVar3 + 0x18);
      piVar3[0x19] = local_2c;
      (*pcVar1)(&local_20);
      (**(code **)(*piVar3 + 0x14))();
      piVar3[0x20] = param_4;
      (**(code **)(*piVar3 + 0x24))();
      (**(code **)(*piVar3 + 0x20))(1);
      if ((piVar3[3] == 8) && ((short)local_24 != -1)) {
        *(undefined1 *)(piVar3 + 0x2c) = 1;
        piVar3[0x2d] = local_24 & 0xffff;
      }
      if ((piVar3[3] == 5) && ((short)local_24 != -1)) {
        FUN_0094d2d0(local_24 & 0xffff);
      }
      FUN_00950a70(piVar3);
    }
  }
  if (DAT_01b37398 != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_01b37380);
  }
  return piVar3;
}

// 00957640  FUN_00957640  size=414  [run]
int * FUN_00957640(undefined4 param_1,undefined4 param_2,undefined4 *param_3,int param_4)

{
  int iVar1;
  int *piVar2;
  undefined1 local_28 [4];
  uint local_24;
  undefined4 local_20;
  float local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  if ((DAT_01bea094 & 0x2000000) != 0) {
    return (int *)0x0;
  }
  if (DAT_01b37398 != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_01b37380);
  }
  local_20 = 0;
  local_1c = 0.0;
  local_18 = 0;
  local_14 = 0x3f800000;
  iVar1 = hkpAllRayHitCollector::hkpAllRayHitCollector_5
                    (&local_20,local_28,param_3,0x40000000,0x41200000,"ItemDropEmCheck");
  if (iVar1 == 0) {
    local_20 = *param_3;
    local_1c = (float)param_3[1];
    local_18 = param_3[2];
    local_14 = param_3[3];
  }
  else {
    local_1c = local_1c + 0.5;
  }
  local_24 = 0xffffffff;
  piVar2 = (int *)0x0;
  iVar1 = FUN_00950700(param_1,param_2,local_28);
  if (iVar1 != 0) {
    piVar2 = (int *)FUN_00954a90(iVar1);
    if (piVar2 != (int *)0x0) {
      FUN_00e5e080("core_se_sys_item_drop",&local_20,0,0xffffffff,0);
      (**(code **)(*piVar2 + 0x18))(&local_20);
      (**(code **)(*piVar2 + 0x14))();
      piVar2[0x20] = param_4;
      (**(code **)(*piVar2 + 0x24))();
      (**(code **)(*piVar2 + 0x20))(1);
      if ((piVar2[3] == 8) && ((short)local_24 != -1)) {
        *(undefined1 *)(piVar2 + 0x2c) = 1;
        piVar2[0x2d] = local_24 & 0xffff;
      }
      if ((piVar2[3] == 5) && ((short)local_24 != -1)) {
        FUN_0094d2d0(local_24 & 0xffff);
      }
      FUN_00950a70(piVar2);
    }
  }
  if (DAT_01b37398 != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_01b37380);
  }
  return piVar2;
}

// 009577E0  FUN_009577e0  size=335  [run]
int * FUN_009577e0(undefined4 param_1,undefined4 *param_2,int param_3,int param_4)

{
  code *pcVar1;
  int iVar2;
  int *piVar3;
  int local_24;
  undefined4 local_20;
  float local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  if ((DAT_01bea094 & 0x2000000) != 0) {
    return (int *)0x0;
  }
  if (DAT_01b37398 != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_01b37380);
  }
  local_20 = 0;
  local_1c = 0.0;
  local_18 = 0;
  local_14 = 0x3f800000;
  local_24 = 0;
  iVar2 = hkpAllRayHitCollector::hkpAllRayHitCollector_5
                    (&local_20,&local_24,param_2,0x40000000,0x41200000,"ItemAliasCheck");
  if (iVar2 == 0) {
    local_20 = *param_2;
    local_1c = (float)param_2[1];
    local_18 = param_2[2];
    local_14 = param_2[3];
  }
  else {
    local_1c = local_1c + 0.5;
  }
  piVar3 = (int *)0x0;
  iVar2 = FUN_0094dfd0(param_1);
  if (iVar2 != 0) {
    piVar3 = (int *)FUN_00954a90(iVar2);
    if (piVar3 != (int *)0x0) {
      FUN_00e5e080("core_se_sys_item_drop",&local_20,0,0xffffffff,0);
      pcVar1 = *(code **)(*piVar3 + 0x18);
      piVar3[0x19] = local_24;
      (*pcVar1)(&local_20);
      (**(code **)(*piVar3 + 0x14))();
      piVar3[0x20] = param_3;
      if (param_4 == 0) {
        (**(code **)(*piVar3 + 0x24))();
      }
      (**(code **)(*piVar3 + 0x20))(1);
      FUN_00950a70(piVar3);
    }
  }
  if (DAT_01b37398 != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_01b37380);
  }
  return piVar3;
}

// 00957930  FUN_00957930  size=373  [run]
int * FUN_00957930(undefined4 *param_1,int param_2)

{
  code *pcVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined *puVar7;
  int local_24;
  undefined4 local_20;
  float local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  piVar5 = (int *)0x0;
  if (DAT_01b37398 != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_01b37380);
  }
  local_20 = 0;
  local_1c = 0.0;
  local_18 = 0;
  local_14 = 0x3f800000;
  local_24 = 0;
  iVar2 = hkpAllRayHitCollector::hkpAllRayHitCollector_5
                    (&local_20,&local_24,param_1,0x40000000,0x41200000,"VisceraCheck");
  if (iVar2 == 0) {
    local_20 = *param_1;
    local_1c = (float)param_1[1];
    local_18 = param_1[2];
    local_14 = param_1[3];
  }
  else {
    local_1c = local_1c + 0.5;
  }
  if (param_2 == 1) {
    uVar6 = 0x5e77df51;
  }
  else {
    uVar6 = 0x36f036e1;
  }
  iVar2 = FUN_0094dfd0(uVar6);
  if (iVar2 != 0) {
    piVar5 = (int *)FUN_00952a10(iVar2,&local_20);
    if (piVar5 != (int *)0x0) {
      FUN_00e5e080("core_se_sys_item_drop",&local_20,0,0xffffffff,0);
      (**(code **)(*piVar5 + 0x14))();
      pcVar1 = *(code **)(*piVar5 + 0x24);
      piVar5[0x19] = local_24;
      (*pcVar1)();
      piVar5[0x28] = param_2;
      FUN_00950a70(piVar5);
      piVar3 = (int *)FUN_00a7c8a0();
      piVar4 = (int *)0x0;
      if (piVar3 != (int *)0x0) {
        puVar7 = &DAT_01b353c0;
        (**(code **)(*piVar3 + 4))(&DAT_01b353c0);
        iVar2 = FUN_00dd6d80(puVar7);
        piVar4 = (int *)(-(uint)(iVar2 != 0) & (uint)piVar3);
      }
      piVar4[0x248] = 0;
      (**(code **)(*piVar4 + 0x30c))();
    }
  }
  if (DAT_01b37398 != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_01b37380);
  }
  return piVar5;
}

// 00957AB0  FUN_00957ab0  size=286  [run]
int * FUN_00957ab0(undefined4 *param_1,undefined4 param_2)

{
  code *pcVar1;
  int iVar2;
  int *piVar3;
  int local_24;
  undefined4 local_20;
  float local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  if (DAT_01b37398 != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_01b37380);
  }
  local_20 = 0;
  local_1c = 0.0;
  local_18 = 0;
  local_14 = 0x3f800000;
  piVar3 = (int *)0x0;
  local_24 = 0;
  iVar2 = hkpAllRayHitCollector::hkpAllRayHitCollector_5
                    (&local_20,&local_24,param_1,0x40000000,0x41200000,"LeftHandCheck");
  if (iVar2 == 0) {
    local_20 = *param_1;
    local_1c = (float)param_1[1];
    local_18 = param_1[2];
    local_14 = param_1[3];
  }
  else {
    local_1c = local_1c + 0.5;
  }
  iVar2 = FUN_0094dfd0(0x6f2396e8);
  if (iVar2 != 0) {
    FUN_00e5e080("core_se_sys_item_drop",&local_20,0,0xffffffff,0);
    piVar3 = (int *)FUN_00952ad0(iVar2,&local_20);
    if (piVar3 != (int *)0x0) {
      pcVar1 = *(code **)(*piVar3 + 0x14);
      piVar3[0x19] = local_24;
      (*pcVar1)();
      FUN_00950a70(piVar3);
      FUN_0094d700(param_2);
    }
  }
  if (DAT_01b37398 != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_01b37380);
  }
  return piVar3;
}

// 00957BD0  FUN_00957bd0  size=335  [run]
int * FUN_00957bd0(undefined4 *param_1,undefined4 param_2,char param_3)

{
  code *pcVar1;
  int iVar2;
  int *piVar3;
  int local_24;
  undefined4 local_20;
  float local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  piVar3 = (int *)0x0;
  if (DAT_01b37398 != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_01b37380);
  }
  iVar2 = FUN_0094bbd0(param_2,(int)param_3);
  if (iVar2 != 0) {
    if (DAT_01b37398 != 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_01b37380);
    }
    return (int *)0x0;
  }
  local_20 = 0;
  local_1c = 0.0;
  local_18 = 0;
  local_14 = 0x3f800000;
  local_24 = 0;
  iVar2 = hkpAllRayHitCollector::hkpAllRayHitCollector_5
                    (&local_20,&local_24,param_1,0x40000000,0x41200000,"CollectableCheck");
  if (iVar2 == 0) {
    local_20 = *param_1;
    local_1c = (float)param_1[1];
    local_18 = param_1[2];
    local_14 = param_1[3];
  }
  else {
    local_1c = local_1c + 0.5;
  }
  iVar2 = FUN_0094dfd0(param_2);
  if (iVar2 != 0) {
    FUN_00e5e080("core_se_sys_item_drop",&local_20,0,0xffffffff,0);
    piVar3 = (int *)FUN_00952b90(iVar2,&local_20);
    if (piVar3 != (int *)0x0) {
      pcVar1 = *(code **)(*piVar3 + 0x14);
      piVar3[0x19] = local_24;
      (*pcVar1)();
      FUN_00950a70(piVar3);
      FUN_0094d2d0((int)param_3);
    }
  }
  if (DAT_01b37398 != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_01b37380);
  }
  return piVar3;
}

