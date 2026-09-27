// src/misc/cSlashPointCircleParts.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CBD800..00CF0AA0, 3 functions

#include "mgrr.h"
#include "cSlashPointCircleParts.h"

// 00CBD800  cSlashPointCircleParts::vf14  size=158  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall cSlashPointCircleParts::vf14(int param_1)

{
  int iVar1;
  float10 fVar2;
  
  if (DAT_01dc14c8 != (int *)0x0) {
    iVar1 = (**(code **)(*DAT_01dc14c8 + 0x32c))();
    if (iVar1 != 0) {
      if (*(int *)(param_1 + 0x14) != 0) {
        *(undefined4 *)(*(int *)(param_1 + 0x14) + 4) = 0;
      }
      goto LAB_00cbd839;
    }
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x14) + 4) = 1;
  }
LAB_00cbd839:
  FUN_00cb27c0(*(undefined4 *)(param_1 + 0x20),param_1 + 0x30);
  if (*(int *)(param_1 + 0x24) == 1) {
    FUN_00cb2a30(*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x40));
    FUN_00cb2a90(*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x44));
    return;
  }
  fVar2 = (float10)fpatan((float10)_DAT_01bea640 - (float10)_DAT_01bea630,
                          (float10)_DAT_01bea648 - (float10)_DAT_01bea638);
  FUN_00cb2a90(*(undefined4 *)(param_1 + 0x20),(float)fVar2);
  return;
}

// 00CE3D30  cSlashPointCircleParts::vf00  size=63  [class]
undefined4 * __thiscall cSlashPointCircleParts::vf00(undefined4 *param_1,byte param_2)

{
  int iVar1;
  
  iVar1 = param_1[5];
  *param_1 = cCustomObjCtrlManager::vftable;
  param_1[6] = 0;
  if (iVar1 != 0) {
    if ((*(uint *)(iVar1 + 0x24) & 1) == 0) {
      *(uint *)(iVar1 + 0x24) = *(uint *)(iVar1 + 0x24) | 1;
      *(undefined4 *)(iVar1 + 4) = 0;
    }
    param_1[5] = 0;
  }
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00CF0AA0  cSlashPointCircleParts::vf08  size=85  [class]
void __fastcall cSlashPointCircleParts::vf08(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)(param_1 + 0x18);
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*(ushort *)(iVar1 + 0x88);
  }
  *(uint *)(param_1 + 0x1c) = uVar2;
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*(ushort *)(iVar1 + 0x148);
  }
  *(uint *)(param_1 + 0x20) = uVar2;
  if (iVar1 != 0) {
    FUN_00cdeec0(1);
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    FUN_00cdeec0(3);
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x14) + 4) = 1;
  }
  return;
}

