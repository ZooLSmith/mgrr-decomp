// src/misc/HoldEntitySlot.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00518EA0..00B1F470, 8 functions

#include "mgrr.h"
#include "HoldEntitySlot.h"

// 00518EA0  HoldEntitySlot::vf10  size=1  [class]
void HoldEntitySlot::vf10(void)

{
  return;
}

// 00518EB0  HoldEntitySlot::vf14  size=13  [class]
void __fastcall HoldEntitySlot::vf14(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    (**(code **)*param_1)(1);
  }
  return;
}

// 0051C170  HoldEntitySlot::vf18  size=85  [class]
void HoldEntitySlot::vf18(int param_1,undefined4 *param_2)

{
  int iVar1;
  int *piVar2;
  undefined *puVar3;
  
  if (param_2 != (undefined4 *)0x0) {
    puVar3 = &DAT_01dc53d8;
    (**(code **)*param_2)(&DAT_01dc53d8);
    iVar1 = FUN_00dd6d80(puVar3);
    if (((iVar1 != 0) && (param_1 == 0x16)) && (param_2[2] != 0)) {
      FUN_00a9e0d0(param_2[2]);
      piVar2 = (int *)FUN_00a7c8a0();
      (**(code **)(*piVar2 + 0xd8))(1);
    }
  }
  return;
}

