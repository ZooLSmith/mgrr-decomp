// src/player/pl0104/Pl0104.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 005F05A0..00AB6470, 13 functions

#include "mgrr.h"
#include "Pl0104.h"

// 005F05A0  Pl0104::vf44  size=5  [class]
void __fastcall Pl0104::vf44(int param_1)

{
  int iVar1;
  int *piVar2;
  
  if (*(undefined4 **)(param_1 + 0x774) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x774))(1);
    *(undefined4 *)(param_1 + 0x774) = 0;
  }
  if (*(int *)(param_1 + 0x75c) != 0) {
    piVar2 = (int *)FUN_008d7570();
    (**(code **)(*piVar2 + 8))(*(undefined4 *)(param_1 + 0x4b4));
  }
  *(undefined4 *)(param_1 + 0x75c) = 0;
  if (*(int *)(param_1 + 0x754) != 0) {
    piVar2 = (int *)FUN_00d72970();
    (**(code **)(*piVar2 + 8))(*(undefined4 *)(param_1 + 0x4b4));
  }
  *(undefined4 *)(param_1 + 0x754) = 0;
  if (*(int *)(param_1 + 0x584) != 0) {
    (**(code **)(*DAT_01be9bf4 + 0x10))(*(int *)(param_1 + 0x584),*(undefined4 *)(param_1 + 0x588));
  }
  *(undefined4 *)(param_1 + 0x588) = 0;
  *(undefined4 *)(param_1 + 0x584) = 0;
  if (*(int *)(param_1 + 0x808) != 0) {
    FUN_00dd4920(*(int *)(param_1 + 0x808));
    *(undefined4 *)(param_1 + 0x808) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x7d8);
  if (iVar1 != 0) {
    FUN_00c730c0();
    FUN_00905ce0();
    FUN_00905ce0();
    FUN_00dd4920(iVar1);
    *(undefined4 *)(param_1 + 0x7d8) = 0;
  }
  FUN_00a8c820();
  if (*(int *)(param_1 + 0x638) != 0) {
    FUN_00dd7270();
  }
  iVar1 = *(int *)(param_1 + 0x638);
  if (iVar1 != 0) {
    FUN_00dd7270();
    FUN_00dd4920(iVar1);
    *(undefined4 *)(param_1 + 0x638) = 0;
  }
  if (*(undefined4 **)(param_1 + 0x63c) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x63c))(1);
    *(undefined4 *)(param_1 + 0x63c) = 0;
  }
  if (*(int *)(param_1 + 0x7c4) != 0) {
    FUN_00a91a00();
  }
  if (*(int *)(param_1 + 0x7c4) != 0) {
    FUN_00dd4920(*(int *)(param_1 + 0x7c4));
    *(undefined4 *)(param_1 + 0x7c4) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x770);
  if (iVar1 != 0) {
    FUN_00a01300();
    FUN_00dd4920(iVar1);
    *(undefined4 *)(param_1 + 0x770) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x76c);
  if (iVar1 != 0) {
    FUN_00a01300();
    FUN_00dd4920(iVar1);
    *(undefined4 *)(param_1 + 0x76c) = 0;
  }
  if (*(int *)(param_1 + 0x788) != 0) {
    FUN_00dd4940(*(int *)(param_1 + 0x788));
    *(undefined4 *)(param_1 + 0x788) = 0;
  }
  return;
}

// 005F05B0  Pl0104::vf50  size=25  [class]
void __fastcall Pl0104::vf50(int *param_1)

{
  (**(code **)(*param_1 + 100))();
  switchD_0080dbae::default();
  Behavior::vf50();
  return;
}

// 005F05D0  FUN_005f05d0  size=45  [between]
void __fastcall FUN_005f05d0(int param_1)

{
  if ((*(int *)(param_1 + 0x870) == 0) &&
     (((((byte)DAT_01bea094 & 0x40) != 0 || ((int)DAT_01bea090 < 0)) || ((DAT_01bea090 & 0x40) != 0)
      ))) {
    FUN_00a8caf0(1,0,0,0);
  }
  return;
}

// 005F0610  FUN_005f0610  size=64  [between]
void __fastcall FUN_005f0610(int param_1)

