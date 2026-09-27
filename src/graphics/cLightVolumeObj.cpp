// src/graphics/cLightVolumeObj.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00A002E0..00ABAA90, 3 functions

#include "mgrr.h"
#include "cLightVolumeObj.h"

// 00A002E0  cLightVolumeObj::vf08  size=547  [class]
undefined4 __fastcall cLightVolumeObj::vf08(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  if (*(int *)(param_1 + 0x4b0) == 0x41000) {
    iVar4 = FUN_00de4550("et1000.wmb",0);
  }
  if (*(int *)(param_1 + 0x4b0) == 0x41001) {
    iVar4 = FUN_00de4550("et1001.wmb",0);
  }
  if (*(int *)(param_1 + 0x4b0) == 0x41002) {
    iVar4 = FUN_00de4550("et1002.wmb",0);
  }
  if (*(int *)(param_1 + 0x4b0) == 0x41003) {
    iVar4 = FUN_00de4550("et1003.wmb",0);
  }
  if (*(int *)(param_1 + 0x4b0) == 0x41004) {
    iVar4 = FUN_00de4550("et1004.wmb",0);
  }
  if (*(int *)(param_1 + 0x4b0) == 0x41005) {
    iVar4 = FUN_00de4550("et1005.wmb",0);
  }
  if (*(int *)(param_1 + 0x4b0) == 0x41006) {
    iVar4 = FUN_00de4550("et1006.wmb",0);
  }
  if (*(int *)(param_1 + 0x4b0) == 0x41007) {
    iVar4 = FUN_00de4550("et1007.wmb",0);
  }
  if (*(int *)(param_1 + 0x4b0) == 0x41008) {
    iVar4 = FUN_00de4550("et1008.wmb",0);
  }
  if (iVar4 == 0) {
    return 0;
  }
  iVar1 = FUN_00de4500("dummy.wtb");
  iVar2 = FUN_00de4500("dummy.wta");
  iVar3 = FUN_00de4500("dummy.wtp");
  if ((iVar2 == 0) || (iVar3 == 0)) {
    iVar2 = 0;
    iVar3 = iVar1;
  }
  iVar4 = cModelDataManager::EntryModelData(iVar4,0);
  if (iVar4 != 0) {
    *(uint *)(param_1 + 0x4c0) = *(uint *)(param_1 + 0x4c0) & 0xfffffffd;
    iVar4 = FUN_009fd350(iVar4,iVar3,iVar2,0);
    if (iVar4 != 0) {
      iVar4 = *(int *)(param_1 + 0x4b0);
      *(undefined4 *)(param_1 + 0x18c) = 0;
      if (iVar4 == 0x41004) {
        *(undefined4 *)(param_1 + 0x870) = 1;
        return 1;
      }
      if (iVar4 == 0x41005) {
        *(undefined4 *)(param_1 + 0x870) = 2;
        return 1;
      }
      if (iVar4 == 0x41006) {
        *(undefined4 *)(param_1 + 0x870) = 3;
        return 1;
      }
      *(uint *)(param_1 + 0x870) = (iVar4 != 0x41007) - 1 & 4;
      return 1;
    }
  }
  return 0;
}

// 00AA6FA0  cLightVolumeObj::cLightVolumeObj  size=18  [class]
undefined4 * __fastcall cLightVolumeObj::cLightVolumeObj(undefined4 *param_1)

{
  Behavior::Behavior();
  *param_1 = vftable;
  return param_1;
}

// 00ABAA90  cLightVolumeObj::destruct  size=105  [class]
undefined4 * __thiscall cLightVolumeObj::destruct(undefined4 *param_1,byte param_2)

{
  *param_1 = Behavior::vftable;
  cLockonPartsList::~cLockonPartsList();
  if (param_1[0x19f] != 0) {
    param_1[0x1a1] = 0;
    if (param_1[0x1a2] != 0) {
      FUN_00dd48d0(param_1[0x19f],0);
      param_1[0x1a2] = 0;
    }
    param_1[0x19f] = 0;
    param_1[0x1a0] = 0;
  }
  cObj::~cObj();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

