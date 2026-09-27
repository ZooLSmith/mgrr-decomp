// src/room/r00c.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00A70E80..00A7B4A0, 4 functions

#include "mgrr.h"
#include "cR00C.h"

// 00A70E80  cR00C::vf04  size=615  [class]
void __fastcall cR00C::vf04(int param_1)

{
  float fVar1;
  int iVar2;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  if (*(int *)(param_1 + 0x80) != 0) {
    FUN_00a5e860();
  }
  iVar2 = FUN_00dd9400();
  if (iVar2 != 0) {
    FUN_009cf0d0();
  }
  iVar2 = FUN_00dd9400();
  if (iVar2 != 0) {
    *(float *)(param_1 + 0x144) = *(float *)(param_1 + 0x144) + 1.0;
  }
  iVar2 = FUN_00dd9400();
  if (iVar2 != 0) {
    *(float *)(param_1 + 0x144) = *(float *)(param_1 + 0x144) - 1.0;
  }
  iVar2 = FUN_00dd9400();
  if (iVar2 != 0) {
    *(float *)(param_1 + 0x140) = *(float *)(param_1 + 0x140) + 1.0;
  }
  iVar2 = FUN_00dd9400();
  if (iVar2 != 0) {
    *(float *)(param_1 + 0x140) = *(float *)(param_1 + 0x140) - 1.0;
  }
  iVar2 = FUN_00dd9400();
  if (iVar2 != 0) {
    *(float *)(param_1 + 0x148) = *(float *)(param_1 + 0x148) + 1.0;
  }
  iVar2 = FUN_00dd9400();
  if (iVar2 != 0) {
    *(float *)(param_1 + 0x148) = *(float *)(param_1 + 0x148) - 1.0;
  }
  iVar2 = FUN_00dd9400();
  if (iVar2 != 0) {
    fVar1 = *(float *)(param_1 + 0x140);
    fVar1 = *(float *)(param_1 + 0x148) * *(float *)(param_1 + 0x148) +
            fVar1 * fVar1 + *(float *)(param_1 + 0x144) * *(float *)(param_1 + 0x144);
    if (fVar1 < 0.0 == (fVar1 == 0.0)) {
      FUN_00ddf460(&uStack_20,(float *)(param_1 + 0x140));
    }
    else {
      FUN_00dd5650();
      uStack_18 = 0;
      uStack_20 = 0;
      uStack_1c = 0x3f800000;
    }
    *(undefined4 *)(param_1 + 0xe0) = uStack_20;
    *(undefined4 *)(param_1 + 0xe4) = uStack_1c;
    *(undefined4 *)(param_1 + 0xe8) = uStack_18;
    *(uint *)(param_1 + 0xf8) = *(uint *)(param_1 + 0xf8) | 4;
  }
  iVar2 = FUN_00dd9400();
  if (iVar2 != 0) {
    (**(code **)(*(int *)(param_1 + 0x90) + 8))();
  }
  FUN_009c9350();
  FUN_009c9310(0x42480000,0x43480000);
  FUN_009c92f0("Pow.x%.3f,Pow.y:%.3f,Pow.z:%.3f\n",(double)*(float *)(param_1 + 0x140),
               (double)*(float *)(param_1 + 0x144),(double)*(float *)(param_1 + 0x148));
  return;
}

// 00A72A20  cR00C::vf08  size=66  [class]
void __fastcall cR00C::vf08(int *param_1)

{
  int iVar1;
  
  iVar1 = param_1[0x20];
  if (iVar1 != 0) {
    FUN_00a54c70();
    FUN_00dd4920(iVar1);
    param_1[0x20] = 0;
  }
  FUN_00a71970();
  (**(code **)(*param_1 + 0x18))();
  FUN_00dd7270();
  return;
}

// 00A77C10  cR00C::vf00  size=55  [class]
void __fastcall cR00C::vf00(int param_1)

{
  FUN_00dd7240();
  FUN_00a73b80(0x20);
  FUN_00a71970();
  *(undefined4 *)(param_1 + 0x140) = 0;
  *(undefined4 *)(param_1 + 0x144) = 0;
  *(undefined4 *)(param_1 + 0x148) = 0;
  *(undefined4 *)(param_1 + 0x14c) = 0;
  return;
}

// 00A7B4A0  cR00C::vf14  size=73  [class]
undefined4 * __thiscall cR00C::vf14(undefined4 *param_1,byte param_2)

{
  cEspControler::~cEspControler();
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

