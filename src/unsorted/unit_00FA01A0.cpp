// src/unsorted/unit_00FA01A0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00FA01A0..00FA01F0, 2 functions

#include "mgrr.h"

// 00FA01A0  FUN_00fa01a0  size=72  [run]
bool __thiscall FUN_00fa01a0(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  if ((param_2 != 0) && (param_3 != 0)) {
    iVar1 = FUN_00f9ce80(param_1 + 4,param_2);
    if (iVar1 != 0) {
      iVar1 = FUN_00f9cf40(param_1 + 0x14,param_3,*(undefined4 *)(param_1 + 0x24));
      return iVar1 != 0;
    }
  }
  return false;
}

// 00FA01F0  FUN_00fa01f0  size=346  [run]
bool FUN_00fa01f0(uint param_1,uint *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint local_4;
  
  local_4 = 0x1111111;
  if (param_1 - 0x100 < 0x10) {
    iVar1 = FUN_00f99740(param_1,1,1,1);
    if (((iVar1 != 0) && (iVar1 = FUN_00f997c0(param_1,1,1,1,0), iVar1 != 0)) &&
       (iVar1 = FUN_00f9ef30(param_1,&local_4,param_3), iVar1 != 0)) {
      iVar1 = FUN_00f99700(param_1,param_3);
      return iVar1 != 0;
    }
  }
  else if (param_1 < 0x10) {
    if (param_3 == 0) {
      return false;
    }
    uVar3 = *param_2;
    iVar1 = (&DAT_01f21b68)[param_1 * 2];
    local_4 = uVar3;
    if (((((((&DAT_01f21b6c)[param_1 * 2] ^ uVar3) & 0xfff) == 0) ||
         (iVar2 = FUN_00f99740(param_1,uVar3 >> 8 & 0xf,uVar3 & 0xf,uVar3 >> 4 & 0xf), iVar2 != 0))
        && (((((&DAT_01f21b6c)[param_1 * 2] ^ uVar3) & 0x80fff000) == 0 ||
            (iVar2 = FUN_00f9c750(param_1,&local_4), uVar3 = local_4, iVar2 != 0)))) &&
       ((((((uint)*(byte *)((int)&DAT_01f21b6c + param_1 * 8 + 3) ^ uVar3 >> 0x18) & 0x1f) == 0 &&
         (iVar1 == param_3)) ||
        ((iVar1 = FUN_00f9ef30(param_1,&local_4,param_3), iVar1 != 0 &&
         (iVar1 = FUN_00f99700(param_1,param_3), uVar3 = local_4, iVar1 != 0)))))) {
      (&DAT_01f21b6c)[param_1 * 2] = uVar3;
      (&DAT_01f21b68)[param_1 * 2] = param_3;
      return true;
    }
    return false;
  }
  return false;
}

