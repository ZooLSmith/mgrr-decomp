// src/boss/bm0268/Bm0268.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00411BE0..00AB92E0, 6 functions

#include "types.h"

// 00411BE0  Bm0268::vf44  size=54  [class]
void __fastcall Bm0268::vf44(int param_1)

{
  FUN_00a8c820();
  FUN_00a9d8a0();
  (**(code **)(*(int *)(param_1 + 0xc10) + 8))(0,0,0);
  BehaviorBgBase::vf44();
  return;
}

// 00411C20  Bm0268::vf40  size=198  [class]
undefined4 __fastcall Bm0268::vf40(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 local_120 [284];
  
  iVar1 = Bm6041::vf40();
  if (iVar1 == 0) {
    return 0;
  }
  uVar2 = FUN_00e03ea0("P420_START");
  *(undefined4 *)(param_1 + 0xb40) = uVar2;
  uVar2 = FUN_00e03ea0("P410_ELV_START");
  *(undefined4 *)(param_1 + 0xb48) = uVar2;
  uVar2 = FUN_00e03ea0("p410_LOADING");
  *(undefined4 *)(param_1 + 0xb44) = uVar2;
  iVar1 = DAT_018b9174;
  *(undefined4 *)(param_1 + 0xcc0) = 0;
  *(int *)(param_1 + 0xb4c) = iVar1;
  if (iVar1 == 0x410) {
    FUN_00aa92c0(3);
    *(undefined2 *)(param_1 + 0xb50) = 0;
    return 1;
  }
  FUN_00e01eb0(param_1 + 0xc10);
  FUN_00e01540(0x400,0x19,local_120);
  FUN_00aa92c0(2);
  *(undefined2 *)(param_1 + 0xb50) = 0x101;
  return 1;
}

// 00411CF0  Bm0268::vf4C  size=399  [class]
void __fastcall Bm0268::vf4C(int param_1)

{
  int iVar1;
  float10 fVar2;
  undefined1 auStack_12c [8];
  float local_124;
  undefined1 auStack_120 [284];
  
  BehaviorBgBase::vf4C();
  if (*(int *)(param_1 + 0xb4c) == 0x410) {
    if (*(char *)(param_1 + 0xb51) == '\0') {
      iVar1 = FUN_00d4f040(*(undefined4 *)(param_1 + 0xb48),1);
      if (iVar1 != 0) {
        FUN_00a8ca50(3,0,0);
        FUN_00aa92c0(1);
        *(undefined4 *)(param_1 + 0xcc0) = 0x40000000;
        *(undefined1 *)(param_1 + 0xb51) = 1;
      }
    }
    if (0.0 < *(float *)(param_1 + 0xcc0)) {
      local_124 = *(float *)(param_1 + 0xcc0);
      fVar2 = (float10)FUN_00a92ff0();
      fVar2 = (float10)local_124 - fVar2 * (float10)0.016666668;
      *(float *)(param_1 + 0xcc0) = (float)fVar2;
      if (fVar2 <= (float10)0) {
        FUN_00e01eb0(param_1 + 0xb60);
        FUN_00e01540(0x400,0x18,auStack_120);
        *(undefined4 *)(param_1 + 0xcc0) = 0;
      }
    }
    if ((*(char *)(param_1 + 0xb50) == '\0') && (DAT_018b9174 == 0x420)) {
      iVar1 = FUN_00d4f040(*(undefined4 *)(param_1 + 0xb40),1);
      if (iVar1 != 0) {
        iVar1 = FUN_00937dc0(*(undefined4 *)(param_1 + 0xb44));
        if (iVar1 != 0) {
          (**(code **)(*(int *)(param_1 + 0xb60) + 8))(0,0,0);
          FUN_00e01eb0(param_1 + 0xc10);
          FUN_00e01540(0x400,0x19,auStack_12c);
          FUN_00a8ca50(1,0,0);
          FUN_00aa92c0(2);
          *(undefined1 *)(param_1 + 0xb50) = 1;
        }
      }
    }
  }
  return;
}

// 00AB08D0  Bm0268::Bm0268  size=40  [class]
undefined4 * __fastcall Bm0268::Bm0268(undefined4 *param_1)

{
  BehaviorBm::BehaviorBm();
  *param_1 = vftable;
  cEspControler::cEspControler();
  cEspControler::cEspControler();
  return param_1;
}

// 00AB0900  Bm0268::vf04  size=6  [class]
undefined * Bm0268::vf04(void)

{
  return &DAT_01b34bac;
}

// 00AB92E0  Bm0268::vf00  size=65  [class]
undefined4 __thiscall Bm0268::vf00(undefined4 param_1,byte param_2)

{
  cEspControler::~cEspControler();
  cEspControler::~cEspControler();
  cEspControler::~cEspControler();
  FUN_0040d3f0();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

