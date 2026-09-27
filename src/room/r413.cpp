// src/room/r413.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00A71640..00A7B8B0, 4 functions

#include "mgrr.h"
#include "R413.h"

// 00A71640  R413::vf04  size=26  [class]
void __fastcall R413::vf04(int param_1)

{
  if (*(int *)(param_1 + 0x80) != 0) {
    FUN_00a5e860(0x3c888889);
  }
  return;
}

// 00A72FF0  R413::vf08  size=96  [class]
void __fastcall R413::vf08(int *param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = param_1 + 0x22;
  iVar3 = 6;
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

// 00A79670  R413::vf00  size=1162  [class]
void __fastcall R413::vf00(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  undefined4 uVar5;
  uint *puVar6;
  int *piVar7;
  undefined1 ***pppuVar8;
  undefined4 **ppuStack_198;
  undefined4 uStack_194;
  undefined4 **ppuStack_190;
  undefined1 *puStack_18c;
  undefined1 **ppuStack_188;
  undefined4 **ppuStack_184;
  undefined4 **ppuStack_180;
  int iStack_17c;
  undefined1 **ppuStack_178;
  undefined4 *puStack_174;
  undefined4 **ppuStack_170;
  undefined4 **ppuStack_16c;
  undefined1 *puStack_168;
  undefined4 uStack_164;
  undefined4 **ppuStack_160;
  undefined4 *puStack_15c;
  undefined4 **ppuStack_158;
  undefined1 *puStack_154;
  undefined4 *puStack_150;
  undefined4 uStack_14c;
  undefined4 *puStack_148;
  undefined4 *puStack_144;
  undefined4 *puStack_140;
  undefined4 *puStack_13c;
  undefined4 *puStack_138;
  undefined4 uStack_134;
  undefined4 local_124;
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_108;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8 [6];
  undefined4 local_e0 [36];
  undefined4 local_50;
  undefined1 local_2c;
  
  uStack_134 = 0xa79689;
  FUN_00dd7240();
  uStack_134 = 0x20;
  puStack_138 = (undefined4 *)0xa79692;
  FUN_00a75380();
  uStack_134 = 0xa79699;
  FUN_00a71970();
  uStack_134 = 0xa796a2;
  FUN_0118f7b0();
  local_50 = 0;
  local_2c = 5;
  local_e0[0] = 0x14;
  uStack_134 = 0xa796c0;
  piVar4 = (int *)FUN_00910da0();
  local_120 = 0x40600000;
  uStack_134 = 1;
  puStack_138 = &local_120;
  local_11c = 0x3e99999a;
  puStack_13c = &local_110;
  local_118 = 0x3fe00000;
  puStack_140 = &local_100;
  local_110 = 0;
  local_10c = 0;
  puStack_144 = local_e0;
  local_108 = 0;
  puStack_148 = &local_124;
  local_100 = 0xc2740000;
  local_fc = 0x439b8000;
  piVar7 = (int *)(param_1 + 0x88);
  local_f8[0] = 0x42926666;
  uStack_14c = 0xa79734;
  uStack_14c = (**(code **)(*piVar4 + 4))();
  puStack_150 = (undefined4 *)0xa7973c;
  FUN_00910ab0();
  uStack_14c = 0xa79741;
  piVar4 = (int *)FUN_00910da0();
  local_118 = 0x40600000;
  uStack_14c = 1;
  puStack_150 = &local_118;
  uStack_114 = 0x3e99999a;
  puStack_154 = &stack0xfffffed8;
  local_110 = 0x40200000;
  ppuStack_158 = &puStack_138;
  local_124 = 0;
  puStack_15c = local_f8;
  local_120 = 0;
  ppuStack_160 = &puStack_13c;
  puStack_138 = (undefined4 *)0xc3060000;
  uStack_134 = 0x439b8000;
  uStack_164 = 0xa797af;
  uStack_164 = (**(code **)(*piVar4 + 4))();
  puStack_168 = (undefined1 *)0xa797bb;
  FUN_00910ab0();
  uStack_164 = 0xa797c0;
  piVar4 = (int *)FUN_00910da0();
  uStack_164 = 1;
  puStack_168 = &stack0xfffffed0;
  ppuStack_16c = &puStack_140;
  ppuStack_170 = &puStack_150;
  puStack_140 = (undefined4 *)0x0;
  puStack_13c = (undefined4 *)0x0;
  puStack_174 = &local_110;
  puStack_138 = (undefined4 *)0x0;
  ppuStack_178 = &puStack_154;
  puStack_150 = (undefined4 *)0xc27ad70a;
  uStack_14c = 0x43a00000;
  puStack_148 = (undefined4 *)0x42760000;
  iStack_17c = 0xa7982a;
  iStack_17c = (**(code **)(*piVar4 + 4))();
  ppuStack_180 = (undefined4 **)0xa79836;
  FUN_00910ab0();
  iStack_17c = 0xa79843;
  piVar4 = (int *)FUN_00910da0();
  puStack_148 = (undefined4 *)0x41300000;
  iStack_17c = 1;
  ppuStack_180 = &puStack_148;
  puStack_144 = (undefined4 *)0x40000000;
  ppuStack_184 = &ppuStack_158;
  puStack_140 = (undefined4 *)0x40400000;
  ppuStack_188 = &puStack_168;
  ppuStack_158 = (undefined4 **)0x0;
  puStack_154 = (undefined1 *)0x0;
  puStack_18c = &stack0xfffffed8;
  puStack_150 = (undefined4 *)0x0;
  ppuStack_190 = &ppuStack_16c;
  puStack_168 = (undefined1 *)0xc2b28000;
  uStack_164 = 0x43a00000;
  ppuStack_160 = (undefined4 **)0x42813333;
  uStack_194 = 0xa798bb;
  uStack_194 = (**(code **)(*piVar4 + 4))();
  ppuStack_198 = (undefined4 **)0xa798c3;
  FUN_00910ab0();
  uStack_194 = 0xa798c8;
  piVar4 = (int *)FUN_00910da0();
  uStack_194 = 1;
  ppuStack_160 = (undefined4 **)0x40400000;
  ppuStack_198 = &ppuStack_160;
  puStack_15c = (undefined4 *)0x40000000;
  ppuStack_158 = (undefined4 **)0x41300000;
  ppuStack_170 = (undefined4 **)0x0;
  ppuStack_16c = (undefined4 **)0x0;
  puStack_168 = (undefined1 *)0x0;
  ppuStack_180 = (undefined4 **)0xc2fb0000;
  puStack_144 = (undefined4 *)(param_1 + 0x98);
  iStack_17c = 0x43a00000;
  ppuStack_178 = (undefined1 **)0x42966666;
  uVar5 = (**(code **)(*piVar4 + 4))(&ppuStack_184,&puStack_140,&ppuStack_180,&ppuStack_170);
  FUN_00910ab0(uVar5);
  piVar4 = (int *)FUN_00910da0();
  ppuStack_178 = (undefined1 **)0x40800000;
  puStack_174 = (undefined4 *)0x40000000;
  pppuVar8 = &ppuStack_188;
  ppuStack_170 = (undefined4 **)0x41500000;
  ppuStack_188 = (undefined1 **)0x0;
  ppuStack_184 = (undefined4 **)0x0;
  ppuStack_180 = (undefined4 **)0x0;
  ppuStack_198 = (undefined4 **)0xc2e00000;
  uStack_194 = 0x43a00000;
  ppuStack_190 = (undefined4 **)0x42700000;
  uVar5 = (**(code **)(*piVar4 + 4))
                    (&uStack_164,&ppuStack_158,&ppuStack_198,pppuVar8,&ppuStack_178,1);
  FUN_00910ab0(uVar5);
  iStack_17c = 6;
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
      puVar6[0xb] = 0xf;
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
    iStack_17c = iStack_17c + -1;
  } while (iStack_17c != 0);
  FUN_00917cf0(*ppuStack_178,0x800000);
  FUN_00917cf0(*puStack_174,0x800000);
  FUN_00917cf0(*pppuVar8,0x800000);
  return;
}

// 00A7B8B0  R413::vf14  size=62  [class]
undefined4 * __thiscall R413::vf14(undefined4 *param_1,byte param_2)

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

