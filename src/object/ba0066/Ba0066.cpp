// src/object/ba0066/Ba0066.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00405140..00AB8F00, 10 functions

#include "types.h"

// 00405140  FUN_00405140  size=209  [callgraph]
int __thiscall
FUN_00405140(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 *param_5,undefined4 *param_6,undefined4 param_7,undefined4 param_8,
            undefined4 param_9)

{
  undefined4 uVar1;
  
  FUN_00a7c930();
  uVar1 = FUN_00a7c7f0();
  FUN_00a7c960(uVar1);
  *(undefined4 *)(param_1 + 4) = param_3;
  *(undefined4 *)(param_1 + 8) = param_4;
  *(undefined4 *)(param_1 + 0x10) = *param_5;
  *(undefined4 *)(param_1 + 0x14) = param_5[1];
  *(undefined4 *)(param_1 + 0x18) = param_5[2];
  *(undefined4 *)(param_1 + 0x1c) = param_5[3];
  *(undefined4 *)(param_1 + 0x20) = *param_6;
  *(undefined4 *)(param_1 + 0x24) = param_6[1];
  *(undefined4 *)(param_1 + 0x28) = param_6[2];
  *(undefined4 *)(param_1 + 0x2c) = param_6[3];
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x30) = param_7;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x34) = param_8;
  *(undefined4 *)(param_1 + 0x84) = 0;
  *(undefined4 *)(param_1 + 0x8c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x3c) = param_9;
  *(undefined4 *)(param_1 + 0x40) = 1;
  *(undefined4 *)(param_1 + 0x4c) = 1;
  *(undefined4 *)(param_1 + 0x44) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x6c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x7c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined4 *)(param_1 + 0x74) = 0;
  *(undefined4 *)(param_1 + 0x78) = 0;
  *(undefined4 *)(param_1 + 0x80) = 0xffffffff;
  return param_1;
}

// 00405230  FUN_00405230  size=112  [callgraph]
int __fastcall FUN_00405230(int param_1)

{
  FUN_00a7c930();
  FUN_00a7c950();
  *(undefined4 *)(param_1 + 0x18) = 0x41400000;
  *(undefined2 *)(param_1 + 4) = 0xffff;
  *(undefined4 *)(param_1 + 0x10) = 0x3f000000;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined1 *)(param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 100) = 1;
  *(undefined4 *)(param_1 + 0x60) = 0xffffffff;
  return param_1;
}

// 004052C0  Ba0066::vf40  size=46  [class]
undefined4 __fastcall Ba0066::vf40(int param_1)

{
  int iVar1;
  
  iVar1 = MonThrowMoto::vf40();
  if (iVar1 == 0) {
    return 0;
  }
  *(undefined4 *)(param_1 + 0xb34) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xb38) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xb30) = 0;
  return 1;
}

// 004052F0  FUN_004052f0  size=69  [between]
void __fastcall FUN_004052f0(int param_1)

{
  if (*(int *)(param_1 + 0xb34) != -1) {
    FUN_00c5ad80(*(int *)(param_1 + 0xb34));
    *(undefined4 *)(param_1 + 0xb34) = 0xffffffff;
  }
  if (*(int *)(param_1 + 0xb38) != -1) {
    FUN_00c4d100(*(int *)(param_1 + 0xb38));
    *(undefined4 *)(param_1 + 0xb38) = 0xffffffff;
  }
  return;
}

// 004053A0  Ba0066::vf44  size=75  [class]
void __fastcall Ba0066::vf44(int param_1)

{
  if (*(int *)(param_1 + 0xb34) != -1) {
    FUN_00c5ad80(*(int *)(param_1 + 0xb34));
    *(undefined4 *)(param_1 + 0xb34) = 0xffffffff;
  }
  if (*(int *)(param_1 + 0xb38) != -1) {
    FUN_00c4d100(*(int *)(param_1 + 0xb38));
    *(undefined4 *)(param_1 + 0xb38) = 0xffffffff;
  }
  BehaviorBgBase::vf44();
  return;
}

// 004053F0  FUN_004053f0  size=247  [between]
void __fastcall FUN_004053f0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined1 local_a0 [68];
  undefined4 local_5c;
  
  local_b0 = 0;
  local_ac = 0;
  local_a8 = 0;
  if (*(int *)(param_1 + 0xb34) == -1) {
    FUN_00405140(*(undefined4 *)(param_1 + 0x4f0),0x10,0xf30,&local_b0,&local_b0,0x42c80000,
                 0x3f000000,0xbf800000);
    local_5c = 0x40a00000;
    uVar1 = FUN_00c5abe0(local_a0);
    *(undefined4 *)(param_1 + 0xb34) = uVar1;
  }
  if (*(int *)(param_1 + 0xb38) == -1) {
    FUN_00405230();
    FUN_00c151f0(1,*(undefined4 *)(param_1 + 0x4f0),0xf30,&local_b0,0,0x40400000,0x3f800000,1,8);
    uVar1 = FUN_00c57830(local_a0);
    *(undefined4 *)(param_1 + 0xb38) = uVar1;
    iVar2 = FUN_00c4d470(uVar1);
    if (iVar2 != 0) {
      *(undefined1 *)(iVar2 + 0x4c) = 3;
    }
  }
  return;
}

// 004054F0  Ba0066::vf48  size=195  [class]
void __fastcall Ba0066::vf48(int *param_1)

{
  int iVar1;
  int *piVar2;
  float *pfVar3;
  float *pfVar4;
  
  BehaviorBgBase::vf48();
  if (param_1[0x2cc] == 0) {
    iVar1 = FUN_00d45a70("P168_BTL_END");
    if (iVar1 != 0) {
      piVar2 = (int *)FUN_00c13920();
      iVar1 = (**(code **)(*piVar2 + 0x28))(0);
      if (iVar1 != 0) {
        pfVar3 = (float *)(**(code **)(*param_1 + 0x68))();
        pfVar4 = (float *)FUN_00a7c8b0();
        if ((*pfVar4 - *pfVar3) * (*pfVar4 - *pfVar3) +
            (pfVar4[1] - pfVar3[1]) * (pfVar4[1] - pfVar3[1]) +
            (pfVar4[2] - pfVar3[2]) * (pfVar4[2] - pfVar3[2]) < 2500.0) {
          FUN_004053f0();
          param_1[0x2cc] = 1;
        }
      }
    }
    if (param_1[0x2cc] == 0) {
      return;
    }
  }
  iVar1 = FUN_00d45a70("P168_BTL_END");
  if (iVar1 == 0) {
    FUN_004052f0();
    param_1[0x2cc] = 0;
  }
  return;
}

// 00AB0200  Ba0066::Ba0066  size=18  [class]
undefined4 * __fastcall Ba0066::Ba0066(undefined4 *param_1)

{
  BehaviorBa::BehaviorBa();
  *param_1 = vftable;
  return param_1;
}

// 00AB0220  Ba0066::vf04  size=6  [class]
undefined * Ba0066::vf04(void)

{
  return &DAT_01b34b1c;
}

// 00AB8F00  Ba0066::vf00  size=43  [class]
undefined4 __thiscall Ba0066::vf00(undefined4 param_1,byte param_2)

{
  cEspControler::~cEspControler();
  FUN_0040d3f0();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

