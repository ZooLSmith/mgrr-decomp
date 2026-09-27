// src/enemy/em0110/Em0110Arm.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 004B6DB0..00AB72C0, 13 functions

#include "mgrr.h"
#include "Em0110Arm.h"

// 004B6DB0  Em0110Arm::vf54  size=42  [class]
void __fastcall Em0110Arm::vf54(int param_1)

{
  Behavior::vf54();
  if (*(int *)(param_1 + 0x87c) != 0) {
    FUN_00919ec0(param_1 + 0x10);
    switchD_0080dbae::default();
    return;
  }
  return;
}

// 004B6DE0  Em0110Arm::thunk_vf114  size=5  [class]
void Em0110Arm::thunk_vf114(void)

{
  return;
}

// 004B6DF0  FUN_004b6df0  size=399  [between]
void __thiscall FUN_004b6df0(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uint local_4;
  
  local_4 = 0;
  do {
    iVar2 = FUN_00a12210((&DAT_0163eea8)[local_4]);
    iVar1 = *(int *)(param_3 + local_4 * 4);
    if ((iVar2 != 0) && (iVar1 != 0)) {
      iVar3 = 0x10;
      if (local_4 == 0) {
        puVar4 = (undefined4 *)(iVar1 + 0x10);
        puVar5 = (undefined4 *)(param_1 + 0x10);
        for (; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar5 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar5 = puVar5 + 1;
        }
        *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(iVar1 + 0x50);
        *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(iVar1 + 0x54);
        *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(iVar1 + 0x58);
        *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(iVar1 + 0x5c);
        *(undefined4 *)(param_1 + 0x90) = *(undefined4 *)(iVar1 + 0x90);
        *(undefined4 *)(param_1 + 0x94) = *(undefined4 *)(iVar1 + 0x94);
        *(undefined4 *)(param_1 + 0x98) = *(undefined4 *)(iVar1 + 0x98);
        *(undefined4 *)(param_1 + 0x9c) = *(undefined4 *)(iVar1 + 0x9c);
        *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(iVar1 + 0x60);
        *(undefined4 *)(param_1 + 100) = *(undefined4 *)(iVar1 + 100);
        *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(iVar1 + 0x68);
        *(undefined4 *)(param_1 + 0x6c) = *(undefined4 *)(iVar1 + 0x6c);
        *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(iVar1 + 0x70);
        *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(iVar1 + 0x74);
        *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(iVar1 + 0x78);
        *(undefined4 *)(param_1 + 0x7c) = *(undefined4 *)(iVar1 + 0x7c);
        puVar4 = (undefined4 *)(iVar1 + 0x10);
        puVar5 = (undefined4 *)(iVar2 + 0x10);
        for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar5 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar5 = puVar5 + 1;
        }
        *(undefined4 *)(iVar2 + 0x50) = 0;
        *(undefined4 *)(iVar2 + 0x54) = 0;
        *(undefined4 *)(iVar2 + 0x58) = 0;
        *(undefined4 *)(iVar2 + 0x5c) = 0;
        *(undefined4 *)(iVar2 + 0x90) = 0;
        *(undefined4 *)(iVar2 + 0x94) = 0;
        *(undefined4 *)(iVar2 + 0x98) = 0;
        *(undefined4 *)(iVar2 + 0x9c) = 0;
      }
      else {
        puVar4 = (undefined4 *)(iVar1 + 0x10);
        puVar5 = (undefined4 *)(iVar2 + 0x10);
        for (; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar5 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar5 = puVar5 + 1;
        }
        *(undefined4 *)(iVar2 + 0x50) = *(undefined4 *)(iVar1 + 0x50);
        *(undefined4 *)(iVar2 + 0x54) = *(undefined4 *)(iVar1 + 0x54);
        *(undefined4 *)(iVar2 + 0x58) = *(undefined4 *)(iVar1 + 0x58);
        *(undefined4 *)(iVar2 + 0x5c) = *(undefined4 *)(iVar1 + 0x5c);
        *(undefined4 *)(iVar2 + 0x90) = *(undefined4 *)(iVar1 + 0x90);
        *(undefined4 *)(iVar2 + 0x94) = *(undefined4 *)(iVar1 + 0x94);
        *(undefined4 *)(iVar2 + 0x98) = *(undefined4 *)(iVar1 + 0x98);
        *(undefined4 *)(iVar2 + 0x9c) = *(undefined4 *)(iVar1 + 0x9c);
        *(undefined4 *)(iVar2 + 0x60) = *(undefined4 *)(iVar1 + 0x60);
        *(undefined4 *)(iVar2 + 100) = *(undefined4 *)(iVar1 + 100);
        *(undefined4 *)(iVar2 + 0x68) = *(undefined4 *)(iVar1 + 0x68);
        *(undefined4 *)(iVar2 + 0x6c) = *(undefined4 *)(iVar1 + 0x6c);
        *(undefined4 *)(iVar2 + 0x70) = *(undefined4 *)(iVar1 + 0x70);
        *(undefined4 *)(iVar2 + 0x74) = *(undefined4 *)(iVar1 + 0x74);
        *(undefined4 *)(iVar2 + 0x78) = *(undefined4 *)(iVar1 + 0x78);
        *(undefined4 *)(iVar2 + 0x7c) = *(undefined4 *)(iVar1 + 0x7c);
      }
    }
    local_4 = local_4 + 1;
  } while (local_4 < 4);
  return;
}

