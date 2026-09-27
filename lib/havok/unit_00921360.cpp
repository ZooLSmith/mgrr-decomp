// lib/havok/unit_00921360.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00921360..00921360, 1 functions

#include "mgrr.h"
#include "HkRemoveContainer.h"

// 00921360  HkRemoveContainer::HkRemoveContainer  size=308  [run]
void __fastcall HkRemoveContainer::HkRemoveContainer(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined **local_c;
  undefined4 local_8;
  int local_4;
  
  iVar2 = param_1[0x1c];
  *param_1 = RigidBodyManagerImplement::vftable;
  if (iVar2 != 0) {
    puVar4 = *(undefined4 **)(iVar2 + 4);
    if (puVar4 != puVar4 + *(int *)(iVar2 + 8)) {
      do {
        piVar1 = (int *)FUN_0092c170();
        local_4 = *(int *)*puVar4;
        local_8 = *(undefined4 *)(local_4 + 8);
        local_c = HkRemoveEntity::vftable;
        (**(code **)(*piVar1 + 0x1c))(&local_c);
        puVar4 = puVar4 + 1;
        local_c = vftable;
      } while (puVar4 != (undefined4 *)
                         (*(int *)(param_1[0x1c] + 4) + *(int *)(param_1[0x1c] + 8) * 4));
    }
    if ((undefined4 *)param_1[0x1c] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)param_1[0x1c])(1);
      param_1[0x1c] = 0;
    }
  }
  iVar2 = (**(code **)(param_1[4] + 0xc))();
  if (iVar2 != 0) {
    iVar2 = (**(code **)(param_1[4] + 0x1c))(0);
    while (iVar2 != 0) {
      iVar3 = (**(code **)(param_1[4] + 0x1c))(iVar2);
      FUN_00dd4920(iVar2);
      iVar2 = iVar3;
    }
    (**(code **)(param_1[4] + 8))();
  }
  FUN_00dd7270();
  FUN_00dd7270();
  iVar2 = (**(code **)(param_1[4] + 0xc))();
  if (iVar2 != 0) {
    iVar2 = (**(code **)(param_1[4] + 0x1c))(0);
    while (iVar2 != 0) {
      iVar3 = (**(code **)(param_1[4] + 0x1c))(iVar2);
      FUN_00dd4920(iVar2);
      iVar2 = iVar3;
    }
  }
  Hw::cHeap::cHeap_3();
  *param_1 = RigidBodyManager::vftable;
  return;
}

