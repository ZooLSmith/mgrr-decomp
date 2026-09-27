// src/room/r404.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00A71530..00A7B7B0, 4 functions

#include "types.h"

// 00A71530  R404::vf04  size=26  [class]
void __fastcall R404::vf04(int param_1)

{
  if (*(int *)(param_1 + 0x80) != 0) {
    FUN_00a5e860(0x3c888889);
  }
  return;
}

// 00A72E70  R404::vf08  size=87  [class]
void __fastcall R404::vf08(int *param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)FUN_00910da0();
  (**(code **)(*piVar2 + 0x2c))(param_1 + 0x22);
  iVar1 = param_1[0x20];
  if (iVar1 != 0) {
    FUN_00a54c70();
    FUN_00dd4920(iVar1);
    param_1[0x20] = 0;
  }
  FUN_00a71970();
  (**(code **)(*param_1 + 0x18))();
  FUN_00dd7270();
  return;
}

// 00A78D50  R404::vf00  size=436  [class]
void __fastcall R404::vf00(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  undefined4 uVar5;
  uint *puVar6;
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined1 local_104 [4];
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e0 [36];
  undefined4 local_50;
  undefined1 local_2c;
  
  FUN_00dd7240();
  FUN_00a74d80(0x20);
  FUN_00a71970();
  FUN_0118f7b0();
  local_50 = 0;
  local_2c = 5;
  local_e0[0] = 0x14;
  piVar4 = (int *)FUN_00910da0();
  local_f0 = 0x41000000;
  local_ec = 0x40000000;
  local_e8 = 0x41880000;
  local_120 = 0;
  local_11c = 0;
  local_118 = 0;
  local_100 = 0x427c0000;
  local_fc = 0x41d80000;
  local_f8 = 0x41b26666;
  uVar5 = (**(code **)(*piVar4 + 4))(local_104,local_e0,&local_100,&local_120,&local_f0,1);
  FUN_00910ab0(uVar5);
  iVar1 = *(int *)(param_1 + 0x88);
  if (iVar1 != 0) {
    if (DAT_01885d68 != 1) {
      iVar2 = *(int *)((int)ThreadLocalStoragePointer + _tls_index * 4);
      if ((*(int *)(iVar2 + 4) == 0) && (DAT_01b35fac != 0)) {
        if (DAT_01885db8 == 0) {
          FUN_00dd72e0();
        }
        else {
          FUN_00dd5650(&DAT_0163b898);
        }
      }
      piVar4 = (int *)(iVar2 + 4);
      *piVar4 = *piVar4 + 1;
    }
    uVar3 = *(uint *)(iVar1 + 0xc);
    puVar6 = (uint *)(-(uint)(uVar3 != 0) & uVar3);
    *puVar6 = *puVar6 | 0x200;
    puVar6[0xb] = 0xf;
    if (DAT_01885d68 != 1) {
      piVar4 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
      *piVar4 = *piVar4 + -1;
      if (((*piVar4 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
        FUN_00dd7320();
      }
    }
  }
  FUN_00917bd0(*(undefined4 *)(param_1 + 0x88),4);
  FUN_00917bd0(*(undefined4 *)(param_1 + 0x88),0x20);
  FUN_00911ca0("programmabled");
  return;
}

// 00A7B7B0  R404::vf14  size=62  [class]
undefined4 * __thiscall R404::vf14(undefined4 *param_1,byte param_2)

{
  *param_1 = cRoomAbstract::vftable;
  FUN_00dd7270();
  param_1[4] = lib::Array<cRoomAbstract::stRoomEspUnit*>::vftable;
  if (param_1[5] != 0) {
    param_1[6] = 0;
  }
  param_1[5] = 0;
  param_1[7] = 0;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