// 0051C1D0  HoldEntitySlot::vf00  size=31  [class]
undefined4 * __thiscall HoldEntitySlot::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = Slot::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00674150  HoldEntitySlot::HoldEntitySlot_2  size=1655  [class]
undefined4 __fastcall HoldEntitySlot::HoldEntitySlot_2(int *param_1)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int *piVar6;
  char *pcVar7;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined1 local_80 [124];
  
  if ((undefined4 *)param_1[0xdc] != (undefined4 *)0x0) {
    param_1[0xd9] = param_1[0xd9] | 0x400000;
    *(undefined4 *)param_1[0xdc] = 0;
  }
  if (param_1[0xdc] != 0) {
    *(undefined4 *)(param_1[0xdc] + 4) = 1;
    *(undefined4 *)(param_1[0xdc] + 8) = 1;
  }
  if (param_1[0xdc] != 0) {
    *(undefined4 *)(param_1[0xdc] + 0xc) = 1;
  }
  local_8c = 0x3f666666;
  local_88 = 0x3f99999a;
  local_84 = 0x3f8ccccd;
  local_a0 = 0x3e4ccccd;
  local_9c = 0x40400000;
  local_98 = 0x40000000;
  FUN_00a8e4d0(&local_a0,&local_8c);
  FUN_009fd240();
  param_1[0x2bd] = param_1[0x128];
  param_1[0x2c0] = param_1[0x12a];
  FUN_00acf600(0x2804a,"Em8040Body");
  iVar2 = FUN_00ac46e0();
  if (iVar2 == 0) {
    iVar3 = FUN_00c5def0(param_1[0x13c]);
    iVar2 = param_1[0x128];
    param_1[0x25c] = iVar3;
    param_1[0x1b1] = 0;
    FUN_00405230();
    local_a0 = 0;
    local_9c = 0;
    local_98 = 0;
    FUN_00c151f0(1,param_1[0x13c],0,&local_a0,0,0x41200000,0x3f800000,iVar2 != 5,0);
    FUN_00c57830(local_80);
    param_1[0x1bb] = 1;
  }
  param_1[0x45d] = 0;
  FUN_00a7c950();
  param_1[0x4cc] = 0x3f800000;
  param_1[0x452] = 0;
  param_1[0x450] = 0;
  param_1[0x455] = 0;
  param_1[0x441] = -1;
  param_1[0x524] = 0;
  param_1[0x440] = -1;
  param_1[0x453] = 0;
  param_1[0x469] = 0x3f800000;
  param_1[0x454] = 0;
  param_1[0x557] = 0;
  param_1[0x457] = -1;
  param_1[0x584] = 1;
  param_1[0x583] = 0;
  param_1[0x5b4] = 0;
  param_1[0x5b6] = 0;
  param_1[0x5b5] = 0;
  param_1[0x558] = 0;
  param_1[0x5bd] = -0x40800000;
  param_1[0x559] = 0;
  param_1[0x458] = 0;
  param_1[0x3ad] = 0;
  param_1[0x5bc] = 0;
  param_1[0x3b8] = 0;
  param_1[0x5be] = 0;
  param_1[0x5c0] = 0;
  param_1[0x5c1] = 0;
  param_1[0x3ae] = 0;
  param_1[0x3ac] = 0;
  param_1[0x3b7] = 0;
  iVar2 = lib::StaticArray<Constraints,32>::StaticArray<Constraints,32>();
  if (iVar2 != 0) {
    param_1[0x3bc] = 0;
    param_1[0x3c8] = 0;
    param_1[0x3bd] = 0;
    param_1[0x3c9] = 0;
    param_1[0x3d4] = 0;
    param_1[0x3d5] = 0;
    param_1[0x3e0] = 0;
    param_1[0x3e1] = 0;
    param_1[0x3ec] = 0;
    param_1[0x3ed] = 0;
    param_1[0x3f8] = 0;
    param_1[0x3f9] = 0;
    param_1[0x404] = 0;
    param_1[0x405] = 0;
    param_1[0x4e4] = 0x3f860a90;
    iVar2 = FUN_008ec660(param_1,0x3f4ccccd,0x3e99999a,0x41700000,0x41a00000,0x78,7,0);
    param_1[0x1d9] = iVar2;
    FUN_008e6d00();
    puVar4 = (undefined4 *)FUN_009f8b60();
    FUN_008e26e0(*puVar4);
    FUN_008e1d00(param_1[0x4e4]);
    lib::StaticArray<Collision*,64>::StaticArray<Collision*,64>_2(2);
    local_90 = FUN_00a8d2a0();
    puVar4 = (undefined4 *)FUN_009f8b60();
    iVar2 = CollisionCapsule::CollisionCapsule(2,*puVar4,0);
    if (iVar2 != 0) {
      FUN_00d771d0(1);
      *(undefined4 *)(iVar2 + 0x380) = 0;
      FUN_00d77c50(param_1[0x13c],0);
      *(undefined4 *)(iVar2 + 0x594) = 0x3e800000;
      *(undefined4 *)(iVar2 + 0x590) = 0x3ecccccd;
      FUN_00a93a00(iVar2,local_90);
      FUN_00d7b0f0();
      FUN_00d7b890();
    }
    FUN_00a929d0();
    FUN_00660290();
    FUN_0065c880();
    if ((param_1[0xcc] != 0) && (*(int *)(param_1[0xcc] + 0xcc) == 0)) {
      FUN_0065ff40();
    }
    puVar4 = (undefined4 *)FUN_00dd3500(8,&DAT_01b7bd48);
    if (puVar4 == (undefined4 *)0x0) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      *puVar4 = vftable;
      puVar4[1] = param_1;
    }
    param_1[0x459] = (int)puVar4;
    FUN_00d89ec0(0x16,puVar4);
    if (((param_1[299] != 3) && (param_1[0xcc] != 0)) && (*(int *)(param_1[0xcc] + 0xcc) == 0)) {
      FUN_00670eb0();
    }
    FUN_00a82610(param_1[0x13c],0x16,0xffffffff);
    param_1[0x51d] = 0x3c8efa35;
    local_a0 = 0;
    local_9c = 0x3e32b8c2;
    local_98 = 0;
    FUN_00a83270(&local_a0,0x3f490fdb,0x3f490fdb);
    param_1[0x360] = 0;
    if ((*(byte *)(param_1 + 0x2c0) & 0x10) == 0) {
      puVar4 = (undefined4 *)FUN_00dd3580(0x90,&DAT_01b7bd48);
      param_1[0x360] = (int)puVar4;
      if (puVar4 != (undefined4 *)0x0) {
        puVar5 = &DAT_018820b0;
        for (iVar2 = 0x24; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar4 = *puVar5;
          puVar5 = puVar5 + 1;
          puVar4 = puVar4 + 1;
        }
        if ((param_1[0x128] == 0xe) || (param_1[0x128] == 0xf)) {
          lib::AllocatedArray<cEnemySubState>::AllocatedArray<cEnemySubState>
                    (param_1[0x13c],0,param_1[0x360],4);
          FUN_00a88b50(1,0);
          param_1[0x34a] = 0;
        }
        else {
          lib::AllocatedArray<cEnemySubState>::AllocatedArray<cEnemySubState>
                    (param_1[0x13c],0,param_1[0x360],4);
          FUN_00a88b50(1,0);
          param_1[0x34a] = 1;
        }
      }
    }
    else {
      FUN_00a82ac0(param_1[0x13c],4,1,0);
      param_1[0x205] = 4;
    }
    if (param_1[299] != 6) {
      FUN_00660050();
    }
    piVar6 = param_1;
    FUN_00c1cf50(param_1);
    FUN_00c54720(piVar6);
    if (param_1[0x12d] == 0x28040) {
      FUN_00aa4080(5,0,0,0x3f800000,0,0xbf800000,0x3f800000);
    }
    if ((*(byte *)(param_1 + 0x2c0) & 0x20) != 0) {
      pcVar1 = *(code **)(*param_1 + 0x110);
      param_1[0x583] = 0x42700000;
      (*pcVar1)(1);
      (**(code **)(*param_1 + 0x358))(0x208,param_1 + 0x588);
    }
    (**(code **)(*param_1 + 0x34c))();
    if (param_1[0x128] == 4) {
      param_1[0x45d] = param_1[0x45d] | 0x20;
    }
    FUN_00ac9300("LEFT_hand_bat");
    FUN_00ac9300("CENTER_hand_bat");
    FUN_00ac9300("RIGHT_hand_bat");
    if ((param_1[0x128] == 0) || (param_1[0x128] == 1)) {
      pcVar7 = "CENTER_hand_001";
    }
    else {
      pcVar7 = "CENTER_hand_002";
    }
    FUN_00ac9300(pcVar7);
    if (param_1[299] == 5) {
      FUN_006686b0(0x15);
    }
    return 1;
  }
  return 0;
}

