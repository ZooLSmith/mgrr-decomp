// src/unsorted/unit_00F20370.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00F20370..00F20580, 3 functions

#include "types.h"

// 00F20370  FUN_00f20370  size=319  [run]
void __thiscall FUN_00f20370(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 local_40;
  int local_3c;
  int local_38;
  uint *local_34;
  uint *local_30;
  undefined4 local_2c;
  undefined4 local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  short local_4;
  
  local_10 = *(undefined4 *)(param_1 + 0x100);
  local_c = *(undefined4 *)(param_1 + 0x104);
  local_2c = param_3;
  local_24 = param_1 + 0x180;
  local_8 = *(undefined4 *)(param_1 + 0x108);
  local_28 = param_4;
  local_20 = param_1 + 0x170;
  local_1c = param_1 + 400;
  local_18 = param_1 + 0x1c0;
  local_14 = param_1 + 0x200;
  local_4 = *(short *)(param_1 + 0x4e);
  local_30 = (uint *)(param_1 + 0x30);
  local_34 = (uint *)(param_1 + 0x38);
  local_40 = param_2;
  local_3c = param_1 + 0x130;
  local_38 = param_1 + 0x124;
  if ((local_4 == -3) || ((*local_30 & 0x100) != 0)) {
    FUN_00efd280(&local_40,&local_34);
    return;
  }
  if ((*local_34 & 0x20) != 0) {
    FUN_00f0b6f0(&local_40,&local_34);
    return;
  }
  if ((*(byte *)(param_1 + 0x3c) & 1) != 0) {
    FUN_00f0bf60(&local_40,&local_34);
    return;
  }
  if ((*local_34 & 0x100000) != 0) {
    FUN_00f0d230(&local_40,&local_34);
    return;
  }
  FUN_00f0cce0(&local_40,&local_34);
  return;
}

// 00F204B0  FUN_00f204b0  size=197  [run]
void __thiscall
FUN_00f204b0(int param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5,int param_6)

{
  undefined4 uVar1;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  undefined4 local_4;
  
  if (*(int *)(param_1 + 0x2c) != 0) {
    FUN_00dd5650("ERROR04: cEsp::m_pDrawWorkList != NULL %p\n",*(int *)(param_1 + 0x2c));
    return;
  }
  FUN_00f20370(param_2 + 0x40,param_5,param_6);
  if (*(int *)(param_1 + 0x2c) != 0) {
    FUN_00dd5650("ERROR03: pEsp->m_pDrawWorkList != NULL 0x%x\n",*(int *)(param_1 + 0x2c));
  }
  uVar1 = *(undefined4 *)(param_5 + 0x10);
  FUN_00f45d50();
  local_14 = param_2;
  local_c = param_5;
  local_8 = param_6;
  local_10 = param_1;
  local_4 = uVar1;
  FUN_00f49500(&local_14);
  if (*(int *)(param_1 + 0x2c) != 0) {
    FUN_00dd5650("ERROR03: pEsp->m_pDrawWorkList != NULL 0x%x\n",*(int *)(param_1 + 0x2c));
  }
  if ((*(uint *)(param_1 + 0x34) & 0x40000000) == 0) {
    FUN_00edc9e0(param_2,param_3,param_5,param_4,param_6 + 0x40);
  }
  return;
}

// 00F20580  FUN_00f20580  size=124  [run]
undefined4 FUN_00f20580(int param_1,int *param_2,int param_3)

{
  int iVar1;
  
  if ((0xfb < param_1) && (param_1 < 0x120)) {
    *param_2 = 0;
    return 1;
  }
  if ((param_3 != 0) && (iVar1 = FUN_00f4a2a0(param_1,param_2), iVar1 != 0)) {
    return 1;
  }
  iVar1 = Hw::cHwLFFreeListTemp<cEffResource<Hw::cTexture,eEffDataManager>_>::
          cHwLFFreeListTemp<cEffResource<Hw::cTexture,eEffDataManager>_>_3();
  if (param_1 - 0xf000U < 0x20) {
    iVar1 = *(int *)(iVar1 + -0x3b038 + param_1 * 4);
  }
  else {
    if (1000 < param_1) {
      *param_2 = 0;
      return 0;
    }
    iVar1 = *(int *)(iVar1 + 0x28 + param_1 * 4);
  }
  if (iVar1 == 0) {
    return 0;
  }
  *param_2 = iVar1;
  return 1;
}

