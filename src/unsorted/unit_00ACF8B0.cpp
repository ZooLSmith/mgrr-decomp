// src/unsorted/unit_00ACF8B0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00ACF8B0..00ACF8C0, 2 functions

#include "types.h"

// 00ACF8B0  FUN_00acf8b0  size=12  [run]
void __fastcall FUN_00acf8b0(int param_1)

{
  *(uint *)(param_1 + 0xa4c) = *(uint *)(param_1 + 0xa4c) | 1;
  FUN_00aca990();
  return;
}

// 00ACF8C0  FUN_00acf8c0  size=639  [run]
void __fastcall FUN_00acf8c0(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  uint local_98;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  float local_40;
  undefined4 local_3c;
  float local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  if (*(uint *)(param_1 + 0xa0c) < *(uint *)(param_1 + 0xa08)) {
    fVar1 = *(float *)(DAT_01be8e54 + 0x50) - *(float *)(param_1 + 0x50);
    fVar3 = *(float *)(DAT_01be8e54 + 0x54) - *(float *)(param_1 + 0x54);
    fVar2 = *(float *)(DAT_01be8e54 + 0x58) - *(float *)(param_1 + 0x58);
    if (*(float *)(param_1 + 0xa00) * *(float *)(param_1 + 0xa00) <
        fVar2 * fVar2 + fVar3 * fVar3 + fVar1 * fVar1) {
      *(undefined4 *)(param_1 + 0xa0c) = 0;
      FUN_00ac5660();
      return;
    }
    local_98 = 0x10;
    do {
      iVar5 = FUN_00a81330();
      if ((iVar5 != 0) && (iVar5 = FUN_00a7c800(), (*(byte *)(iVar5 + 0x4c0) & 1) == 0)) {
        FUN_00a805f0();
        FUN_00a7c950();
      }
      local_98 = local_98 + -1;
    } while (local_98 != 0);
    local_98 = 0;
    iVar5 = 0x10;
    do {
      iVar6 = FUN_00a81330();
      if (iVar6 != 0) {
        local_98 = local_98 + 1;
      }
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    if (local_98 < *(uint *)(param_1 + 0xa04)) {
      while (*(uint *)(param_1 + 0xa0c) < *(uint *)(param_1 + 0xa08)) {
        uVar8 = 0;
        local_48 = 0;
        local_4c = 0;
        local_50 = 0;
        local_54 = 0;
        local_90 = 0;
        local_5c = 0;
        local_8c = 0;
        local_60 = 0;
        local_84 = 0;
        local_64 = 0;
        local_88 = 0;
        local_68 = 0;
        local_14 = 0;
        local_70 = 0;
        local_18 = 0;
        local_74 = 0;
        local_1c = 0xffffffff;
        local_78 = 0;
        local_7c = 0;
        local_44 = 0x3f800000;
        local_58 = 0x3f800000;
        local_6c = 0x3f800000;
        local_80 = 0x3f800000;
        local_34 = 0;
        local_30 = 0;
        local_2c = 0;
        local_28 = 0x3f800000;
        local_24 = 0x3f800000;
        local_20 = 0x3f800000;
        local_40 = *(float *)(param_1 + 0x50);
        local_3c = *(undefined4 *)(param_1 + 0x54);
        local_38 = *(float *)(param_1 + 0x58);
        sVar4 = FUN_00dde2d0(0xfffffffd,3);
        local_40 = (float)(int)sVar4 + local_40;
        sVar4 = FUN_00dde2d0(0xfffffffd,3);
        local_38 = (float)(int)sVar4 + local_38;
        iVar5 = FUN_00a82090("EmRoomTest",0x20010,&local_90);
        if (iVar5 != 0) {
          do {
            iVar5 = FUN_00a81330();
            if (iVar5 == 0) {
              uVar7 = FUN_00a7c7f0();
              FUN_00a7c960(uVar7);
              break;
            }
            uVar8 = uVar8 + 1;
          } while (uVar8 < 0x10);
        }
        *(int *)(param_1 + 0xa0c) = *(int *)(param_1 + 0xa0c) + 1;
        local_98 = local_98 + 1;
        if (*(uint *)(param_1 + 0xa04) <= local_98) {
          return;
        }
      }
    }
  }
  return;
}