// 004B6F80  FUN_004b6f80  size=38  [between]
void __thiscall FUN_004b6f80(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  *(undefined4 *)(param_1 + 0x870) = param_2;
  uVar1 = FUN_00a7c7f0();
  FUN_00a7c960(uVar1);
  return;
}

// 004B7000  Em0110Arm::vf1B8  size=78  [class]
void Em0110Arm::vf1B8(undefined4 *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  if (0 < param_3) {
    do {
      iVar1 = FUN_00a81330();
      if (((iVar1 == 0) || (iVar1 = FUN_00a7c8a0(), iVar1 == 0)) ||
         (uVar2 = 0x42113, *(int *)(iVar1 + 0xfcc) != 0)) {
        uVar2 = 0x42114;
      }
      *param_1 = uVar2;
      param_1 = param_1 + 3;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// 004BD350  Em0110Arm::vf40  size=387  [class]
undefined4 __fastcall Em0110Arm::vf40(int *param_1)

{
  code *pcVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined1 auStack_e8 [4];
  uint auStack_e4 [36];
  undefined4 uStack_54;
  undefined1 uStack_30;
  
  iVar2 = Behavior::startup();
  if (iVar2 == 0) {
    return 0;
  }
  FUN_00a077b0(4);
  if ((undefined4 *)param_1[0xdc] != (undefined4 *)0x0) {
    param_1[0xd9] = param_1[0xd9] | 0x400000;
    *(undefined4 *)param_1[0xdc] = 0;
  }
  if (param_1[0xdc] != 0) {
    *(undefined4 *)(param_1[0xdc] + 4) = 1;
    *(undefined4 *)(param_1[0xdc] + 8) = 1;
  }
  if (param_1[0xdc] != 0) {
    *(undefined4 *)(param_1[0xdc] + 0xc) = 0;
  }
  (**(code **)(*param_1 + 0xf8))(1);
  FUN_009fd240();
  uStack_f4 = 0x3f666666;
  uStack_f0 = 0x3f99999a;
  uStack_ec = 0x3f8ccccd;
  uStack_104 = 0x3e4ccccd;
  uStack_100 = 0x40400000;
  uStack_fc = 0x40000000;
  FUN_00a8e4d0(&uStack_104,&uStack_f4);
  pcVar1 = *(code **)(*param_1 + 0x20);
  param_1[0x21c] = 0;
  (*pcVar1)();
  FUN_0118f7b0();
  uStack_104 = 0;
  uStack_100 = 0;
  uStack_30 = 5;
  uStack_fc = 0;
  uStack_54 = 0x41200000;
  iVar2 = FUN_009f8b40();
  auStack_e4[0] = iVar2 << 0x10 | 0x1f;
  piVar3 = (int *)FUN_00910da0();
  uVar4 = (**(code **)(*piVar3 + 8))(auStack_e8,auStack_e4,&uStack_104,&uStack_104,0x3dcccccd,1);
  FUN_00910ab0(uVar4);
  param_1[0x21e] = 0x3f800000;
  param_1[0x21f] = 0;
  return 1;
}

// 004BD4E0  Em0110Arm::vf44  size=50  [class]
void __fastcall Em0110Arm::vf44(int param_1)

{
  int *piVar1;
  
  if (*(int *)(param_1 + 0x88c) != 0) {
    piVar1 = (int *)FUN_00910da0();
    (**(code **)(*piVar1 + 0x2c))(param_1 + 0x88c);
  }
  FUN_00a9d8a0();
  Behavior::vf44();
  return;
}

// 004BD520  Em0110Arm::vf4C  size=261  [class]
void __fastcall Em0110Arm::vf4C(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  float10 fVar4;
  
  Behavior::vf4C();
  piVar1 = (int *)FUN_00c13920();
  iVar2 = (**(code **)(*piVar1 + 0x28))(0);
  if (iVar2 != 0) {
    FUN_00a7c8a0();
  }
  if (*(int *)(param_1 + 0x87c) == 0) {
    return;
  }
  uVar3 = FUN_00a8cab0();
  switch(uVar3) {
  case 0:
    *(undefined4 *)(param_1 + 0x888) = 0;
    goto LAB_004bd56b;
  case 1:
    iVar2 = FUN_00a8e520();
    if (iVar2 != 0) {
      return;
    }
    if (*(int *)(param_1 + 0x88c) != 0) {
      FUN_00915e60(0x3d0f5c29);
      FUN_00915ea0(0x3c23d70a);
      *(int *)(param_1 + 0x618) = *(int *)(param_1 + 0x618) + 1;
      return;
    }
LAB_004bd56b:
    *(int *)(param_1 + 0x618) = *(int *)(param_1 + 0x618) + 1;
    break;
  case 2:
    iVar2 = FUN_00a8c760(0xb);
    if (iVar2 != 0) {
      fVar4 = (float10)FUN_00dde300(0,0x3f800000);
      *(int *)(param_1 + 0x618) = *(int *)(param_1 + 0x618) + 1;
      *(float *)(param_1 + 0x888) = (float)(fVar4 * (float10)0.16 * (float10)60.0);
      return;
    }
    break;
  case 3:
    fVar4 = (float10)FUN_00a92ff0();
    fVar4 = (float10)*(float *)(param_1 + 0x888) - fVar4;
    *(float *)(param_1 + 0x888) = (float)fVar4;
    if (fVar4 <= (float10)0) {
      FUN_009fdde0();
      return;
    }
  }
  return;
}

// 004CACC0  Em0110Arm::vf30  size=50  [class]
void __fastcall Em0110Arm::vf30(int param_1)

{
  int iVar1;
  
  Bh0064::vf30();
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    iVar1 = FUN_00a7c8a0();
    if (iVar1 != 0) {
      FUN_004bd970(*(undefined4 *)(param_1 + 0x870));
    }
  }
  return;
}

// 00AA6550  Em0110Arm::Em0110Arm  size=39  [class]
undefined4 * __fastcall Em0110Arm::Em0110Arm(undefined4 *param_1)

{
  Behavior::Behavior_95();
  *param_1 = vftable;
  FUN_00a7c930();
  param_1[0x223] = 0;
  return param_1;
}

// 00AA6580  Em0110Arm::vf04  size=6  [class]
undefined * Em0110Arm::vf04(void)

{
  return &DAT_01b34e90;
}

// 00AA6590  Em0110Arm::vf2F8  size=1  [class]
void Em0110Arm::vf2F8(void)

{
  return;
}

// 00AB72C0  Em0110Arm::vf00  size=105  [class]
undefined4 * __thiscall Em0110Arm::vf00(undefined4 *param_1,byte param_2)

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
  cXml::cXml_2();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

