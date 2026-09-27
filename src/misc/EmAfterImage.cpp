// src/misc/EmAfterImage.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00AABDF0..00ACF790, 8 functions

#include "mgrr.h"
#include "EmAfterImage.h"

// 00AABDF0  EmAfterImage::vf04  size=6  [class]
undefined * EmAfterImage::vf04(void)

{
  return &DAT_01be9c7c;
}

// 00AB68B0  EmAfterImage::destruct  size=105  [class]
undefined4 * __thiscall EmAfterImage::destruct(undefined4 *param_1,byte param_2)

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

// 00AC4D90  EmAfterImage::startup  size=97  [class]
undefined4 __fastcall EmAfterImage::startup(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = BehaviorAppBase::startup();
  if (iVar1 == 0) {
    return 0;
  }
  iVar2 = 0;
  iVar1 = 0;
  if (0 < *(short *)(param_1 + 0x324)) {
    do {
      *(undefined4 *)(*(int *)(param_1 + 800) + 0x1c + iVar2) = 0x3f4ccccd;
      iVar1 = iVar1 + 1;
      iVar2 = iVar2 + 0x70;
    } while (iVar1 < *(short *)(param_1 + 0x324));
  }
  *(undefined4 *)(param_1 + 0xa0c) = 0x3f4ccccd;
  *(undefined4 *)(param_1 + 0xa10) = 0;
  FUN_00a0ba60(0);
  FUN_00a13340(0);
  return 1;
}

// 00AC4E00  EmAfterImage::vf44  size=5  [class]
void __fastcall EmAfterImage::vf44(int param_1)

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

// 00AC4E10  EmAfterImage::thunk_vf48  size=5  [class]
void __fastcall EmAfterImage::thunk_vf48(int *param_1)

{
  BehaviorDebrisActor::vf48();
  (**(code **)(*param_1 + 0x328))(0x3f800000);
  return;
}

// 00AC4E20  EmAfterImage::thunk_vf50  size=5  [class]
void __fastcall EmAfterImage::thunk_vf50(int param_1)

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

// 00AC4E30  EmAfterImage::thunk_vf54  size=5  [class]
void __fastcall EmAfterImage::thunk_vf54(int *param_1)

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

// 00ACF790  EmAfterImage::vf4C  size=16  [class]
void EmAfterImage::vf4C(void)

{
  Behavior::vf4C();
  FUN_00ac9a60();
  return;
}

