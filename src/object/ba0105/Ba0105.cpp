// src/object/ba0105/Ba0105.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 004056B0..00AB97C0, 7 functions

#include "types.h"

// 004056B0  Ba0105::vf2D8  size=120  [class]
void __thiscall Ba0105::vf2D8(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  Bh0064::vf2D8(param_2,param_3);
  iVar1 = FUN_00fdbbd0(param_3,"_bridge_start");
  if (iVar1 != 0) {
    FUN_00a9e290(&DAT_0163b7bc,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    if (*(int **)(param_1 + 0x7b0) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0x7b0) + 4))(1);
      *(undefined4 *)(param_1 + 0x7b0) = 0;
    }
  }
  return;
}

// 00405730  Ba0105::thunk_vf2DC  size=5  [class]
void Ba0105::thunk_vf2DC(void)

{
  return;
}

// 00405740  Ba0105::vf40  size=70  [class]
undefined4 __fastcall Ba0105::vf40(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = MonThrowMoto::vf40();
  if (iVar1 == 0) {
    return 0;
  }
  puVar2 = (undefined4 *)FUN_00dd3500(8,&DAT_01b7bd48);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = SubPhaseSlot::vftable;
    puVar2[1] = param_1;
  }
  *(undefined4 **)(param_1 + 0xb30) = puVar2;
  FUN_00d89ec0(0x3b,puVar2);
  return 1;
}

// 00405790  Ba0105::vf44  size=60  [class]
void __fastcall Ba0105::vf44(int param_1)

{
  if (*(int *)(param_1 + 0xb30) != 0) {
    FUN_00d8a1d0(0x3b,*(int *)(param_1 + 0xb30));
    if (*(undefined4 **)(param_1 + 0xb30) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(param_1 + 0xb30))(1);
      *(undefined4 *)(param_1 + 0xb30) = 0;
    }
  }
  BehaviorBgBase::vf44();
  return;
}

// 00AB1310  Ba0105::Ba0105  size=18  [class]
undefined4 * __fastcall Ba0105::Ba0105(undefined4 *param_1)

{
  BehaviorBa::BehaviorBa();
  *param_1 = vftable;
  return param_1;
}

// 00AB1330  Ba0105::vf04  size=6  [class]
undefined * Ba0105::vf04(void)

{
  return &DAT_01b34b20;
}

// 00AB97C0  Ba0105::vf00  size=43  [class]
undefined4 __thiscall Ba0105::vf00(undefined4 param_1,byte param_2)

{
  cEspControler::~cEspControler();
  FUN_0040d3f0();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

