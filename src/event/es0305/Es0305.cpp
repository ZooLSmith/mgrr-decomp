// src/event/es0305/Es0305.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 005C97A0..00AB69B0, 8 functions

#include "mgrr.h"
#include "Es0305.h"

// 005C97A0  Es0305::thunk_vf48  size=5  [class]
void __fastcall Es0305::thunk_vf48(int *param_1)

{
  BehaviorDebrisActor::vf48();
  (**(code **)(*param_1 + 0x328))(0x3f800000);
  return;
}

// 005C97B0  Es0305::thunk_vf4C  size=5  [class]
void __fastcall Es0305::thunk_vf4C(int *param_1)

{
  (**(code **)(*param_1 + 0x218))();
  if ((param_1[0x1cd] < 1) && (0 < param_1[0x1cc])) {
    param_1[0x1cc] = param_1[0x1cc] + -1;
  }
  if ((param_1[499] != 0) && (param_1[500] != 0)) {
    FUN_00d82990(param_1[500]);
  }
  return;
}

// 005C97C0  Es0305::vf50  size=5  [class]
void __fastcall Es0305::vf50(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  float10 fVar3;
  
  if ((*(int *)(param_1 + 0x7cc) != 0) && (*(int *)(param_1 + 2000) != 0)) {
    FUN_00d829e0(*(int *)(param_1 + 2000));
  }
  if (((*(int *)(param_1 + 0x76c) != 0) || (*(int *)(param_1 + 0x770) != 0)) &&
     (*(int *)(param_1 + 0x768) != 0)) {
    switchD_0080dbae::default();
  }
  FUN_00a96f60();
  if (*(int *)(param_1 + 0x764) != 0) {
    if (*(int *)(param_1 + 0x4f0) != 0) {
      FUN_00a7c910();
    }
    fVar3 = (float10)FUN_00e049b0();
    *(float *)(*(int *)(param_1 + 0x764) + 0x170) = (float)fVar3;
  }
  if ((*(int *)(param_1 + 0x4f0) != 0) && (iVar1 = FUN_00a7c890(), iVar1 != 0)) {
    if (*(int *)(param_1 + 0x4f0) == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = FUN_00a7c890();
    }
    if ((*(byte *)(iVar1 + 0x94) & 1) != 0) {
      if ((*(int *)(param_1 + 0x4f0) != 0) && (iVar1 = FUN_00a7c890(), iVar1 != 0)) {
        if (*(int *)(param_1 + 0x4f0) != 0) {
          FUN_00a7c890();
        }
        iVar1 = FUN_00e26e90();
        if (iVar1 != 0) {
          FUN_00e36970(0);
        }
      }
      uVar2 = FUN_00fdbc60();
      *(undefined4 *)(param_1 + 0x8b4) = uVar2;
    }
  }
  if (((*(int *)(param_1 + 0x764) == 0) || (*(int *)(*(int *)(param_1 + 0x764) + 0x10c) != 0)) &&
     (*(int *)(param_1 + 0x570) == 0)) {
    return;
  }
  switchD_0080dbae::default();
  return;
}

// 005C97D0  Es0305::thunk_vf54  size=5  [class]
void __fastcall Es0305::thunk_vf54(int *param_1)

{
  int iVar1;
  float10 fVar2;
  
  if (((param_1[0x13c] != 0) && (iVar1 = FUN_00a7c890(), iVar1 != 0)) &&
     ((*(byte *)(iVar1 + 0x94) & 1) != 0)) {
    FUN_00e30490();
    FUN_00e304b0();
  }
  if (param_1[0x1f1] != 0) {
    FUN_00a9ccb0();
  }
  if ((param_1[0x1da] != 0) && (iVar1 = (**(code **)(*param_1 + 0x244))(), iVar1 != 0)) {
    if (param_1[0x1db] != 0) {
      if (param_1[0x13c] != 0) {
        FUN_00a7c910();
      }
      fVar2 = (float10)FUN_00e049b0();
      FUN_00a01350((float)fVar2,0);
    }
    if (param_1[0x1dc] != 0) {
      if (param_1[0x13c] != 0) {
        FUN_00a7c910();
      }
      fVar2 = (float10)FUN_00e049b0();
      FUN_00a01350((float)fVar2,0);
    }
  }
  if (param_1[0x1f1] == 0) {
    return;
  }
  FUN_00a9cef0();
  return;
}

// 005C97E0  Es0305::thunk_vf44  size=5  [class]
void __fastcall Es0305::thunk_vf44(int param_1)

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

// 005C97F0  Es0305::startup  size=207  [class]
undefined4 __fastcall Es0305::startup(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  iVar1 = BehaviorAppBase::startup();
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = FUN_00de4550("em0021_0_0_clp.bxm",0);
  if (iVar1 != 0) {
    iVar2 = FUN_00dd3500(0xbe0,&DAT_01b7bd48);
    if (iVar2 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_009fad80();
    }
    uVar4 = 0x3f000000;
    *(undefined4 *)(param_1 + 0x76c) = uVar3;
    iVar2 = param_1;
    uVar3 = FUN_00a7c800(param_1,0x3f000000);
    FUN_00a04230(iVar1,uVar3,iVar2,uVar4);
    iVar1 = FUN_00de4550("em0021_0_0_clw.bxm",0);
    if (iVar1 != 0) {
      FUN_00a04490(iVar1,param_1);
    }
    iVar1 = FUN_00de4550("em0021_0_0_clh.bxm",0);
    if (iVar1 != 0) {
      FUN_00a04420(iVar1,param_1);
    }
    *(undefined4 *)(param_1 + 0x768) = 1;
  }
  return 1;
}

// 00AAC130  Es0305::vf04  size=6  [class]
undefined * Es0305::vf04(void)

{
  return &DAT_01b35204;
}

// 00AB69B0  Es0305::destruct  size=105  [class]
undefined4 * __thiscall Es0305::destruct(undefined4 *param_1,byte param_2)

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

