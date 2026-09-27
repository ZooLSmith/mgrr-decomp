// src/room/r113.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00A71190..00A7B5B0, 4 functions

#include "mgrr.h"
#include "R113.h"

// 00A71190  R113::vf04  size=26  [class]
void __fastcall R113::vf04(int param_1)

{
  if (*(int *)(param_1 + 0x80) != 0) {
    FUN_00a5e860(0x3c888889);
  }
  return;
}

// 00A72B70  R113::vf08  size=96  [class]
void __fastcall R113::vf08(int *param_1)

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

// 00A77CD0  R113::vf00  size=836  [class]
void __fastcall R113::vf00(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  undefined4 uVar6;
  uint *puVar7;
  int iVar8;
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
  
  uStack_124 = 0xa77ce9;
  FUN_00dd7240();
  uStack_124 = 0x20;
  puStack_128 = (undefined4 *)0xa77cf2;
  FUN_00a74180();
  uStack_124 = 0xa77cf9;
  FUN_00a71970();
  uStack_124 = 0xa77d02;
  FUN_0118f7b0();
  local_50 = 0;
  local_2c = 5;
  local_e0[0] = 0x14;
  uStack_124 = 0xa77d20;
  piVar5 = (int *)FUN_00910da0();
  local_f0 = 0x3f800000;
  uStack_124 = 1;
  puStack_128 = &local_f0;
  local_ec = 0x41700000;
  puStack_12c = &local_110;
  local_e8 = 0x41000000;
  puStack_130 = &local_100;
  local_110 = 0;
  local_10c = 0;
  puStack_134 = local_e0;
  local_108 = 0;
  puStack_138 = &local_114;
  local_100 = 0xc199999a;
  local_fc = 0x42120a3d;
  local_f8[0] = 0xc2f1999a;
  uStack_13c = 0xa77d8a;
  uStack_13c = (**(code **)(*piVar5 + 4))();
  puStack_140 = (undefined1 *)0xa77d96;
  FUN_00910ab0();
  uStack_13c = 0xa77d9b;
  piVar5 = (int *)FUN_00910da0();
  uStack_13c = 1;
  puStack_140 = &stack0xfffffee8;
  local_114 = 0x41f00000;
  ppuStack_144 = &puStack_128;
  local_110 = 0x40b00000;
  puStack_148 = &local_108;
  puStack_128 = (undefined4 *)0x0;
  uStack_124 = 0;
  puStack_14c = local_f8;
  ppuStack_150 = &puStack_12c;
  local_108 = 0xc1fb3333;
  uStack_104 = 0x41f66666;
  local_100 = 0xc32a0000;
  uStack_154 = 0xa77e05;
  uStack_154 = (**(code **)(*piVar5 + 4))();
  ppuStack_158 = (undefined4 **)0xa77e11;
  FUN_00910ab0();
  uStack_154 = 0xa77e16;
  piVar5 = (int *)FUN_00910da0();
  puStack_130 = (undefined4 *)0x40b00000;
  uStack_154 = 1;
  ppuStack_158 = &puStack_130;
  puStack_12c = (undefined4 *)0x41200000;
  ppuStack_15c = &puStack_140;
  puStack_128 = (undefined4 *)0x3f800000;
  puStack_140 = (undefined1 *)0x0;
  uStack_13c = 0xbfa78d36;
  puStack_138 = (undefined4 *)0x0;
  uVar6 = (**(code **)(*piVar5 + 4))(&ppuStack_144,&local_110,&stack0xfffffee0);
  FUN_00910ab0(uVar6);
  piVar5 = (int *)FUN_00910da0();
  puStack_148 = (undefined4 *)0x420c0000;
  ppuStack_144 = (undefined4 **)0x41600000;
  puStack_140 = (undefined1 *)0x3fc00000;
  ppuStack_158 = (undefined4 **)0x0;
  uStack_154 = 0x3f137207;
  ppuStack_150 = (undefined4 **)0x0;
  puStack_138 = (undefined4 *)0x4203851f;
  puStack_134 = (undefined4 *)0x4211c28f;
  puStack_130 = (undefined4 *)0xc386c000;
  uVar6 = (**(code **)(*piVar5 + 4))
                    (&ppuStack_15c,&puStack_128,&puStack_138,&ppuStack_158,&puStack_148,1);
  FUN_00910ab0(uVar6);
  piVar5 = (int *)(param_1 + 0x88);
  iVar8 = 4;
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
    FUN_00911ca0("programmabled");
    piVar5 = piVar5 + 1;
    iVar8 = iVar8 + -1;
  } while (iVar8 != 0);
  return;
}

// 00A7B5B0  R113::vf14  size=62  [class]
undefined4 * __thiscall R113::vf14(undefined4 *param_1,byte param_2)

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