// 0076DDD0  HoldEntitySlot::HoldEntitySlot_4  size=1489  [class]
undefined4 __fastcall HoldEntitySlot::HoldEntitySlot_4(int *param_1)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  char *pcVar6;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined1 local_80 [124];
  
  if ((undefined4 *)param_1[0xdc] != (undefined4 *)0x0) {
    param_1[0xd9] = param_1[0xd9] | 0x400000;
    *(undefined4 *)param_1[0xdc] = 0;
  }
  if (param_1[0xdc] != 0) {
    *(undefined4 *)(param_1[0xdc] + 4) = 1;
    *(undefined4 *)(param_1[0xdc] + 8) = 1;
  }
  if (param_1[0xdc] != 0) {
    *(undefined4 *)(param_1[0xdc] + 0xc) = 1;
  }
  local_8c = 0x3f666666;
  local_88 = 0x3f99999a;
  local_84 = 0x3f8ccccd;
  local_a0 = 0x3e4ccccd;
  local_9c = 0x40400000;
  local_98 = 0x40000000;
  FUN_00a8e4d0(&local_a0,&local_8c);
  FUN_009fd240();
  param_1[0x2bd] = param_1[0x128];
  param_1[0x2c0] = param_1[0x12a];
  FUN_00acf600(0x2c04a,"Emc040Body");
  iVar2 = FUN_00ac46e0();
  if (iVar2 == 0) {
    iVar3 = FUN_00c5def0(param_1[0x13c]);
    iVar2 = param_1[0x128];
    param_1[0x25c] = iVar3;
    param_1[0x1b1] = 0;
    FUN_00405230();
    local_a0 = 0;
    local_9c = 0;
    local_98 = 0;
    FUN_00c151f0(1,param_1[0x13c],0,&local_a0,0,0x41200000,0x3f800000,iVar2 != 5,0);
    FUN_00c57830(local_80);
    param_1[0x1bb] = 1;
  }
  param_1[0x47d] = 0;
  FUN_00a7c950();
  param_1[0x4ec] = 0x3f800000;
  param_1[0x472] = 0;
  param_1[0x470] = 0;
  param_1[0x475] = 0;
  param_1[0x461] = -1;
  param_1[0x544] = 0;
  param_1[0x460] = -1;
  param_1[0x473] = 0;
  param_1[0x489] = 0x3f800000;
  param_1[0x474] = 0;
  param_1[0x577] = 0;
  param_1[0x477] = -1;
  param_1[0x5a4] = 1;
  param_1[0x5a3] = 0;
  param_1[0x5d4] = 0;
  param_1[0x5d6] = 0;
  param_1[0x5d5] = 0;
  param_1[0x578] = 0;
  param_1[0x5dd] = -0x40800000;
  param_1[0x579] = 0;
  param_1[0x478] = 0;
  param_1[0x5dc] = 0;
  param_1[0x5de] = 0;
  param_1[0x5e0] = 0;
  param_1[0x5e1] = 0;
  iVar2 = lib::StaticArray<Constraints,32>::StaticArray<Constraints,32>();
  if (iVar2 == 0) {
    return 0;
  }
  param_1[0x3dc] = 0;
  param_1[1000] = 0;
  param_1[0x3dd] = 0;
  param_1[0x3e9] = 0;
  param_1[0x3f4] = 0;
  param_1[0x3f5] = 0;
  param_1[0x400] = 0;
  param_1[0x401] = 0;
  param_1[0x40c] = 0;
  param_1[0x40d] = 0;
  param_1[0x418] = 0;
  param_1[0x419] = 0;
  param_1[0x424] = 0;
  param_1[0x425] = 0;
  param_1[0x504] = 0x3f860a90;
  iVar2 = FUN_008ec660(param_1,0x3f4ccccd,0x3e99999a,0x41700000,0x41a00000,0x78,7,0);
  param_1[0x1d9] = iVar2;
  FUN_008e6d00();
  puVar4 = (undefined4 *)FUN_009f8b60();
  FUN_008e26e0(*puVar4);
  FUN_008e1d00(param_1[0x504]);
  lib::StaticArray<Collision*,64>::StaticArray<Collision*,64>_2(2);
  local_90 = FUN_00a8d2a0();
  puVar4 = (undefined4 *)FUN_009f8b60();
  iVar2 = CollisionCapsule::CollisionCapsule(2,*puVar4,0);
  if (iVar2 != 0) {
    FUN_00d771d0(1);
    *(undefined4 *)(iVar2 + 0x380) = 0;
    FUN_00d77c50(param_1[0x13c],0);
    *(undefined4 *)(iVar2 + 0x594) = 0x3e800000;
    *(undefined4 *)(iVar2 + 0x590) = 0x3ecccccd;
    FUN_00a93a00(iVar2,local_90);
    FUN_00d7b0f0();
    FUN_00d7b890();
  }
  FUN_00a929d0();
  FUN_00755160();
  FUN_00751240();
  if ((param_1[0xcc] != 0) && (*(int *)(param_1[0xcc] + 0xcc) == 0)) {
    FUN_00754e10();
  }
  puVar4 = (undefined4 *)FUN_00dd3500(8,&DAT_01b7bd48);
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    *puVar4 = vftable;
    puVar4[1] = param_1;
  }
  param_1[0x479] = (int)puVar4;
  FUN_00d89ec0(0x16,puVar4);
  if (((param_1[299] != 3) && (param_1[0xcc] != 0)) && (*(int *)(param_1[0xcc] + 0xcc) == 0)) {
    FUN_00768f70();
  }
  FUN_00a82610(param_1[0x13c],0x16,0xffffffff);
  param_1[0x53d] = 0x3c8efa35;
  local_a0 = 0;
  local_9c = 0x3e32b8c2;
  local_98 = 0;
  FUN_00a83270(&local_a0,0x3f490fdb,0x3f490fdb);
  iVar2 = param_1[0x128];
  param_1[0x205] = 4;
  if ((iVar2 == 5) || ((*(byte *)(param_1 + 0x2c0) & 0x10) != 0)) {
    param_1[0x205] = 4;
  }
  if ((iVar2 == 0xe) || (iVar2 == 0xf)) {
    param_1[0x205] = 1;
  }
  lib::AllocatedArray<cEnemySubState>::AllocatedArray<cEnemySubState>
            (param_1[0x13c],0,&DAT_01882be0,4);
  FUN_00a88b50(param_1[0x205],0);
  param_1[0x34a] = 0;
  if (param_1[299] != 6) {
    FUN_00754f20();
  }
  piVar5 = param_1;
  FUN_00c1cf50(param_1);
  FUN_00c54720(piVar5);
  if (param_1[0x12d] == 0x2c040) {
    FUN_00aa4080(5,0,0,0x3f800000,0,0xbf800000,0x3f800000);
  }
  if ((*(byte *)(param_1 + 0x2c0) & 0x20) != 0) {
    pcVar1 = *(code **)(*param_1 + 0x110);
    param_1[0x5a3] = 0x42700000;
    (*pcVar1)(1);
    (**(code **)(*param_1 + 0x358))(0x208,param_1 + 0x5a8);
  }
  (**(code **)(*param_1 + 0x34c))();
  if (param_1[0x128] == 4) {
    param_1[0x47d] = param_1[0x47d] | 0x20;
  }
  FUN_00ac9300("LEFT_hand_bat");
  FUN_00ac9300("CENTER_hand_bat");
  FUN_00ac9300("RIGHT_hand_bat");
  if ((param_1[0x128] == 0) || (param_1[0x128] == 1)) {
    pcVar6 = "CENTER_hand_001";
  }
  else {
    pcVar6 = "CENTER_hand_002";
  }
  FUN_00ac9300(pcVar6);
  if (param_1[299] == 5) {
    FUN_0075fad0(0x14);
  }
  return 1;
}