{
  if (((((byte)DAT_01bea094 & 0x40) == 0) && (-1 < (int)DAT_01bea090)) &&
     ((DAT_01bea090 & 0x40) == 0)) {
    FUN_00a8caf0(3,0,0,0);
  }
  if (*(int *)(param_1 + 0x870) != 0) {
    FUN_00a8caf0(3,0,0,0);
  }
  return;
}

// 005F0660  Pl0104::startup  size=102  [class]
undefined4 __fastcall Pl0104::startup(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = Behavior::startup();
  if (iVar1 == 0) {
    return 0;
  }
  uVar2 = 1;
  FUN_00a92fb0(1);
  FUN_00e08640(uVar2);
  FUN_00a9f3c0(param_1 + 0x494,1,0,0,0x3f800000,0,0xbf800000,0x3f800000);
  FUN_00a8caf0(0,0,0,0);
  return 1;
}

// 005F06D0  FUN_005f06d0  size=68  [between]
void __fastcall FUN_005f06d0(int param_1)

{
  if (*(int *)(param_1 + 0x61c) == 0) {
    *(undefined4 *)(param_1 + 0x61c) = 1;
    FUN_00a9f3c0(param_1 + 0x494,1,0,0,0x3f800000,0,0xbf800000,0x3f800000);
  }
  return;
}

// 005F0720  FUN_005f0720  size=110  [between]
void __fastcall FUN_005f0720(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x61c) == 0) {
    *(undefined4 *)(param_1 + 0x61c) = 1;
    FUN_00a9f3c0(param_1 + 0x494,2,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
  }
  else if (*(int *)(param_1 + 0x61c) != 1) {
    return;
  }
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    FUN_00a8caf0(2,0,0,0);
  }
  return;
}

// 005F0790  FUN_005f0790  size=68  [between]
void __fastcall FUN_005f0790(int param_1)

{
  if (*(int *)(param_1 + 0x61c) == 0) {
    *(undefined4 *)(param_1 + 0x61c) = 1;
    FUN_00a9f3c0(param_1 + 0x494,0,0,0,0x3f800000,0,0xbf800000,0x3f800000);
  }
  return;
}

// 005F07E0  FUN_005f07e0  size=110  [between]
void __fastcall FUN_005f07e0(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x61c) == 0) {
    *(undefined4 *)(param_1 + 0x61c) = 1;
    FUN_00a9f3c0(param_1 + 0x494,3,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
  }
  else if (*(int *)(param_1 + 0x61c) != 1) {
    return;
  }
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    FUN_00a8caf0(0,0,0,0);
  }
  return;
}

// 005F0850  Pl0104::vf4C  size=136  [class]
void __fastcall Pl0104::vf4C(int param_1)

{
  Behavior::vf4C();
  switch(*(undefined4 *)(param_1 + 0x618)) {
  case 0:
    FUN_005f05d0();
    break;
  case 2:
    FUN_005f0610();
  }
  switch(*(undefined4 *)(param_1 + 0x618)) {
  case 0:
    FUN_005f06d0();
    *(undefined4 *)(param_1 + 0x870) = 0;
    return;
  case 1:
    FUN_005f0720();
    *(undefined4 *)(param_1 + 0x870) = 0;
    return;
  case 2:
    FUN_005f0790();
    *(undefined4 *)(param_1 + 0x870) = 0;
    return;
  case 3:
    FUN_005f07e0();
  }
  *(undefined4 *)(param_1 + 0x870) = 0;
  return;
}

// 00AA6010  Pl0104::Pl0104  size=18  [class]
undefined4 * __fastcall Pl0104::Pl0104(undefined4 *param_1)

{
  Behavior::Behavior();
  *param_1 = vftable;
  return param_1;
}

// 00AA6030  Pl0104::vf04  size=6  [class]
undefined * Pl0104::vf04(void)

{
  return &DAT_01b353e4;
}

// 00AB6470  Pl0104::destruct  size=105  [class]
undefined4 * __thiscall Pl0104::destruct(undefined4 *param_1,byte param_2)

{
  *param_1 = Behavior::vftable;
  cLockonPartsList::~cLockonPartsList();
  if (param_1[0x19f] != 0) {
    param_1[0x1a1] = 0;
    if (param_1[0x1a2] != 0) {
      FUN_00dd48d0(param_1[0x19f],0);
      param_1[0x1a2] = 0;
    }
    param_1[0x19f] = 0;
    param_1[0x1a0] = 0;
  }
  cObj::~cObj();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

