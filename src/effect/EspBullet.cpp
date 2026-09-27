// src/effect/EspBullet.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 009E7720..009ED4D0, 2 functions

#include "mgrr.h"

// 009E7720  EspBullet::Work::update  size=219  [class]
void __fastcall EspBullet::Work::update(int *param_1)

{
  int *piVar1;
  
  switch(param_1[0x48]) {
  case 0:
    param_1[0x1a] = param_1[0x1a] | 0x40;
    param_1[0x10] = param_1[0x34];
    param_1[0x11] = param_1[0x35];
    param_1[0x12] = param_1[0x36];
    param_1[0x13] = param_1[0x37];
    return;
  case 1:
    (**(code **)(*param_1 + 4))();
    param_1[0x48] = 3;
    return;
  case 2:
    if (param_1[0x38] == 2) {
      piVar1 = param_1 + 0x3c;
    }
    else {
      FUN_00dd5650(&DAT_01659600);
      piVar1 = &DAT_01b78880;
    }
    FUN_00eaa7b0(1,*piVar1,piVar1[1],piVar1[2],0);
    (**(code **)(*param_1 + 8))(0x3f800000,0,0);
    FUN_00eaa840();
    param_1[0x48] = 3;
    return;
  case 3:
    FUN_00dd5650(&DAT_0165b0e0);
  }
  return;
}

// 009ED4D0  EspBullet::System::startup  size=51  [class]
undefined4 EspBullet::System::startup(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00dd7240();
  if (iVar1 == 0) {
    FUN_00dd5650(&DAT_0165b5a4);
    return 0;
  }
  uVar2 = FUN_009e7e80(param_1,&DAT_01b7bdf8);
  return uVar2;
}