// 00ACDA10  HoldEntitySlot::HoldEntitySlot_3  size=422  [class]
undefined4 __fastcall HoldEntitySlot::HoldEntitySlot_3(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar2 = BehaviorAppBase::startup();
  if (iVar2 == 0) {
    return 0;
  }
  uVar5 = 2;
  FUN_00a92fb0(2);
  FUN_00e08640(uVar5);
  if (*(int *)(param_1 + 0x370) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x370) + 0xc) = 3;
  }
  local_18 = 0x3f666666;
  local_14 = 0x3f99999a;
  local_10 = 0x3f8ccccd;
  local_c = 0x3e4ccccd;
  local_8 = 0x40400000;
  local_4 = 0x40000000;
  FUN_00a8e4d0(&local_c,&local_18);
  FUN_00a8edf0(0x32);
  FUN_00410540(0x10,&DAT_01b7bd48);
  uVar5 = FUN_00de3850(0,"_col.hkx",0);
  iVar2 = FUN_00dd3500(0x3c,&DAT_01b7bd48);
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = RigidBodyCollision::RigidBodyCollision();
  }
  *(int *)(param_1 + 0x7b0) = iVar2;
  if (iVar2 != 0) {
    uVar1 = *(undefined4 *)(param_1 + 0x4f0);
    uVar3 = FUN_00de3ee0(uVar5);
    uVar5 = FUN_00de3cf0(uVar5);
    iVar2 = FUN_008f6410(uVar1,uVar5,uVar3);
    if (iVar2 != 0) {
      FUN_008f2cd0(0);
      lib::StaticArray<Collision*,64>::StaticArray<Collision*,64>_2(1);
      Behavior::addDefenseCollisionFromRigidBody_2(*(undefined4 *)(param_1 + 0x7b0),2);
      lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_2(0);
      FUN_00a93730(0x12);
      uVar5 = FUN_00a8d2a0();
      lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_4(uVar5,0,1);
    }
  }
  puVar4 = (undefined4 *)FUN_00dd3500(8,&DAT_01b7bd48);
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    *puVar4 = vftable;
    puVar4[1] = param_1;
  }
  *(undefined4 **)(param_1 + 0xa08) = puVar4;
  FUN_00d89ec0(0x16,puVar4);
  FUN_00a8caf0(0,0,0,0);
  return 1;
}

