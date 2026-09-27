// src/misc/ProgressFlag.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C81F30..00C88E80, 3 functions

#include "mgrr.h"
#include "ProgressFlag.h"

// 00C81F30  ProgressFlag::SAVE  size=128  [class]
uint __fastcall ProgressFlag::SAVE(int param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 local_40 [15];
  
  uVar1 = *(uint *)(param_1 + 0xc);
  uVar3 = 0;
  if (uVar1 < 10) {
    _memset(local_40,0,0x30);
    uVar2 = 0;
    uVar3 = uVar2;
    if (uVar1 != 0) {
      do {
        if (uVar2 < uVar1) {
          local_40[uVar2] = *(undefined4 *)(*(int *)(param_1 + 8) + uVar2 * 4);
        }
        uVar3 = (uint)(uVar2 < uVar1);
      } while ((uVar3 != 0) && (uVar2 = uVar2 + 1, uVar2 < uVar1));
      if (uVar3 == 1) {
        FUN_009c6820(1,local_40);
        return 1;
      }
    }
  }
  else {
    FUN_00dd5650(&DAT_016ac29c);
  }
  return uVar3;
}

// 00C81FB0  ProgressFlag::LOAD  size=129  [class]
uint __fastcall ProgressFlag::LOAD(int param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  undefined4 local_40 [15];
  
  uVar1 = *(uint *)(param_1 + 0xc);
  if (uVar1 < 10) {
    _memset(local_40,0,0x30);
    uVar2 = FUN_009c44e0(1,local_40);
    if (uVar2 == 1) {
      uVar3 = 0;
      if (uVar1 == 0) {
        return 1;
      }
      do {
        bVar4 = uVar3 < *(uint *)(param_1 + 0xc);
        if (bVar4) {
          *(undefined4 *)(*(int *)(param_1 + 8) + uVar3 * 4) = local_40[uVar3];
        }
        uVar2 = (uint)bVar4;
        if (uVar2 == 0) goto LAB_00c8201b;
        uVar3 = uVar3 + 1;
      } while (uVar3 < uVar1);
    }
    if (uVar2 != 0) {
      return uVar2;
    }
  }
LAB_00c8201b:
  FUN_00dd5650(&DAT_016ac2d4);
  return 0;
}

// 00C88E80  ProgressFlag::vf00  size=39  [class]
undefined4 * __thiscall ProgressFlag::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = ProgressFlagBase::vftable;
  FUN_00dd7270();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

