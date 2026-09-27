// src/unsorted/unit_00F498F0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00F498F0..00F49D20, 4 functions

#include "types.h"

// 00F498F0  FUN_00f498f0  size=285  [run]
void __fastcall FUN_00f498f0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)&uStack_10;
  iVar1 = (**(code **)(*(int *)(param_1 + 0xc) + 8))();
  if (iVar1 == 0) {
    iVar1 = 0;
    do {
      uVar5 = FUN_00fddccc(iVar1,1000);
      uStack_8 = *(undefined4 *)(&DAT_016d4768 + (int)uVar5 * 4);
      uStack_c = CONCAT13(0x2e,(int3)(&DAT_016cacf0)[(int)((ulonglong)uVar5 >> 0x20)]);
      iVar4 = FUN_00de3d80(0,&uStack_c);
      if (iVar4 != 0) {
        FUN_00f5a5c0();
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < 2000);
  }
  else {
    iVar4 = 0;
    iVar1 = (**(code **)(*(int *)(param_1 + 0xc) + 8))();
    if (iVar1 != 0) {
      iVar1 = *(int *)(param_1 + 0xc);
      uVar2 = (**(code **)(iVar1 + 4))(0);
      iVar1 = (**(code **)(iVar1 + 0x14))(uVar2);
      if ((iVar1 != -1) && (iVar1 = (**(code **)(*(int *)(param_1 + 0xc) + 0x10))(iVar1), 0 < iVar1)
         ) {
        do {
          uStack_c = 0xffff;
          uStack_10 = 0;
          iVar3 = FUN_00ec7680(&uStack_c,&uStack_10,iVar4);
          if (iVar3 != 0) {
            FUN_00f5a5c0();
          }
          iVar4 = iVar4 + 1;
        } while (iVar4 < iVar1);
        __security_check_cookie(local_4 ^ (uint)&uStack_10);
        return;
      }
    }
  }
  __security_check_cookie(local_4 ^ (uint)&uStack_10);
  return;
}

// 00F49A20  FUN_00f49a20  size=140  [run]
int __fastcall FUN_00f49a20(int param_1)

{
  FUN_00de3530();
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x6c) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined4 *)(param_1 + 0x74) = 0;
  *(undefined4 *)(param_1 + 0x78) = 0;
  *(undefined4 *)(param_1 + 0x7c) = 0;
  *(undefined4 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x84) = 0;
  *(undefined4 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined4 *)(param_1 + 0x94) = 0;
  return param_1;
}

// 00F49AB0  FUN_00f49ab0  size=616  [run]
void __thiscall FUN_00f49ab0(int param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined1 *puVar5;
  undefined1 uStack_78;
  char local_77;
  char local_76;
  char local_75;
  undefined2 local_74;
  char local_72;
  char local_71;
  char local_70;
  char local_6f;
  undefined1 local_6e;
  undefined1 local_6d;
  undefined1 local_6c;
  undefined1 local_6b;
  undefined1 local_6a;
  undefined4 local_69;
  undefined1 local_65;
  undefined2 local_64;
  char local_62;
  char local_61;
  char local_60;
  char local_5f;
  undefined4 local_5e;
  undefined1 local_5a;
  undefined2 local_54;
  char local_52;
  char local_51;
  char local_50;
  char local_4f;
  undefined4 local_4e;
  undefined1 local_4a;
  undefined2 local_44;
  char local_42;
  char local_41;
  char local_40;
  char local_3f;
  undefined4 local_3e;
  undefined1 local_3a;
  undefined2 local_34;
  char local_32;
  char local_31;
  char local_30;
  char local_2f;
  undefined4 local_2e;
  undefined1 local_2a;
  undefined2 local_24;
  char local_22;
  char local_21;
  char local_20;
  char local_1f;
  undefined4 local_1e;
  undefined4 local_1a;
  undefined2 local_16;
  undefined1 local_14;
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)&uStack_78;
  FUN_00de3570(param_2,0);
  FUN_00de3570(param_3,1);
  cVar1 = "0123456789abcdef"[param_4 >> 0xc & 0xf];
  local_75 = "0123456789abcdef"[param_4 >> 8 & 0xf];
  local_76 = "0123456789abcdef"[param_4 & 0xf];
  local_77 = "0123456789abcdef"[param_4 >> 4 & 0xf];
  local_64 = 0x6665;
  local_5e = 0x626d772e;
  local_5a = 0;
  local_62 = cVar1;
  local_61 = local_75;
  local_60 = local_77;
  local_5f = local_76;
  uVar2 = FUN_00de3d80(0,&local_64);
  local_31 = local_75;
  *(undefined4 *)(param_1 + 8) = uVar2;
  local_34 = 0x6665;
  local_30 = local_77;
  local_2f = local_76;
  local_2e = 0x6174772e;
  local_2a = 0;
  local_32 = cVar1;
  uVar2 = FUN_00de3d80(0,&local_34);
  local_51 = local_75;
  *(undefined4 *)(param_1 + 0xc) = uVar2;
  local_4f = local_76;
  local_54 = 0x6665;
  local_50 = local_77;
  local_4e = 0x7074772e;
  local_4a = 0;
  local_52 = cVar1;
  iVar3 = FUN_00de3d80(1,&local_54);
  *(int *)(param_1 + 0x10) = iVar3;
  if ((*(int *)(param_1 + 0xc) == 0) || (iVar3 == 0)) {
    local_41 = local_75;
    local_40 = local_77;
    local_44 = 0x6665;
    local_3f = local_76;
    local_3e = 0x6274772e;
    local_3a = 0;
    local_42 = cVar1;
    uVar2 = FUN_00de3d80(1,&local_44);
    *(undefined4 *)(param_1 + 0x10) = uVar2;
  }
  local_21 = local_75;
  local_24 = 0x6665;
  local_20 = local_77;
  local_1f = local_76;
  local_1e = 0x7261705f;
  local_1a = 0x622e6d61;
  local_16 = 0x6d78;
  local_14 = 0;
  local_22 = cVar1;
  uVar2 = FUN_00de3d80(0,&local_24);
  *(undefined4 *)(param_1 + 0x14) = uVar2;
  local_74 = 0x6665;
  local_71 = local_75;
  local_70 = local_77;
  local_6f = local_76;
  local_6e = 0x5f;
  local_69 = 0x746f6d2e;
  local_65 = 0;
  puVar5 = &DAT_018d7171;
  puVar4 = (undefined4 *)(param_1 + 0x18);
  local_72 = cVar1;
  do {
    local_6d = puVar5[-1];
    local_6c = *puVar5;
    local_6b = puVar5[1];
    local_6a = puVar5[2];
    uVar2 = FUN_00de3d80(0,&local_74);
    *puVar4 = uVar2;
    puVar5 = puVar5 + 8;
    puVar4 = puVar4 + 1;
  } while ((int)puVar5 < 0x18d7271);
  __security_check_cookie(local_4 ^ (uint)&uStack_78);
  return;
}

// 00F49D20  FUN_00f49d20  size=154  [run]
void __fastcall FUN_00f49d20(int param_1)

{
  FUN_00de3570(0,0);
  FUN_00de3570(0,1);
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x6c) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined4 *)(param_1 + 0x74) = 0;
  *(undefined4 *)(param_1 + 0x78) = 0;
  *(undefined4 *)(param_1 + 0x7c) = 0;
  *(undefined4 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x84) = 0;
  *(undefined4 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined4 *)(param_1 + 0x94) = 0;
  return;
}

