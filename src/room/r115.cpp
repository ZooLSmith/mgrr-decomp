// src/room/r115.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00A711B0..00A7B5F0, 4 functions

#include "mgrr.h"
#include "R115.h"

// 00A711B0  R115::vf04  size=26  [class]
void __fastcall R115::vf04(int param_1)

{
  if (*(int *)(param_1 + 0x80) != 0) {
    FUN_00a5e860(0x3c888889);
  }
  return;
}

// 00A72BD0  R115::vf08  size=96  [class]
void __fastcall R115::vf08(int *param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = param_1 + 0x22;
  iVar3 = 4;
  do {
    piVar1 = (int *)FUN_00910da0();
    (**(code **)(*piVar1 + 0x2c))(piVar2);
    piVar2 = piVar2 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  iVar3 = param_1[0x20];
  if (iVar3 != 0) {
    FUN_00a54c70();
    FUN_00dd4920(iVar3);
    param_1[0x20] = 0;
  }
  FUN_00a71970();
  (**(code **)(*param_1 + 0x18))();
  FUN_00dd7270();
  return;
}

// 00A78020  R115::vf00  size=450  [class]
void __fastcall R115::vf00(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  undefined4 uVar5;
  uint *puVar6;
  int *piVar7;
  int iVar8;
  undefined1 local_114 [4];
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_108;
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
  FUN_00a74300(0x20);
  FUN_00a71970();
  FUN_0118f7b0();
  local_50 = 0;
  local_2c = 5;
  local_e0[0] = 0x14;
  piVar4 = (int *)FUN_00910da0();
  local_f0 = 0x40200000;
  local_ec = 0x42c80000;
  local_e8 = 0x41a00000;
  local_110 = 0;
  local_10c = 0;
  local_108 = 0;
  local_100 = 0xc2140000;
  local_fc = 0x42378f5c;
  piVar7 = (int *)(param_1 + 0x88);
  local_f8 = 0x422b3333;
  uVar5 = (**(code **)(*piVar4 + 4))(local_114,local_e0,&local_100,&local_110,&local_f0,1);
  FUN_00910ab0(uVar5);
  iVar8 = 4;
  do {
    iVar1 = *piVar7;
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
      puVar6[0xb] = 0x1a;
      if (DAT_01885d68 != 1) {
        piVar4 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
        *piVar4 = *piVar4 + -1;
        if (((*piVar4 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
          FUN_00dd7320();
        }
      }
    }
    FUN_00917bd0(*piVar7,4);
    FUN_00917bd0(*piVar7,0x20);
    FUN_00911ca0("programmabled");
    piVar7 = piVar7 + 1;
    iVar8 = iVar8 + -1;
  } while (iVar8 != 0);
  return;
}

// 00A7B5F0  R115::vf14  size=62  [class]
undefined4 * __thiscall R115::vf14(undefined4 *param_1,byte param_2)

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

