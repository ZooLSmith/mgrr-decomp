// src/room/r204.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00A711F0..00A7B670, 4 functions

#include "types.h"

// 00A711F0  R204::vf04  size=411  [class]
void __fastcall R204::vf04(int param_1)

{
  int *piVar1;
  int iVar2;
  void *pvVar3;
  int iVar4;
  
  if (*(int *)(param_1 + 0x80) != 0) {
    FUN_00a5e860(0x3c888889);
  }
  iVar4 = (**(code **)(*DAT_01be9a34 + 0x24))(0x1d,2,2);
  pvVar3 = ThreadLocalStoragePointer;
  iVar2 = _tls_index;
  if (iVar4 != 0) {
    iVar4 = FUN_00911cc0();
    if (iVar4 == 0) {
      FUN_004066f0();
      FUN_011929d0(*(undefined4 *)(param_1 + 0x8c),1);
      FUN_010060a0();
      if (DAT_01885d68 != 1) {
        piVar1 = (int *)(*(int *)((int)pvVar3 + iVar2 * 4) + 4);
        *piVar1 = *piVar1 + -1;
        if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
          FUN_00dd7320();
        }
      }
    }
  }
  if (DAT_018b9174 == 0x230) {
    iVar4 = (**(code **)(*DAT_01be9a34 + 0x24))(10,2,2);
    if (iVar4 != 0) {
      iVar4 = FUN_00911cc0();
      if (iVar4 == 0) {
        FUN_004066f0();
        FUN_011929d0(*(undefined4 *)(param_1 + 0x90),1);
        FUN_010060a0();
        FUN_00406760();
      }
    }
  }
  iVar4 = (**(code **)(*DAT_01be9a34 + 0x24))(8,2,2);
  if (iVar4 != 0) {
    iVar4 = FUN_00911cc0();
    if (iVar4 == 0) {
      FUN_004066f0();
      FUN_011929d0(*(undefined4 *)(param_1 + 0x94),1);
      FUN_010060a0();
      if (DAT_01885d68 != 1) {
        piVar1 = (int *)(*(int *)((int)pvVar3 + iVar2 * 4) + 4);
        *piVar1 = *piVar1 + -1;
        if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
          FUN_00dd7320();
          return;
        }
      }
    }
  }
  return;
}

// 00A72C90  R204::vf08  size=96  [class]
void __fastcall R204::vf08(int *param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = param_1 + 0x23;
  iVar3 = 3;
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

// 00A783A0  R204::vf00  size=725  [class]
void __fastcall R204::vf00(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  undefined4 uVar6;
  uint *puVar7;
  int iVar8;
  undefined4 **ppuStack_144;
  undefined1 *puStack_140;
  undefined4 uStack_13c;
  undefined4 *puStack_138;
  undefined4 *puStack_134;
  undefined4 *puStack_130;
  undefined4 *puStack_12c;
  undefined4 *puStack_128;
  undefined4 uStack_124;
  undefined4 local_114;
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8 [2];
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e0 [36];
  undefined4 local_50;
  undefined1 local_2c;
  
  uStack_124 = 0xa783b9;
  FUN_00dd7240();
  uStack_124 = 0x20;
  puStack_128 = (undefined4 *)0xa783c2;
  FUN_00a74600();
  uStack_124 = 0xa783c9;
  FUN_00a71970();
  *(undefined4 *)(param_1 + 0x88) = 1;
  uStack_124 = 0xa783dc;
  FUN_0118f7b0();
  local_50 = 0;
  local_2c = 5;
  local_e0[0] = 0x14;
  uStack_124 = 0xa783fa;
  piVar5 = (int *)FUN_00910da0();
  local_f0 = 0x3fc00000;
  uStack_124 = 0;
  puStack_128 = &local_f0;
  local_ec = 0x41200000;
  puStack_12c = &local_110;
  local_e8 = 0x40c00000;
  puStack_130 = &local_100;
  local_110 = 0;
  local_10c = 0;
  puStack_134 = local_e0;
  local_108 = 0;
  puStack_138 = &local_114;
  local_100 = 0x43320000;
  local_fc = 0xc29a28f6;
  local_f8[0] = 0xc3d2a000;
  uStack_13c = 0xa78468;
  uStack_13c = (**(code **)(*piVar5 + 4))();
  puStack_140 = (undefined1 *)0xa78474;
  FUN_00910ab0();
  uStack_13c = 0xa78479;
  piVar5 = (int *)FUN_00910da0();
  uStack_13c = 0;
  puStack_140 = &stack0xfffffee8;
  local_114 = 0x41200000;
  ppuStack_144 = &puStack_128;
  local_110 = 0x3fc00000;
  puStack_128 = (undefined4 *)0x0;
  uStack_124 = 0;
  local_108 = 0x436735c3;
  uStack_104 = 0xc2ab851f;
  local_100 = 0xc3eb0000;
  uVar6 = (**(code **)(*piVar5 + 4))(&puStack_12c,local_f8,&local_108);
  FUN_00910ab0(uVar6);
  piVar5 = (int *)FUN_00910da0();
  puStack_130 = (undefined4 *)0x40c00000;
  puStack_12c = (undefined4 *)0x41200000;
  puStack_128 = (undefined4 *)0x3fc00000;
  puStack_140 = (undefined1 *)0x0;
  uStack_13c = 0x3fc90fdb;
  puStack_138 = (undefined4 *)0x0;
  uVar6 = (**(code **)(*piVar5 + 4))
                    (&ppuStack_144,&local_110,&stack0xfffffee0,&puStack_140,&puStack_130,0);
  FUN_00910ab0(uVar6);
  piVar5 = (int *)(param_1 + 0x8c);
  iVar8 = 3;
  do {
    iVar2 = *piVar5;
    if (iVar2 != 0) {
      if (DAT_01885d68 != 1) {
        iVar3 = *(int *)((int)ThreadLocalStoragePointer + _tls_index * 4);
        if ((*(int *)(iVar3 + 4) == 0) && (DAT_01b35fac != 0)) {
          if (DAT_01885db8 == 0) {
            FUN_00dd72e0();
          }
          else {
            FUN_00dd5650(&DAT_0163b898);
          }
        }
        piVar1 = (int *)(iVar3 + 4);
        *piVar1 = *piVar1 + 1;
      }
      uVar4 = *(uint *)(iVar2 + 0xc);
      puVar7 = (uint *)(-(uint)(uVar4 != 0) & uVar4);
      *puVar7 = *puVar7 | 0x200;
      puVar7[0xb] = 0xf;
      if (DAT_01885d68 != 1) {
        piVar1 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
        *piVar1 = *piVar1 + -1;
        if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
          FUN_00dd7320();
        }
      }
    }
    FUN_00917bd0(*piVar5,4);
    FUN_00917bd0(*piVar5,0x20);
    FUN_00911ca0("programmabled2");
    piVar5 = piVar5 + 1;
    iVar8 = iVar8 + -1;
  } while (iVar8 != 0);
  return;
}

// 00A7B670  R204::vf14  size=62  [class]
undefined4 * __thiscall R204::vf14(undefined4 *param_1,byte param_2)

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

