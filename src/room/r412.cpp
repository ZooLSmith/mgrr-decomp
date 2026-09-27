// src/room/r412.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00A71590..00A7B870, 4 functions

#include "mgrr.h"
#include "R412.h"

// 00A71590  R412::vf04  size=175  [class]
void __fastcall R412::vf04(int param_1)

{
  int *piVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x80) != 0) {
    FUN_00a5e860(0x3c888889);
  }
  iVar2 = (**(code **)(*DAT_01be9a34 + 0x24))(5,2,2);
  if (iVar2 != 0) {
    iVar2 = FUN_00911cc0();
    if (iVar2 == 0) {
      FUN_004066f0();
      FUN_011929d0(*(undefined4 *)(param_1 + 0x94),1);
      FUN_010060a0();
      if (DAT_01885d68 != 1) {
        piVar1 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
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

// 00A72F90  R412::vf08  size=96  [class]
void __fastcall R412::vf08(int *param_1)

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

// 00A79220  R412::vf00  size=1092  [class]
void __fastcall R412::vf00(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  undefined4 uVar5;
  uint *puVar6;
  uint uVar7;
  undefined1 **ppuStack_15c;
  undefined4 **ppuStack_158;
  undefined4 uStack_154;
  undefined4 **ppuStack_150;
  undefined4 *puStack_14c;
  undefined4 *puStack_148;
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
  
  uStack_124 = 0xa79239;
  FUN_00dd7240();
  uStack_124 = 0x20;
  puStack_128 = (undefined4 *)0xa79242;
  FUN_00a75200();
  uStack_124 = 0xa79249;
  FUN_00a71970();
  uStack_124 = 0xa79252;
  FUN_0118f7b0();
  local_50 = 0;
  local_2c = 5;
  local_e0[0] = 0x14;
  uStack_124 = 0xa79270;
  piVar4 = (int *)FUN_00910da0();
  local_f0 = 0x3e800000;
  uStack_124 = 1;
  puStack_128 = &local_f0;
  local_ec = 0x40000000;
  puStack_12c = &local_110;
  local_e8 = 0x3f800000;
  puStack_130 = &local_100;
  local_110 = 0;
  puStack_134 = local_e0;
  local_10c = 0x3f490fdb;
  puStack_138 = &local_114;
  local_108 = 0;
  local_100 = 0xc2d4e148;
  local_fc = 0x439e4000;
  local_f8[0] = 0x4284a8f6;
  uStack_13c = 0xa792e0;
  uStack_13c = (**(code **)(*piVar4 + 4))();
  puStack_140 = (undefined1 *)0xa792ec;
  FUN_00910ab0();
  uStack_13c = 0xa792f1;
  piVar4 = (int *)FUN_00910da0();
  uStack_13c = 1;
  puStack_140 = &stack0xfffffee8;
  local_114 = 0x40600000;
  ppuStack_144 = &puStack_128;
  local_110 = 0x3f800000;
  puStack_148 = &local_108;
  puStack_128 = (undefined4 *)0x0;
  uStack_124 = 0;
  puStack_14c = local_f8;
  ppuStack_150 = &puStack_12c;
  local_108 = 0xc2960000;
  uStack_104 = 0x439e4000;
  local_100 = 0x42580000;
  uStack_154 = 0xa7935b;
  uStack_154 = (**(code **)(*piVar4 + 4))();
  ppuStack_158 = (undefined4 **)0xa79367;
  FUN_00910ab0();
  uStack_154 = 0xa7936c;
  piVar4 = (int *)FUN_00910da0();
  puStack_130 = (undefined4 *)0x40333333;
  uStack_154 = 1;
  ppuStack_158 = &puStack_130;
  puStack_12c = (undefined4 *)0x3fcccccd;
  ppuStack_15c = &puStack_140;
  puStack_128 = (undefined4 *)0x40733333;
  puStack_140 = (undefined1 *)0x0;
  uStack_13c = 0;
  puStack_138 = (undefined4 *)0x0;
  uVar5 = (**(code **)(*piVar4 + 4))(&ppuStack_144,&local_110,&stack0xfffffee0);
  FUN_00910ab0(uVar5);
  piVar4 = (int *)FUN_00910da0();
  puStack_148 = (undefined4 *)0x3f800000;
  ppuStack_144 = (undefined4 **)0x40a00000;
  puStack_140 = (undefined1 *)0x40900000;
  ppuStack_158 = (undefined4 **)0x0;
  uStack_154 = 0;
  ppuStack_150 = (undefined4 **)0x0;
  puStack_138 = (undefined4 *)0xc30c428f;
  puStack_134 = (undefined4 *)0x43a38f5c;
  puStack_130 = (undefined4 *)0x42a00000;
  uVar5 = (**(code **)(*piVar4 + 4))
                    (&ppuStack_15c,&puStack_128,&puStack_138,&ppuStack_158,&puStack_148,0);
  FUN_00910ab0(uVar5);
  uVar7 = 0;
  do {
    if (uVar7 == 1) {
      iVar1 = *(int *)(param_1 + 0x8c);
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
      FUN_00917bd0(*(undefined4 *)(param_1 + 0x8c),0x1000000);
      FUN_00917bd0(*(undefined4 *)(param_1 + 0x8c),0x2000000);
    }
    else {
      iVar1 = *(int *)(param_1 + 0x88 + uVar7 * 4);
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
      iVar1 = uVar7 * 4;
      FUN_00917bd0(*(undefined4 *)(param_1 + 0x88 + uVar7 * 4),4);
      FUN_00917bd0(*(undefined4 *)(param_1 + 0x88 + iVar1),0x20);
    }
    FUN_00911ca0("programmabled");
    uVar7 = uVar7 + 1;
  } while (uVar7 < 4);
  return;
}

// 00A7B870  R412::vf14  size=62  [class]
undefined4 * __thiscall R412::vf14(undefined4 *param_1,byte param_2)

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

