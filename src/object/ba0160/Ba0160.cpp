// src/object/ba0160/Ba0160.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00405890..00AB9170, 6 functions

#include "types.h"

// 00405890  Ba0160::vf44  size=16  [class]
void Ba0160::vf44(void)

{
  FUN_00a944d0();
  BehaviorBgBase::vf44();
  return;
}

// 004058A0  Ba0160::vf40  size=215  [class]
undefined4 __fastcall Ba0160::vf40(int param_1)

{
  int iVar1;
  float10 fVar2;
  
  iVar1 = MonThrowMoto::vf40();
  if (iVar1 == 0) {
    return 0;
  }
  *(uint *)(param_1 + 0x364) = *(uint *)(param_1 + 0x364) & 0xfffffffd;
  iVar1 = lib::StaticArray<Constraints,32>::StaticArray<Constraints,32>();
  if (iVar1 != 0) {
    if ((DAT_018b9174 == 0x330) && (iVar1 = FUN_00d4f120(&DAT_0163b7d8,1), iVar1 != 0)) {
      FUN_00a9f2b0(&DAT_0163b604,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
      fVar2 = (float10)FUN_00a95680(0);
      FUN_00a9f2b0(&DAT_0163b604,0,0,0x3f800000,0,(float)fVar2,0x3f800000);
    }
    else if (*(int *)(param_1 + 0x7b0) != 0) {
      FUN_00a8f7b0(1);
    }
    *(undefined4 *)(param_1 + 0xb30) = 0;
    *(undefined4 *)(param_1 + 0xb34) = 0;
    return 1;
  }
  return 0;
}

// 00405980  Ba0160::vf48  size=124  [class]
void __fastcall Ba0160::vf48(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0xb30) == 0) {
    iVar1 = FUN_00a18cf0(DAT_01b34b28);
    *(int *)(param_1 + 0xb30) = iVar1;
    if (iVar1 != 0) {
      FUN_00a8c5f0(0,*(undefined4 *)(param_1 + 0x4f0),iVar1,2,0xffffffff);
    }
  }
  if (*(int *)(param_1 + 0xb34) == 0) {
    iVar1 = FUN_00a18cf0(DAT_01b34b2c);
    *(int *)(param_1 + 0xb34) = iVar1;
    if (iVar1 != 0) {
      FUN_00a8c5f0(1,*(undefined4 *)(param_1 + 0x4f0),iVar1,3,0);
    }
  }
  BehaviorBgBase::vf48();
  return;
}

// 00AB0550  Ba0160::Ba0160  size=18  [class]
undefined4 * __fastcall Ba0160::Ba0160(undefined4 *param_1)

{
  BehaviorBa::BehaviorBa();
  *param_1 = vftable;
  return param_1;
}

// 00AB0570  Ba0160::vf04  size=6  [class]
undefined * Ba0160::vf04(void)

{
  return &DAT_01b34b24;
}

// 00AB9170  Ba0160::vf00  size=43  [class]
undefined4 __thiscall Ba0160::vf00(undefined4 param_1,byte param_2)

{
  cEspControler::~cEspControler();
  FUN_0040d3f0();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

