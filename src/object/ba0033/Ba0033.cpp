// src/object/ba0033/Ba0033.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00404C00..00AB96A0, 6 functions

#include "mgrr.h"
#include "Ba0033.h"

// 00404C00  Ba0033::vf4C  size=206  [class]
void __fastcall Ba0033::vf4C(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int *piVar4;
  int iVar5;
  
  ExcelStage::vf4C();
  if (*(int *)(param_1 + 0xb30) != 0) {
    FUN_00a92f90();
    FUN_00e26e90();
    FUN_00e22f10(0);
  }
  if (*(int *)(param_1 + 0xb34) != 0) {
    piVar4 = (int *)FUN_00c13920();
    iVar5 = (**(code **)(*piVar4 + 0x28))(0);
    if (iVar5 != 0) {
      fVar1 = *(float *)(param_1 + 0xb3c);
      fVar2 = *(float *)(param_1 + 0xb38);
      iVar5 = FUN_00a7c8a0();
      fVar3 = *(float *)(iVar5 + 0x48);
      if (fVar1 < fVar3 != (fVar1 == fVar3)) {
        fVar3 = fVar1;
      }
      if (fVar3 <= fVar2) {
        fVar3 = fVar2;
      }
      fVar1 = ABS(fVar3 - fVar2) / ABS(fVar1 - fVar2);
      FUN_00a947e0(0,0,0,(fVar1 + fVar1) - 1.0);
    }
  }
  return;
}

// 00404CD0  Ba0033::thunk_vf44  size=5  [class]
void __fastcall Ba0033::thunk_vf44(int param_1)

{
  int iVar1;
  undefined1 auStack_10c [12];
  undefined1 auStack_100 [256];
  
  if (*(int *)(param_1 + 0x898) != 0) {
    if (*(int *)(param_1 + 0x89c) != 0) {
      FUN_00e5ca30(*(int *)(param_1 + 0x89c),0x40400000);
      *(undefined4 *)(param_1 + 0x89c) = 0;
    }
    FUN_009f8ea0(auStack_10c,10,*(undefined4 *)(param_1 + 0x4b0),0);
    FUN_00a90970(auStack_100,"%s_se_setobj_stop",auStack_10c);
    FUN_00e5e080(auStack_100,param_1 + 0x40,0,0xffffffff,0);
    *(undefined4 *)(param_1 + 0x898) = 0;
  }
  FUN_00a934c0();
  FUN_00a933e0();
  FUN_00a93450();
  if (*(undefined4 **)(param_1 + 0x7b8) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x7b8))(1);
    *(undefined4 *)(param_1 + 0x7b8) = 0;
  }
  if (*(int **)(param_1 + 0x7b0) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x7b0) + 4))(1);
    *(undefined4 *)(param_1 + 0x7b0) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x7b4);
  if (iVar1 != 0) {
    lib::Array<RigidBodyList::ConnectMap>::Array<RigidBodyList::ConnectMap>();
    FUN_00dd4920(iVar1);
    *(undefined4 *)(param_1 + 0x7b4) = 0;
  }
  if (*(int **)(param_1 + 0x888) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x888) + 8))(0x3f800000,0,0);
    FUN_00eaa840();
    if (*(undefined4 **)(param_1 + 0x888) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(param_1 + 0x888))(1);
      *(undefined4 *)(param_1 + 0x888) = 0;
    }
  }
  FUN_00a8c820();
  iVar1 = *(int *)(param_1 + 0x884);
  if (iVar1 != 0) {
    cXml::cXml_6();
    FUN_00dd4920(iVar1);
    *(undefined4 *)(param_1 + 0x884) = 0;
  }
  if (*(int *)(param_1 + 0x9f4) != 0) {
    FUN_00983fd0(param_1);
  }
  if (*(int *)(param_1 + 0xa54) != 0) {
    if (*(int *)(param_1 + 0xa58) != -1) {
      FUN_00c5ad80(*(int *)(param_1 + 0xa58));
    }
    if (*(int *)(param_1 + 0xa5c) != -1) {
      FUN_00c4d100(*(int *)(param_1 + 0xa5c));
    }
  }
  FUN_009841c0(param_1);
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    FUN_00a81330();
    FUN_00a805f0();
    FUN_00a7c950();
  }
  Behavior::vf44();
  return;
}

// 00404D10  Ba0033::startup  size=110  [class]
undefined4 __fastcall Ba0033::startup(int param_1)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = BehaviorBa::startup();
  if (iVar2 == 0) {
    return 0;
  }
  *(undefined4 *)(param_1 + 0xb30) = 0;
  *(undefined4 *)(param_1 + 0xb34) = 0;
  FUN_00a8f7b0(1);
  if (*(int *)(param_1 + 0x7b0) != 0) {
    FUN_008f2cd0(1);
  }
  iVar2 = 0;
  if (0 < *(short *)(param_1 + 0x324)) {
    iVar3 = 0;
    do {
      puVar1 = (uint *)(*(int *)(param_1 + 800) + 0x38 + iVar3);
      *puVar1 = *puVar1 | 1;
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0x70;
    } while (iVar2 < *(short *)(param_1 + 0x324));
  }
  return 1;
}

// 00AB0EF0  Ba0033::Ba0033  size=18  [class]
undefined4 * __fastcall Ba0033::Ba0033(undefined4 *param_1)

{
  BehaviorBa::BehaviorBa();
  *param_1 = vftable;
  return param_1;
}

// 00AB0F10  Ba0033::vf04  size=6  [class]
undefined * Ba0033::vf04(void)

{
  return &DAT_01b34b14;
}

// 00AB96A0  Ba0033::destruct  size=43  [class]
undefined4 __thiscall Ba0033::destruct(undefined4 param_1,byte param_2)

{
  cEspControler::~cEspControler();
  FUN_0040d3f0();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