// 00B1F470  HoldEntitySlot::HoldEntitySlot  size=1489  [class]
undefined4 __fastcall HoldEntitySlot::HoldEntitySlot(int *param_1)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  char *pcVar6;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined1 local_80 [124];
  
  if ((undefined4 *)param_1[0xdc] != (undefined4 *)0x0) {
    param_1[0xd9] = param_1[0xd9] | 0x400000;
    *(undefined4 *)param_1[0xdc] = 0;
  }
  if (param_1[0xdc] != 0) {
    *(undefined4 *)(param_1[0xdc] + 4) = 1;
    *(undefined4 *)(param_1[0xdc] + 8) = 1;
  }
  if (param_1[0xdc] != 0) {
    *(undefined4 *)(param_1[0xdc] + 0xc) = 1;
  }
  local_8c = 0x3f666666;
  local_88 = 0x3f99999a;
  local_84 = 0x3f8ccccd;
  local_a0 = 0x3e4ccccd;
  local_9c = 0x40400000;
  local_98 = 0x40000000;
  FUN_00a8e4d0(&local_a0,&local_8c);
  FUN_009fd240();
  param_1[0x2bd] = param_1[0x128];
  param_1[0x2c0] = param_1[0x12a];
  FUN_00acf600(0x2004a,"Em0040Body");
  iVar2 = FUN_00ac46e0();
  if (iVar2 == 0) {
    iVar3 = FUN_00c5def0(param_1[0x13c]);
    iVar2 = param_1[0x128];
    param_1[0x25c] = iVar3;
    param_1[0x1b1] = 0;
    FUN_00405230();
    local_a0 = 0;
    local_9c = 0;
    local_98 = 0;
    FUN_00c151f0(1,param_1[0x13c],0,&local_a0,0,0x41200000,0x3f800000,iVar2 != 5,0);
    FUN_00c57830(local_80);
    param_1[0x1bb] = 1;
  }
  param_1[0x449] = 0;
  FUN_00a7c950();
  param_1[0x4b8] = 0x3f800000;
  param_1[0x43e] = 0;
  param_1[0x43c] = 0;
  param_1[0x441] = 0;
  param_1[0x42d] = -1;
  param_1[0x510] = 0;
  param_1[0x42c] = -1;
  param_1[0x43f] = 0;
  param_1[0x455] = 0x3f800000;
  param_1[0x440] = 0;
  param_1[0x543] = 0;
  param_1[0x443] = -1;
  param_1[0x570] = 1;
  param_1[0x56f] = 0;
  param_1[0x5a0] = 0;
  param_1[0x5a2] = 0;
  param_1[0x5a1] = 0;
  param_1[0x544] = 0;
  param_1[0x5a9] = -0x40800000;
  param_1[0x545] = 0;
  param_1[0x444] = 0;
  param_1[0x5a8] = 0;
  param_1[0x5aa] = 0;
  param_1[0x5ac] = 0;
  param_1[0x5ad] = 0;
  iVar2 = lib::StaticArray<Constraints,32>::StaticArray<Constraints,32>();
  if (iVar2 == 0) {
    return 0;
  }
  param_1[0x3a8] = 0;
  param_1[0x3b4] = 0;
  param_1[0x3a9] = 0;
  param_1[0x3b5] = 0;
  param_1[0x3c0] = 0;
  param_1[0x3c1] = 0;
  param_1[0x3cc] = 0;
  param_1[0x3cd] = 0;
  param_1[0x3d8] = 0;
  param_1[0x3d9] = 0;
  param_1[0x3e4] = 0;
  param_1[0x3e5] = 0;
  param_1[0x3f0] = 0;
  param_1[0x3f1] = 0;
  param_1[0x4d0] = 0x3f860a90;
  iVar2 = FUN_008ec660(param_1,0x3f4ccccd,0x3e99999a,0x41700000,0x41a00000,0x78,7,0);
  param_1[0x1d9] = iVar2;
  FUN_008e6d00();
  puVar4 = (undefined4 *)FUN_009f8b60();
  FUN_008e26e0(*puVar4);
  FUN_008e1d00(param_1[0x4d0]);
  lib::StaticArray<Collision*,64>::StaticArray<Collision*,64>_2(2);
  local_90 = FUN_00a8d2a0();
  puVar4 = (undefined4 *)FUN_009f8b60();
  iVar2 = CollisionCapsule::CollisionCapsule(2,*puVar4,0);
  if (iVar2 != 0) {
    FUN_00d771d0(1);
    *(undefined4 *)(iVar2 + 0x380) = 0;
    FUN_00d77c50(param_1[0x13c],0);
    *(undefined4 *)(iVar2 + 0x594) = 0x3e800000;
    *(undefined4 *)(iVar2 + 0x590) = 0x3ecccccd;
    FUN_00a93a00(iVar2,local_90);
    FUN_00d7b0f0();
    FUN_00d7b890();
  }
  FUN_00a929d0();
  FUN_00b06370();
  FUN_00b022b0();
  if ((param_1[0xcc] != 0) && (*(int *)(param_1[0xcc] + 0xcc) == 0)) {
    FUN_00b06020();
  }
  puVar4 = (undefined4 *)FUN_00dd3500(8,&DAT_01b7bd48);
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    *puVar4 = vftable;
    puVar4[1] = param_1;
  }
  param_1[0x445] = (int)puVar4;
  FUN_00d89ec0(0x16,puVar4);
  if (((param_1[299] != 3) && (param_1[0xcc] != 0)) && (*(int *)(param_1[0xcc] + 0xcc) == 0)) {
    FUN_00b1a630();
  }
  FUN_00a82610(param_1[0x13c],0x16,0xffffffff);
  param_1[0x509] = 0x3c8efa35;
  local_a0 = 0;
  local_9c = 0x3e32b8c2;
  local_98 = 0;
  FUN_00a83270(&local_a0,0x3f490fdb,0x3f490fdb);
  iVar2 = param_1[0x128];
  param_1[0x205] = 4;
  if ((iVar2 == 5) || ((*(byte *)(param_1 + 0x2c0) & 0x10) != 0)) {
    param_1[0x205] = 4;
  }
  if ((iVar2 == 0xe) || (iVar2 == 0xf)) {
    param_1[0x205] = 1;
  }
  lib::AllocatedArray<cEnemySubState>::AllocatedArray<cEnemySubState>
            (param_1[0x13c],0,&DAT_018a7a08,4);
  FUN_00a88b50(param_1[0x205],0);
  param_1[0x34a] = 0;
  if (param_1[299] != 6) {
    FUN_00b06130();
  }
  piVar5 = param_1;
  FUN_00c1cf50(param_1);
  FUN_00c54720(piVar5);
  if (param_1[0x12d] == 0x20040) {
    FUN_00aa4080(5,0,0,0x3f800000,0,0xbf800000,0x3f800000);
  }
  if ((*(byte *)(param_1 + 0x2c0) & 0x20) != 0) {
    pcVar1 = *(code **)(*param_1 + 0x110);
    param_1[0x56f] = 0x42700000;
    (*pcVar1)(1);
    (**(code **)(*param_1 + 0x358))(0x208,param_1 + 0x574);
  }
  (**(code **)(*param_1 + 0x34c))();
  if (param_1[0x128] == 4) {
    param_1[0x449] = param_1[0x449] | 0x20;
  }
  FUN_00ac9300("LEFT_hand_bat");
  FUN_00ac9300("CENTER_hand_bat");
  FUN_00ac9300("RIGHT_hand_bat");
  if ((param_1[0x128] == 0) || (param_1[0x128] == 1)) {
    pcVar6 = "CENTER_hand_001";
  }
  else {
    pcVar6 = "CENTER_hand_002";
  }
  FUN_00ac9300(pcVar6);
  if (param_1[299] == 5) {
    FUN_00b10f60(0x14);
  }
  return 1;
}

