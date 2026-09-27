// src/hw/cShareHeapPhysical.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00DD2DD0..00DD51D0, 4 functions

#include "mgrr.h"

// 00DD2DD0  Hw::cShareHeapPhysical::vf48  size=66  [class]
undefined4 __thiscall Hw::cShareHeapPhysical::vf48(int param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = FUN_00dd7240();
  if (iVar2 == 0) {
    return 0;
  }
  *(int *)(param_1 + 0x470) = param_2;
  uVar1 = *(undefined4 *)(param_2 + 0x44);
  *(undefined4 *)(param_1 + 0x48) = uVar1;
  *(undefined4 *)(param_1 + 0x44) = uVar1;
  iVar2 = *(int *)(param_2 + 0x4c);
  *(int *)(param_1 + 0x4c) = iVar2;
  *(int *)(param_1 + 0x50) = iVar2 + -0x1c;
  *(undefined4 *)(param_1 + 0x38) = param_3;
  return 1;
}

// 00DD2E20  Hw::cShareHeapPhysical::vf08  size=1  [class]
void Hw::cShareHeapPhysical::vf08(void)

{
  return;
}

// 00DD41F0  Hw::cShareHeapPhysical::vf4C  size=85  [class]
undefined4 __fastcall Hw::cShareHeapPhysical::vf4C(int param_1)

{
  if ((*(int *)(param_1 + 0x44) != 0) && (*(int *)(param_1 + 0x4c) != 0)) {
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x4c) + -0x1c;
    *(undefined4 *)(*(int *)(param_1 + 0x44) + 4) = 0;
    **(undefined4 **)(param_1 + 0x44) = 0;
    *(undefined4 *)(*(int *)(param_1 + 0x44) + 0xc) = 0x1c;
    *(undefined4 *)(*(int *)(param_1 + 0x44) + 8) = *(undefined4 *)(param_1 + 0x50);
    _memset((void *)(*(int *)(param_1 + 0x44) + 0x1c),0xee,*(size_t *)(*(int *)(param_1 + 0x44) + 8)
           );
  }
  return 1;
}

// 00DD51D0  Hw::cShareHeapPhysical::vf00  size=40  [class]
undefined4 * __thiscall Hw::cShareHeapPhysical::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  cHeap::cHeap_4();
  if ((param_2 & 1) != 0) {
    (**(code **)(*(int *)param_1[-1] + 0x3c))(param_1,0);
  }
  return param_1;
}

